#include<iostream>

using namespace std;
//Cho tập hợp gồm n điểm đen và n điểm 
//trắng cách đều nhau. Hãy mô tả thuật toán
// kết nối một điểm đen với một điểm trắng 
//sao cho tổng khoảng cách là nhỏ nhất.

class node
{
    public:
    int data;
    node *l;
    node *r;

    node(): data(0), l(NULL), r(NULL){};
    node(int a):l(NULL), r(NULL){this->data = a;}
    ~node(){};

    public:
    void insert(node* &root ,int a)
    {
        node* NodeAdd = new node(a);
        if(root == NULL)
        {
            root = NodeAdd;
            return;
        }
        
        
            node* temp = root;
        
        while(true)
        {
            if(a < temp->data)
            {

                if(temp->l == NULL)
                {
                    temp->l = NodeAdd;
                    return;
                }
                temp = temp->l;
            }

            if(a > temp->data)
            {
                
                if(temp->r == NULL)
                {
                    temp->r = NodeAdd;
                    return;
                }
                temp = temp->r;
            }
            
        }
    }
};

int main()
{
    node n, *root = NULL;
    n.insert(root, 9);
    n.insert(root, 1);
    n.insert(root, 6);
    n.insert(root, 4);
    
}