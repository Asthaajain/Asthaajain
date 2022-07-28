#include<iostream>
using namespace std;

 class stack
 {
 	int s[10];
 	int top;
 	
 	public:
 		stack()
 		{
 			top = -1;
		}
	void push();
	void pop();
	void display();
 };
 
 void stack::push()
 {
 	int value;
 	    cout<<"\n\t Enter Value:";
 	    cin>>value;
 	    if(top<9)
 	    {
 	    	top++;
 	    	s[top] = value;
		 }
		else
		    cout<<"\n\t STACK OVERFLOW"; 
 }
 void stack::pop()
 {
 	if(top<0)
 	   cout<<"\n\t STACK EMPTY";
 	else
 	{
 		cout<<"\n\t VALUE DELETED: "<<s[top];
 		top--;
	 }
 }
  void stack::display()
  {
  	cout<<"\n\t";
  	for(int i=top;i>=0;i--)
  	    cout<<s[i]<<endl;
  }
  
  int main()
  {
  	stack s;
  	int a;
  	do
  	{
  		cout<<"\n\tMAIN MENU";
  		cout<<"\n\t1. INSERT \n\t2. DELETE \n\t3. DISPLAY \n\t4. EXIT";
  		cout<<"\n\t Enter a Choice: ";
  		cin>>a;
  		    switch(a)
  		    {
  		    	case 1:
				{
					s.push();
					break;
				}
				case 2:
				{
					s.pop();
					break;
				}
				case 3:
				{
					s.display();
					break;
				}
			}
	}while(a!=4);
    return 0;
 }
 
