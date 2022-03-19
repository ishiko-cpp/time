/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "TimeOfDay.hpp"

namespace Ishiko
{

TimeOfDay::TimeOfDay(unsigned char hours, unsigned char minutes, unsigned char seconds)
    : m_timeOfDay(hours, minutes, seconds)
{
}

unsigned char TimeOfDay::hours() const
{
    return m_timeOfDay.hours();
}

unsigned char TimeOfDay::minutes() const
{
    return m_timeOfDay.minutes();
}

unsigned char TimeOfDay::seconds() const
{
    return m_timeOfDay.seconds();
}

boost::posix_time::time_duration TimeOfDay::toBoostTimeDuration() const
{
    return m_timeOfDay;
}

}
