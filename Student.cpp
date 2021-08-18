#include "Student.h"
#include <iostream>
#include<cstring>
// Assign studentId and name
void Student::assignDetails(int sId,char sname[]) {
  studentID =sId;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID:"<<studentId<<endl;
  cout<<"Student Name:"<<name<<endl;
}
