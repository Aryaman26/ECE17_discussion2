#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    int a,b,c,e;
    cout<<"enter Fizz number"<<endl;
    cin>>a;
    cout<<"enter Buzz number"<<endl;
    cin>>b;
    cout<<"enter the increment size"<<endl;
    cin>>c;
    cout<<"enter the number of numbers"<<endl;
    cin>>e;
    for(i=1;i<=e;i=i+c)
    {
        if(i%a==0)
        {
            cout<<"Fizz,";
        }
        else
            if(i%b==0)
            {
                cout<<"Buzz,";
            }
            else
                cout<<i<<",";

    }
    return 0;

}
