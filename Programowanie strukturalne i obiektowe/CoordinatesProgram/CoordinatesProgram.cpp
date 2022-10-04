
#include <iostream>
using namespace  std;

struct Point
{
	int x;
	int y;
	int z;
};
void CoordinateTestVersion2()
{
	system("cls");
	
	Point UserPoint;

	cout << "Podaj x: \n";
	cin >> UserPoint.x;
	cout << "Podaj y: \n";
	cin >> UserPoint.y;
	cout << "Podaj z: \n";
	cin >> UserPoint.z;

	double distance = calculateDistance(UserPoint.x,UserPoint.y);
	cout << "Odleglosc to:  " << distance << '\n';
}
double calculateDistance(int a, int b)
{

	double distance = sqrt(a * a + b * b);
	return distance;
}
double calculateDistance(Point p)
{

	double distance = sqrt(p.x * p.x + p.y * p.y);
	return distance;
}
int main()
{
	CoordinateTestVersion2();
}

void CoordinateTestVersion1()
{
	system("cls");
	int x, y;

	//Point point;
	cout << "Podaj x: \n";
	cin >> x;
	cout << "Podaj y: \n";
	cin >> y;

	double distance = calculateDistance(x, y);
	cout << "Odleglosc to:  " << distance << '\n';
}