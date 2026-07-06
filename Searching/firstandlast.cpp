#include <iostream>
#include <vector>
int first(std::vector<int>& nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int fis=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            fis = mid;
            high = mid-1;
        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return fis;

}
int second(std::vector<int>& nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int sec = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            sec= mid;
            low = mid+1;
        }
        else if(nums[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return sec;
}
int main(){
    std::vector<int> nums = {1,2,3,3,4,4,5};
    int s =first(nums,3);
    int qs =second(nums,3);
    std::cout << "first occurence : " << s << std::endl;
    std::cout << "second occurence :" << qs;
}