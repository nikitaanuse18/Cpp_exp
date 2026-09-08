#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:
    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Copy constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate volume
    float volume()
    {
        return length * width * height;
    }

    // Display box information
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Box object destroyed." << endl;
    }
};

int main()
{
    cout << "--- Default Constructor ---" << endl;
    Box b1;
    b1.display();

    cout << "\n--- Parameterized Constructor ---" << endl;
    Box b2(5, 4, 3);
    b2.display();

    cout << "\n--- Copy Constructor ---" << endl;
    Box b3(b2);
    b3.display();

    cout << "\nExiting program..." << endl;

    return 0;
}
