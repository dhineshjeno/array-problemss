#include <iostream>
#include <vector>
void freq(std::vector<int> nums){
    int n = nums.size();
    int vis[n];
    for(int i=0;i<nums.size();i++){
        vis[i]=0;
    }
    int count =1;
    for(int i=0;i<nums.size();i++){
        if(vis[i]==1)continue;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                vis[j]=1;
                count++;
            }
        }
        std::cout << nums[i] << "->" << count << std::endl;
    }
}
int main(){
    std::vector<int> nums = {1,2,2,3,4,5,6,7};
    freq(nums);
}