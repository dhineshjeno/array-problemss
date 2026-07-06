#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
void max(std::vector<int>& nums){
    int n = nums.size();
    int maxx = INT_MIN;
    int s_max = INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>maxx){
            s_max= maxx;
            maxx = nums[i];
        }
        else if(nums[i]>s_max && nums[i]!=maxx ){
            s_max =nums[i];
        }
    }
    std::cout << "Second mAx : " << s_max << std::endl;
    std::cout << "Max : " << maxx ; 
}
int main(){
    std::vector<int> nums = {2,3,4,1,4,9,42};
    max(nums);
}