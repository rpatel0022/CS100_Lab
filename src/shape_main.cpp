#include <iostream>
#include "../header/rectangle.hpp"
#include

using namespace std;

int main()
{
    int answer; 
    cout << "Choose (1) for traingle or choose (0) for rectangle" << endl; 
    cin >> answer; 

    if (answer == 0){
        Rectangle rect;
        double w; 
        double h; 

        if(w < 0 || h < 0){
            return;   
        }

        rect.set_width(w);
        rect.set_height(h);
        cout << "Rectangle area: " << rect.area() << endl;
        return 0;
    }

    else if(answer == 1){
        Triangle tri;
        double b; 
        double h; 

        if(b < 0 || h < 0){
            return;   
        }
        tri.set_base(b); 
        tri.set_height(h); 
        cout << "Triangle area: " << tri.area() << endl; 
        return 0; 
    }
}
