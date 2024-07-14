#include<iostream>
using namespace std;

void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int left, int mid, int right);

int main() {
    int arr[] = {5, 4, 3, 2, 9, 10, 7, 6, 1};

    MergeSort(arr, 0, 8);
    for(int i=0; i<9; i++) 
        cout<<arr[i]<<" ";

    return 0;
}


void MergeSort(int arr[], int left, int right) {
    if(left>=right) 
        return;
    
    if(left<right) {
        int mid = (left+right)/2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);

        Merge(arr, left, mid, right);
    }
}

void Merge(int arr[], int left, int mid, int right) {
    
    int n1 = mid-left+1; int n2 = right-mid;

    int a[n1]; int b[n2];

    for(int i=0; i<n1; i++)
        a[i] = arr[left+i];

    for(int i=0; i<n2; i++)
        b[i] = arr[mid+1+i];

    int i=0;
    int j=0; 
    int k=left;

    while(i<n1 and j<n2) {
        if(a[i]<b[j]) {
            arr[k] = a[i];
            i++; k++;
        } else {
            arr[k] = b[j];
            j++; k++;
        }
    }


    while(i<n1) {
        arr[k] = a[i];
        i++; k++;
    }

    while(j<n2) {
        arr[k] = b[j];
        j++; k++;
    }

}