#include<iostream>
using namespace std;
int main()
{
    int num[5],i;
    for(i=0; i<5; i++)
    {
        cout<<"Enter an integer: ";
        cin>>num[i];
    }
    cout<<"The array in actual order: ";
    for(i=0; i<5; i++)
        cout<<num[i]<<" "<<endl;
    cout<<"The array in reverse order: ";
    for(i=4; i>=0; i--)
        cout<<num[i]<<" ";
    return 0;
}
