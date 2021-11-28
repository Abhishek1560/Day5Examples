#include <iostream>
using namespace std;

int main ()   {

int Num1, Num2;
cout<<"Input 1st number: ";
cin>> Num1;
cout<<"Input 2nd number: ";
cin>> Num2;
Num2= Num2 + Num1;
Num1= Num2 - Num1;
Num2= Num2 - Num1;
cout<<" After swapping the 1st number is: "<<Num1 <<endl;
cout<<" After swapping the 2nd number is: "<<Num2 <<endl;

return 0;
}
