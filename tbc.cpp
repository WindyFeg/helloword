#include<iostream>

using namespace std;

int main()
{
    float i = 0, tong=0;
    while(i < 13)
    {
        int b;
        cin>>b;
        tong+=b;
        i++;

    }
    cout<<(tong/13) * 0.15 + 0.69;
}