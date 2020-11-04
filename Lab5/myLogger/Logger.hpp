#include <string>

class Logger {
    
    public:
        virtual void info(const std::string& data);
        virtual void debug(const std::string& data);
        virtual void setLevel(int level);
};

class SimpleLogger: public Logger {

    private:
        int m_level;

    public:
        void info(const std::string& data);
        void debug(const std::string& data);
        void setLevel(int level);
        SimpleLogger();
};

class ColorLogger: public Logger {
    
    private:
        int m_level;

    public:
        void info(const std::string& data);
        void debug(const std::string& data);
        void setLevel(int level);
        ColorLogger();
};