#include <vector>

class ListaNote
{
private:
    /* data */
    std::vector<float> m_note;
public:
    ListaNote(std::vector<float> note);
    
    float calculMedie();

    ListaNote(const ListaNote& note);
};

