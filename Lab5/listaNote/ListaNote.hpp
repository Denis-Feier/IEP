#include <vector>

class ListaNote
{
protected:
    /* data */
    std::vector<float> m_note;
public:
    ListaNote(std::vector<float> note);
    
    float calculMedie();

    ListaNote(const ListaNote& note);

    ListaNote& operator= (const ListaNote &sec);

    std::vector<float>& getNote();
};

