/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_MONTH_HPP_
#define _ISHIKO_CPP_TIME_MONTH_HPP_

#include <boost/date_time.hpp>
#include <string>

namespace Ishiko
{

class Month
{
public:
    enum Name
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

    Month(boost::gregorian::greg_month month);

    unsigned char number() const;

    bool operator==(int other) const;
    bool operator!=(int other) const;

    std::string toShortString() const;

private:
    boost::gregorian::greg_month m_month;
};

}

#endif
