#include<bits/stdc++.h>
using namespace std;

void next_greater(int arr[],int n)
{
	stack<int> st;
	st.push(0);
	for(int i=1;i<n;i++)
	{
		if(arr[st.top()]<arr[i])
		{
			while(!st.empty() && arr[st.top()]<arr[i])
			{
				arr[st.top()]=arr[i];
				st.pop();
			}
			
		}
		st.push(i);
	}

	if(!st.empty())
	{
		while(!st.empty())
		{
			arr[st.top()]=-1;
			st.pop();
		}
	}
    // print */
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//
void input()
{
	int n;
	cout<<"Enter the no. of elemant: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elemants: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	next_greater(arr,n);
}
