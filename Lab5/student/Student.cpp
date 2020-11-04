#include <iostream>
#include <sstream>

#include "./Student.hpp"

Student::Student(
    const std::string& name, 
    std::vector<ListaNote> dataSet, 
    Logger* logger):m_name(name), m_dataSet(dataSet), m_MyLogger(logger) {}

void Student::showData() {
    m_MyLogger->info("Start Calculating");
    for (unsigned int i = 0; i < m_dataSet.size(); i++) {
        std::cout << m_dataSet[i].calculMedie() << std::endl;
        
        std::ostringstream ss;
        ss << "The Value is: ";
        ss << m_dataSet[i].calculMedie();
        std::string s(ss.str());

        m_MyLogger->debug(s);
    }
    m_MyLogger->info("Stop Calculating");
}