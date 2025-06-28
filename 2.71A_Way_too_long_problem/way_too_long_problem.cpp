#include <iostream>
#include <string>
#include <array>

int main() {
    int m_number_of_words;

    std::cin >> m_number_of_words;

    std::array<std::string, 100> m_user_entered_strings;

    for (int i = 0; i < m_number_of_words; i++) {
        std::string m_user_str;

        std::cin >> m_user_str;
        m_user_entered_strings[i] = m_user_str;
    }

    for (int i = 0; i < m_user_entered_strings.size(); i++) {
        if (i == m_number_of_words) {
            break;
        }

        std::string m_user_str = m_user_entered_strings[i];

        if (m_user_str.size() < 11) {
            std::cout << m_user_str << "\n";
            continue;
        }

        std::cout << m_user_str[0] << m_user_str.size() - 2 << m_user_str[m_user_str.size() - 1] << "\n";
    }

    return 0;
}