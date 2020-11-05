#include <iostream>

#include "./Logger.hpp"

const std::string BLACK = "\033[30m";      
const std::string RED = "\033[31m";      
const std::string GREEN = "\033[32m";      
const std::string YELLOW = "\033[33m";     
const std::string BLUE ="\033[34m";      
const std::string MAGENTA = "\033[35m";     
const std::string CYAN = "\033[36m";      
const std::string WHITE = "\033[37m";      
const std::string RESET = "\033[0m";

ColorLogger::ColorLogger(): m_level(0) {}

void ColorLogger::info(const std::string& data) {
    if (m_level >= 0) {
        std::cout << BLUE << "[INFO]: " << data << RESET << std::endl;
    }
}

void ColorLogger::debug(const std::string& data) {
    if (m_level >= 1) {
        std::cout << GREEN << "[DEBUG]: " << data << RESET << std::endl;
    }
}

void ColorLogger::setLevel(int level) {
    m_level = level;
}