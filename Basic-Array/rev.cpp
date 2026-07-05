#include <iostream>
#include <vector>
#include <climits>
void rev(std::vector<int>& ve){
    int n = ve.size();
    int start =0;
    int end = n-1;
    while(start<end){
        int temp =ve[start];
        ve[start] = ve[end];
        ve[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        std::cout << ve[i] << " ";
    }
}
int main(){
    std::vector<int> ve = {2,1,3,4,6,9};
    rev(ve);
    
}