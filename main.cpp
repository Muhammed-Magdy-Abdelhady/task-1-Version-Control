#include <iostream>
#include "myMath.h"

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << getSum(numbers) << std::endl;
    std::cout << getMin(numbers) << std::endl;
    return 0;
}