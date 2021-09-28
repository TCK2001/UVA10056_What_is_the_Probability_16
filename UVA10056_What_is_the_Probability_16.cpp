/*
Sample Input
2
2 0.166666 1
2 0.166666 2
Sample Output
0.5455
0.4545
*/

 
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
	int n,total,num;
	double p,q;
	cin>>n;
	while(n--)
	{
		cin>>total>>p>>num;		
		q=1-p;
		if(p==0) //우승확률이 0인데 당연히 0출력해야함; 
		{
			cout<<"0.0000"<<endl;
		}
		else
		{
			double result;  //無窮等比級數 a1/1-r; 
			double x,up;	//무한 등비 지수 첫번째수/1-공비; 
			x=pow(q,total); //공식 대입; 
			up=pow(q,num-1)*p;
			result=up/(1-x);
			cout<<fixed<<setprecision(4)<<result<<endl;
		}
	}
return 0;
}

