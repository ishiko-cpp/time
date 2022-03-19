/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateTests.hpp"
#include <Ishiko/Time/Date.hpp>

using namespace Ishiko;
using namespace Ishiko::Time;

DateTests::DateTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Date tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("toISO8601String test 1", ToISO8601StringTest1);
}

void DateTests::ConstructorTest1(Test& test)
{
    Date date(2021, Date::december, 25);

    ISHIKO_TEST_FAIL_IF_NEQ(date.year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.month(), Date::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.day(), 25);
    ISHIKO_TEST_PASS();
}

void DateTests::ToISO8601StringTest1(Test& test)
{
    Date date(2021, Date::january, 3);

    ISHIKO_TEST_FAIL_IF_NEQ(date.toISO8601String(), "2021-01-03");
    ISHIKO_TEST_PASS();
}
