#include<iostream>
using namespace std;

int main(){
	int x,y;
	int *p1,*p2;
	x=5;
	y=10;
	
	p1=&x;
	*p1=7;
	p2=&y;
	x=*p2;
	x=y;
	
	p1=&y;
	p2=&x;
	p2=&x;
	p1=p2;
	*p2=6;
	
	cout<<"Nilai a :"<<x<<endl<<endl;
	cout<<"Nilai b :"<<y<<endl<<endl;
	cout<<"Nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Nilai p2 :"<<*p2<<endl<<endl;
	
	return 0;
}
