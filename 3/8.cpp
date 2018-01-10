#include <iostream>
using namespace std;
int main(){
	int po1, sh1, pe1;
	int po2, sh2, pe2;
	int poa, sha, pea;
	char dummy;
	char lpCtr;
	do{
		cout<<"Enter currency as POUND.SHILLING.PENNY"<<endl;
		cout<<"Enter the first amount: ";
		cin>>po1>>dummy>>sh1>>dummy>>pe1;
		cout<<"Enter the second amount: ";
		cin>>po2>>dummy>>sh2>>dummy>>pe2;
		pea = (pe1 + pe2)%12;
		sha = (sh1 + sh2 + (pe1 + pe2)/12 )%20;
		poa = (po1 + po2 + (sh1 + sh2 + (pe1 + pe2)/12)/20);
		cout<<"Total is: "<<poa<<'.'<<sha<<'.'<<pea<<'.';
		cout<<endl<<"Do you want to continue(y/n): ";
		cin>>lpCtr;
	}while(lpCtr!='n'||lpCtr!='N');
	cout<<endl;
	return 0;
}
