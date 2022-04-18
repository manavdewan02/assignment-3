#include <iostream>
#include <string>
using namespace std;
class Student{
    int roll_number;
    string name;
    string institute_name;
    string course;
    int age;

    public: 
        void setdetails(){
            cout << "Enter students roll number: " << endl;
            cin >> roll_number;
            cout << "Enter students name: " << endl;
            cin >> name;
            cout << "Institute Name: " << endl;
            cin >> institute_name;
            cout << "Course opted: " << endl;
            cin >> course;
            cout << "Enter age of student: " << endl;
            cin >> age;
        }

        void getdetails(){
            cout << "Roll number: " << roll_number << endl;
            cout << "Name: " << name << endl;
            cout << "Institute Name: " << institute_name << endl;
            cout << "Course: " << course << endl;
            cout << "Age: " << age << " years" << endl;
        }

};
int main(){
    Student s1,s2;
    cout << "set details for first student: " << endl;
    s1.setdetails();
    cout << endl << "set details for second student: " << endl;
    s2.setdetails();
    cout << endl << "first student's info: " << endl;
    s1.getdetails();
    cout << endl << "second student's info: " << endl;
    s2.getdetails();
    return 0;
}