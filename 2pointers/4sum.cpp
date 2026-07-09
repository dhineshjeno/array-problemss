#include <iostream>
#include <algorithm>
#include <vector>
std::vector<std::vector<int>> num(std::vector<int>& nums,int target){
    std::sort(nums.begin(),nums.end());
    int n=nums.size();
    std::vector<std::vector<int>> result;
    
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
       for(int l=i+1;l<n;l++){
        if(l>i+1 &&nums[l]==nums[l-1])continue;
        int j=l+1;
        int k = n-1;
        

        while(j<k){
            int sum = nums[i]+nums[j]+nums[k]+nums[l];
            if(sum==target){
                std::vector<int> target={nums[i],nums[l],nums[j],nums[k]};
                result.push_back(target);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum <target){
                j++;
            }
            else{
                k--;
            }
        }
       }
    }
    return result;
}
int main(){
    std::vector<int> nums = {1,2,2,3,4,5,62,1,2};
    int target;
    
    std::vector<std::vector<int>> r = num(nums,67);
    for(auto& triplet: r){
        std::cout << "[";
        for(int i=0;i<triplet.size();i++){
            std::cout << triplet[i] << (i<triplet.size()-1 ? "," : "");
        }
        std::cout << "]\n";
    }
}