
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265359
int main()
{
    ///ifstream fin("input.txt");
    ///ofstream fout("output.txt");
    int T, testcase = 1;
    cin >> T;
    double r1, r2, r3, r, triangle_area, circle_area, shaded_area, s, alpha, bita, ghama, a, b, c;
    while(T--)
{
        cin >> r1 >> r2 >> r3;
    if(r1 == r2 && r2 == r3 && r1 == r3)
    {
        r = r1 + r2;
        triangle_area = (sqrt(3)/4)* (r * r);
//        cout<<triangle_area<<endl;
        circle_area = 0.5*pi*r1*r1;
        ///cout<<circle_area<<endl;
        shaded_area = triangle_area - circle_area;
    }
    else
    {
        s = r1 + r2 + r3;
        a = r1 + r2;
        b = r1 + r3;
        c = r2 + r3;
        triangle_area = sqrt((s*(s-a)*(s-b)*(s-c)));
        ///cout<<triangle_area<<endl;
        alpha = acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        ///cout<<alpha<<endl;
        bita = acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        ///cout<<bita<<endl;
        ghama = acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        ///cout<<ghama<<endl;
        circle_area = 0.5*((r1*r1*alpha) + (r2*r2*bita) + (r3*r3*ghama));
        ///cout<<circle_area<<endl;
        shaded_area = triangle_area - circle_area;
    }
        cout<<fixed<<setprecision(10)<<"Case"<<' '<<testcase++<<':'<<' '<<shaded_area<<endl;
}
    return 0;
}
