#ifndef TIME_H
#define TIME_H


class Time
{
private:
    double second;
public:
    Time(double second);
    double getSecond() const;
    void setSecond(double newSecond);
    bool operator<(const Time& time) const;
};

#endif // TIME_H3
