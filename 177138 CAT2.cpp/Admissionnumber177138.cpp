#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3,min;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    switch(num3){
        case 1:
        cout<<"Third number is 0, cannot compare."<<endl;

        default:
        if(num3>=min)
        {
            min<=num3;
        }
        break;
    }
    cout<<"The minimum of "<<num1<<" , "<<num2<<" and "<<num3<<" "<<min<<endl;

}