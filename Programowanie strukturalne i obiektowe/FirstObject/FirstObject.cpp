#include <iostream>
using namespace std;

class Point
{
 public:
	 Point()
	 {
		 int x;
		 int y;
	 }
	 Point(int x,int y)
	 {
		this->x;
		 this->y;
	 }
	double calculateDistance(Point p)
	{

		double distance = sqrt(x * x + y * y);
		return distance;
	}
	void SetX(int a)
	{
		if (a >= 0);
		 x = a;
	}
	void SetY(int a)
	{
		if (a >= 0);
		y = a;
	}
 protected:
	 
 private:
	 int x;
	 int y;
};

int main()
{
	system("cls");
	Point point;
	point.x = 10;
	point.y = 15;
	double distance = point.calculateDistance(point);
	cout << "Dystans od punktu (0;0) = " << distance << "\n";
}

