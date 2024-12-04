#include <iostream>
using namespace std;

/* global variable declaration */
int g = 20;
main()
{
    /* local variable declaration */
    int g = 10;
    cout << "Value of local g = " << g<<endl;
    cout << "Value of global g = " <<::g<<endl;
}
