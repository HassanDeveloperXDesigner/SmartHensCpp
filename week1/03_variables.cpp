#include <iostream>
using namespace std;

main()
{
    // taking distance from user
    cout<<"Enter distance: ";
    int distance;
    cin>>distance;
    
    // taking time from user
    cout<<"Enter time: ";
    int time;
    cin>>time;

    //  calculating and displaying speed
    cout<<"Speed is: "<<distance/time;

    return 0;
}
