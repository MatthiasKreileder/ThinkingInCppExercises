
#include <iostream>
#include <string>

class Shape{
public:
	virtual void draw(){std::cout << "Shape::draw()" << std::endl;}
};

class Circle : public Shape {
	void draw(){std::cout << "Cirlce::draw()" << std::endl;}
};
class Square : public Shape {
	void draw(){std::cout << "Square::draw()" << std::endl;}
};
class Triangle : public Shape {
	void draw(){std::cout << "Triangle::draw()" << std::endl;}
};

void callDraw(Shape* shape){
	shape->draw();
}

int main ()
{
	Shape* shapes[] = {new Circle(),new Square(), new Triangle()};

	for(int i = 0; i < 3; i++)
		callDraw(shapes[i]);

	return 0;
}
