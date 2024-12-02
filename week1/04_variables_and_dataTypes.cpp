# include <iostream>
using namespace std;

/*
    Types of data
1.Numbers       2.Text              3.Multimedia
    int             string              audio
    float           char                image
    double                              video
    bool


    Why need to tell DataTypes
        to reserve correct space in memory
        to perform operations correctly

*/
int main(){

    //-----variables with different data types------
    int a_1 = 21,a_2 = 22;
    float b = 13.54;
    double c = 13.6663;
    string str = "this is a text";
    char d = 'A';
    cout<<"value of int a_1 is: "<<a_1;
    cout<<"value of float b is: "<<b;
    cout<<"value of char d is: "<<d;

    //-----constant variables------
    cout<<"Value of a_1 before: "<<a_1;
    a_1 = 12;
    cout<<"Value of a_1 after: "<<a_1;

    const int b_1 = 21;
    // b_1 = 2;
    // b_1 is read only variables so its value is not rewritable


    //-----Reference variables------
    string var = "text";
    string & txt = var;

    cout<<"value of original var: "<<var<<endl;
    cout<<"value of  reference txt: "<<txt<<endl;
    return 0;
}


