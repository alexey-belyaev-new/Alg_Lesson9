#include <iostream>

using namespace std;

const int qsize = 100;

char Queue[qsize];
int start = 0;
int last = -1;

bool enqueue(char data) {
    if (last < qsize) {
        Queue[++last] = data;
        return true;
    }
    else {
        cout << "Queue is full" << endl;
        return false;
    }
}
char dequeue() {
    if (start <= last) {
        return Queue[start++];
    }
    else {
        cout << "Queue is empty";
        return -1;
    }
}


int main()
{
    enqueue('a');
    enqueue('b');
    enqueue('c');
    enqueue('d');
    while (last >= start) {
        cout << dequeue();
    }
}

