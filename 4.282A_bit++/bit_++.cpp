#include <iostream>
#include <string>

int main() {
    int m_number_of_statements, m_final_num = 0;

    std::cin >> m_number_of_statements;
    std::cin.ignore();

    for(int i = 0; i < m_number_of_statements; i++){
        std::string user_entered_string;
        std::getline(std::cin, user_entered_string);

        if (user_entered_string == "X++" || user_entered_string == "++X") {
            m_final_num += 1;
        }
        else if (user_entered_string == "--X" || user_entered_string == "X--") {
            m_final_num -= 1;
        }
    }

    std::cout << m_final_num;

    return 0;
}