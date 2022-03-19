/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TIMEPOINT_HPP_
#define _ISHIKO_CPP_TIME_TIMEPOINT_HPP_

#include "Date.hpp"
#include "TimeOfDay.hpp"
#include <boost/date_time.hpp>
#include <string>

namespace Ishiko
{

class TimePoint
{
public:
    TimePoint(const Date& date, const TimeOfDay& timeOfDay);
    TimePoint(boost::posix_time::ptime timePoint);
    static TimePoint Now();

    std::string toRFC7231String() const;

private:
    boost::posix_time::ptime m_timePoint;
};

}

#endif
