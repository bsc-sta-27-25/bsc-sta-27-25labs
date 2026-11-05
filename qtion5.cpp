#include <iostream>
using namespace std;

double calcSquare()
{
  double side;
  cout << "Enter side length: ";
  cin >> side;
 return side * side;
}

double calcRectangle()
{
  double length, width;
  cout << "Enter length: ";
  cin >> length;

  cout << "Enter width: ";
  cin >> width;

    return length * width;
}

double calcTriangle()
{
 double base, height;

   cout << "Enter base: ";
   cin >> base;

   cout << "Enter height: ";
    cin >> height;

    return 0.5 * base * height;
}

int main()
{
    int choice;

    while (true)
    {
     cout << "\nPlease select the area of the shape to calculate\n";
     cout << "1. Square\n";
     cout << "2. Rectangle\n";
     cout << "3. Triangle\n";
     cout << "4. Quit Program\n";
     cout << "Enter selection: ";
     cin >> choice;

        if (choice == 1)
        {
            cout << "Area of Square = " << calcSquare() << endl;
        }
        else if (choice == 2)
        {
            cout << "Area of Rectangle = " << calcRectangle() << endl;
        }
        else if (choice == 3)
        {
            cout << "Area of Triangle = " << calcTriangle() << endl;
        }
        else if (choice == 4)
        {
            cout << "Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid input! Please try again.\n";
        }
    }

    return 0;
}