#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {2,12,89,12},
        {8,77,3,23,223,22},
        {90,88,22,343,22,11,3},
        {1,3},
        {22,12,89}
    };

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}