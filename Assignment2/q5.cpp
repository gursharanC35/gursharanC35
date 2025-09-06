//Diagonal Matrix

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int diag[n]; 

    cout << "Enter " << n << " diagonal elements: ";
    for (int i = 0; i < n; i++) {
        cin >> diag[i];
    }

    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << diag[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

// Tri-diagonal Matrix

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int size = 3*n - 2; 
    int tri[size];

    cout << "Enter "<<size<<" elements of Tri-diagonal matrix (row-wise):\n";
    for (int i = 0; i < size; i++) {
        cin >> tri[i];
    }

    cout << "\nTri-diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << tri[n-1 + i] << " "; 
            }
            else if (i == j+1) {
                cout << tri[i-1] << " ";   
            }
            else if (i+1 == j) {
                cout << tri[2*n-1 + i] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}


//Lower triangular Matrix. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix : ";
    cin >> n;

    int size = n*(n+1)/2;  
    int lower[size];

    cout << "Enter "<<size<<" elements of lower triangular matrix row-wise: ";
    for (int i = 0; i < size; i++) {
        cin >> lower[i];
    }

    int index=0;
    cout << "Lower triangular matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << lower[index] << " ";
                index++;
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}

// Upper triangular Matrix.  

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix : ";
    cin >> n;

    int size = n*(n+1)/2;  
    int lower[size];

    cout << "Enter "<<size<<" elements of lower triangular matrix row-wise: ";
    for (int i = 0; i < size; i++) {
        cin >> lower[i];
    }

    int index=0;
    cout << "Lower triangular matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << lower[index] << " ";
                index++;
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
