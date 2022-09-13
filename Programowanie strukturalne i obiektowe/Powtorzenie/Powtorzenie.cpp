#include <iostream>

void showMenu()
{
	system("cls");
	std::cout << "Menu:\n";
	std::cout << "1. Pole kwadratu\n";
	std::cout << "2. Pole trojkata\n";
	std::cout << "0. Zamknij program\n";
}

int chooseOptionFromUser()
{
	std::cout << "Wybierz opcje\n";
	int selectedOption;
	std::cin >> selectedOption;
	return selectedOption;
}
void SquareArea()
{
	std::cout << "Podaj wartosc boku kwadratu:\n ";
		int side;
		std::cin >> side;
		int area = side * side;
		std::cout << "Pole kwadratu to " << area << '\n';


}
void TriangleArea()
{
	std::cout << "Podaj wartosc boku trojkata:\n ";
	int side;
	std::cin >> side;
	std::cout << "Podaj wartosc wysokosci trojkata";
	int height;
	std::cin >> height;
	int area = side * height / 2;
	std::cout << "Pole kwadratu to " << area << '\n';


}
void doSelectedTask(int selectedOption)
{
	switch (selectedOption)
	{
	 case 1:
		SquareArea();
		break;
	 case 2:
		TriangleArea();
		break;
	 case 0:
		return;
	 default:
		std::cout << "Brak opcji w menu\n"; \
			break;
	}
	
	system("pause");
	
	/*if (selectedOption == 1)
	{
		SquareArea();
	}
	if (selectedOption == 2)
	{
		TriangleArea();
	}
	*/
}


void mainProgram()
{
	int selected;
	do
	{//1. wy�wietlenie menu
		showMenu();

		//2. wybranie opcji przez u�ytkownika
		selected = chooseOptionFromUser();

		//3. Wykonanie wybranego zadania
		doSelectedTask(selected);
	} while(selected != 0);
}

void main()
{
	mainProgram();
}

