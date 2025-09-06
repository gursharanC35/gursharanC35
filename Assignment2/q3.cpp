#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {1,2,3,5};
    int n = 5;
    int sum = n*(n+1)/2;
    int actual = 0; 
    for(int i=0;i<n-1;i++)
    {
         actual += arr[i];
    }
    cout << "Missing number: " << sum - actual;
    return 0;
}
