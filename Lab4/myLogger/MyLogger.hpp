#include <string>

class SimpleLogger
{
private:
    int m_level;
public:
    SimpleLogger();
    void info(const std::string& data);
    void debug(const std::string& data);
    void setLevel(int level);
private:
    SimpleLogger& operator=( const SimpleLogger& );
    SimpleLogger( const SimpleLogger& );
};
