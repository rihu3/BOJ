#include <iostream>
using namespace std;

class Document {
public:
    int id;
    int priority;
};

Document queue[10000];
int front = 0;
int rear = -1;

Document queue_front()
{
    return queue[front];
}

void push(Document doc)
{
    rear++;
    queue[rear] = doc;
}

Document pop()
{
    return queue[front++];
}

void empty()
{
    front = 0;
    rear = -1;
}

int max_priority() {
    int result = 0;
    for (int i = front; i <= rear; i++) {
        if (queue[i].priority > result) {
            result = queue[i].priority;
        }
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            Document doc;
            doc.id = j;
            cin >> doc.priority;
            push(doc);
        }
        int count = 0;
        bool end = false;
        while (!end)
        {
            while (queue_front().priority < max_priority())
            {
                push(pop());
            }
            Document check = pop();
            if (check.id == m)
            {
                cout << count + 1 << endl;
                empty();
                end = true;
            }
            count++;
        }
    }
    return 0;
}
