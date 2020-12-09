#include "Pasare.hpp"

class Papagal: public Pasare
{
private:
    const std::list<std::string>& words;
public:
    Papagal(const std::list<std::string>& words);
    void zboara();
    void sunet();
};

