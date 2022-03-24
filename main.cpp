#include <iostream>
#include <cmath>

auto operations() {
    char operation;
    do{
        std::cout << "******************** Hello! *************************" << std::endl;
        std::cout << " Here are the list of operations you can use " << std::endl;
        std::cout << "0. exit" << std::endl;
        std::cout << "1. power" << std::endl;
        std::cout << "2. root " << std::endl;
        std::cout << "3. log(base)" << std::endl;
        std::cout << "4. Basic Trigonometry" << std::endl;
        std::cout << "5. addition" << std::endl;
        std::cout << "6. substraction" << std::endl;
        std::cout << "7. multiplication" << std::endl;
        std::cout << "8. division" << std::endl;
        std::cout << "9. modulus" << std::endl;
        std::cout << "****************************************************" << std::endl;
        std::cout << " Type the operation" << std::endl;
        std::cin >> operation;

        if (operation == '1') {
            double power, choice_num;
            std::cout << "Firstly, give a number" << std::endl;
            std::cin >> choice_num;
            std::cout << "give to the power ?: " << std::endl;
            std::cin >> power;

            std::cout << pow(choice_num, power) << std::endl;
        } else if (operation == '2') {
            double choice_num;
            std::cout << sqrt(choice_num) << std::endl;
        } else if (operation == '3') {
            std::clog << "This operation only takes the log base" << std::endl;
            double choice_num;
            std::cout << "Give a number to take the logbase" << std::endl;
            std::cin >> choice_num;
            std::cout << logb(choice_num) << std::endl;
        } else if (operation == '4') {
            bool hypothenusa, sin, cos, tan, cot, sec, csc;
            std::cout << "Which operation do you want to be executed" << std::endl;
            std::cerr << "Remember! give a zero or 1 for that specific operation" << std::endl;
            std::cout << "Do you want to know the hypthenusa of the triangle" << std::endl;
            std::cin >> hypothenusa;

            if (hypothenusa) {
                double aanliggend, overstaand;
                std::cout << " Give the adjacent side" << std::endl;
                std::cin >> aanliggend;
                std::cout << "Give the overhead side" << std::endl;
                std::cin >> overstaand;

                std::cout << "The hypothenusa of this triangle is: " << sqrt(pow(aanliggend, 2) + pow(overstaand, 2));
            } else {
                std::cout << "Do you want to know the sine of the triangle" << std::endl;
                std::cin >> sin;

                if (sin) {
                    double overstaand, schuin;
                    std::cout << "Give the overhead side" << std::endl;
                    std::cin >> overstaand;
                    std::cout << "Give the hypothenusa side" << std::endl;
                    std::cin >> schuin;
                    std::cout << "the sine of this triangle is: " << (overstaand / schuin) << std::endl;
                } else {
                    std::cout << "Do you want to know the cosine of the triangle" << std::endl;
                    std::cin >> cos;

                    if (cos) {
                        double aanliggend, schuin;
                        std::cout << " Give the adjacent side" << std::endl;
                        std::cin >> aanliggend;
                        std::cout << "Give the hypothenusa side" << std::endl;
                        std::cin >> schuin;

                        std::cout << "The cosine of this triangle is:" << (aanliggend / schuin) << std::endl;

                    } else {
                        std::cout << "Do you want to know the of the tangent of the triangle" << std::endl;
                        std::cin >> tan;
                        double overstaand, aanliggend;
                        if (tan) {
                            std::cout << "Give the overhead side" << std::endl;
                            std::cin >> overstaand;
                            std::cout << " Give the adjacent side" << std::endl;
                            std::cin >> aanliggend;
                            std::cout << "The tangent of this triangle is: " << (overstaand / aanliggend) << std::endl;
                        } else {
                            std::cout << "Do you want to know the of the cotangent of the triangle" << std::endl;
                            std::cin >> cot;

                            if (cot) {
                                std::cout << "Give the overhead side" << std::endl;
                                std::cin >> overstaand;
                                std::cout << " Give the adjacent side" << std::endl;
                                std::cin >> aanliggend;
                                std::cout << "The cotangent of this triangle is: " << (aanliggend / overstaand)
                                          << std::endl;
                            } else {
                                std::cout << "Do you want to know the secant of the triangle" << std::endl;
                                std::cin >> sec;

                                if (sec) {
                                    double aanliggend, schuin;
                                    std::cout << " Give the adjacent side" << std::endl;
                                    std::cin >> aanliggend;
                                    std::cout << "Give the hypothenusa side" << std::endl;
                                    std::cin >> schuin;

                                    std::cout << "The secant of this triangle is:" << (schuin / aanliggend) << std::endl;
                                } else {
                                    std::cout << "Do you want to know the cosecant of the triangle" << std::endl;
                                    std::cin >> csc;
                                    if (csc) {
                                        double overstaand, schuin;
                                        std::cout << "Give the overhead side" << std::endl;
                                        std::cin >> overstaand;
                                        std::cout << "Give the hypothenusa side" << std::endl;
                                        std::cin >> schuin;
                                        std::cout << "the sine of this triangle is: " << (schuin / overstaand) << std::endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            double num1, num2;
            switch (operation) {
                case '5':
                    std::cout << "Give the first number" << std::endl;
                    std::cin >> num1;
                    std::cout << "Give the second number" << std::endl;
                    std::cin >> num2;
                    std::cout << "addi of :" << " $ " << num1 << " and " << " $ " << num2 << " = " << num1 + num2 << '\n';
                    break;
                case '6':
                    std::cout << "Give the first number" << std::endl;
                    std::cin >> num1;
                    std::cout << "Give the second number" << std::endl;
                    std::cin >> num2;
                    std::cout << "subi of :" << " $ " << num1 << " and " << " $ " << num2 << " = " << num1 - num2 << '\n';
                    break;
                case '7':
                    std::cout << "Give the first number" << std::endl;
                    std::cin >> num1;
                    std::cout << "Give the second number" << std::endl;
                    std::cin >> num2;
                    std::cout << "mult of :" << " $ " << num1 << " and " << " $ " << num2 << " = " << num1 * num2 << '\n';
                    break;
                case '8':
                    std::cout << "Give the first number" << std::endl;
                    std::cin >> num1;
                    std::cout << "Give the second number" << std::endl;
                    std::cin >> num2;
                    std::cout << " divs of :" << " $ " << num1 << " and " << " $ " << num2 << " = " << num1 / num2 << '\n';
                    break;
                case '9':
                    std::cout << "Give the first number" << std::endl;
                    std::cin >> num1;
                    std::cout << "Give the second number" << std::endl;
                    std::cin >> num2;
                    int r_num1(round(num1));
                    int r_num2(round(num2));
                    std::cout << " remu of :" << " $ " << r_num1 << " and " << " $ " << r_num2 << " = " << r_num1 % r_num2 << '\n';
                    break;
            }
        }

    }while(operation!='0');

}

int main() {
    operations();
}
