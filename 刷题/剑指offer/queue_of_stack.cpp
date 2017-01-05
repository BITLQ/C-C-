/*************************************************************************
    > File Name: queue_of_stack.cpp
    > Author: 
    > Mail: 
    > Created Time: Fri 30 Dec 2016 03:56:28 AM PST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

// jianzhi offer  one_of_7

template<typename T>
class Myqueue
{
public:
    Myqueue(void){};
    ~Myqueue(void){};

    // achive insert in the queue Tail
    void appendTail(const T& node)
    {
        if(!s2.empty())
            s2.push(node);

        s1.push(node);
    }
    
    //achive delete end of queue
    T deleteHead()
    {
        if(!s2.empty())
        {
            T tmp = s2.top();
            s2.pop();
            return tmp;
        }

        if(s1.empty())
        {
           // throw new exception("queue is empty!");
        }

        if(s1.size() > 1)
        {
            s2.push(s1.top());
            s1.pop();
        }

        T tmp = s1.top();
        s1.pop();
        return tmp;
    }



    int Size()
    {
        return s1.size()+s2.size();
    }

private:
    stack<T> s1;
    stack<T> s2;
};

int main()
{
    Myqueue<int> t;
    t.appendTail(1); 
    t.appendTail(2);
    t.appendTail(3);
    t.appendTail(4);

    cout<<t.Size()<<endl;

    t.deleteHead();

    cout<<t.Size()<<endl;

    t.deleteHead();
    cout<<t.Size()<<endl;
    //for(int i = 0; i < t.Size(); ++i)
    //{

        //cout<<""
    //}
    
   return 0;
}
