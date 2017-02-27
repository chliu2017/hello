#include<iostream>

using namespace std;

void hannoite(int n,char fir,char mid,char end)
{
	if(n==1)
	{
		cout << fir << "->" << end << endl;
		return;
	}
	hannoite(n-1,fir,end,mid);
	cout << fir << "->" << end;
	hannoite(n-1,mid,fir,end);
	return;
}

int main()
{
	int n;
	cin >> n;
	hannoite(n,'A','B','C');
	return 0;
}