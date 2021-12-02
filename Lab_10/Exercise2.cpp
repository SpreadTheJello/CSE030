#include <iostream>
#include "Queue_char.h"

using namespace std;

int main(){
	Queue queue;
	cout<<"Function Call\t\t"<<"Output\t\t"<<"Front  Queue  Rear"<<endl;
	

	cout<<"dequeue()\t\t";
	try
	{
		if(queue.isEmpty()){
			throw "exception";
		}
		else{
			cout<<queue.dequeue();
			cout<<"\t\t";
			queue.print();
			cout<<endl;
		}
	}
	catch(...){
		cout<<"exception"<<endl;
	}
	

	cout<<"enqueue(D)\t\t";
	queue.enqueue('D');
	cout<<"\t\t";
	queue.print();
	cout<<endl;


	cout<<"enqueue(A)\t\t";
	queue.enqueue('A');
	cout<<"\t\t";
	queue.print();
	cout<<endl;


	cout<<"dequeue()\t\t";
	try{
		if(queue.isEmpty()){
			throw "exception";
		}
		else{
			cout<<queue.dequeue();
			cout<<"\t\t";
			queue.print();					
			cout<<endl;
		}
	}
	catch(...){
		cout<<"exception"<<endl;
	}


	cout<<"size()\t\t\t";
	cout<<queue.size()<<"\t\t";
	queue.print();
	cout<<endl;


	cout<<"enqueue(D)\t\t";
	queue.enqueue('D');
	cout<<"\t\t";
	queue.print();
	cout<<endl;


	cout<<"isEmpty()\t\t";
	if(!queue.isEmpty()){
		cout<<"false\t\t";
	}
	else{
		cout<<"true\t\t";
	}
	queue.print();
	cout<<endl;


	cout<<"front()\t\t\t";
	try{
		if(queue.isEmpty())	{
			throw "exception";
		}
		else{
			cout<<queue.front();
			cout<<"\t\t";
			queue.print();					
			cout<<endl;
		}
	}
	catch(...){
		cout<<"Exception"<<endl;
	}


	cout<<"enqueue(T)\t\t";
	queue.enqueue('T');
	cout<<"\t\t";
	queue.print();
	cout<<endl;


	cout<<"front()\t\t\t";
	try{
		if(queue.isEmpty()){
			throw "exception";
		}
		else{	
			cout<<queue.front();
			cout<<"\t\t";
			queue.print();					
			cout<<endl;
		}
	}
	catch(...){
		cout<<"exception"<<endl;
	}
}