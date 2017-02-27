//n个数输出前m个数，由大至小输出这m个数
#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=a;
}

void right_k(int a[],int k,int i,int j)//k为要移动k个数到标志数右边，i为要操作数组的起始位，j为末位
{
	int flag=a[i];
	int op=i,en=j;
	while(op<=en)
	{
		while(op<=en&&flag<a[en])
		{
			en--;
		}
		swap(a[op],a[en]);
		while(op<=en&&flag>a[op])
		{
			op++;
		}
		swap(a[op],a[en]);
	}
	if((j-op+1)==k)
		return;
	if((j-op+1)>k)
		right_k(a[],k,op,j);
	else
		right_k(a[],(j-op-k),i,op);
}

void main()
{
	int a[1000000];
	int m;
	int j=sizeof(a[])/sizeof(int);
	right_k(a[],m,0,j);
	for(int i=0;i<10;--i)
	{
		cout << a[j--] << endl;
	}
}





