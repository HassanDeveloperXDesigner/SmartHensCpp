#include <iostream>
using namespace std;

int main(){
    // syntax
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // int no1,no2;
    // while(no1 != -1){
    //     cout<<"Enter number1 or enter -1 to exit: ";
    //     cin>>no1;
    //     cout<<"Enter number2: ";
    //     cin>>no2;
    // }
    // cout<<"Program terminated";

    // for (int i = 0; i < 5; i= i+1)/*i++*/
    // {
    //     cout<<"I love smarthens\n";
    // }
    // cout<<"Program terminated";
    int number = 4;
    while (number >= 0){
        number = number -1;
        cout << number << endl;
    }

    
    return 0;
}