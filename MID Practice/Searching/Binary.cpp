#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int key = 10;
    int n = 7;

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high)/2;

        if (arr[mid] == key){
            cout << "Found at Index: "<< mid;
            return 0;
        }else if(key > arr[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    cout << "Not Found";

    return 0;
}