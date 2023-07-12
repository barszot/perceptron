#ifndef PERCEPTOR_H
#define PERCEPTOR_H
#include <vector>
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
};

#endif