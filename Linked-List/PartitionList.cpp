#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList {
public:

    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node* tail = nullptr;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            if(!head)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
    }
};



Node* partition(Node* head, int x)
{
    auto dummy1 = new Node(-1);
    auto tail1 = dummy1;
    auto dummy2 = new Node(-1);
    auto tail2 = dummy2;

    auto ptr = head;

    while(ptr !=  NULL){

        if(ptr->val <x){
            tail1->next = ptr;
            tail1 = ptr;
        }else{
            tail2->next = ptr;
            tail2 = ptr;
        }

        ptr = ptr->next;
    }
    tail1->next = NULL;
    tail2->next = NULL;

    tail1->next = dummy2->next;

    head = dummy1->next;
    delete dummy1;
    delete dummy2;
    return head;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int x;
    cin >> x;

    ll.head = partition(ll.head, x);

    Node* cur = ll.head;

    bool first = true;

    while(cur)
    {
        if(!first)
        {
            cout << ' ';
        }

        first = false;

        cout << cur->val;

        cur = cur->next;
    }

    cout << '\n';

    return 0;
}