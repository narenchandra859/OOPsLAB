#include<iostream>
using namespace std;
class A {
	protected:
		int k;
	public:
		A(int i=0):k(i){cout<<"\nIn A class!";}
		void read() {
			cout<<"\nEnter number to find square : ";
			cin>>k;
		}
		void square() {
			cout<<"\nSquare = "<<k*k;
		}
};
class B:virtual public A {
	protected:
		int l;
	public:
		B(){
			l=10;
			cout<<"\nIn B class!";
		}
		void print1() {
			cout<<"\nIn B, value = "<<l;
		}
};
class C:virtual public A {
	protected:
		int m;
	public: 
		C(){
			m=20;
			cout<<"\nIn C class!";
		}
		void print() {
			cout<<"\nIn C, value = "<<m;
		}
};
class D: public B, public C{
	private:
		int n;
	public:
		D() {
			cout<<"\nIn D class!";
			n=30;
		}
		void op() {
		       cout<<"\nIn D, value = "<<n<<endl;
		}
};
int main() {
	D d;
	d.read();
	cout<<"\nSqaure is a function of class A! ";
	d.square();
	return 0;
}
