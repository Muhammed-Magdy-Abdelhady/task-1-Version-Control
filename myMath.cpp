#include "myMath.h"

int getSum(std::vector<int> numbers)
{
    int sum = 0;
    for (const auto& number : numbers){
        sum += number;
    }
    return sum;
}

int getMin(std::vector<int> numbers)
{
    int min = numbers[0];
    for (const auto& number : numbers){
        if (number < min){
            min = number;
        }
    }
    return min;
}