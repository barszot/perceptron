#include "src/perceptor.h"
#include <vector>
#include <iostream>
int main()
{
    std::vector<double>weights =  {-4.0, 1.0, -1.0};
    Perceptor perceptor(2, weights);
    std::cout<<perceptor.get_size()<<"\n";
    const std::vector<double>& perceptor_weights = perceptor.get_weights();
    std::cout<<perceptor_weights[0]<<"\n";
    return 0;

}