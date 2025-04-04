#include<iostream>
#define MAX_SIZE 100
using namespace std;

class Stack{
	public :
		void push (int value) ;
		void pop () ;
		void top () ;
		bool isEmpty() ;
		bool isFull() ;
};
class Arraystack : public Stack{
	private :
		
		int arr[MAX_SIZE];
		int topindex;
		
		public :
			Arraystack () : topindex(-1){
			}
			void push(int value) {
				if(isFull()){
					return 0;
				}
				arr[++topindex] = value;
			}
			void pop() {
			if(isEmpty()) {
					throw "Stack underflow!" ;
				}
			return arr[topindex--];
			}
			void top()  {
				if(isEmpty()){
					throw "Stack is Empty!";
				}
				return arr[topindex];
			}
			bool isEmpty()  {
				return topindex = -1;
			}
			bool isFull()  {
				return topindex =MAX_SIZE -1;
			}
};

int main() {
	cout<<"Testing array stack :"<<endl;
	Arraystack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout<<"Top : "<<s.top()? "Stack overflow!" : "Not Full"<< endl;
	cout<<"Popped : "<<s.pop()<< endl;
	cout<<"Popped : "<<s.pop()<< endl;
	cout<<"Is Empty? "<<s.isEmpty()? "Yes" : "No" << endl;
	return 0;


}
