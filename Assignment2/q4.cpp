// #include<iostream>
// using namespace std;
// int main(){
//     string s1 = "hello";
//     string s2 = "world";
//     cout<<s1+s2;
//     return 0;
// }


//B PART
// #include <iostream>
// using namespace std;
// int main(){
//     string s1 = "Hello";
//     for(int i = s1.length()-1;i>=0;i--){
//         cout<<s1[i];
//     }

//     return 0;
// }

//C part
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello World";

        cout << "Without vowels : ";

    for (int i = 0; i < s1.length(); i++) {
        int ascii = int(s1[i]);

       
        if (!(ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 ||  
         ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117)) 
        {
            cout << s1[i];
        }
    }

    return 0;
}
