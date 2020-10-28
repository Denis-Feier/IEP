#include <iostream>

#include "../student/Student.hpp"

int main() {

    std::vector<float> noteVector;
    noteVector.push_back(10);
    noteVector.push_back(7);
    noteVector.push_back(3);
    noteVector.push_back(5);

    ListaNote noteRomana(noteVector);


    std::vector<float> noteVector1;
    noteVector1.push_back(10);
    noteVector1.push_back(10);
    noteVector1.push_back(4);
    noteVector1.push_back(7);

    ListaNote noteMate(noteVector1);


    std::vector<float> noteVector2;
    noteVector2.push_back(10);
    noteVector2.push_back(10);
    noteVector2.push_back(10);
    noteVector2.push_back(10);

    ListaNote noteInfo(noteVector2);

    std::vector<ListaNote> noteDenis;

    noteDenis.push_back(noteRomana);

    noteDenis.push_back(noteInfo);

    noteDenis.push_back(noteMate);

    MyLogger* myLogger = new MyLogger;

    myLogger->setLevel(1);

    Student student("Denisu", noteDenis, myLogger);

    student.showData();

    myLogger->setLevel(0);

    std::cout << std::endl << std::endl;

    student.showData();

    return 0;
}