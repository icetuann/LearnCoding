#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    //TODO
    double a,b,c,x,x1,x2;
    cin >> a >> b >> c;
    double del;
    del = b*b - 4*a*c;
    if (a==b && b==c && c==0)
    cout << "Countless solutions";
    else if (a==b && b==0)
    cout << "No solution";
    else if (a==0)
    cout<<fixed<<setprecision(4)<< -c/b;
    else if (del==0 && a!=0)
    cout<<fixed<<setprecision(4)<< -b/(2*a);
    else if (del > 0 && a!=0)
    {
    	cout<<fixed<<setprecision(4) << (-b+sqrt(del))/(2*a) << endl;
    	cout<<fixed<<setprecision(4)<< (-b-sqrt(del))/(2*a) << endl;
    }
    else if (del < 0 && a!=0)
    {
    	cout<<fixed<<setprecision(4)<< -b/(2*a) << " + " << (sqrt(abs(del)))/(2*a) <<"*i"<< endl;
    	cout<<fixed<<setprecision(4)<< -b/(2*a) << " - " << (sqrt(abs(del)))/(2*a) <<"*i"<< endl;
    }
    return 0;
}
