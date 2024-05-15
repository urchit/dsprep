#include <iostream>
#include <vector>
#include "maxwater.h"

int main(int, char**){
    std::cout << "Hello, from dsprep!\n";
    dsprep::Solution s;
    std::vector<int> inputV = {1,8,6,2,5,4,8,3,7};
    std::cout <<  s.maxArea(inputV);
}
