#include <iostream>
#include <limits> // Include limits for cin.ignore and cin.clear
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    int answer;
    do {
        cout << "Choose (1) for triangle or choose (0) for rectangle" << endl;
        cin >> answer;

        // Check if the input is not an integer
        if (cin.fail()) {
            cin.clear();             // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
            cout << "Invalid input. Please enter 0 or 1." << endl;
            continue; // Restart the loop
        }
    } while (answer > 1 || answer < 0);

    if (answer == 0) {
        Rectangle rect;
        double w;
        double h;
        bool negative = false;

        cout << "Enter the Width" << endl;
        cin >> w;

        if (w < 0 || cin.fail()) {
            negative = true;
        }

        while (negative) {
            cout << "Enter the Width" << endl;
            cin >> w;
            if (w > 0 && !cin.fail()) {
                negative = false;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a positive number." << endl;
            }
        }

        rect.set_width(w);

        negative = false;

        cout << "Enter the Height" << endl;
        cin >> h;

        if (h < 0 || cin.fail()) {
            negative = true;
        }

        while (negative) {
            cout << "Enter the Height" << endl;
            cin >> h;
            if (h > 0 && !cin.fail()) {
                negative = false;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a positive number." << endl;
            }
        }

        rect.set_height(h);

        cout << "Rectangle area: " << rect.area() << endl; 
    } else if (answer == 1) {
        Triangle tri;
        double b;
        double h;
        bool negative = false;

        cout << "Enter the Base" << endl;
        cin >> b;

        if (b < 0 || cin.fail()) {
            negative = true;
        }

        while (negative) {
            cout << "Enter the Base" << endl;
            cin >> b;
            if (b > 0 && !cin.fail()) {
                negative = false;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a positive number." << endl;
            }
        }

        tri.set_base(b);

        negative = false;

        cout << "Enter the Height" << endl;
        cin >> h;

        if (h < 0 || cin.fail()) {
            negative = true;
        }

        while (negative) {
            cout << "Enter the Height" << endl;
            cin >> h;
            if (h > 0 && !cin.fail()) {
                negative = false;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a positive number." << endl;
            }
        }

        tri.set_height(h);

        cout << "Triangle area: " << tri.area() << endl;
    }
}


