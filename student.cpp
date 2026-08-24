#include<iostream>
using namespace std;
class akshaya prayaga
{
	// data members 
	private:
	         int roll;
	         char name[40];
	         double cgpa;
public: 
      void accept()
     {
		cout<<"enter roll number:";
		cin>>roll_number;
		cout<<"enter name:";
		cin>> ws;
		cin.getline(name,20);
		cout<<"enter cgpa:";
		cin>>cgpa;
     }
       void display()
      {
	    cout<<"roll number="<<roll_number<<"\t";
	    cout<<"name="<<name<<"\t";
        cout<<"CGPA="<<cgpa<<endl;
      }
};
int main ()
{
	student s;
	s.accept();
	s.display();
	return 0;
}