#include<iostream>
#include<cstdlib>
using namespace std ;
class bintree
{
    struct node
    {
        int info ;
        node *left;
        node *right;
    } *root;
    typedef struct node *NODE ;
public:
    bintree()
    {
        root = NULL ;
    }
    void ins(int item)
    {
        NODE temp , cur , prev ;
        temp = new node;
        temp->info = item ;
        temp->left = NULL ;
        temp->right = NULL ;
        if(root == NULL)
        {
            root = temp ;return ;
        }
        prev=NULL;
        cur = root;
        while(cur!=NULL)
        {
            prev = cur ;
            if(cur->info  == item)
            {
                cout<<"Entered variable already exists "<<endl ;
                delete temp ;
                return ;
            }
            if(item < cur->info)
                cur = cur->left;
            else
                cur = cur->right ;
        }
        if(item < prev->info)
            prev->left = temp;
        else
            prev->right = temp;
        }
        void preorder(NODE root)
        {
            if(root==NULL)
            {
                return ;
            }
            cout<<root->info<<"<<";
            preorder(root->left);
            preorder(root->right);
        }
        void inorder(NODE root)
        {
            if(root==NULL)
            {
                return ;
            }
            inorder(root->left);
            cout<<root->info<<"<<";
            inorder(root->right);
        }
        void postorder(NODE root)
        {
            if(root==NULL)
            {
                return ;
            }
            postorder(root->left);
            postorder(root->right);
            cout<<root->info<<"<<";
        }
        void traversal()
        {
            int ch;
            cout<<"Enter 1.Inorder \n 2.Preorder \n 3.Postorder traversals \n";
            cin>>ch;
            switch(ch)
            {
                case 1 : inorder(root);break;
                case 2 : preorder(root);break;
                case 3 : postorder(root);break;
                default : cout<<"Invalid input \n";
            }
        }

};
int main()
{
    int ch , item ;
    bintree a ;
    for(;;)
    {
        cout<<"Enter the choice 1.Insertion \n 2.Traversal \n";
        cin>>ch;
        switch(ch)
            {
                case 1 :cout<<"Enter the item to be inserted \n";
                        cin >> item ;
                        a.ins(item) ; break ;
                case 2 : a.traversal();break ;
                case 3 : exit(0);break;
                default:cout<<"Invalid input \n";
            }
    }
}
