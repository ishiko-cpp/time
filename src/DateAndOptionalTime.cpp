/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateAndOptionalTime.hpp"

using namespace Ishiko;

DateAndOptionalTime::DateAndOptionalTime(int year, Month month, unsigned char day)
    : m_date{year, month.number(), day}, m_time{0, 0, 0}, m_has_time{false}
{
}

DateAndOptionalTime::DateAndOptionalTime(int year, unsigned char month, unsigned char day)
    : m_date{year, month, day}, m_time{0, 0, 0}, m_has_time{false}
{
}

DateAndOptionalTime::DateAndOptionalTime(int year, unsigned char month, unsigned char day, unsigned char hours,
    unsigned char minutes, unsigned char seconds)
    : m_date{year, month, day}, m_time{hours, minutes, seconds}, m_has_time{true}
{
}

DateAndOptionalTime::DateAndOptionalTime(boost::gregorian::date date)
    : m_date{date}, m_time{0, 0, 0}, m_has_time{false}
{
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
