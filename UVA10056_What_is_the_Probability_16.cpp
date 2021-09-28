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
		if(p==0) //���Ȯ���� 0�ε� �翬�� 0����ؾ���; 
		{
			cout<<"0.0000"<<endl;
		}
		else
		{
			double result;  //����������� a1/1-r; 
			double x,up;	//���� ��� ���� ù��°��/1-����; 
			x=pow(q,total); //���� ����; 
			up=pow(q,num-1)*p;
			result=up/(1-x);
			cout<<fixed<<setprecision(4)<<result<<endl;
		}
	}
return 0;
}

