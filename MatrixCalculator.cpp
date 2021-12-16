#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    //int a,b;
    cout<<"***Enter your choice***\n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    // cout<<"";
    // cout<<"6.";
    int ch;
    cin>>ch;
    int A[4],B[4],ans;
    switch(ch){
        case 1:
           // int A[4],B[4],sum;
            cout<<"Enter 4 numbers for matrix A:- \n";
            for (int i = 0; i < 4; i++)
            {
                cin>> A[i];
            }
            cout<<"Enter 4 numbers for matrix B:- \n";
            for (int i=0; i<4; i++)
            {
                cin>> B[i];
            }
            for (int i = 0; i < 4; i++)
            {
                ans= A[i]+B[i];
                //cout<<" Your Answer is:- ";
                cout<<" " <<ans;
            }
            break;
        case 2:
             //int a[4],b[4],ans;
            cout<<"Enter 4 numbers for matrix A:- \n";
            for (int i = 0; i < 4; i++)
            {
                cin>> A[i];
            }
            cout<<"Enter 4 numbers for matrix B:- \n";
            for (int i=0; i<4; i++)
            {
                cin>> B[i];
            }
            for (int i = 0; i < 4; i++)
            {
                ans= A[i]-B[i];
                //cout<<" Your Answer is:- ";
                cout<<" "<<ans;
            }
            break;
        case 3:
            cout<<"Enter 4 numbers for matrix A:- ";
            for (int i = 0; i < 4; i++)
            {
                cin>> A[i];
            }
            cout<<"Enter 4 numbers for matrix B:- \n";
            for (int i=0; i<4; i++)
            {
                cin>> B[i];
            }
            for (int i = 0; i < 4; i++)
            {
                ans= A[i]*B[i];
                //cout<<" Your Answer is:- ";
                cout<<" "<<ans;
            }
            break;
        case 4:
            double Ans;
            cout<<"Enter 4 numbers for matrix A:- ";
            for (int i = 0; i < 4; i++)
            {
                cin>> A[i];
            }
            cout<<"Enter 4 numbers for matrix B:- \n";
            for (int i=0; i<4; i++)
            {
                cin>> B[i];
            }
            for (int i = 0; i < 4; i++)
            {
                Ans= A[i]/B[i];
                //cout<<" Your Answer is:- ";
                cout<<" "<<Ans;
            }
            break;
    }
    return 0;
}