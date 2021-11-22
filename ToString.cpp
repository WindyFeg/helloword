#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

string toString() {
    cout<< setw(15) <<"(Free(89))" <<"---->[end]" <<"---->Doc(0)"<<endl;
    cout<< setw(8) <<"|" << setw(26) << "^"<<endl;
    cout<< setw(8) <<"v" << setw(26) << "|"<<endl;
    cout<< setw(12) <<"[start]"<< setfill('-')<<setw(14) <<">(busy(200))" <<"--->[Change]"<<endl;
}                                               //leng +3            
    //(Free(3))--->[End]--->(Doc(0))
    //   |                     ^
    //   v                     |
    //[start]--->(busy(0))-->[Change]

//(wait(0))--->[start]--->(inside(0))--->[change]--->(done(0))

            //    +--------(Free(3))<-------+
            //    |                         |
            //    v                         |
//(wait(5))--->[start]---->(busy(0))---->[change]--->(done(0))
//                |                         ^
//                v                         |
//              (busy(0))--->[Change]--->(Doc(0))
int main()
{
    int arr[20] = {1,2,20,4,80,99};
    cout << setfill(' ')<< setw(5) << "123456789"<< endl;
    cout<< endl;
    toString();
    cout<< endl;
}