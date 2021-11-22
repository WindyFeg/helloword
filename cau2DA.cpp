#include<queue>
#include<map>
#include<iostream>

using namespace std;
class Node {
public:
    Node(){}
    Node(int p, string val) {
        this->p = p;
        this->val = val;
    }
    
    string val;
    int p;
    Node* next = NULL;
};

class PrinterQueue
{
    // your attributes
   Node* root = NULL;
    
public:
    // your methods

    void addNewRequest(int priority, string fileName)
    {
        // your code here
        Node* newNode = new Node(priority, fileName);
        
        Node* cur = root;
        
        if(!root) {
            root = newNode;
            return;
        }
        
        if(root->p < priority) {
            newNode->next = root;
            root = newNode;
        } else {
            while(cur->next && priority <= cur->next->p) {
                cur = cur->next;
            }
            newNode->next = cur->next;
            cur->next = newNode;
        }
        
    }

    void print()
    {
        // your code here
        // After some logic code, you have to print fileName with endline 
    
         if(!root) {
            cout << "No file to print" << endl;
            return;
        }
        
        Node* cur = root;
        root = root->next;
        cout << cur->val << endl;
        delete cur;
    }
};