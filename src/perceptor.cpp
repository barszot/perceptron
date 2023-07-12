#include "perceptor.h"

Perceptor::Perceptor(int size)
{
    this->size = size;
    this->weights.clear();
    for(int i=0;i<=size;i++)
    {
        this->weights.push_back(0);
    }
}
Perceptor::Perceptor(int size, std::vector<double> weights)
{
    this->size = size;
    for(int i=0;i<=size;i++)
    {
        this->weights.push_back(weights[i]);
    }
}

bool Perceptor::result(std::vector<double> data) const
{
    double sum = weights[0];
    for (int i=1;i<=size;i++)
    {
        sum+=weights[i]*data[i-1];
    }
    return(sum>0);
}

int Perceptor::get_size() const
{
    return this->size;
}

const std::vector<double>& Perceptor::get_weights() const
{
    return this->weights;
}

void Perceptor::train(std::vector<data_row>dataset, int iterations, bool print_progress)
{
    int p=dataset.size();
    if(print_progress)
        std::cout<<"ERROR ON START: "<<error(dataset)<<"\n";
    for(int iter=0; iter<iterations; iter++)
    {
        for(int i=0; i<p; i++)
        {
            bool current_result = result(dataset[i].input);

            if(current_result==dataset[i].result)
                continue;
            int sign;
            if (!current_result && dataset[i].result)
                sign = 1;
            else if(current_result && !dataset[i].result)
                sign = -1;
            weights[0] += sign;
            for(int j=1; j<=size; j++)
            {
                weights[j] += sign*dataset[i].input[j-1];
            }
        }
        if(print_progress)
            std::cout<<"iteration: "<<iter+1<<"; error: "<<error(dataset)<<"\n";
    }

    return;
}

void Perceptor::print_weights() const
{
    std::cout<<"Perceptor weights:\n";
    for(int i=0;i<=size;i++)
    {
        std::cout<<"\tindex: "<<i<<" weight: "<<weights[i]<<"\n";
    }
    return;
}

int Perceptor::error(std::vector<data_row>dataset) const
{
    int p=dataset.size();
    int error = 0;
    for(int i=0; i<p; i++)
    {
        bool current_result = result(dataset[i].input);
        if(current_result!=dataset[i].result)
            error+=1;
    }
    return error;
}
