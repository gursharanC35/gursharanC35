
#include<iostream>
using namespace std;
int search(int n, int arr[],int key){
    int s = 0;
    int e = n-1;
    int mid;
    while(e>=s){
        mid = s+(e-s)/2;
        if (arr[mid]==key){
            cout<<"Key is at index : ";
            return mid;

        } else if(arr[mid]>key){
            e = mid-1;
        } else {
            s = mid +1;
        } 
    
    }
    
        return -1;
      
}
int main(){
    int n = 5;
    int key = 5;
    int arr[n] = {2,3,4,5,6};
      cout<<search(n,arr,key);
    return 0;
}
