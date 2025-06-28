#include <iostream>
#include <string>

int main() {
    int m_number_of_problems, m_total_solved_problems = 0;

    std::cin >> m_number_of_problems;
    std::cin.ignore();

    for (int i = 0; i < m_number_of_problems; i++) {
        std::string m_user_entered_nums;
        std::getline(std::cin, m_user_entered_nums);

        int m_number_of_member_to_solve = 0;

        for (int j = 0; j < m_user_entered_nums.size(); j++) {
            if (m_user_entered_nums[j] == '1') {
                m_number_of_member_to_solve += 1;
            }
        }

        if (m_number_of_member_to_solve > 1) {
            m_total_solved_problems += 1;
        }
    }

    std::cout << m_total_solved_problems;

    return 0;
}