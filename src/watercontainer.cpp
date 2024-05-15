#include <vector>
#include <iostream>
#include "maxwater.h"
namespace dsprep {
    int Solution::maxArea(std::vector<int>& height) {
        if(height.size() < 2) return 0;
        int l = 0, r = height.size() - 1;
        int maxWater = 0;
        while(l < r) {
            std::cout << maxWater << "\n";
            if(height[l] >= height[r]) {
                maxWater = std::max(maxWater, height[l] * (r-l));
                r--;
            }
            else {
                maxWater = std::max(maxWater, height[r] * (r-l));
                l++;
            }
            
        }
        return maxWater;
    }
}