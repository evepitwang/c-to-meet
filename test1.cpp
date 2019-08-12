#include<iostream>
#include<string>
using namespace std;

class Student {
public: 
	
	string school;
	string age;
	Student();
	void display();
	void  set_name(string &pname);
	const string&  get_name() ;
	virtual 
private:
	string name ;
};
Student::Student(): name("wangpeiqi"), school("anhui unistry"),age("29"){

}
void Student::set_name(string &pname)
{
	name = pname;

}
const string& Student::get_name() 
{
	return name;

}
class Mid_Student : public Student
{
public: 
	string classmate
		;
};


void Student::display()
{
	cout<<"age = "<<age<<endl<<"name = "<<name<<endl;
}
int main()
{
		Mid_Student m1;
		cout<<m1.get_name()<<endl;
		cout<<"----------"<<endl;
		string s2("hepingchang ");
		string s3("liyuru");
		m1.set_name(s2);
		
		cout<<m1.get_name()<<endl;
		const string &temp = m1.get_name();
			cout<<"----------"<<endl;
		cout<<m1.get_name()<<endl;
		m1.display();
		cout<<"***************************"<<endl;







}






