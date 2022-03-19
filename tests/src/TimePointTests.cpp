/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "TimePointTests.hpp"
#include "Ishiko/Time/TimePoint.hpp"

using namespace Ishiko;
using namespace std;

TimePointTests::TimePointTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "TimePoint tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Now test 1", NowTest1);
    append<HeapAllocationErrorsTest>("toRFC7231String test 1", ToRFC7231StringTest1);
}

void TimePointTests::ConstructorTest1(Test& test)
{
    TimePoint timePoint(Date(2022, Date::march, 19), TimeOfDay(17, 21, 00));

    // TODO: test values
    ISHIKO_TEST_PASS();
}

void TimePointTests::NowTest1(Test& test)
{
    TimePoint timePoint = TimePoint::Now();

    ISHIKO_TEST_PASS();
}

void TimePointTests::ToRFC7231StringTest1(Test& test)
{
    TimePoint timePoint(Date(2022, Date::march, 19), TimeOfDay(17, 21, 00));

    string rfc7213String = timePoint.toRFC7231String();

    ISHIKO_TEST_FAIL_IF_NEQ(rfc7213String, "Sat, 19 Mar 2022 17:21:00 GMT");
    ISHIKO_TEST_PASS();
}
