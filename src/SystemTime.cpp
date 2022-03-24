/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "SystemTime.hpp"

using namespace boost::posix_time;

namespace Ishiko
{

SystemTime::SystemTime(ptime timePoint)
    : m_time(timePoint)
{
}

SystemTime SystemTime::Now()
{
    return SystemTime(second_clock::universal_time());
}

UTCTime SystemTime::toUTCTime() const
{
    return UTCTime(Date(m_time.date()), TimeOfDay(m_time.time_of_day()));
}

}
