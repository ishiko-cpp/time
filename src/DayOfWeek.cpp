/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DayOfWeek.hpp"

using namespace boost::gregorian;
using namespace std;

namespace Ishiko
{
    
DayOfWeek::DayOfWeek(greg_weekday dayOfWeek)
    : m_dayOfWeek(dayOfWeek)
{
}

string DayOfWeek::toShortString() const
{
    return m_dayOfWeek.as_short_string();
}

}
