#include<iostream.h>
class Myclass{
protected:
	int a1[2];
private:
	int a2;
public:
	Myclass();
	void set(int a1, int a2);
//	void operator =(const Myclass &original);
	void print();
};

Myclass::Myclass(){
	a1[0]=0;
	a1[1]=1;
	a2=2;
}

void Myclass::set(int a1, int a2){
	this->a1[0]=a1;
	this->a1[1]=a1;
	this->a2=a2;
}

//void Myclass::operator =(const Myclass &original){
//	a1=original.a1 + 100;
//	a2=original.a2 + 100;
//}

void Myclass::print(){
	cout<<a1[0]<<"   "<<a1[1]<<"   "<<a2;
}

void main(){
	Myclass m1;
	Myclass m2;
	cout<<endl<<"Here is m1:"<<endl;
	m1.set(3,4);
	m1.print();

	m2=m1;
	cout<<endl<<"Here is m2:"<<endl;
	m2.print();

	cout<<endl;

}
