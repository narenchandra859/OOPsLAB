#include<iostream>
#include<string>
using namespace std;
class student {
	private:
		string name;
		string rollno;
		double marks[3];
		char grade;
	public:
		student() {
			name="STUDENT_NAME";
			rollno="ROLL_NO";
			for(int i=0;i<3;i++)
				marks[i]=0;
			grade='X';
		}
		void read();
		void print();
		void cal();
};
void student::read() {
	cout<<"\nEnter Name, USN, and then marks of 3 subjects : ";
	cin>>name>>rollno;
	for(int i=0;i<3;i++) 
		cin>>marks[i];
	cal();
}
void student::print() {
	cout<<"\nName : "<<name<<"\nRoll no : "<<rollno<<"\nMarks in 3 subjects : ";
	for(int i=0;i<3;i++) 
		cout<<" "<<marks[i];
	cout<<"\nGrade : "<<grade<<endl;
}
void student::cal() {
	double x=0;
	for(int i=0;i<3;i++) 
		x+=marks[i];
	x/=3;
	if(x>90)
		grade='A';
	else if(x>80)
		grade='B';
	else if(x>70)
		grade='C';
	else if(x>60)
		grade='D';
	else
		grade='E';
}
int main() {
	student s[3], *p;
	p=s;
	cout<<"\nEnter the 3 students details : ";
	for(int i=0;i<3;i++,p++) {
		cout<<"For student "<<i+1;
		p->read();
	}
	p=s;
	for(int i=0;i<3;i++,p++) {
		cout<<"For student "<<i+1;
		p->print();
	}
	return 0;
}

