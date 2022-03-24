/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "SystemTimeTests.hpp"
#include "Ishiko/Time/SystemTime.hpp"

using namespace Ishiko;
using namespace std;

SystemTimeTests::SystemTimeTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "SystemTime tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Now test 1", NowTest1);
    append<HeapAllocationErrorsTest>("toRFC7231String test 1", ToRFC7231StringTest1);
}

void SystemTimeTests::ConstructorTest1(Test& test)
{
    SystemTime time(Date(2022, Date::march, 19), TimeOfDay(17, 21, 00));

    // TODO: test values
    ISHIKO_TEST_PASS();
}

void SystemTimeTests::NowTest1(Test& test)
{
    SystemTime time = SystemTime::Now();

    ISHIKO_TEST_PASS();
}

void SystemTimeTests::ToRFC7231StringTest1(Test& test)
{
    SystemTime time(Date(2022, Date::march, 19), TimeOfDay(17, 21, 00));

    string rfc7213String = time.toRFC7231String();

    ISHIKO_TEST_FAIL_IF_NEQ(rfc7213String, "Sat, 19 Mar 2022 17:21:00 GMT");
    ISHIKO_TEST_PASS();
}
