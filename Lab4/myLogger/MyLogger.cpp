#include <iostream>

#include "./MyLogger.hpp"

MyLogger::MyLogger(): m_level(0) {}

void MyLogger::info(const std::string& data) {
    if (m_level >= 0) {
        std::cout << "[INFO]: " << data << std::endl;
    }
}

void MyLogger::debug(const std::string& data) {
    if (m_level >= 1) {
        std::cout << "[DEBUG]: " << data << std::endl;
    }
}

void MyLogger::setLevel(int level) {
    m_level = level;
}