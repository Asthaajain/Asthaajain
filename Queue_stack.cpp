#include <iostream>
#include <stack>
using namespace std;

struct Que {

    stack<int> s1, s2;

    void eq(int x) {

        s1.push(x);
        cout<<"Enqueue :"<<x<<endl;

    }

    void dq() 
	{

        if(s2.empty()) 
		{

            if(s1.empty()==1)
                cout<<"Queue Underflow"<<endl;

            else 
			{
                while(!s1.empty())
				{
                    s2.push(s1.top());
                    s1.pop();
                }
                cout<<s2.top()<<endl;
                s2.pop();
            }
        }

        else {
            cout<<s2.top()<<endl;
            s2.pop();
        }

    }
};

int main() {

    Que q;

    q.eq(10);
    q.eq(20);
    q.eq(30);
    q.eq(40);

    q.dq();
    q.dq();
    q.dq();
    q.dq();
    q.dq();

    return 0;

}
