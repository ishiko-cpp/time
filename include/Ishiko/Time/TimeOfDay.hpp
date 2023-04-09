/*
    Copyright (c) 2022-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_TIME_TIMEOFDAY_HPP
#define GUARD_ISHIKO_CPP_TIME_TIMEOFDAY_HPP

#include <boost/date_time.hpp>

namespace Ishiko
{

class TimeOfDay
{
public:
    TimeOfDay(unsigned char hours, unsigned char minutes, unsigned char seconds);
    TimeOfDay(boost::posix_time::time_duration timeOfDay);

    unsigned char hours() const;
    unsigned char minutes() const;
    unsigned char seconds() const;

    bool operator==(const TimeOfDay& other) const;
    bool operator!=(const TimeOfDay& other) const;

private:
    boost::posix_time::time_duration m_timeOfDay;
};

}

#endif
