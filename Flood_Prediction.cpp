#include<iostream>
#include <ctime>
int main()
{
    time_t my_time = time(NULL);
    printf("%s", ctime(&my_time));
    time_t now = time(0);
    tm *ltm = localtime(&now);
int i,c,m,temp=0;
char ch;
float p;
float arr[12];
std::cout << "Is the area you are about to search an hilly area> [y/n]: " << std::endl;
std::cin >> ch;
if(ch=='n'){

std::cout << "Enter the rainfall data of past year(s) of your area monthwise in mm: " << std::endl;
for(i=0;i<12;i++)
{
std::cin >> arr[i];
}
for (i = 1; i < 12; ++i)
{
    if (arr[temp] < arr[i])
    temp=i;
}
if(arr[temp]>=100){
m= 1 + ltm->tm_mon;
p=(arr[m-1]/arr[temp])*100;
std::cout<<"Probility of flood this month is: "<<p<<"%\n";}
else
std::cout<<"Probility of flood is: ≈nil\n";
if((p>=80.0)&&(arr[temp]>=100))
std::cout<<"Response: Flooding expected this month. Stay Alert";
else if((p>=40.0)&&(p<80.0)&&(arr[temp]>=100))
std::cout<<"Response: Low chances of flooding unless heavy rain in a short time occurs";
else if((p<40.0)&&(arr[temp]>=100))
std::cout<<"Response: Almost no chances of flooding this month";}
else if(ch=='y')
std::cout<<"Probility of flood is: ≈nil\nResponse: Chances of flood are almost none but beware of flash floods.";
else
std::cout << "Please enter [y/n] only and try again..." << std::endl;
std::cout<<"\n";
if(arr[temp]>=100){
    if(ch=='n')
std::cout<<"\nFlood probaility year long month-wise\n";
m=1;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " JANUARY" << std::endl;
m=2;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " FEBRUARY" << std::endl;
m=3;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " MARCH" << std::endl;
m=4;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " APRIL" << std::endl;
m=5;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " MAY" << std::endl;
m=6;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " JUNE" << std::endl;
m=7;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " JULY" << std::endl;
m=8;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " AUGUST" << std::endl;
m=9;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " SEPTEMBER" << std::endl;
m=10;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " OCTOBER" << std::endl;
m=11;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " NOVEMBER" << std::endl;
m=12;
p=(arr[m-1]/arr[temp])*100;
for(int i=0;i<=p;i++)
std::cout<<"▧";
std::cout << " DECEMBER" << std::endl;
}}
