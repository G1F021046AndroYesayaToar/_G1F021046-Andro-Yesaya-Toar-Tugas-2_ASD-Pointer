#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int *p1,*p2,*p3;
	a=10;
	cout<<"Nilai a :"<<a<<endl<<endl;
	b=15;
	cout<<"Nilai b :"<<b<<endl<<endl;
	p1=&b;
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	p2=p1;
	cout<<"Nilai p2 :"<<*p2<<endl<<endl;
	c=27;
	
	cout<<"Nilai c :"<<c<<endl<<endl;
	p1=&c;
	
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	a=*p1;
	
	cout<<"Nilai a :"<<a<<endl<<endl;
	p3=&b;
	
	cout<<"Nilai p3 :"<<*p3<<endl<<endl;
	*p2=8;
	
	cout<<"Nilai p2 :"<<*p2<<endl<<endl;
	p1=&a;
	
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	p2=&b;
	
	cout<<"Nilai p2 :"<<*p2<<endl<<endl;
	*p1=c;
	
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	a=*p2;
	
	cout<<"Nilai a :"<<a<<endl<<endl;
	b=6;
	
	cout<<"Nilai b :"<<b<<endl<<endl;
	p3=&b;
	
	cout<<"Nilai p3 :"<<*p3<<endl<<endl;
	p3=&c;
	
	cout<<"Nilai p3 :"<<*p3<<endl<<endl;
	*p1=*p3;
	
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	a=b;
	
	cout<<"Nilai a :"<<a<<endl<<endl;
	*p2=*p3;
	
	cout<<"Nilai p2 :"<<*p2<<endl<<endl;
	
	return 0;
}
