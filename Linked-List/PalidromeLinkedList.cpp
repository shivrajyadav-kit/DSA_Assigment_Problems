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

Node* reverseList(Node* head){
    Node* prev =  NULL;
    auto cur = head;

    while(cur != NULL){
        auto next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    } 
    return prev;
}


bool isPalindrome(Node* head)
{
    if(head == NULL || head->next == NULL) return true;

    auto slow = head;
    auto fast = head->next;

    while(fast != NULL and fast->next !=  NULL){
        slow = slow->next;
        fast = fast->next->next;

    }
    auto second = reverseList(slow->next);

    auto first = head;

    while(second){
        if(first->val != second->val) return false;

            first = first->next;
            second = second->next;
    }
    return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    cout << (isPalindrome(ll.head) ? "true" : "false") << '\n';

    return 0;
}