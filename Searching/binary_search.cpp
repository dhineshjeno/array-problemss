#include <iostream>
#include <vector>
void bs(std::vector<int>& nums,int target){
    int n = nums.size();
    int found_index=-1;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            found_index = mid;
            break;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high= mid-1;
        }

    }
    if(found_index!=-1){
        std::cout <<" It was found at :" << found_index;

    }
    else{
        std::cout << "The requested element was not found ";
    }
}
int main(){
    std::vector<int>nums ={1,2,3,4,50};
   
    bs(nums,50);
}