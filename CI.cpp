//Compound interst using outside declaration
#include<iostream>
#include<math>
using namespace std;
class CI
{
    public:
        int p,r,t,CI,amount;
    public:
        void getdata();
        {
            cout<<"Enter the initial principal value";
            cin>>p;
            cout<<"Enter the rate";
            cin>>r;
            cout<<"Enter the number of time period";
            cin>>t;
            amount = p * (pow((1 + r/100),t));
            CI=amount-p;
        }
        void putdata();
};
void demo::putdata()
{
    cout<<"\n p is="<<p;
    cout<<"\n r is="<<r;
    cout<<"\n p is="<<t;
    cout<<"\n amount is="<<amount;
    cout<<"\n CI is="<<CI;
}
void main()
{
    demo d;
    d.getdata();
    d.putdata();
}
