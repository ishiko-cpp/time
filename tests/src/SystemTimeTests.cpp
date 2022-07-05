/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "SystemTimeTests.hpp"
#include "Ishiko/Time/SystemTime.hpp"
#include <boost/date_time.hpp>

using namespace Ishiko;

SystemTimeTests::SystemTimeTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "SystemTime tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Now test 1", NowTest1);
}

void SystemTimeTests::ConstructorTest1(Test& test)
{
    SystemTime time = boost::posix_time::ptime();

    // TODO: test values
    ISHIKO_TEST_PASS();
}

void SystemTimeTests::NowTest1(Test& test)
{
    SystemTime time = SystemTime::Now();

    ISHIKO_TEST_PASS();
}
