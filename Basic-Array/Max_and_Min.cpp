#include <iostream>
#include <vector>
#include <climits>
std::pair<int,int> ss(std::vector<int> ve){
    int max = INT_MIN;
    int min = INT_MAX;
    int n = ve.size();
    for(int i=0;i<n;i++){
        if(ve[i]>max){
            max = ve[i];
        }
        if(ve[i]<min){
            min = ve[i];
        }
    }
    return {max,min};
}
int main(){
    std::vector<int> ve = {2,1,3,4,6,9};
    std::pair<int,int> s = ss(ve);
    std::cout << s.first << " " << s.second;
}