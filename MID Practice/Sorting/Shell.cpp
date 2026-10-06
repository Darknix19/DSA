#include<iostream>
using namespace std;

int main(){
    int arr[8] = {8,5,3,7,6,2,1,4};
    int n = 8;

    for(int gap = n/2; gap>0; gap/=2){
        for(int i = gap; i<n; i++){
            int temp = arr[i];
            int j;

            for(j=i; j>=gap && arr[j-gap]>temp; j-=gap){
                arr[j] = arr[j-gap];
            }

            arr[j] = temp;
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}