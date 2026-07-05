#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};


class LinkedList {
public:
    Node* head;
    int _size;

    LinkedList() {
        this->head = NULL;
        _size = 0;
    }
    void addAtHead(int x){
        auto newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        _size++;
    }
    void deleteAtHead(){
        auto temp = head;
        head = head->next;
        delete temp;
        _size--;
    }
    int getHead(){
        return head->val;
    }
    int size(){
        return _size;
    }
};

class MyStack {
    LinkedList list;
public:

    MyStack()
    {
    }

    void push(int x)
    {
       list.addAtHead(x);
    }

    int pop()
    {
        if (list.size() == 0) return -1;
        int ans = top();
        list.deleteAtHead();
        return ans;
    }

    int top()
    {
        if (list.size() == 0) return -1;
        return list.getHead();
    }

    bool empty()
    {
        return list.size() == 0;
    }

    int size()
    {
        return list.size();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyStack st;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
        {
            cout << st.pop() << '\n';
        }
        else if (op == "top")
        {
            cout << st.top() << '\n';
        }
        else if (op == "empty")
        {
            cout << (st.empty() ? "true" : "false") << '\n';
        }
        else // size
        {
            cout << st.size() << '\n';
        }
    }

    return 0;
}