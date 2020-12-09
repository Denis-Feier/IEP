#include "Papagal.hpp"

Papagal::Papagal(const std::list<std::string>& words): words(words) {}

void Papagal::sunet() {
    std::cout << '\n';
    for (auto const& i : words) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void Papagal::zboara() {
    std::cout << "Stiu sa zbor \n";
}