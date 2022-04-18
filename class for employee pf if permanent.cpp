#include <iostream>
using namespace std;
class employee{
    int employeeid;
    string employeefname;
    string employeelname;
    string status;
    double salary;

    public:
        void setinfo(){
            cout << "employee id: " << endl;
            cin >> employeeid;
            cout << "employee first name: " << endl;
            cin >> employeefname;
            cout << "employee last name: " << endl;
            cin >> employeelname;
            cout << "status permanent or temporary: " << endl;
            cin >> status;
            cout << "salary of employee: " << endl;
            cin >> salary; 
        }
        void getinhand(){
            if(status=="permanent"){
                double pf= (salary*0.1);
                double newsalary=salary-pf;
                cout << "inhand salary: " << newsalary << endl;
            }
            else{
                cout << "inhand salary: " << salary << endl;
            }
        }
};
int main(){
    employee e;
    cout << "set info for employee: " << endl;
    e.setinfo();

    cout << endl;
    e.getinhand();
    return 0;
}