#include <iostream>
using namespace std;

//-------function Prototypes-------
void print_greet();
void print_greet_with_name(string name);

int sum(int a, int b); // ----> (recomended by me in large code)
// int sum(int n1,n2); // ----> (wrong practice)
// int sum(int,int);   // ----> (also correct)

int main()
{

    //-------void functions---------
    print_greet();
    // string name = "umer";
    print_greet_with_name("umer"); // call

    //-------return value function---------
    int no1, no2, summ;
    cout << "Enter number 1: ";
    cin >> no1;
    cout << "Enter number 2: ";
    cin >> no2;
    // no1 and no2 are actual parameters
    summ = sum(no1, no2); // function call
    cout << "sum is: " << summ;

    return 0;
}

int sum(int a, int b)
{ // function definition
    // a and b are formal parameters
    return (a + b);
}

// void function (introvert type)
void print_greet()
{
    cout << "Hello!\n";
}

//(void with parameters)
void print_greet_with_name(string name)
{
    cout << "Hello! " << name << endl;
}