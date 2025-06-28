#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {
    int m_pos_in_x, m_pos_in_y = 0;

    for (int m_input_count = 0; m_input_count <= 4; m_input_count++) {
        std::string m_user_nums_input;
        std::getline(std::cin, m_user_nums_input);

        int m_x_axis_count = 0;
        for (char ch: m_user_nums_input) {
            if (ch == '0') {
                m_x_axis_count += 1;
            }
            else if (ch == '1') {
                m_pos_in_x = m_x_axis_count;
                m_pos_in_y = m_input_count;
            }
        }
    }

    int m_steps_for_x_axis = std::abs(2 - m_pos_in_x);
    int m_steps_for_y_axis = std::abs(2 - m_pos_in_y);

    std::cout << m_steps_for_x_axis + m_steps_for_y_axis;

    return 0;
}

