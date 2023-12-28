/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "TimeOfDayTests.hpp"
#include "Ishiko/Time/TimeOfDay.hpp"

using namespace Ishiko;

TimeOfDayTests::TimeOfDayTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "TimeOfDay tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("toISO8601String test 1", ToISO8601StringTest1);
}

void TimeOfDayTests::ConstructorTest1(Test& test)
{
    TimeOfDay time_of_day{01, 02, 03};

    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 01);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 02);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 03);
    ISHIKO_TEST_PASS();
}

void TimeOfDayTests::EqualityOperatorTest1(Test& test)
{
    TimeOfDay time_of_day_1{01, 02, 03};
    TimeOfDay time_of_day_2{01, 02, 03};
    TimeOfDay time_of_day_3{02, 02, 03};
    TimeOfDay time_of_day_4{01, 03, 03};
    TimeOfDay time_of_day_5{01, 02, 04};

    ISHIKO_TEST_FAIL_IF_NOT(time_of_day_1 == time_of_day_2);
    ISHIKO_TEST_FAIL_IF(time_of_day_1 == time_of_day_3);
    ISHIKO_TEST_FAIL_IF(time_of_day_1 == time_of_day_4);
    ISHIKO_TEST_FAIL_IF(time_of_day_1 == time_of_day_5);
    ISHIKO_TEST_PASS();
}

void TimeOfDayTests::InequalityOperatorTest1(Test& test)
{
    TimeOfDay time_of_day_1{01, 02, 03};
    TimeOfDay time_of_day_2{01, 02, 03};
    TimeOfDay time_of_day_3{02, 02, 03};
    TimeOfDay time_of_day_4{01, 03, 03};
    TimeOfDay time_of_day_5{01, 02, 04};

    ISHIKO_TEST_FAIL_IF(time_of_day_1 != time_of_day_2);
    ISHIKO_TEST_FAIL_IF_NOT(time_of_day_1 != time_of_day_3);
    ISHIKO_TEST_FAIL_IF_NOT(time_of_day_1 != time_of_day_4);
    ISHIKO_TEST_FAIL_IF_NOT(time_of_day_1 != time_of_day_5);
    ISHIKO_TEST_PASS();
}

void TimeOfDayTests::ToISO8601StringTest1(Test& test)
{
    TimeOfDay time_of_day{01, 02, 03};

    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.toISO8601String(), "01:02:03");
    ISHIKO_TEST_PASS();
}
