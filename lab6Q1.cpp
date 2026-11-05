#include <iostream>
#include <string>
using namespace std;

int main(){
    int*  value = new int;
    string* world = new string;

    cout<<"enter an integer" << endl;
    cin >> * value;

    cout << "enter string"<< endl;
    cin >> *world;

    cout<<"The integer is: "<< *value<< endl;
    cout <<"The string is: "<< *world<< endl;
    
    delete value;
    delete world;

    return 0;
    









}