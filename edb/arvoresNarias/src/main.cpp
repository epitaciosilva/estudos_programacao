#include <iostream>

#include "../include/arvore.hpp"

int main() {
    Arvore<int> arvore(2);
    int option = 0;
    std::cin >> option;

    while(option != -1) {
        arvore.addElemento(option);
        std::cin >> option;
    }
}