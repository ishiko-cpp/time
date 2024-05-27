/*
    Copyright (c) 2023-2024 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateAndOptionalTime.hpp"

using namespace Ishiko;

DateAndOptionalTime::DateAndOptionalTime(unsigned short year, Month month, unsigned char day)
    : m_date{year, month.number(), day}, m_time{0, 0, 0}, m_has_time{false}
{
}

DateAndOptionalTime::DateAndOptionalTime(unsigned short year, unsigned char month, unsigned char day)
    : m_date{year, month, day}, m_time{0, 0, 0}, m_has_time{false}
{
}

DateAndOptionalTime::DateAndOptionalTime(unsigned short year, unsigned char month, unsigned char day, unsigned char hours,
    unsigned char minutes, unsigned char seconds)
    : m_date{year, month, day}, m_time{hours, minutes, seconds}, m_has_time{true}
{
}

DateAndOptionalTime::DateAndOptionalTime(boost::gregorian::date date)
    : m_date{date}, m_time{0, 0, 0}, m_has_time{false}
{
}

DateAndOptionalTime::DateAndOptionalTime(boost::gregorian::date date, boost::posix_time::time_duration time_of_day)
    : m_date{date}, m_time{time_of_day}, m_has_time{true}
{
}

void DateAndOptionalTime::operator=(Date date)
{
    m_date = date;
    m_has_time = false;
}

Date DateAndOptionalTime::date() const
{
    return m_date;
}

bool DateAndOptionalTime::getTimeOfDay(TimeOfDay& time_of_day) const
{
    if (m_has_time)
    {
        time_of_day = m_time;
    }
    return m_has_time;
}

TimeOfDay DateAndOptionalTime::getTimeOfDayOrDefault(TimeOfDay default_time_of_day) const
{
    if (m_has_time)
    {
        default_time_of_day = m_time;
    }
    return default_time_of_day;
}

bool DateAndOptionalTime::operator==(Date other) const
{
    return (!m_has_time && (m_date == other));
}

bool DateAndOptionalTime::operator!=(Date other) const
{
    return (m_has_time || (m_date != other));
}

bool DateAndOptionalTime::operator<(DateAndOptionalTime other) const
{
    if (m_date < other.m_date)
    {
        return true;
    }
    else if (m_date == other.m_date)
    {
        const TimeOfDay midnight{0, 0, 0};
        return (getTimeOfDayOrDefault(midnight) < other.getTimeOfDayOrDefault(midnight));
    }
    return false;
}
