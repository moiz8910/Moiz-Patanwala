#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

  struct student
    {
        
        int rollNo;
        float marks;      
    };

    int main(){
        student s1,s2;
        student *ptr;
        ptr=&s2;
        cout<<"Enter first student's roll no. ";
        cin>>s1.rollNo;                           
        cout<<"\nEnter first student's marks" ;
        cin>>s1.marks;
        cout<<"\nEnter second student's roll no. ";  
        cin>>(*ptr).rollNo;
        cout<<"\nEnter second student's marks ";
        cin>>ptr->marks;                          
        cout<<"\nFirst student's rollNo. : "<<s1.rollNo<<"\nand Marks: "<<s1.marks;
        cout<<"\nSecond student's rollNo. : "<<s2.rollNo<<"\nand Marks: "<<ptr->marks;
        getch();
    }