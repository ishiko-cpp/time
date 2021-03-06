/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_UTCTIME_HPP_
#define _ISHIKO_CPP_TIME_UTCTIME_HPP_

#include "Date.hpp"
#include "TimeOfDay.hpp"
#include <string>

namespace Ishiko
{

// TODO: a representation of UTC time. Unlike SystemTime it is meant to representa wider range of dates in a more
// portable way
class UTCTime
{
public:
    UTCTime(const Date& date, const TimeOfDay& timeOfDay);
    static UTCTime Now();

    std::string toRFC7231String() const;

private:
    Date m_date;
    TimeOfDay m_timeOfDay;
};

}

#endif
