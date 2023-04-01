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
}

void TimeOfDayTests::ConstructorTest1(Test& test)
{
    TimeOfDay time_of_day{01, 02, 03};

    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.hours(), 01);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.minutes(), 02);
    ISHIKO_TEST_FAIL_IF_NEQ(time_of_day.seconds(), 03);
    ISHIKO_TEST_PASS();
}
