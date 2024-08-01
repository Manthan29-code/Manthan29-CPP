#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    queue<int> q;
    //enqueue operation
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // to get front item 
    cout<<q.front()<<"\t";
    // to get last item 
    cout<<q.back()<<"\t"<<endl;

    // size 

    cout<<q.size()<<endl;

    // copy queue
    queue <int> cq(q);

    // traverse all items
    while(cq.empty()==false)
    {
        cout<<cq.front()<<" "<<cq.back()<<endl;
        // dequeue operation
        cq.pop();
    }
    cout<<endl<<"size of copy queue="<<cq.size();
    cout<<endl<<"size of original queue="<<q.size();

    // to reverse queue(could be used in stack implementation)
    reverse(&(q.front()),&(q.back()) +1 );
    queue <int> rq(q);

    // traverse all items
    while(rq.empty()==false)
    {
        cout<<rq.front()<<" "<<rq.back()<<endl;
        // dequeue operation
        rq.pop();
    }

   //
// all this operation take const timecomplexity 0(1)
}