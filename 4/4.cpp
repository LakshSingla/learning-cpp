#include <iostream>
#include <iomanip>
using namespace std;
struct Employee{
	int empNumber;
	float empCompensation;
}emp1, emp2, emp3;
int main(){
	cout<<"Enter the details of Employee 1(id-compensation): ";
	cin>>emp1.empNumber>>emp1.empCompensation;
	cout<<"Enter the details of Employee 2(id-compensation): ";
	cin>>emp2.empNumber>>emp2.empCompensation;
 	cout<<"Enter the details of Employee 3(id-compensation): ";
	cin>>emp3.empNumber>>emp3.empCompensation;
	cout<<setw(8)<<"EmpId"<<setw(8)<<"EmpNo"<<endl;
	cout<<setw(8)<<emp1.empNumber<<setw(8)<<emp1.empCompensation<<endl;
	cout<<setw(8)<<emp2.empNumber<<setw(8)<<emp2.empCompensation<<endl;
	cout<<setw(8)<<emp3.empNumber<<setw(8)<<emp3.empCompensation<<endl;
	cout<<endl;
	return 0;
}
