#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int key = 60;

    int low = 0;
    int high = 6;

    while(low<=high &&
          key>=arr[low] &&
          key<=arr[high])
          {
            int pos = low + ((key-arr[low])*(high-low)) / (arr[high]-arr[low]);

            if(arr[pos] == key){
                cout << "Found at Index: " << pos;
                return 0;
            }

            if(pos < key){
                low = pos+1; 
            }else{
                high = pos-1;
            }
          }

          cout << "Not Found";

    return 0;
}