#include <iostream>       // std::cout, std::fixed
#include <string>         // string

using namespace std;

class Rectangle
{
  float length;
  float width;
  string obj_name;
  public:
    Rectangle(string name)
    {
      obj_name = name;
    }
    // set length of rectangle
    void setlength(float len)
    {
      length = len;
    }
    // set width of rectangle
    void setwidth(float wid)
    {
      width = wid;
    }
    // calculate perimeter of rectangle
    float perimeter()
    {
      return 2 * (length + width);
    }
    // calculate area of rectangle
    float area()
    {
      return length * width;
    }
    // display length and width of the rectangle
    void show()
    {
      cout << "The area of the rectangle named '" << obj_name << "' is: " << area() << endl;
      cout << "The perimeter of the rectangle named '" << obj_name << "' is: " << perimeter() << endl;
    }
    // returns 1 if two Rectangles has the same area
    // returns 0 if they don't
    int sameArea(Rectangle rct)
    {
      if (Rectangle::area() == rct.area())
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    void printSameArea(Rectangle rct)
    {
      // used scope resolution operator :: to access class
      cout << "'" << Rectangle::obj_name << "' area is: " << Rectangle::area() << endl;
      cout << "'" << rct.obj_name << "' area is: " << rct.area() << endl;
      if (sameArea(rct) == 1)
      {
        cout << "Result: their areas are the same.";
      }
      else
      {
        cout << "Result: their areas are NOT the same.";
      }
      cout << endl;
    }
};

int main()
{
  Rectangle rect1("rect1");      // instantiate Rectangle class and create objects
  Rectangle rect2("rect2");      // instantiate Rectangle class and create objects

  // - 1st `Rectangle` object with `length` and `width` of `5` and `2.5`
  rect1.setlength(5);
  rect1.setwidth(2.5);

  // - Display area and perimeter
  rect1.show();

  cout << endl;

  // - 2nd `Rectangle` object with `length` and `width` of `5` and `18.9`
  rect2.setlength(5);
  rect2.setwidth(18.9);

  // - Display area and perimeter
  rect2.show();

  cout << endl;

  // - check if the two rectangles has the same area, print results
  rect1.printSameArea(rect2);

  // - set `length` and `width` of 1st `Rectangle` object to `15` and `6.3`
  rect1.setlength(15);
  rect1.setwidth(6.3);

  cout << endl;

  cout << "Changed rect1's length to 15 and width to 6.3: " << endl;

  // - check if the two rectangles has the same area, print results
  rect1.printSameArea(rect2);
}
