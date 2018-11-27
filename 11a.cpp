#include<iostream>
using namespace std;
class A{
	public:
		A(){cout<<"\nA constructor called";}
		~A(){cout<<"\nA destructor called";}
};
class B:public A{
        public:
                B(){cout<<"\nB constructor called";}
                ~B(){cout<<"\nB destructor called";}
};     
class C:public B{
        public:
                C(){cout<<"\nC constructor called";}
                ~C(){cout<<"\nC destructor called";}
};     
class D{
        public:
                D(){cout<<"\nD constructor called";}
                ~D(){cout<<"\nD destructor called";}
};     
class E{
        public:
                E(){cout<<"\nE constructor called";}
                ~E(){cout<<"\nE destructor called";}
};     
class F:public D, public E{
        public:
                F(){cout<<"\nF constructor called";}
                ~F(){cout<<"\nF destructor called";}
};    
int main() {
	cout<<"\n\t\tClass A, B, C are in MULTILEVEL inheritance : A-->B-->C \n";
	cout<<"\nC-D call for A : ";
	{ A a; }
	cout<<"\nC-D call for B : ";
	{ B b; }
	cout<<"\nC-D call for C : ";
	{ C c; }
	cout<<"\n\t\tClass D, E, F are in MULTPLE inheritance D-->F<--E \n";
	cout<<"\nC-D call for D : ";
        { D d; }
        cout<<"\nC-D call for E : ";
        { E e; }
        cout<<"\nC-D call for F : ";
        { F f; }
	return 0;
}
