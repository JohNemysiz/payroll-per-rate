#include <iostream>

using namespace std;

int main()
{
    int numberofemployees,rate;
    int total;
    cout << "Number of employees" << endl;
    cin>>numberofemployees;
    cout<<"Rate"<<endl;
    cin>>rate;
    cout<<"total"<<endl;
    total=numberofemployees*rate;
    cout<<"Number of employees:"<<numberofemployees<<endl;
    cout<<"Rate:"<<rate<<endl;
    cout<<"Total:"<<total<<endl;

    return 0;
}
