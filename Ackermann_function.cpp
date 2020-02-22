#include<bits/stdc++.h>
using namespace std;

int ack(int m, int n)
{
    int result;
    if(m==0)
    {
         result = n+1;
    }
    else
    {
        if(m>0 && n==0)
            result = ack(m-1, 1);
        else
        {
            if(m>0 && n>0)
                result = ack(m-1, ack(m, n-1));
        }
    }

    return result;
}

int main()
{
    int m, n, result;
    cin>>m>>n;
    result = ack(m, n);
    cout<<result;

    return 0;
}
