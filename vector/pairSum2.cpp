#include<iostream>
#include<vector>
using namespace std;

// Two pointer approach optimize solution
vector<int> pairSum(vector<int> vec, int target){
    
    int start = 0;
    int end = vec.size() - 1;

    vector<int> ans;

    while(start < end){
        int currSum = vec[start] + vec[end];
        if(currSum == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }else if(currSum > target){
            end--;
        }else {
            start++;
        }
    }
    
    ans.push_back(-1);
    ans.push_back(-1);
    
    return ans;
}

int main(){
    vector<int> vec = {2,7,9,11,15};
    int target = 9;

    vector<int> ans = pairSum(vec,target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;

    return 0;
}