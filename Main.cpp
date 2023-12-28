#include <iostream>
#include <string>

class StringIntersection {
private:
    std::string str;

public:
    StringIntersection(const std::string& s) : str(s) {}

    // Перевантаження оператору "*"
    std::string operator*(const StringIntersection& other) const {
        std::string result;

        for (char ch : str) {
            if (other.str.find(ch) != std::string::npos) {
                result += ch;
            }
        }

        return result;
    }

    // Функція для виведення рядка
    void display() const {
        std::cout << str;
    }
};

int main() {
    std::string input1, input2;

    // Введення першого рядка
    std::cout << "Enter the first string: ";
    std::cin >> input1;
    StringIntersection str1(input1);

    // Введення другого рядка
    std::cout << "Enter the second string: ";
    std::cin >> input2;
    StringIntersection str2(input2);

    char choice;

    // Вибір операції
    std::cout << "Choose an operation (* for intersection): ";
    std::cin >> choice;

    std::string result;

    // Виконання вибраної операції
    if (choice == '*') {
        result = str1 * str2;
        std::cout << "Intersection of strings: ";
        for (char ch : result) {
            std::cout << ch;
        }
        std::cout << std::endl;
    }
    else {
        std::cerr << "Error: Invalid operation." << std::endl;
        return 1;
    }

    return 0;
}
