#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    ///ifstream fin("input.txt");
    ///ofstream fout("output.txt");
    int l, h, w, theta;
    double V1, V2, hprime, h2;
    while(cin >> l >> w >> h >> theta)
    {
        hprime = tan((theta*(pi/180.0)))*l;
        if(hprime <= h)
        {
            V1 = (l*h*w) - (0.5*l*hprime*w);
            cout<<fixed<<setprecision(3)<<V1<<' '<<"mL"<<endl;
        }
        else
        {
            theta = 90 - theta;
            h2 = tan((theta*(pi/180.0)))*h;
            V2 = 0.5*h*h2*w;
            cout<<fixed<<setprecision(3)<<V2<<' '<<"mL"<<endl;
        }
    }

    return 0;
}
