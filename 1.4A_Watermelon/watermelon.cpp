#include <iostream>


int main() {

    int m_total_weight;
    
    std::cin >> m_total_weight;

    if (m_total_weight == 2 ) {
        std::cout << "NO";
    }

    else if (m_total_weight % 2 == 0) {
        std::cout << "YES";
    }
    
    else{
        std::cout << "NO";
    }

    return 0;
}