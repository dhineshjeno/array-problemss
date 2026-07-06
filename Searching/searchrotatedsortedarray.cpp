#include <iostream>
#include <vector>
int n(std::vector<int> nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n -1;
   
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
           return mid;
        }
        if(nums[low]<=nums[mid]){
            if(target >=nums[low] && nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(target <=nums[high] && nums[mid]<target ){
                low =mid+1;
            }
            else{
                high = mid-1;
            }
        }

    }
    return -1;
}
int main(){
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target;
    int s= n(nums,0);
    std::cout << s;
}