/*
    Copyright (c) 2022-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "TimeOfDay.hpp"

using namespace boost::posix_time;

using namespace Ishiko;

TimeOfDay::TimeOfDay(unsigned char hours, unsigned char minutes, unsigned char seconds)
    : m_timeOfDay(hours, minutes, seconds)
{
}

TimeOfDay::TimeOfDay(time_duration timeOfDay)
    : m_timeOfDay(timeOfDay)
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

bool TimeOfDay::operator==(const TimeOfDay& other) const
{
    return (m_timeOfDay == other.m_timeOfDay);
}

bool TimeOfDay::operator!=(const TimeOfDay& other) const
{
    return (m_timeOfDay != other.m_timeOfDay);
}

bool TimeOfDay::operator<(const TimeOfDay& other) const
{
    return (m_timeOfDay < other.m_timeOfDay);
}
