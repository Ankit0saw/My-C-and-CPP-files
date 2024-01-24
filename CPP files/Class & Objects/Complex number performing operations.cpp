// In this program, you need to enter two complex nos and the output will be the addition, subtraction, multiplication and division of these two.
// made this using class and object concepts


#include<iostream>
using namespace std;

class complexNo{
public:
		float real;
		float imaginary;
		
 void taking_input(){
		cout<<"enter real part:"<<endl;
		cin>>real;
		cout<<"enter imaginary part:"<<endl;
		cin>>imaginary;
	}

	void display(){
		cout<<real<<"+"<<imaginary<<"i"<<endl;
	}

	void sum(complexNo c1,complexNo c2){
		real= c1.real+c2.real;
		imaginary= c1.imaginary + c2.imaginary;
	}

	void difference(complexNo c1,complexNo c2){
		real= c1.real-c2.real;
		imaginary= c1.imaginary - c2.imaginary;
	}

	void product(complexNo c1,complexNo c2){
		real= (c1.real * c2.real) - (c1.imaginary * c2.imaginary); 
		imaginary= (c1.imaginary * c2.real)+(c1.real * c2.imaginary);
	}

	void divide(complexNo c1,complexNo c2){
		int temp=(c2.real*c2.real) + (c2.imaginary * c2.imaginary);
		real=((c1.real * c2.real) + (c1.imaginary * c2.imaginary))/temp;
		imaginary= ((c1.imaginary * c2.real)-(c1.real * c2.imaginary))/temp;
	}

};

int main(){
	complexNo c1,c2,c3,c4,c5,c6;
	cout<<"Enter 1st complex No :"<<endl;
	c1.taking_input();
	c1.display();
	cout<<"Enter 2nd complex No :"<<endl;
	c2.taking_input();
	c2.display();
  
	cout<<"RESULT of sum"<<endl;
	c3.sum(c1,c2);
	c3.display();
  
	cout<<"RESULT of difference"<<endl;
	c4.difference(c1,c2);
	c4.display();
  
	cout<<"RESULT of product"<<endl;
	c5.product(c1,c2);
	c5.display();
  
	cout<<"RESULT of divide"<<endl;
	c6.divide(c1,c2);
	c6.display();
	return 0;
}
