#include <iostream>
#define MAX_STACK_SIZE 10

using namespace std;

struct Element{
	int data;
	Element *next;
};

class My_Stack {
    private:
	Element *head=NULL;
	
	public:
    bool isEmpty(){
        if(head==NULL){
        	return true;}
        	else return false;
		}

    void push(int input_data){
			Element *temp= new Element;
	    	temp->data=input_data;
	        temp->next=head;
	        head=temp;
	        cout<<"Push data berhasil\n\n"<<endl;
	}
	    
    void pop(){
    	if(isEmpty()==false){
    		Element *temp= new Element;
    		temp=head;
			head=head->next;
			delete temp;
			cout<<"Pop data berhasil\n\n"<<endl;
        } else {
            cout<<"Stack Kosong"<<endl<<endl;
        }
    }
    
    void print(){
    	Element *tambahan;
    	tambahan=head;

        if (isEmpty()==false){
            while(tambahan!=NULL){
            	cout<<tambahan->data<<endl;
            	tambahan=tambahan->next;
			}
        } else {
            cout<<"Stack Kosong"<<endl<<endl;
        }
    }
    
    int viewTop(){
    	Element *top=head;
        return top->data;
    }
};

int main()
{
    My_Stack s;
    int menu;
	int input_data;
	do{
		cout<<"================================================================================";
		cout<<"\t\t\tImplementasi Stack dengan Linked List"<<endl;
		cout<<"================================================================================\n"<<endl<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.View Top"<<endl;
		cout<<"4.View All Data "<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"\nPilihan : ";
		cin>>menu;
		switch(menu){
			case 1:cout<<endl;
			cout<<"Masukkan angka : ";
			cin>>input_data;
			cout<<endl;
			s.push(input_data);break;

			case 2:
			cout<<endl;
			s.pop();
			break;

			case 3:
			cout<<endl;
			if(s.isEmpty()==false){
			cout<<s.viewTop()<<endl;
			}else{
				cout<<"Stack kosong"<<endl<<endl;
				}
			cout<<endl;break;

			case 4:
			cout<<endl;
			s.print();
			break;

		}
	}
	while (menu!=5);
}
