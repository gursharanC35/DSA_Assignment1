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

}// #include <iostream>
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

