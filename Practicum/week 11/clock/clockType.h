 
 #ifndef clockType_h
 #define clockType_h

// #include <stdio.h>
#include <iostream>


class clockType {
    public:
    clockType();
    clockType(int, int, int);
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    int getHours() const {
        return hr;
    };
    int getMinutes() const {
        return min;
    };
    int getSeconds() const {
        return sec;
    };

    void printTime() const;
    void setHours(int hours);
    void setMinutes(int minutes);
    void setSeconds(int seconds);
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;


    private:

    int hr, min, sec;
};



 #endif