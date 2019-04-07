#include<bits/stdc++.h>
#include "nextgreater.cpp"
#include "get_min.cpp"
#include "infix_to_postfix.cpp"
#include "postfix_evl.cpp"

int main()
{
 l:
 cout<<"*************MAIN MENU***************"<<endl;
 cout<<"  PRESS 1.SIMPLE STACK OPERATION "<<endl;
 cout<<"  PRESS 2.NEXT GREATER ELEMENT IN ARRAY "<<endl;
 cout<<"  PRESS 3.GET MIN ELEMENT IN STACK"<<endl;
 cout<<"  PRESS 4.INFIX TO POSTFIX"<<endl;
 cout<<"  PRESS 5.POSTFIX EVALUATION "<<endl;
 cout<<"  PRESS ANY OTHER KEY TO EXIT...."<<endl;
 cout<<"ENTER UR CHOICE: "<<endl;
 int op;
 cin>>op;
 switch(op)
 {
 	case 2:
 	{
 		input();
 		break;
 	}
 	case 3:
 	{
 		menu();
 		break;
 	}
	 case 4:
	 {
		 string str;
		 cout<<"Enter expression: "<<endl;
		 cin>>str;
		 string result=inf_to_postfix(str);
		 cout<<"Postfix Expression: "<<result<<endl;
		 break;
	 }
	 case 5:
	 {
		 string str1;
		 cout<<"Enter postfix Expression: "<<endl;
		 cin>>str1;
		 int result=evaluate(str1);
		 cout<<"Value= "<<result<<endl;
		 break;
	 }
	 default:
	 return 0;
 }
 goto l;

}