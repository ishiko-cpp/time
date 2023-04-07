/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_TIME_DATEANDOPTIONALTIME_HPP
#define GUARD_ISHIKO_CPP_TIME_DATEANDOPTIONALTIME_HPP

#include "Date.hpp"
#include "Month.hpp"
#include "TimeOfDay.hpp"

namespace Ishiko
{
    class DateAndOptionalTime
    {
    public:
        DateAndOptionalTime(int year, Month month, unsigned char day);
        DateAndOptionalTime(int year, unsigned char month, unsigned char day);
        DateAndOptionalTime(int year, unsigned char month, unsigned char day, unsigned char hours,
            unsigned char minutes, unsigned char seconds);

        Date date() const;
        bool getTimeOfDay(TimeOfDay& time_of_day) const;

    private:
        Date m_date;
        TimeOfDay m_time;
        bool m_has_time;
    };
}

#endif
