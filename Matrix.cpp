#include<iostream>
using namespace std;

void add( int A[4][4], int B[4][4])
{
	int i,j, arr[4][4];
	for(i=0;i<4;i++)
	{
		arr[i][j]=0;
		arr[i][j]= A[i][j]+B[i][j];
		j++;
	}
	cout<<"\n Addition of Matrix is ";
	   for(i=0;i<4;i++)
	   {
	   	    for(j=0;j<4;j++)
	   	    {
	   	    	cout<<arr[i][j]<<" ";
			   }
	   	        cout<<endl;
	   }
	cout<<"\n\n";
}

void sub( int A[4][4], int B[4][4])
{
	int i,j, arr[4][4];
	for(i=0;i<4;i++)
	{
		arr[i][j]=0;
		arr[i][j]= A[i][j]-B[i][j];
		j++;
	}
	cout<<"\n Subtraction of Matrix is ";
	   for(i=0;i<4;i++)
	   {
	   	    for(j=0;j<4;j++)
	   	    {
	   	    	cout<<arr[i][j]<<" ";
			   }
	   	        cout<<endl;
	   }
	//cout<<"\n\n\";
}

void mul( int A[4][4], int B[4][4])
{
	int M[4][4],i,j;
	cout<<"\n Product of 2 Matrix is ";
	for(i=0;i<4;++i)
	{
		cout<<"\n";
		for(j=0;j<4;j++)
		{
			M[i][j]=0;
			for(int k=0;k<4;k++)
			    M[i][j] = M[i][j] + A[i][j] * B[i][j];
			    cout<<M[i][j]<<" ";
		}
	}
	cout<<"\n\n";
}

int main()
{
	int A[4][4], B[4][4];
	int ch,x,y,i,j;
	   cout<<"\n Enter the Array A "<<endl;
	   for(i=0;i<4;i++)
	   {
	   	    for(j=0;j<4;j++)
	   	    cin>>A[i][j];
	   }
	   	   
	   cout<<"\n The Entered Array A "<<endl;
	   for(i=0;i<4;i++)
	   {
	   	    for(j=0;j<4;j++)
	   	    {
	   	    	cout<<A[i][j]<<" ";
			   }
	   	        cout<<endl;
	   }
	   
	   cout<<"\n Enter the Array B "<<endl;
	   for(x=0;x<4;x++)
	   {
	   	    for(y=0;y<4;y++)
	   	    cin>>A[x][y];
	   }
	   
	   cout<<"\n The Entered Array B "<<endl;
	   for(x=0;x<4;x++)
	   {
	   	    for(y=0;y<4;y++)
	   	    {
	   	    	cout<<A[x][y]<<" ";
			   }
	   	        cout<<endl;
	   }
	   
	   do
	   {
	   	cout<<"\n\t Enter Your Choice: ";
	   	cout<<"\n\t 1. Addition";
	   	cout<<"\n\t 2. Subtraction";
	   	cout<<"\n\t 3. Multiplication";
	   	cout<<"\n\t 4. Exit \n\t"<<endl;
	   	cin>>ch;
	   	
	   	switch(ch)
	   	{
	   		case 1: add(A,B);
	   		break;
	   		
	   		case 2: sub(A,B);
	   		break;
	   		
	   		case 3: mul(A,B);
	   		break;
	   		
	   		case 4: exit(0);
	   		break;
	   		
	   		default: cout<<"\n\t INVALID CHOICE!";
	   		break;
	   		
		   }
	   }while(ch!=4);
	   return 0;
}
