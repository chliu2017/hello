//mergeSort  归并排序
#include <iostream>
#include<cmath>
using namespace std;

void merge(int a[],int i,int j,int k,b[])  //将排好序的a[i]-a[j]驭a[j+1]-a[k]aaa合并
{
	int n=0;
	int ap=i,ae=j+1;
	while(ap<=j && ae<=k)
	{
		if(a[ap] < a[ae])
		{
			b[n++]=a[ap++];
		}
		else
		{
			b[n++]=a[ae++];
		}
	}
	if(ap>j)
	{
			while(ae<=k)
			{
				b[n++]=a[ae++]；
			}
	}
	else
	{
		while(ap<=j)
		{
			b[n++]=a[ap++];
		}
	}
}

void mergeSort(int a[],int i,int j,int b[])
{
	if(i<j)
	{
		int n=a+(i+j)/2;
		mergeSort(a[],i,n,b[]);
		mergerSort(a[],n+1,j,b[]);
		merge(a[],i,n,j,b[]);
	}
	else
		return;
}

void main()
{
	int a[10];
	int b[];
	mergeSort(a[],0,9,b[]);
}








