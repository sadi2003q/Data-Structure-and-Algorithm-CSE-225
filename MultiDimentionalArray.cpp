#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> result) {
    int raw = result.size();
    int col = result[0].size();
    
    for(int i=0; i<raw; i++) {
        for(int j=0; j<col; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>> Summation(vector<vector<int>> matrics_1, 
    vector<vector<int>> matrics_2) {
    
    int rows = matrics_1.size();
    int cols = matrics_2[0].size();

    vector<vector<int>> result(rows, vector<int>(cols));

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) 
            result.at(i).at(j) = matrics_1.at(i).at(j) + matrics_1.at(i).at(j);
    }
    
    return result; 


}


int main() {
    vector<vector<int>> matrics_1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> matrics_2 = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    vector<vector<int>> result = Summation(matrics_1, matrics_2);
    print(result);
    

    return 0;
}