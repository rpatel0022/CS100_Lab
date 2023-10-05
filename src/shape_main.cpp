#include <iostream>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    int answer; 
    do{
        cout << "Choose (1) for traingle or choose (0) for rectangle" << endl; 
        cin >> answer; 
    } 
    while (answer > 1 || answer < 0); 

    if (answer == 0){
        Rectangle rect;
        double w; 
        double h; 
        do{
            cout << "Enter the Width" << endl; 
            cin >> w;
            cout << "Enter the Height" << endl; 
            cin >> h; 
        }
        while (w < 0 || h < 0);

        rect.set_width(w);
        rect.set_height(h);
        cout << "Rectangle area: " << rect.area() << endl;
        return 0;
    }

    else if(answer == 1){
        Triangle tri;
        double b; 
        double h; 
        do{
            cout << "Enter the Base" << endl; 
            cin >> b;
            cout << "Enter the Height" << endl; 
            cin >> h; 
        }
        while (b < 0 || h < 0);

        tri.set_base(b); 
        tri.set_height(h); 
        cout << "Triangle area: " << tri.area() << endl; 
        return 0; 
    }
}
