#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream x, y, z;
	string a, b, c, t;
	cout<<"\nEnter the name of 1st file(with extension) : ";
	cin>>a;
	cout<<"\nEnter the name of 2nd file(with extension) : ";
	cin>>b;
	cout<<"\nEnter the name of the file where merged file will be stored(no ext) : ";
	cin>>c;
	x.open(a,ios::in|ios::binary);
	z.open(c,ios::out|ios::binary);
	y.open(b,ios::in|ios::binary);
	while(!x.eof()){
		getline(x,t);
		z<<t<<"\n";
	}
	while(!y.eof()){
		getline(y,t);
		z<<t<<"\n";
	}
	z.close();
	y.close();
	x.close();
	x.open(c,ios::in|ios::binary);
	cout<<"\nMerged file is : ";
	while(!x.eof()){
		getline(x,t);
		cout<<t<<endl;
	}
	x.close();
	return 0;
}
