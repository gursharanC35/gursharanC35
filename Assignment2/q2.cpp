/*Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
elements if they are in wrong order. Code the Bubble sort with the following elements:
64 34 25 12 22 11 90*/
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
// elements if they are in wrong order. Code the Bubble sort with the following elements:
// 64 34 25 12 22 11 90
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
            }
        }
    } 
}
int main(){
 int n = 5;
 int arr[n]= {7,8,4,6,9};
  sort(arr,n);
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
 cout<<endl;
    return 0;

}
