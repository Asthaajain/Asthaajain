#include <iostream>
using namespace std;

int main()
{
    char s1[100],s2[100];
    
    cout<<"\n\t Enter String 1 : ";
    cin>>s1;
    cout<<"\n\t Enter String 2 : ";
    cin>>s2;
    
    int l1=-1,l2=-1,i=0;
    char ch=1;
    
    while(ch!='\0'){
		ch=s1[i];
		i++;
		l1++;
	}
	
	i=0;
	ch=1;
	
	while(ch!='\0'){
		ch=s2[i];
		i++;
		l2++;
	}
	
	char s3[l1+l2];
	
	i=0;
	
	while(i<l1){
		s3[i]=s1[i];
		i++;
	}
	
	i=0;
	
	while(i<l2){
		s3[i+l1]=s2[i];
		i++;
	}	
	cout<<"\n\t Concatination of 2 string: "<<s3<<"\n\n";	
}
