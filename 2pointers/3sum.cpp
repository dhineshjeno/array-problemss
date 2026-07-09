#include <iostream>
#include <algorithm>
#include <vector>
std::vector<std::vector<int>> num(std::vector<int>& nums){
    std::sort(nums.begin(),nums.end());
    int n=nums.size();
    std::vector<std::vector<int>> result;
    
    for(int i=0;i<n;i++){
        int j=i+1;
        int k = n-1;
        if(i>0 && nums[i]==nums[i-1]) continue;

        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum==0){
                std::vector<int> target={nums[i],nums[j],nums[k]};
                result.push_back(target);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum <0){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return result;
}
int main(){
    std::vector<int> nums = {-1,-1,-2,-1,1,1,2,3};
    std::vector<std::vector<int>> r = num(nums);
    for(auto& triplet: r){
        std::cout << "[";
        for(int i=0;i<triplet.size();i++){
            std::cout << triplet[i] << (i<triplet.size()-1 ? "," : "");
        }
        std::cout << "]\n";
    }
}