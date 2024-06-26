/*
    Copyright (c) 2023-2024 Xavier Leclercq
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
        DateAndOptionalTime(unsigned short year, Month month, unsigned char day);
        DateAndOptionalTime(unsigned short year, unsigned char month, unsigned char day);
        DateAndOptionalTime(unsigned short year, unsigned char month, unsigned char day, unsigned char hours,
            unsigned char minutes, unsigned char seconds);
        DateAndOptionalTime(boost::gregorian::date date);
        DateAndOptionalTime(boost::gregorian::date date, boost::posix_time::time_duration time_of_day);

        void operator=(Date date);

        Date date() const;
        bool getTimeOfDay(TimeOfDay& time_of_day) const;
        TimeOfDay getTimeOfDayOrDefault(TimeOfDay default_time_of_day) const;

        bool operator==(Date other) const;
        bool operator!=(Date other) const;
        bool operator<(DateAndOptionalTime other) const;

    private:
        Date m_date;
        TimeOfDay m_time;
        bool m_has_time;
    };
}

#endif
