#include<bits/stdc++.h>
#define func(x) cos(x) - x * exp(x)
using namespace std;
int main()
{
	 float a, b, x, func0, func1, func, diff=0;
	 int cnt = 1;

     cout<< setprecision(6)<< fixed;
	 up:
	 cout<<"Enter the initial value of a: ";
     cin>>a;
     cout<<"Enter the initial value of b: ";
     cin>>b;
	 func0 = func(a);
	 func1 = func(b);
	 if( func0 * func1 > 0.0)
	 {
		  cout<<"Incorrect Initial Value of a and b."<< endl;
		  goto up;
	 }
	 cout<<"False Position Method starts from here : "<< endl;
	 do
	 {
		  x = a - (a-b) * func0/ (func0-func1);
		  func = func(x);

		  cout<<"X "<< cnt<<":\t x = "<< setw(10)<< x<<"     and f(x) = "<< setw(10)<< func(x)<< endl;

		  if( func0 * func < 0)
		  {
			   b = x;
			   func1 = func;
		  }
		  else
		  {
			   a = x;
			   func0 = func;
		  }
		  cnt+=1;
	 }while(fabs(func)>diff);

	 cout<< endl<<"Final Root is: "<< x<< endl;

	 return 0;
}
