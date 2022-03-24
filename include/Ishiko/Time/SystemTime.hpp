/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_SYSTEMTIME_HPP_
#define _ISHIKO_CPP_TIME_SYSTEMTIME_HPP_

#include "Date.hpp"
#include "TimeOfDay.hpp"
#include <boost/date_time.hpp>
#include <string>

namespace Ishiko
{

// TODO: this is the time as represented by the underlying OS. So not all dates might be represented e.g. if posix time
// is used
class SystemTime
{
public:
    SystemTime(const Date& date, const TimeOfDay& timeOfDay);
    SystemTime(boost::posix_time::ptime timePoint);
    static SystemTime Now();

    std::string toRFC7231String() const;

private:
    boost::posix_time::ptime m_time;
};

}

#endif
