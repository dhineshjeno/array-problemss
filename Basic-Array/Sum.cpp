#include <iostream>
#include <vector>
int main(){
    std::vector<int> nums = {1,2,2,3,4,5,6,7};
    int sum =0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    std::cout << sum;
}