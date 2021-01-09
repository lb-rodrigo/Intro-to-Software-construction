#include <iostream>
#include "../header/rectangle.hpp"
using namespace std;

int main(){
Rectangle rect;
rect.set_width(3);
rect.set_height(4);
cout << "Rectangle area: " << rect.area() << endl;
//cout << "hello world! Hello Rodrigo" << endl;
//cout << "I had a little issue getting back in here." << endl;
//cout << "I also had an issue getting to modify this file" << endl;
return 0;
}

