#include<iostream>
using namespace std;

int main(){
int rows, columns;

cout<<"enter number of rows"<< endl;
cin>> rows;

cout<<"enter number of columns"<< endl;
cin>> columns;

if (rows < 1 || rows > 3 || columns< 1 || columns>3)
{
  cout << "invalid dimenstion .enter number from 1 to 3 " << endl;

  return 0;
}
double ** array = new double*[rows];
    for (int i = 0; i < rows; i++)
    {

     array[i] = new double[columns];

     }

cout << "enter the array value"<< endl;
    for(int i = 0; i < rows;i++)
    {
        for (int j = 0;j <columns; j++)
        {
           cout << "enter value for row"<< i;
           cout << "enter valeu foe column"<<j;
           cin >> array [i][j];
        }
}
cout << "the array value are: "<< endl;

for (int i = 0; i < rows; i++)
{ 
    for (int j = 0;j<columns; j++) 
    {
        cout<< array[i][j]<< "\t";

    }
   cout << endl;
}
for (int i =0; i< rows; i++){

    delete[] array[i];
}
delete[] array;

return 0;

}
