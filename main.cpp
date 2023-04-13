#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    Queue<int>* queue1 = new Queue<int>();
    cout << "Length queue1 = " << queue1->length() << endl;
    queue1->add(234);
    queue1->add(2312214);
    queue1->add(14);
    cout << "Length queue1 = " << queue1->length() << endl;
    while(!queue1->isEmpty())
    {
        cout << "Peeked element: " << queue1->peek() << endl;
    }

    Queue<string>* queue2 = new Queue<string>();
    cout << "Length queue2 = " << queue2->length() << endl;
    queue2->add("Zakablukov");
    queue2->add("Egor");
    queue2->add("Mikhailovich");
    cout << "Length queue2 = " << queue2->length() << endl;
    while(!queue2->isEmpty())
    {
        cout << "Peeked element: " << queue2->peek() << endl;
    }

    delete queue1;
    delete queue2;

    return 0;
}
