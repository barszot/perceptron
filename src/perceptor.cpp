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
