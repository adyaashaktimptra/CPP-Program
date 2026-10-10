# include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter marks of student: ";
    cin>>num;

    if (100>=num && num >= 90)
    cout<<"A grade"<<endl;

    else if (90> num &&num >= 70)
    cout<<"B grade"<<endl;

    else if (70> num && num >= 50)
    cout<<"C grade"<<endl;

    else if (50> num && num >= 30)
    cout<<"D grade"<<endl;
    
    else if (0 <= num && num < 30)
    cout<<"Fail"<<endl;
    
    else
    cout<<"Incorrect marks"<<endl;

    cin.get();

    return 0;



}