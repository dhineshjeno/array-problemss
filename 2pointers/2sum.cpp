#include <iostream>
#include <algorithm>
#include <vector>
std::vector<int> P(std::vector<int>& nums,int target){
    int n = nums.size();
    int left = 0;
    int right = n-1;
    while(left<=right){
        int sum = nums[left]+nums[right];
        if(sum==target){
            return {left,right};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}
int main(){
    std::vector<int> nums = {2,7,8,9};
    int target=17;
    std::vector<int> result=P(nums,target);
    if(!result.empty()){
        std::cout << "Element exists at " << result[0] << " and " << result[1] << std::endl;
    }
    else{
        std::cout << "Result doesnt exist in the array";
    }
}