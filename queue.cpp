#include<iostream>
using namespace std;

class Q
{
	int q[11];
	int front, rear;
	int N=10;
	
	public:
		Q()
		{
			front = NULL;
			rear = NULL;
		}
		void enq();
		void deq();
		void dis();
};
    void Q::enq() 
    {
    	int value;
    	cout<<"\n\t Enter Value: ";
    	cin>>value;
    	
    	if(((front == 1 && rear == N)) || (front == rear+1))
    	{
    		cout<<"\n\t Error: OVERFLOW";
    		//break;
		}
		if(front==NULL)
		{
			front=1;
			rear=1;
		}
		else
		if(rear == N)
		    rear=1;
		else
		{
			rear=rear+1;
			q[rear]=value;
		}    
	}
	
	void Q::deq()
	{
		//int value;
		//cout<<"\n\t Enter Value";
		//cin>>value;
		if(front==NULL)
		{
			cout<<"\n\t Error: UNDERFLOW";
			//break;
		}
		//value = [front]
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
		if(front==N)
		    front=1;
		else
		    front = front+1;
		    
	}
	
	void Q::dis()
	{
		cout<<"\n\t";
  	for(int i=front;i<=rear;i++)
  	    cout<<q[i]<<endl;
	}
	
	int main()
  {
  	Q Q;
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
					Q.enq();
					break;
				}
				case 2:
				{
					Q.deq();
					break;
				}
				case 3:
				{
					Q.dis();
					break;
				}
			}
	}while(a!=4);
    return 0;
 }
