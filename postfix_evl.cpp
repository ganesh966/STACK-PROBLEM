#include<bits/stdc++.h>
using namespace std;

int operate(int a,int b,char c)
{
    if(c=='^')return a^b;
    else if(c=='*')return a*b;
    else if(c=='/')return a/b;
    else if(c=='+')return a+b;
    else return a-b;
    

}

int evaluate(string str)
{
    stack<int> st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='^' || str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-')
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            int val=operate(b,a,str[i]);
            st.push(val);
        }
        else
        {
            st.push(str[i]-'0');  
        }
        
    }
    return st.top();
}