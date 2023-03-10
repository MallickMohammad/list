#include <iostream>
#include "unsortedtype.h"
#include"unsortedtype.cpp"

using namespace std;
  class studentInfo{
    public:
        string studentName;
        int studentId;
        float studentCgpa;
        studentInfo(int id,string name,float cgpa)
        {
        studentId = id;
        studentName = name;
        studentCgpa = cgpa;
    }
    void print()
    {
    cout<<studentId<<endl;
    cout<<studentName<<endl;
    cout<<studentCgpa<<endl;
    }
      bool operator==(const studentInfo& other) const {
        return studentId == other.studentId;
    }
};

int main()
{

    UnsortedType<int> list1;
    list1.InsertItem(5);
    list1.InsertItem(7);
    list1.InsertItem(6);
    list1.InsertItem(9);
    list1.PrintList();
    list1.PrintLength();
    list1.InsertItem(1);
    list1.PrintList();
    int x;bool found;
    x=4;
    list1.RetrieveItem(x,found);

    if(found )
    {
        cout<<x;
    }
    else{
        cout<<"Item not found"<<endl;
    }
    x=5;
    list1.RetrieveItem(x,found);
    if(found)
    {
        cout<<x<<endl;
    }
    else{
        cout<<"Item not found"<<endl;
    }
    x=9;
     list1.RetrieveItem(x,found);
    if(found)
    {
        cout<<x<<endl;
    }
    else{
        cout<<"Item not found"<<endl;
    }
    x=10;
     list1.RetrieveItem(x,found);
    if(found)
    {
        cout<<x<<endl;
    }
    else{
        cout<<"Item not found"<<endl;
    }
    list1.IsFull();
    if(list1.IsFull()==0)
    {
        cout<<"list is  not full"<<endl;
    }
    else
        {
            cout<<"List is full"<<endl;
        }
    list1.DeleteItem(5);
    if(list1.IsFull()==0)
    {
        cout<<"List is  not full"<<endl;
    }
    else
        {
            cout<<"List is full"<<endl;
        }
    list1.DeleteItem(1);
    list1.PrintList();
    list1.DeleteItem(6);
    list1.PrintList();
    UnsortedType<studentInfo> list2;
    studentInfo student1(15234,"Jon",2.6);
    studentInfo student2(13732,"Tyrion",3.9);
    studentInfo student3(13569,"Sandor",1.2);
    studentInfo student4(15467,"Ramsey",3.1);
    studentInfo student5(16285,"Arya",3.1);
    list2.InsertItem(student1);
    list2.InsertItem(student2);
    list2.InsertItem(student3);
    list2.InsertItem(student4);
    list2.InsertItem(student5);
    list2.DeleteItem(student3);
    list2.RetrieveItem(student3,found);
    if(found )
    {
        cout<<student3.studentId<<endl;
    }
    else{
        cout<<"Item not found"<<endl;
    }
    list2.PrintList();

    return 0;
}










