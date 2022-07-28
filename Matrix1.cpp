#include <iostream>

using namespace std;

void add( int A[][2], int B[][2])
{
	int arr[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		arr[i][j]= A[i][j]+B[i][j];
	}
	
	cout<<"\n Addition of 2 Matrix is \n";
	for(int i=0;i<2;i++){
	   	for(int j=0;j<2;j++)
	   	   	cout<<arr[i][j]<<" ";
	   	cout<<endl;
	   }
	cout<<endl;
}

void sub( int A[][2], int B[][2])
{
	int arr[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		arr[i][j]= A[i][j]-B[i][j];
	}
	
	cout<<"\n Subtraction of 2 Matrix is \n";
	for(int i=0;i<2;i++){
	   	for(int j=0;j<2;j++)
	   	   	cout<<arr[i][j]<<" ";
	   	cout<<endl;
	   }
	cout<<endl;
}

void mul(int A[][2], int B[][2])
{
    int M[2][2],i,j;
    cout<<"\n Product of 2 Matrix is ";
    for(i=0; i<2; ++i)
    {
        cout<<"\n";
        for(j=0; j<2; j++)
        {
            M[i][j]=0;
            for(int k=0; k<2; k++)
                M[i][j] = M[i][j] + A[i][k] * B[k][j];

            cout<<M[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"\n";
}

int main() {

    int arr1[2][2],arr2[2][2];

    cout<<"\n Enter the Array A "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cin>>arr1[i][j];
        cout<<endl;
    }

    cout<<"\n Enter the Array B "<<endl;
    for(int x=0; x<2; x++)
    {
        for(int y=0; y<2; y++)
            cin>>arr2[x][y];
        cout<<endl;
    }

    int ch=5;

    do
    {
        cout<<"\n\t 1. Addition";
        cout<<"\n\t 2. Subtraction";
        cout<<"\n\t 3. Multiplication";
        cout<<"\n\t 4. Exit \n\t"<<endl;
        cout<<"\n\t Enter Your Choice:\n\t ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            add(arr1,arr2);
            break;

        case 2:
            sub(arr1,arr2);
            break;

        case 3:
            mul(arr1,arr2);
            break;

        case 4:
            exit(0);
            break;

        default:
            cout<<"\n\t INVALID CHOICE!";
            break;

        }
    } while(ch!=4);


}
