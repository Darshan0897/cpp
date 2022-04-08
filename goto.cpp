#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    x:
    if(i<=5)
    {
        j=1;
        y:
        if(j<=i)
        {
            cout<<"*";
            j++;
            goto y;
        }
        cout<<"\n";
        i++;
        goto x;
    }
}