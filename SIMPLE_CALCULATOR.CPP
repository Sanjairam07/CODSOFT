#include <iostream>

using namespace std;
float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}
int main() {
    float num1, num2,a;
    int op;
    do
    {
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (1 --> +, 2--> -, 3--> *, 4--> /): ";
    cin >> op;

    switch(op) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << divide(num1, num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
    }
    cout<<"Do you want to continue again then press 0 else 1 : ";
    cin>>a;
    }while(a==0);

    return 0;
}