/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateAndOptionalTimeTests.hpp"
#include "Ishiko/Time/DateAndOptionalTime.hpp"

using namespace Ishiko;

DateAndOptionalTimeTests::DateAndOptionalTimeTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "DateAndOptionalTime tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
}

void DateAndOptionalTimeTests::ConstructorTest1(Test& test)
{
    DateAndOptionalTime date{2021, Month::december, 25};

    ISHIKO_TEST_FAIL_IF_NEQ(date.date().year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().day(), 25);

    TimeOfDay time_of_day{04, 05, 06};
    bool has_time = date.getTimeOfDay(time_of_day);
    
    ISHIKO_TEST_FAIL_IF(has_time);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 04);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 05);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 06);

    ISHIKO_TEST_PASS();
}

void DateAndOptionalTimeTests::ConstructorTest2(Test& test)
{
    DateAndOptionalTime date_time{2021, Month::december, 25, 01, 02, 03};

    ISHIKO_TEST_FAIL_IF_NEQ(date_time.date().year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date_time.date().month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date_time.date().day(), 25);

    TimeOfDay time_of_day{04, 05, 06};
    bool has_time = date_time.getTimeOfDay(time_of_day);
    
    ISHIKO_TEST_FAIL_IF_NOT(has_time);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 01);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 02);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 03);

    ISHIKO_TEST_PASS();
}

void DateAndOptionalTimeTests::ConstructorTest3(Test& test)
{
    boost::gregorian::date boost_date{2021, 12, 25};
    DateAndOptionalTime date{boost_date};

    ISHIKO_TEST_FAIL_IF_NEQ(date.date().year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().day(), 25);

    TimeOfDay time_of_day{04, 05, 06};
    bool has_time = date.getTimeOfDay(time_of_day);
    
    ISHIKO_TEST_FAIL_IF(has_time);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 04);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 05);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 06);

    ISHIKO_TEST_PASS();
}

void DateAndOptionalTimeTests::ConstructorTest4(Test& test)
{
    boost::gregorian::date boost_date{2021, 12, 25};
    boost::posix_time::time_duration boost_time{10, 15, 23};
    DateAndOptionalTime date{boost_date, boost_time};

    ISHIKO_TEST_FAIL_IF_NEQ(date.date().year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().day(), 25);

    TimeOfDay time_of_day{04, 05, 06};
    bool has_time = date.getTimeOfDay(time_of_day);
    
    ISHIKO_TEST_FAIL_IF_NOT(has_time);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 10);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 15);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 23);

    ISHIKO_TEST_PASS();
}
