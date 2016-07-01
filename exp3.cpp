#include <iostream>
using namespace std;
class student{
public:
	char a[20],b[10];
	int rollno;
	void get_student_details(){
		cout<<"Enter rollno :";
		cin>>rollno;
		cout<<"Enter name of student :";
		cin>>a;
		cout<<"Enter gender of student M/F :";
		cin>>b;
	}
	void display_student_details(){
		cout<<"Roll no. :"<<rollno<<endl;
		cout<<"Name of student : "<<a<<endl;
		cout<<"Gender of student M/F : "<<b<<endl;
	}

};
class internal_exam : public virtual student{
public:
	double int_marks[6];
	void get_int_marks(){
		cout<<"Enter internal marks of 6 subjects\n";
		for(int i=0;i<6;i++){
			cin>>int_marks[i];
		}
	}
	void display_int_marks(){
		cout<<"Internal marks :";
		for (int i = 0; i < 6; i++)
		{
			cout<<int_marks[i]<<endl;
		}
	}
};
class external_exam : public virtual student{
	public:
	double ext_marks[6];
	void get_ext_marks(){
		cout<<"Enter External marks of 6 subjects\n";
		for(int i=0;i<6;i++){
			cin>>ext_marks[i];
		}
	}
	void display_ext_marks(){
		cout<<"External marks :";
		for (int i = 0; i < 6; i++)
		{
			cout<<ext_marks[i]<<endl;
		}
	}
};
class result : public internal_exam,public external_exam{
public:
	result(){
		get_student_details();
		get_int_marks();
		get_ext_marks();

	}
	void display_results(){
		cout<<"Student Details : \n";
		display_student_details();
		cout<<endl;
		display_int_marks();
		cout<<endl;
		display_ext_marks();
	}
};
int main(){
	result ob1;
	ob1.display_results();
}