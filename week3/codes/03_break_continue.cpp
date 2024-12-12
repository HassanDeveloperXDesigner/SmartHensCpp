#include <iostream>
using namespace std;

/* to find output only decomments required code block */
int main(){
    //  -------break--------
    for (int i = 1; i <5 ; i++)
    {
        if(i == 5)
            break;
        cout<<i<<endl;
    }

    // int no;
    // while(true){
    //     cout<<"Enter no(0 to exit): ";
    //     cin>>no;
    //     if(no == 0)
    //         break;
    //     cout<<"Entered number is "<<no<<endl;
    // }

    
    //  -------continue--------
    // for (int i = 1; i <= 10; i++)
    // {
    //     if(i == 5)
    //     {
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    //  --------Using conditions and booleans-------
    // bool pass;
    // for (int i = 1; i <= 100; i++)
    // {
    //     pass = false;
    //     if(i%2 == 1)
    //         pass = true;
    //     if(!pass){
    //         cout<<i<<' ';
    //     }
    // }

    // alternative way
    // for (int i = 1; i <= 100; i++)
    // {
    //     if(i%2 == 0)
    //         cout<<i<<' ';
    // }
    
    return 0;
}