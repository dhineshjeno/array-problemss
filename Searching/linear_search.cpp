#include <iostream>
#include <vector>
void ls(std::vector<int> nums,int target){
    int n = nums.size();
    
    int foundindex = -1;
    for(int i=0;i<n;i++){
        if(nums[i]==target){
           
            foundindex=i;
            
        }
    }
    if(foundindex!=-1){
        std::cout << foundindex;
    }
    else{
        std::cout << "No element found";
    }
    
}
int main(){
    std::vector<int> nums = {1,2,3,4,5};
    int target;
    ls(nums,3);
}