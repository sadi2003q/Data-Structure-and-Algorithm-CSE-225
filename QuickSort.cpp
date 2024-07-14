#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int l = left-1;

    for(int j=left; j<right; j++) {
        if(arr[j]<pivot) {
            l++;
            swap(arr, l, j);
        }
    }
    swap(arr, l+1, right);

    return l+1;
}

void QuickSort(int arr[], int left, int right) {
    if(left>=right) 
        return;
    
    int partition = Partition(arr, left, right);

    QuickSort(arr, left, partition-1);
    QuickSort(arr, partition+1, right);


}


int main() {
    
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort(arr, 0, 8);
    for(int i=0; i<9; i++) 
        cout<<arr[i]<<" ";

    return 0;
}