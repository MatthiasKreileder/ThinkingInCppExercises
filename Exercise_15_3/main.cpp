
#include <iostream>
#include <string>

class Shape{
public:
	virtual void draw() = 0;
	Shape()
	{
		draw();
	}
};

void Shape::draw(){
	std::cout << "Shape::draw()" << std::endl;
}

class Circle : public Shape {
	void draw(){std::cout << "Cirlce::draw()" << std::endl;}
};
class Square : public Shape {
	void draw(){std::cout << "Square::draw()" << std::endl;}
};
class Triangle : public Shape {
	void draw(){std::cout << "Triangle::draw()" << std::endl;}
};

// Version I - doesn't compile (we can't create objects of abstract classes
//void callDraw(Shape shape){
//	shape.draw();
//}

// Version II
void callDraw(Shape& shape){
	shape.draw();
}

int main ()
{
	Shape* shapes[] = {new Circle(),new Square(), new Triangle()};

	for(int i = 0; i < 3; i++)
		callDraw(*shapes[i]);

	return 0;
}
