//REverse an array
#include<iostream>
using namespace std;
int reverse(int n, int arr[]){

for(int i = n-1; i>=0;i--){
    cout<<arr[i]<<" ";
} return 0;
}
int main(){
    int n =5;
    int arr[5]= { 1, 2, 3 ,4, 5};
reverse(n,arr);
    
    return 0;
}