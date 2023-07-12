#ifndef PERCEPTOR_H
#define PERCEPTOR_H
#include <vector>
#include <iostream>
struct data_row
{
    std::vector<double> input;
    bool result;
};

class Perceptor
{
    private:
        int size;
        std::vector<double> weights;
    public:
        Perceptor(int size);
        Perceptor(int size, std::vector<double> weights);
        bool result(std::vector<double> data) const;
        int get_size() const;
        const std::vector<double>& get_weights() const;
        void train(std::vector<data_row>dataset, int iterations, bool print_progress=false);
        int error(std::vector<data_row>dataset) const;
        void print_weights() const;
        
     
};

#endif