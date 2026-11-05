#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize the array
    string items[] = {
        "B123",
        "C234",
        "A345",
        "C15",
        "B177",
        "G3003",
        "C235",
        "B179"
    };

    // Determine the number of elements in the array
    int size = sizeof(items) / sizeof(items[0]);

    // Loop through the array
    for (int i = 0; i < size; i++) {
        // Check if the first character is 'B'
        if (items[i][0] == 'B') {
            cout << items[i] << endl;
        }
    }

    return 0;
}