#include <iostream>
using namespace std;

void feeSubmit(string rn[], int paid[], int pend[],int size ){
	string r;
	int fee;
	cout<<"Enter RollNo: ";
	cin>>r;
	cout<<"Enter Fee: ";
	cin>>fee;
	bool found=false;
	for(int i=0;i<size; i++){
		if(r==rn[i]){
			found=true;
			paid[i] = paid[i] + fee;
			pend[i] = pend[i] - fee;
			cout<<"Fee Submitted Successfuly!"<<endl;
			break;
		}
		
	}
	if(!found){
		cout<<"Invalid Roll Number!"<<endl;
	}
}

void feeRec(string rn[], int pkg[], int paid[], int pend[], int size){
	string r;
	cout<<"Enter RollNo: ";
	cin>>r;
	bool found=false;
	for(int i=0; i<size; i++){
		if(r==rn[i]){
			found=true;
			cout<<"Total Package: "<<pkg[i]<<endl;
			cout<<"Total Paid Fee: "<<paid[i]<<endl;
			cout<<"Pending Fee: "<<pend[i]<<endl;
			break;	
		}
	}
	if(!found){
		cout<<"Invalid RollNo"<<endl;
	}
		
}

int main(){
	string rollNo[]={"cs101","cs102","cs103"};
	int size = sizeof(rollNo)/sizeof(rollNo[0]);
	
	int pkg[]={50000,60000,70000};
	int paid[]={0,0,0};
	int pending[]={50000,60000,70000};
	int choice;
	while(true){
		cout<<"Fee Management System"<<endl;
		cout<<"*********************"<<endl;
		cout<<"1.Submit Fee."<<endl;
		cout<<"2.Fee Record."<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Enter Choice: ";
		cin>>choice;
		
		if(choice==1){
			system("cls");
			feeSubmit(rollNo,paid,pending,size);
		}
		
		else if(choice==2){
			system("cls");
			feeRec(rollNo,pkg,paid,pending,size);
		}
		
		else if(choice==3){
			cout<<"Best of Luck!"<<endl;
			break;
		}
		else{
			cout<<"Invalid Input!"<<endl;
		}
	}
}
