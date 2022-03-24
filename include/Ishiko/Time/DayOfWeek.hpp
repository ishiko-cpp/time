/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_DAYOFWEEK_HPP_
#define _ISHIKO_CPP_TIME_DAYOFWEEK_HPP_

#include <boost/date_time.hpp>
#include <string>

namespace Ishiko
{

class DayOfWeek
{
public:
    DayOfWeek(boost::gregorian::greg_weekday dayOfWeek);

    std::string toShortString() const;

private:
    boost::gregorian::greg_weekday m_dayOfWeek;
};

}

#endif
