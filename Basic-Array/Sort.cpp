#include <iostream>
#include <vector>
int isSorted(std::vector<int> nums){
    int n =nums.size();
    
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    std::vector<int> nums = {1,2,3,4};
    if(isSorted(nums)){
        std::cout << "its sorted";
    }
    else{
        std::cout << " Its not sorted";
    }
}