/**
https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1238

volume of large cylinder = pi*D^2/4*D
volume of two conics = 2*1/3*pi*D^2/4*D/2 - 2/3*pi*d^2/4*d/2
volume of small cylinder = pi*d^2/4*d
so,
pi*D^2/4*D - V - 2*1/3*pi*D^2/4*D/2 + 2/3*pi*d^2/4*d/2 = pi*d^2/4*d
after calculation we find ,
d^3 = D^3-6*v/pi;
*/



#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int D, V;
    double d;
    while(cin >> D >> V)
    {
        if(D == 0 && V == 0)
            break;
        else
            d = pow(D*D*D - 6*V/pi, 1.0/3);

            cout<<fixed<<setprecision(3)<<d<<endl;
    }

    return 0;
}
