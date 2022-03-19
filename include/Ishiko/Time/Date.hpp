/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_DATE_HPP_
#define _ISHIKO_CPP_TIME_DATE_HPP_

#include <boost/date_time.hpp>

namespace Ishiko
{

class Date
{
public:
    enum Month
    {
        january = 1,
        february = 2,
        march = 3,
        april = 4,
        may = 5,
        june = 6,
        july = 7,
        august = 8,
        september = 9,
        october = 10,
        november = 11,
        december = 12
    };

    Date(int year, Month month, unsigned char day);
    Date(const boost::gregorian::date& date);

    int year() const;
    Month month() const;
    unsigned char day() const;

    std::string toISO8601String() const;

private:
    boost::gregorian::date m_date;
};

}

#endif
