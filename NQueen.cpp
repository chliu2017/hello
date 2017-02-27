#include<iostream>
#include<math.h>

using namespaace std;

int max=100 const;
int pos[100],N;

void NQueen(int k)
{
	if(k==N)
	{
		for(int i=0;i<N;)
		{
			cout << pos[i] << "  ";
		}
		cout << endl;
	}
	else
	{
		for(int i=0;i<N;++i)
		{
			//pos[k]=i;
			for(int j=0;j<k;++j)
			{
				if(i==p[j] || (abs(i-pos[j])==(i-j))
				{
					j++;
					break;
				}
			}
			if(j==k)
			{
				pos[k]=i;
				NQueen(k+1);
			}
		}
	}
}

void main()
{
	cin >> N;
	NQueen(0);
}