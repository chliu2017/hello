//QuickSort  快速排序
#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

QuickSort(int a[],int i,int j)
{
	if(i>=j)
		return;
	int k=a[i]
	int e=i,p=j;
	while(e<=p)
	{
		while(e<=p && a[p]>=k)
			p--;
		swap(a[e],a[p]);
		while(e<=p && a[e]<=k)
			e++;
		swap(a[e],a[p]); 
	} //循环处理后a[e]=k;
	QuickSort(a[],i,e);  //分治成两部分
	QuickSort(a[],p,j);
}

void main()
{
	int a[];
	int a_size=sizeof(a)/sizeof(int);
	QuickSort(a[],0,a_size);
}