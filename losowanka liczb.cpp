#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int a;
int main2();
int main1();
int main()
{
    cout<<"Do ktorej liczby losowac \n"<<endl;
    cin>>a;
    
    srand(time(NULL));
    int time=rand();

    int b=time%a+1;
   
    cout<<"Twoj los to - "<<b;
    main1();
    return 0;
} 
int main1()
{

    cout<<"\n"<<"Jeszcze raz losowac? \n 1/0"<<endl;
    int q;
    cin>>q;
    if(q==1)
    {      
       main2();
    }
    if(q!=1)
    {
       cout<<"GOODBYE";
    }
    return 0;
}
int main2()
{
    srand(time(NULL));
    int time=rand();
    int b=time%a+1;
   
    cout<<"Twoj los to - "<<b;
    main1();
    return 0;
} 
