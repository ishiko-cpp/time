/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_SYSTEMTIME_HPP_
#define _ISHIKO_CPP_TIME_SYSTEMTIME_HPP_

#include "UTCTime.hpp"
#include <boost/date_time.hpp>

namespace Ishiko
{

// TODO: this is the time as represented by the underlying OS. So not all dates might be represented e.g. if posix time
// is used
class SystemTime
{
public:
    SystemTime(boost::posix_time::ptime timePoint);
    static SystemTime Now();

    UTCTime toUTCTime() const;

private:
    boost::posix_time::ptime m_time;
};

}

#endif
