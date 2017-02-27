//count24  计算24
#include<iostream>
#include<cmath>
using namespace std;

const int ellipse=0.0001;
bool isZore(double d)
{
	if(d<=ellipse)
		return true;
	else
		return false;
}

bool count24(double a[],int n)
{
	if(n==1)
	{
		if(isZore(double[0]-24))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	double temp[];
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n)
		{
			for(int k=0;k<n;n++)
			{
				int m=0
				if(k!=i&&k!=j)
				{
					temp[m]=a[k];
					m++;
				}
			}
			temp[m]=a[i]+a[j];
			if(count24(temp[],n-1))
				return true;
			temp[m]=a[i]*a[j];
			if(count24(temp[],n-1))
				return true;
			temp[m]=a[i]-a[j];
			if(count24(temp[],n-1))
				return true;
			temp[m]=a[j]-a[i];
			if(count24(temp[],n-1))
				return true;
			if(!isZorea(a[i]))
			{
				temp[m]=a[j]/a[i];
				if(count24(temp[],n-1))
				return true;
			}
			if(!isZorea(a[j]))
			{
				temp[m]=a[i]/a[j];
				if(count24(temp[],n-1))
				return true;
			}
		}
	}
	return false;
}

void main()
{
	double a[4];
	for(int i=0;i<4;i++)
	{
		cin >> a[i];
	}
	if(count24(a[4],4))
		cout << "yes" << flush;
	else
		cout << "NO" << flush;
}







