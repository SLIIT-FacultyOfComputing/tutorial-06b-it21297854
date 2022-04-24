#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,const char na[20])
{
  studentId=id;
  strcpy(name,na);
}
// Display StudentId and Name
void Student::display() {
  cout << "Student ID : "<<studentId<<endl;
  cout << "Name : "<< name;
}
