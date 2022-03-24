/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "Month.hpp"

using namespace boost::gregorian;
using namespace std;

namespace Ishiko
{
    
Month::Month(greg_month month)
    : m_month(month)
{
}

unsigned char Month::number() const
{
    return m_month.as_number();
}

bool Month::operator==(int other) const
{
    return (m_month.as_number() == other);
}

bool Month::operator!=(int other) const
{
    return (m_month.as_number() != other);
}

string Month::toShortString() const
{
    return m_month.as_short_string();
}

}
