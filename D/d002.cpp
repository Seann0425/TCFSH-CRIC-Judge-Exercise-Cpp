#include <bits/stdc++.h>
using namespace std;

int Recursion()
{
    char token[9];
    int x,y,z;
    cin >> token;
    if (token[0] == 'f')
    {
        x = Recursion();
        return 2*x-3;
    }
    else if(token[0] == 'g')
    {
        x = Recursion();
        y = Recursion();
        return 2*x+y-7;
    }
    else if(token[0] == 'h')
    {
        x = Recursion();
        y = Recursion();
        z = Recursion();
        return 3*x-2*y+z;
    }
    else
    {
        return atoi(token);
    }
}

int main()
{
    cout << Recursion() << endl;
    return 0;
}
