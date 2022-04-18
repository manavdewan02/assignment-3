#include <iostream>
#include <cstdlib>
using namespace std;
class Check{
    int a;
    public:
        void setinput(){
            cout << "Enter a number: " << endl;
            cin >> a;
        }
        void evenodd(){
            if(a%2==0){
                cout << "Even Number" << endl;
            }
            else{
                cout << "Odd Number" << endl;
            }
        }
        void positivenegative(){
            if(a<0){
                cout << "negative number" << endl;
            }
            else if(a==0){
                cout << "its zero niether positive nor negative" << endl;
            }
            else{
                cout << "positive number" << endl;
            }
        }
        void absolutevalue(){
            if(a>=0){
                cout << "absolute value: " << a << endl;
            }
            else{
                cout << "absolute value: " << abs(a) << endl;
            }
        }
};
int main(){
    Check c;
    c.setinput();
    c.evenodd();
    c.positivenegative();
    c.absolutevalue();
    return 0;
}