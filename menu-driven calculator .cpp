#include <iostream>
using namespace std;

int main() {
    int choice;
    float n1, n2;
    

    do {
        cout << "Menu-Driven Calculator"<<endl;
        cout << "1. Add"<<endl;
        cout << "2. Subtract"<<endl;
        cout << "3. Multiply"<<endl;        
		cout << "4. Divide"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
        }

        switch (choice) {
        case 1:
            cout << "ANS = " << n1 + n2 << endl;
            break;
        case 2:
            cout << "ANS = " << n1 - n2 << endl;
            break;
        case 3:
            cout << "ANS = " << n1 * n2 << endl;
            break;
        case 4:
            if (n2 == 0)
                cout << "Error! Cannot divide by zero.\n";
            else
                cout << "ANS = " << n1 / n2 << endl;
            break;
        case 5:
            cout << "Exiting... Thank you!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
