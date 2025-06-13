#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr){
    for(int i = 0;i<arr.size()-1;i++){

        for(int j = 0; j<arr.size()-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void pirntArray(vector<int> &arr){
    for(int i =0; i<arr.size();i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    cout<<"Original Array : ";
    pirntArray(arr);
    bubbleSort(arr);
    cout<<"Bubble Sorted Array : ";
    pirntArray(arr);
    return 0;
}

//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.