/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "SystemTime.hpp"
#include <fmt/core.h>

using namespace boost::gregorian;
using namespace boost::posix_time;
using namespace std;

namespace Ishiko
{

// TODO: error if date out of acceptable range
SystemTime::SystemTime(const Date& date, const TimeOfDay& timeOfDay)
    : m_time(date.toBoostGregorianDate(), timeOfDay.toBoostTimeDuration())
{
}

SystemTime::SystemTime(ptime timePoint)
    : m_time(timePoint)
{
}

SystemTime SystemTime::Now()
{
    return SystemTime(second_clock::universal_time());
}

string SystemTime::toRFC7231String() const
{
    const date& d = m_time.date();
    const time_duration& t = m_time.time_of_day();
    return fmt::format("{:s}, {:#02d} {:s} {:#04d} {:#02d}:{:#02d}:{:#02d} GMT", d.day_of_week().as_short_string(),
        d.day(), d.month().as_short_string(), d.year(), t.hours(), t.minutes(), t.seconds());
}

}
