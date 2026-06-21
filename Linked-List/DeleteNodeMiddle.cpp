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

/*
    Implement only the function below.
    Delete the middle node and return the head of the modified list.
    The middle node is the floor(n / 2)-th node (0-indexed).
*/

Node* deleteMiddle(Node* head)
{
  auto slow = head;
  auto fast = head;
  Node* prev = NULL;
  while(fast != NULL and fast->next != NULL){
    fast = fast->next->next;
    prev= slow;
    slow = slow->next;
  }
  if(prev != NULL)
    prev->next = slow->next;
  
  else
    head = head->next;
  
  delete slow;
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

    ll.head = deleteMiddle(ll.head);

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