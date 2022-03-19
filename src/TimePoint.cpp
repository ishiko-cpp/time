/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "TimePoint.hpp"
#include <fmt/core.h>

using namespace boost::gregorian;
using namespace boost::posix_time;
using namespace std;

namespace Ishiko
{

TimePoint::TimePoint(const Date& date, const TimeOfDay& timeOfDay)
    : m_timePoint(date.toBoostGregorianDate(), timeOfDay.toBoostTimeDuration())
{
}

TimePoint::TimePoint(ptime timePoint)
    : m_timePoint(timePoint)
{
}

TimePoint TimePoint::Now()
{
    return TimePoint(second_clock::universal_time());
}

string TimePoint::toRFC7231String() const
{
    const date& d = m_timePoint.date();
    const time_duration& t = m_timePoint.time_of_day();
    return fmt::format("{:s}, {:#02d} {:s} {:#04d} {:#02d}:{:#02d}:{:#02d} GMT", d.day_of_week().as_short_string(),
        d.day(), d.month().as_short_string(), d.year(), t.hours(), t.minutes(), t.seconds());
}

}
