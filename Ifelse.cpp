# include <iostream>
using namespace std;
int main() {
    int num;
    cout<< "Enter a number: ";
    cin>>num;
    if(num%2==0)
    cout<<"It is an even number"<<endl;
    else
    cout<<"It is an odd number"<<endl;

    cin.get();
    return 0;
}