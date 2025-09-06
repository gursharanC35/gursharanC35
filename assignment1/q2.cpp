//Design the logic to remove the duplicate elements from an Array and after the 
//deletion the array should contain the unique elements.
#include<iostream>
using namespace std;
int duplicate(int arr[4], int pos, int key){
    int n =4;
    for(int i =0; i<n;i++){
        if(arr[i]==key){
            arr[i] = arr[i+1];
          n--;
            
        } else{
            return -1;
        }

    }
}
int main(){
    int key = 3;
    int arr[4] = {1,2,3,3};

}
