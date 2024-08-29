#include <iostream>

int main() {
    int num1, num2;
    char oper;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> oper;

    switch (oper) {
        case '+':
            std::cout << "El resultado de la suma es: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "El resultado de la resta es: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "El resultado de la multiplicación es: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "El resultado de la división es: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: No se puede dividir entre cero." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Operador inválido." << std::endl;
            break;
    }

    return 0;
}