class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int max =0;
        while(left<right){
            int width = right - left;
            int height = min(arr[left],arr[right]);
            int area = height * width;
            if(area> max ){
                max = area;
            }
            if(arr[left]<arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max;
    }
};