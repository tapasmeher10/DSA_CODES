/*wap to take input from user (1:7) and print the corresponding week day i.e
1= monday , 2= Tuesday and so on */

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number between 1 and 7:";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednessday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Invalid Input";
    
    }

    return 0;
}