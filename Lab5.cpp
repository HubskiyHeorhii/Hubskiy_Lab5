#include <iostream>
 using namespace std; 

int main() {
 const int m = 5; 
int matrix[m][m]; 
int reverse[m][m]; 
cout << "Enter matrix: " << endl; 

for (int i = 0; i < m; ++i) { 
for (int j = 0; j < m; ++j) { 
cin >> matrix[i][j]; 
} 
}
 for (int i = 0; i < m; ++i) { 
for (int j = 0; j < m; ++j) { 
reverse[j][m - 1 - i] = matrix[i][j]; 
} 
} 
cout << "Matrix reversed by 90 degrees: " << endl; 
for (int i = 0; i < m; ++i) { 
for (int j = 0; j < m; ++j) { 
cout << reverse[i][j] << " "; 
} 
cout << endl; 
} 
return 0; 
}
