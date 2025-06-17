#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[],int n){
    for(int i =0; i< n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}

//Insertion Sort Algorithm - Short Definition:

//Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It works by taking one element from the input, placing it in the correct position relative to the already sorted part, and repeating this process for all elements.
//Key Points:
//* It works similar to the way you sort playing cards in your hands.
//* Best case (already sorted): O(n)
//* Worst and average case: O(n²)
//* In-place and stable sorting algorithm

// Basic Steps:
//1 Start with the second element (index 1), assuming the first is already sorted.
//2 Compare it with the elements before it.
//3 Shift larger elements to the right.
//4 Insert the current element at the correct position.
//5 Repeat for all elements.