// #include <iostream>
// using namespace std;
// int main() {
//   int matrix1[2][3] = { {1, 4, 2}, {3, 6, 8} };
//   int matrix2[3][2] = { {2,4}, {4,6},{3, 5}};
//   int matrix3[2][2] = {0};
//  for(int i = 0; i<2;i++){
//      for(int j = 0;j<2;j++){
//          for(int k = 0; k<3;k++){
//               matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
//          }
//      }
//  } for(int i =0;i<2;i++){
//      for(int j = 0;j<2;j++){
//          cout<<matrix3[i][j]<<" ";
//      } cout<<endl;
     
//  } 
//   return 0;
// }#include <iostream>
// using namespace std;
// int main() {
//   int matrix1[2][3] = { {1, 4, 2}, {3, 6, 8} };
//   int matrix2[3][2] = { {2,4}, {4,6},{3, 5}};
//   int matrix3[2][2] = {0};
//  for(int i = 0; i<2;i++){
//      for(int j = 0;j<2;j++){
//          for(int k = 0; k<3;k++){
//               matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
//          }
//      }
//  } for(int i =0;i<2;i++){
//      for(int j = 0;j<2;j++){
//          cout<<matrix3[i][j]<<" ";
//      } cout<<endl;
     
//  } 
//   return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        cout << "Sum of row " << i << rowSum << endl;
    }

    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 2; i++) {
            colSum += a[i][j];
        }
        cout << "Sum of column " << j << ": " << colSum << endl;
    }

    return 0;
}
