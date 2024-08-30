#include<iostream>
#include<conio.h>
using namespace std;
void calculateGPA()
{
	int NoOfSubs;
	double credits[NoOfSubs];
	double points[NoOfSubs];
	double sum=0;
	double total;
	double totalCredits=0;
	system("cls");
	cout<<"--------------------------------"<<endl;
	cout<<"          GPA Calculator        "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Enter No Of Subjects: ";
	cin>>NoOfSubs;
	cout<<endl;
	for(int i=1;i<=NoOfSubs;i++)
	{
		cout<<"Enter credits of subjects:"<<i<<":";
		cin>>credits[i];
		cout<<"Enter points of subjects:"<<i<<":";
		cin>>points[i];
		cout<<"-----------------------------"<<endl;
	}
	for(int i=1;i<=NoOfSubs;i++)
	{
		total=credits[i]*points[i];
		sum +=total;
	}
	for(int i=1;i<=NoOfSubs;i++)
	{
		totalCredits += credits[i];
	}
	cout<<endl<<endl;
	cout<<"total points: "<<sum<<endl;
	cout<<"total Credits: "<<totalCredits<<endl;
	cout<<"total GPA: "<<sum/totalCredits<<endl;
	
	cout<<"\n Press any key to go back to Main Menu...";
	getch();
}
void calculateCGPA()
{
	int NoOfSems;
	system("cls");
	cout<<"--------------------------------"<<endl;
	cout<<"         GPA Calculator         "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Enter no of semesters: ";
	cin>>NoOfSems;
	double semesters[NoOfSems];
	double semTotal=0;
	for(int i=1;i<=NoOfSems;i++)
	{
		cout<<"Enter semester #"<<i <<"GPA:";
		cin>>semesters[i];
	}
	for(int i=1;i<=NoOfSems;i++)
	{
		semTotal += semesters[i];
	}
	cout<<"Your CGPA :"<<semTotal/NoOfSems <<endl;
	
	cout<<"\n Press any key to go back to Main Menu...";
	getch();
}
void instructions()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"How to Calculate GPA and CGPA :"<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"GPA = sum of (credit*point) / total of credits "<<endl;
	cout<<"CGPA = sum of GPA / number of semesters "<<endl;
	cout<<endl<<endl;
	cout<<"Grade - Point Table : "<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"\tGrade \t\t 4.0 scale"<<endl;
	cout<<"-------------------------------------"<<endl<<endl;
	cout<<"\tA+ \t\t 4.0 scale "<<endl;
	cout<<"\tA \t\t  4.0 scale "<<endl;
	cout<<"\tA- \t\t 3.7 scale "<<endl;
	cout<<"\tB+ \t\t 3.3 scale "<<endl;
	cout<<"\tB  \t\t 3.0 scale "<<endl;
	cout<<"\tB- \t\t 2.7 scale "<<endl;
	cout<<"\tC+ \t\t 2.3 scale "<<endl;
	cout<<"\tC  \t\t 2.0 scale "<<endl;
	cout<<"\tC- \t\t 1.7 scale "<<endl;
	cout<<"\tD+ \t\t 1.3 scale "<<endl;
	cout<<"\tD  \t\t 1.0 scale "<<endl;
	cout<<"\tD- \t\t 0.7 scale "<<endl;
	cout<<"\tF  \t\t 0.0 scale "<<endl;
	
	cout<<"\n Press any key to go back to menu...";
	
	getch();
}
int main()
{
	do
	{
		
		system("cls");
		cout<<"----------------------------------"<<endl;
		cout<<"         GPA Calculator           "<<endl;
		cout<<"----------------------------------"<<endl;
		cout<<"1. Calculate GPA"<<endl;
		cout<<"2. Calculate CGPA"<<endl;
		cout<<"3. How to Caculate GPA?"<<endl;
		cout<<"4. Quit"<<endl<<endl;
		cout<<"Select Option:";
		char op=0;
		cin>>op;
		
		if(op=='1') calculateGPA();
		else if(op=='2') calculateCGPA();
		else if(op=='3') instructions();
		else if(op=='4') exit(0);
	}while(1);
	return 0;
	getch();
	
}