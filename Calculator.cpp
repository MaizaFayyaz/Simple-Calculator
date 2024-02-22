#include<iostream>
using namespace std;
int main() {

	int playagain = 0;
	do {
		int num = 0;
		int num2 = 0;
		int choice = 0;
		cout << "Enter first number" << endl;
		cin >> num;
		cout << "Enter second number" << endl;
		cin >> num2;
		cout << "Enter function you want to perform" << endl;
		cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division" << endl;
		cin >> choice;
		if (choice == 1) {
			int add = num + num2;
			cout << "After adding number 1 and number 2 answer equals to " << add << endl;
		}
		else if (choice == 2) {
			int subtract = num - num2;
			cout << "After subtracting number 2 from  number 1 answer equals to " << subtract << endl;
		}
		else if (choice == 3) {
			int multiply = num * num2;
			cout << "After multiplying number 1 by number 2 answer equals to " << multiply << endl;
		}
		else if (choice == 4) {
			int integer = num / num2;
			cout << "After divinding number 1 by number 2 answer equals to " << integer << endl;

		}

		cout << "If you want to perform another calculation press 1 else press 0" << endl;
		cin >> playagain;


	} while (playagain == 1);


	system("Pause");


}
