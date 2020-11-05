#include <string>

class Logger {
    
    public:
        virtual void info(const std::string& data) = 0;
        virtual void debug(const std::string& data) = 0;
        virtual void setLevel(int level) = 0;
        virtual ~Logger();
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