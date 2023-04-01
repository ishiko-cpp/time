/*
    Copyright (c) 2021-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_TIME_DATE_HPP
#define GUARD_ISHIKO_CPP_TIME_DATE_HPP

#include "DayOfWeek.hpp"
#include "Month.hpp"
#include <boost/date_time.hpp>

namespace Ishiko
{

class Date
{
public:
    Date(int year, Month month, unsigned char day);
    Date(int year, unsigned char month, unsigned char day);
    Date(const boost::gregorian::date& date);

    int year() const;
    Month month() const;
    unsigned char day() const;
    DayOfWeek dayOfWeek() const;

    std::string toISO8601String() const;

private:
    boost::gregorian::date m_date;
};

}

#endif
