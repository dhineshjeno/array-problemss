#include <iostream>
#include <vector>
int pk(std::vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(nums[mid]>nums[mid+1]){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    std::vector<int> nums = {1,2,3,1};
    int s = pk(nums);
    std::cout << s;
}