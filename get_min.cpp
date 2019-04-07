#include<bits/stdc++.h>
using namespace std;
stack<int> stm;

void push1(int *min,int val)
{
	if(stm.empty())
	{
		stm.push(val);
        *min=val;
	}
	else
	{
		if(val<*min)
		{
			stm.push(2*val-(*min));
			*min=val;
		}
		else
		{
			stm.push(val);
		}

	}
}

int pop1(int *min)
{
	if(!stm.empty())
	{
	 int r=max(*min,stm.top());
	 if(stm.top()<(*min))
	 {
		*min=2*(*min)-stm.top();
	 }
	  stm.pop();
	 return r;
	
    }
    else
    {
    	//cout<<"Stack Underflow"<<endl;
    	return -1;
    }
}

void menu()
{
int min;

l:
cout<<"1. PUSH "<<endl;
cout<<"2. POP "<<endl;
cout<<"3. GET MIN ELEMENT"<<endl;
cout<<"ENTER UR CHOICE.."<<endl;
int op2;
cin>>op2;
switch(op2)
 {
 	case 1:
 	{
 	  cout<<"Enter value which u want to push"<<endl;
 	  int val;
 	  cin>>val;
 	  push1(&min,val);
 	  break;
 	}
 	case 2:
 	{
 	  int res=pop1(&min);
 	  res==-1?cout<<"Stack Underflow"<<endl:cout<<"Value "<<res<<" poped sucessfully"<<endl;
 	  break;
 	}
 	case 3:
 	{
 	  cout<<"Min elemant= "<<min<<endl;
		break; 
 	}		
  }
	cout<<"press 0 to continue or 1 to goto main menu"<<endl;
	int ch;
	cin>>ch;
	if(ch==0)
	{
		goto l;
	}
}
