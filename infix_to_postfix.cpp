#include<bits/stdc++.h>
using namespace std;

int priority(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else
    return 1;

}

string inf_to_postfix(string str)
{
    string output;
    stack<char> st;
    for(int i=0;i<str.size();i++)
    {

        if(str[i]=='^' || str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-')
        {
            if(!st.empty() && priority(st.top())>=priority(str[i]))
            {
                while(!st.empty() && st.top()!='(' && priority(st.top())>=priority(str[i]))
                {
                    output+=st.top();
                    st.pop();
                }
            }
            st.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='(')
        {
            if(str[i]==')')
            {
            while(st.top()!='(')
            {
                output+=st.top();
                st.pop();
            }
            st.pop();
            }
            else
            {
                st.push(str[i]);
            }

        }
        else
        {
            output+=str[i];
        }
    }
    while(!st.empty())
    {
        output+=st.top();
        st.pop();
    }
    return output;

}