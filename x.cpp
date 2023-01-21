#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,cr,ne,de;
    int k=100000;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n==0)
     cout<<"heloo mr null"<<endl;
     else
     cout<<"get out"<<endl;
     int c;
     cout<<"enter your choice"<<endl;
     cout<<" 0->balance\n 1->credit\n 2->debit\n"<<endl;
     cin>>c;
     switch(c)
     {
       case 0:
       cout<<"your balance is :";
       cout<<k<<endl;
       break;

       case 1:
       cout<<"amount you want to credit :";
       cin>>cr;
       ne=k+cr;
       cout<<" your new balance is :"<<ne<<endl;
       break;
        
        case 2:
        cout<<"amount you want to debit :";
        cin>>de;
        ne=k-de;
        cout<<"your new balance is :"<<ne<<endl;
        break;
     }
     cout<<"you want receipt"<<endl;
     cout<<"Yes or No "<<endl;
     bool rec;
     cin>>rec;
     if (rec)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;

    cout<<"Thanks for using our services"<<endl;
    cout<<" NOW WE ARE USING ALL CONCEPT WHICH WE LEARN EARLIER"<<endl;
    int arr[10];
    int size=5;
    cout<<"enter the elements of an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the elements of an array"<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    
     return 0;

}