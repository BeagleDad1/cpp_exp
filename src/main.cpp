#include <iostream>
#include <string>

class Logger
{
public:
    Logger() :
        m_logLevel(LogLevelError) {}

    enum LogLevel
    {
        LogLevelError = 0,
        LogLevelWarn,
        LogLevelInfo
    };
private:
    LogLevel m_logLevel;
public:
    void logError(const std::string& message) const
    {
        if(LogLevelError <= m_logLevel)
        {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
};

int main()
{
    std::cout << "Hello World!!!" << std::endl;

    Logger ll;
    ll.logError("Wow");
    return 0;
}
