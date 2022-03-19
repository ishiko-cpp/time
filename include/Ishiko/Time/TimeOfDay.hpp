/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TIMEOFDAY_HPP_
#define _ISHIKO_CPP_TIME_TIMEOFDAY_HPP_

#include <boost/date_time.hpp>

namespace Ishiko
{

class TimeOfDay
{
public:
    TimeOfDay(unsigned char hours, unsigned char minutes, unsigned char seconds);

    unsigned char hours() const;
    unsigned char minutes() const;
    unsigned char seconds() const;

    boost::posix_time::time_duration toBoostTimeDuration() const;

private:
    boost::posix_time::time_duration m_timeOfDay;
};

}

#endif
