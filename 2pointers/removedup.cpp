    #include <iostream>
    #include <vector>
    #include <algorithm>
    void removedp(std::vector<int>& nums){
        std::sort(nums.begin(),nums.end());
        int left = 0;
        int size= nums.size();
        for(int right = 1;right<size;right++){
            if(nums[left]!=nums[right]){
                left++;
                nums[left]=nums[right];
            }
        }
        for(int i=0;i<=left;i++){
            std::cout << nums[i] << " ";
        }
    }
    int main(){
        std::vector<int> nums = {1,2,3,3,4,4,5,1,3,5};
        removedp(nums);
    }