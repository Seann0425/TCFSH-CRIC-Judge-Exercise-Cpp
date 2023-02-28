#include <bits/stdc++.h>
using namespace std;

int Recursion()
{
    char token[9];
    int x,y;
    cin >> token;
    if(token[0] == 'f')
    {
        x = Recursion();
        return 2*x-1;
    }
    else if(token[0] == 'g')
    {
        x = Recursion();
        y = Recursion();
        return x+2*y-3;
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
