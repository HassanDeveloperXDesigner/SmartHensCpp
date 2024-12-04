#include <iostream>
using namespace std;
// add function
int add(int n1,int n2){
    return (n1+n2);
}
// subtract function
int sub(int n1,int n2){
    return (n1-n2);
}

int main(){
    // user input
    int no1,no2,result;
    char oprtr;
    cout<<"Enter number 1: ";
    cin>>no1;
    cout<<"Enter number 2: ";
    cin>>no2;
    cout<<"enter the operator ('+','-'): ";
    cin>>oprtr;


// if else-if else ladder
    if (oprtr == '+')
    {
        result = add(no1,no2);
        cout<<result<<endl;
    }
    else if (oprtr == '-')
    {
        result = sub(no1,no2);
        cout<<result<<endl;
    }
    else
    {
        cout<<"something went wrong!!";
    }



    return 0;
}