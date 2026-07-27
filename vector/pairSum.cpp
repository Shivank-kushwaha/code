#include<iostream>
#include<vector>
using namespace std;


//Brute force approach
vector<int>pairsum(vector<int> vec, int target){

    vector<int> ans;

    int n = vec.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int currSum = vec[i] + vec[j];
            if(currSum == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    ans.push_back(-1);
    ans.push_back(-1);

    return ans;
}

int main(){
    vector<int> vec = {2,7,9,11,15};
    int target = 26;

    vector<int> ans = pairsum(vec,target);
    
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    return 0;
}