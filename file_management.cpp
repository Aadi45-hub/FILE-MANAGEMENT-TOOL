#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
using namespace std;
fstream file1,file2;
class Employee
{
    protected:
    int eid,salary;
    string name;
    public:
    void menu();
};
class Employeeinfo: public Employee{
    public:
void getinfo();
void putinfo();
void writedata();
void readdata();
void appenddata();
};
Employeeinfo emp;
void Employeeinfo::getinfo()
{
    cout<<"\n\t\tEnter Employee ID";
    cin>>eid;
    cout<<"\n\t\tEnter Employee Name";
    cin>>name;
    cout<<"\n\t\tEnter Employee Salary";
    cin>>salary;
}
void Employeeinfo::putinfo()
{
  cout<<setw(28)<<eid;
  cout<<setw(28)<<name;
  cout<<setw(28)<<salary<<endl;
}
void Employeeinfo::writedata()
{
    
    file1.open("Employee.txt",ios::out|ios::binary);
        emp.getinfo();
        file1.write((char *)&emp,sizeof(emp));
        file1.close();
        menu();
}
void Employeeinfo::readdata()
{
    file1.open("Employee.txt",ios::in | ios::binary);
    if(!file1)
    {
        cout<<"\n\tFile not exist";
        exit(0);

    }
    else{
        file1.read((char *)&emp,sizeof(emp));
        while(!file1.eof())
    {
           emp.putinfo();
           file1.read((char *)&emp,sizeof(emp));

    }
    }
    file1.close();
    menu();
}
void Employeeinfo::appenddata()
{

    char ch='y';
    file1.open("Employee.txt",ios::app | ios::binary);
    while(ch=='y' || ch=='Y')
    {
        emp.getinfo();
        file1.write((char*)&emp,sizeof(emp));
        cout<<"\n\t\t\t\t If you Want to add another Employee information press...(Y/N)";
        cin>>ch;
    }
    file1.close();
    menu();

}

void Employee::menu()
{
    Employeeinfo E3;
    int choice;
    cout<<"\n\t\t----CPP Application to read,write or append data ----";
    cout<<"\n\t\t----:File Operation Menu:----";
    cout<<"\n\t\tI.Write data into the file";
    cout<<"\n\t\tII.Append data to the file";
    cout<<"\n\t\tIII.Read data  from the file";
    cout<<"\n\t\tEnter Your choice ";
    cin>>choice;
    switch(choice)
    {
        system("cls");
        case 1:E3.writedata();
               break;
        case 2:E3.appenddata();
               break;
        case 3:
        {
        cout<<"\n\t\t\t-----------------------------------------------------------------------"<<endl;
        cout<<setw(29)<<"EmpId"<<setw(28)<<"EmpName"<<setw(27)<<"EmpSalary"<<endl;
        cout<<"\t\t\t-----------------------------------------------------------------------"<<endl;
        E3.readdata();
        }
               break;
        default:cout<<"\n Enter only 1,2,3 and if u want to exit enter 4";                     
    }
}
int main()
{
    Employee E1;
    E1.menu();
    return 0;
}

