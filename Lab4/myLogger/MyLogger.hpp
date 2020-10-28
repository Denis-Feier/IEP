#include <string>

class MyLogger
{
private:
    int m_level;
public:
    MyLogger();
    void info(const std::string& data);
    void debug(const std::string& data);
    void setLevel(int level);
private:
    MyLogger& operator=( const MyLogger& );
    MyLogger( const MyLogger& );
};
