#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int** matricsAddition(int matrics_1[3][3], int matrics_2[3][3]) {
    int** result = new int*[3]; 
    for (int i = 0; i < 3; i++) {
        result[i] = new int[3]; 
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrics_1[i][j] + matrics_2[i][j];
        }
    }

    return result;
}

int main() {
    cout<<"sadi"<<endl;
    return 0;
}