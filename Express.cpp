#include<iostream>
#include<cstring>

using namaspace std;

int factor_value();  //yinzijisuan
int term_value();    //xiang jisuan
int express_value();

int express_value()
{
	int result=term_value();
	char c=cin.peek();
	bool more=true;
	which(more)
	{
		if(c=='+')
		{
			result+=term_value();
		}
		else if(c=='-')
		{
			result-=term_value();
		}
		else
		{
		    //cin.get();
			more=false;
		}
	}
	return result;
}

int term_value()
{
	int result=factor_value();
	char c=cin.peek();
	while(true)
	{
		if(c=='*' || c=='/')
		{
			if(c=='*')
			{
				result*=factor_value();
			}
		}
		else
		break;
	}
	return result;
}

int factor_value()
{
	int result=0;
	char c=sin.peek();
	if(c=='(')
	{
		result=express_value();
	}
	else 
	{
		char ch=cin.peek();
		while(ch != ')')
		{
			char op=cin.get();
			result=result*10+op-'0';
		}
		cin.get();
	}
	return result;
}




