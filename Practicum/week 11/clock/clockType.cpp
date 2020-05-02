

#include <iostream>
#include "clockType.h"

using namespace std;

    // void setTime(int, int, int);
    // void getTime(int&, int&, int&) const;
    // void printTime() const;
    // void setHours(int hours);
    // void setMinutes(int minutes);
    // void setSeconds(int seconds);
    // void incrementSeconds();
    // void incrementMinutes();
    // void incrementHours();
    // bool equalTime(const clockType&) const;


// constructor
clockType::clockType() {
    hr  = 0;
    min = 0;
    sec = 0;
};



clockType::clockType(int hours, int minutes, int seconds) {
    if (hours >= 0 && hours < 24) {
        hr = hours;
    } else {
        hr = 0;
    };
    if (minutes >= 0 && minutes <= 60) {
        min = minutes;
    } else {
        min = 0;
    };
    if (seconds >= 0 && seconds <= 60) {
        sec = seconds;
    } else {
        sec = 0;
    };
};


void clockType::setTime(int hours, int minutes, int seconds) {
    if (hours >= 0 && hours < 24) {
        hr = hours;
    } else {
        hr = 0;
    };
    if (minutes >= 0 && minutes <= 60) {
        min = minutes;
    } else {
        min = 0;
    };
    if (seconds >= 0 && seconds <= 60) {
        sec = seconds;
    } else {
        sec = 0;
    };
};

void clockType::getTime(int& hours, int& minutes, int& seconds) const {
    hours = hr;
    minutes = min;
    seconds = sec;
};


void clockType::printTime() const {
    if ((hr % 12) < 10) {
        cout << "0" << hr % 12;
    } else {
        cout << hr % 12;
    };

    cout << ":";

    if (min < 10) {
        cout << "0" << min;
    } else {
        cout << min;
    }; 

    cout << ":";

    if (sec < 10) {
        cout << "0" << sec;
    } else {
        cout << sec;
    }; 
    
    if (hr > 11) {
        cout << " PM" << endl;
    } else {
        cout << " AM" << endl;
    };
};
