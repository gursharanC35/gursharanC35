// #include<iostream>    //1st part
// using namespace std;
// int main(){
//     int arr[3] = {1,3,5};
//    for(int i =0; i<3;i++){
//  cout<<arr[i]<<" ";    
//    }                   
//       return 0;                                                     

// }      
//2nd part
//  #include<iostream>    
// using namespace std;
// int main(){  
//     int n;
//     cout<<"Enter the length of array : ";
//     cin>>n;
//     int arr[100];
//     cout<<"Enter the value : ";
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }       
////3rd



// #include<iostream>    
// using namespace std;
// int main(){
// int n, pos;
//     cout<<"Enter the length of array : ";
//     cin>>n;
//     int arr[100];
//     cout<<"Enter the value : ";
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//         cout<<"Enter the position of array : ";
//         cin>>pos;
//          for(int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//          for(int i = 0;i<n;i++){
//             cout<<arr[i]<<" ";
//          }
        

//     return 0;
// }

//4th
#include<iostream>    
using namespace std;
int search(int key ,int n, int arr[100]){
for(int i = 0;i<n;i++){

    if(key == arr[i]){
    return i;
    } else{
        
    }
} return -1;
}
int main(){
int n,key;
    cout<<"Enter the length of array : ";
    cin>>n;
    int arr[100];
    cout<<"Enter the value : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    } cout << "Enter the value to search: ";
    cin >> key;

    int result = search(key,n,arr);
    if(result!= -1){
        cout<<"FOUND";
    } else{
        cout<<"Not FOUND";
    }

    return 0; 
}
