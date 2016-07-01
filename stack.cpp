#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* link;
};

class Stack 
{
    private:                 
        Node* top;
        int count;
            
  public:        
      ListStack() 
      {            
          top = NULL;
          count = 0;        
    }        
    
    void Push(int element)
    { 
        Node* temp = new Node();
        temp->data = element;
        temp->link = top;
        top = temp;     
        count++;          
    }        
            
    int Pop()
    {            
        if ( top == NULL ) 
            {            
                cout<<"Empty stack"<<endl;           
            }        
        else
            {
                int ret = top->data;    
                Node* temp = top->link;
                delete top;
                top = temp;
                count--;
                return ret;        
            }       
    } 
    
    int Top() 
    {            
        return top->data;        
    }
    
    int Size() 
    {
        return count;
    }
    
    bool isEmpty() 
    {
        return ( top == NULL ) ? true : false;
    }
};

int main()
{    
    Stack s; 
        int choice=1,push;
    while(choice!=0){
        cout<<"####-Menu-####\n1.For Push Function\n2.For Pop Function\n3.To display top stack element\n4.To view size of stack.\n0.To Exit\n";
        cin>>choice;
        switch(choice){
            case 0:
            cout<<"BBie\n\n";
            break;
            case 1:
            cout<<"Enter element to be pushed :";
            cin>>push;
            s.Push(push);
            break;
            case 2:
            if ( s.isEmpty() ) 
            {
            cout << "Stack is empty" << endl;    
            }
            else{
            cout << s.Pop() << endl;
            }
            break;
            case 3:
            cout << s.Top() << endl; 
            break;
            case 4:
            cout<<s.Size()<<endl;
            break;
            default:
            cout<<"Invalid selection.\n";
            break;

        }

    }
    return 0;
}
