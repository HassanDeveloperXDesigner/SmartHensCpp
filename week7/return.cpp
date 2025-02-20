#include<iostream>
using namespace std;

// // update value in array
// void updateArr(int arr[][5], int row, int col, int value){
//     arr[row][col] = value;
// }
// // delete value from array
// void deleteArr(int arr[][5], int row, int col){
//     arr[row][col] = 0;
// }
// // create array initialize its values
// void createArr(int arr[][5], int row, int col){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout<<"Enter the value at ["<<i<<"] ["<<j<<"] = ";
//             cin>>arr[i][j];
//         }
//     }
// }
// // retrieve value from array
// void RetrieveArr(int arr[][5], int row, int col){
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout<<arr[i][j]<<endl;
//         }
//     }
// }

void swap(int &no1,int &no2){
    int temp = no1;
    no1 = no2;
    no2 = temp;
}


int main()
{
    // int array1[2][5];

  
    // createArr(array1, 2, 5);
    // RetrieveArr(array1, 2, 5);

    // updateArr(array1, 1, 2, 10);
    // RetrieveArr(array1, 2, 5);

    int a = 2;
    int b = 3;
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;





    
    return 0;
}