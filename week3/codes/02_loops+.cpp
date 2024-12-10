#include <iostream>
using namespace std;

void print_table(int num){
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}

void digit_seperator(int num){
    while(num != 0){
        cout<< num%10<<endl;
        num = num/10.0;
    }
}

int main(){
    //----- do-while syntax -----
    // do
    // {
    //     cout<<"Done";
    // } while (false);


    int number;
    cout<<"Enter number: ";
    cin>>number;

    // print_table(number);
    digit_seperator(number);
    
    return 0;
}