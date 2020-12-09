#include "src/Papagal.hpp"
#include "src/Strut.hpp"

int main() {

    std::list<std::string> words;

    words.push_back("Papa");
    words.push_back("Mama");
    words.push_back("Zbor");

    Pasare *p1 = new Papagal(words);

    p1->sunet();
    p1->zboara();

    Gaina* g = Gaina::create();

    g->zboara();
    g->sunet();

    Strut * s = Strut::getInstance();

    s->sunet();
    s->zboara();

    std::cout << "\n Gaini: " << s->getGaini() << "\n";

    Strut & s2 = *s + *g;

    std::cout << "\n Gaini: " << s->getGaini() << "\n";

    return 0;
}