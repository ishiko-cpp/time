/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateAndOptionalTime.hpp"

using namespace Ishiko;

DateAndOptionalTime::DateAndOptionalTime(int year, Month month, unsigned char day)
    : m_date{year, month.number(), day}
{
}

DateAndOptionalTime::DateAndOptionalTime(int year, unsigned char month, unsigned char day)
    : m_date{year, month, day}
{
}

Date DateAndOptionalTime::date() const
{
    return m_date;
}
