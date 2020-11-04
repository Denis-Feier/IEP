#include <iostream>

#include "./Logger.hpp"

SimpleLogger::SimpleLogger(): Logger(), m_level(0) {}

void SimpleLogger::info(const std::string& data) {
    if (m_level >= 0) {
        std::cout << "[INFO]: " << data << std::endl;
    }
}

void SimpleLogger::debug(const std::string& data) {
    if (m_level >= 1) {
        std::cout << "[DEBUG]: " << data << std::endl;
    }
}

void SimpleLogger::setLevel(int level) {
    m_level = level;
}