#include "src/perceptor.h"
#include <vector>
#include <iostream>
int main()
{

    Perceptor perceptor(2, {5.1, -3.4, 2});
    Perceptor goal_perceptor(2, {-4, 1, -1});

    std::vector<data_row> dataset;
    dataset.push_back({{7, 3.5}, (7 - 3.5) > 4});
    dataset.push_back({{2, 1.5}, (2 - 1.5) > 4});
    dataset.push_back({{10, 5}, (10 - 5) > 4});
    dataset.push_back({{8, 12}, (8 - 12) > 4});
    dataset.push_back({{5, 0.5}, (5 - 0.5) > 4});
    dataset.push_back({{1, 6}, (1 - 6) > 4});
    dataset.push_back({{9, 3}, (9 - 3) > 4});
    dataset.push_back({{4, 2}, (4 - 2) > 4});
    dataset.push_back({{6, 7}, (6 - 7) > 4});
    dataset.push_back({{3, 4}, (3 - 4) > 4});
    dataset.push_back({{11, 9}, (11 - 9) > 4});
    dataset.push_back({{0, 1}, (0 - 1) > 4});
    dataset.push_back({{8, 1}, (8 - 1) > 4});
    dataset.push_back({{6, 10}, (6 - 10) > 4});
    dataset.push_back({{2, 3}, (2 - 3) > 4});
    dataset.push_back({{5, 5}, (5 - 5) > 4});
    dataset.push_back({{9, 11}, (9 - 11) > 4});
    dataset.push_back({{1, 8}, (1 - 8) > 4});
    dataset.push_back({{3, 2}, (3 - 2) > 4});
    dataset.push_back({{7, 6}, (7 - 6) > 4});
    dataset.push_back({{7, 3.5}, (7 - 3.5) > 4});
    dataset.push_back({{2, 1.5}, (2 - 1.5) > 4});
    dataset.push_back({{10, 5}, (10 - 5) > 4});
    dataset.push_back({{8, 12}, (8 - 12) > 4});
    dataset.push_back({{5, 0.5}, (5 - 0.5) > 4});
    dataset.push_back({{1, 6}, (1 - 6) > 4});
    dataset.push_back({{9, 3}, (9 - 3) > 4});
    dataset.push_back({{4, 2}, (4 - 2) > 4});
    dataset.push_back({{6, 7}, (6 - 7) > 4});
    dataset.push_back({{3, 4}, (3 - 4) > 4});
    dataset.push_back({{11, 9}, (11 - 9) > 4});
    dataset.push_back({{0, 1}, (0 - 1) > 4});
    dataset.push_back({{8, 1}, (8 - 1) > 4});
    dataset.push_back({{6, 10}, (6 - 10) > 4});
    dataset.push_back({{2, 3}, (2 - 3) > 4});
    dataset.push_back({{5, 5}, (5 - 5) > 4});
    dataset.push_back({{9, 11}, (9 - 11) > 4});
    dataset.push_back({{1, 8}, (1 - 8) > 4});
    dataset.push_back({{3, 2}, (3 - 2) > 4});
    dataset.push_back({{7, 6}, (7 - 6) > 4});
    dataset.push_back({{15, 18.5}, (15 - 18.5) > 4});
    dataset.push_back({{-5, 2}, (-5 - 2) > 4});
    dataset.push_back({{10, -5}, (10 - (-5)) > 4});
    dataset.push_back({{-8, -12}, (-8 - (-12)) > 4});
    dataset.push_back({{5, -7.5}, (5 - (-7.5)) > 4});
    dataset.push_back({{-1, -6}, (-1 - (-6)) > 4});
    dataset.push_back({{9, -3}, (9 - (-3)) > 4});
    dataset.push_back({{4, -8}, (4 - (-8)) > 4});
    dataset.push_back({{-6, -7}, (-6 - (-7)) > 4});
    dataset.push_back({{3, -4}, (3 - (-4)) > 4});
    dataset.push_back({{-11, -9}, (-11 - (-9)) > 4});
    dataset.push_back({{0, -1}, (0 - (-1)) > 4});
    dataset.push_back({{8, -1}, (8 - (-1)) > 4});
    dataset.push_back({{6, -10}, (6 - (-10)) > 4});
    dataset.push_back({{2, -3}, (2 - (-3)) > 4});
    dataset.push_back({{5, -5}, (5 - (-5)) > 4});
    dataset.push_back({{9, -11}, (9 - (-11)) > 4});
    dataset.push_back({{1, -8}, (1 - (-8)) > 4});
    dataset.push_back({{3, -2}, (3 - (-2)) > 4});
    dataset.push_back({{7, -6}, (7 - (-6)) > 4});

    perceptor.train(dataset, 50, true);
    perceptor.print_weights();

    return 0;

}