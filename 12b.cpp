#include<iostream>
#include<fstream>
using namespace std;
int main() {
	string s;
	cout<<"\nEnter the file name : ";
	cin>>s;
	fstream x, y;
	x.open(s,ios::in);
	y.open("OutputTest.txt",ios::out|ios::binary);
	char c;
	int pos;
	for(c=x.get();!(x.eof());c=x.get()){
		if(c=='a'|c=='A'|c=='e'|c=='E'|c=='i'|c=='I'|c=='o'|c=='O'|c=='u'|c=='U') {
			pos=x.tellg();
			y<<"Character "<<c<<" is found at "<<pos<<"\n";
		}
	}
	y.close();
	y.open("OutputTest.txt",ios::in|ios::binary);
	cout<<"\nThe output file is : \n";
	while(!y.eof()){
		getline(y,s);
		cout<<s<<endl;
	}
	return 0;
}
