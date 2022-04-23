//
//  main.cpp
//  Projekt
//

#include <iostream>
#include <cmath>

using namespace std;
float x;
string RUN;
int a,b;
int main()
{
    
    cout << " Hey McDonald's!\n";
    cout << " If you want calculate the optimal area of farm write 'RUN' : \n";
    
    cin >> RUN;
    while (RUN != "RUN")
    {
        if ((RUN == "run")||(RUN == "Run"))
        {
            cout << "'RUN' should be written in capital letters:\n";
            cin >> RUN;
        }
        else
        {
            cout << "If you want go to next step write 'RUN':\n";
        cin >> RUN;
        }
    }
    
    cout << "How many meters of fence do you have?: ";
    cin >> x;
    while((cin.fail())||(x-floor(x)>0)||(x<3))
    {
        cout << "Length of fence should be integer values above 3:\n";
        cin.clear();
        cin.ignore(100,'\n');
        cin >> x;
    }
    
    a = round(x/4);
    b = x - a*2;
    cout << "Length a= " << a << "m" << endl;
    cout << "Length b= " << b << "m" << endl;
    cout << "The optimal area of farm :  " << a*b << "m\u00B2" << endl;
    

    return 0;
}

