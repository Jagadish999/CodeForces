#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string user_str_1, user_str_2;

    std::getline(std::cin, user_str_1);
    std::getline(std::cin, user_str_2);

    for (int char_count = 0; char_count < user_str_1.size(); char_count++) {
        char m_char_1 = std::tolower(user_str_1[char_count]);
        char m_char_2 = std::tolower(user_str_2[char_count]);

        if (m_char_1 < m_char_2) {
            std::cout << -1;
            return 0;
        }
        else if (m_char_2 < m_char_1) {
            std::cout << 1;
            return 0;
        }
    }

    std::cout << 0;

    return 0;
}