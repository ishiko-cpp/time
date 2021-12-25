/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateTests.hpp"
#include <Ishiko/Time/Date.hpp>

using namespace Ishiko::Time;
using namespace Ishiko::Tests;

DateTests::DateTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "Date tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void DateTests::ConstructorTest1(Test& test)
{
    Date date;

    ISHIKO_PASS();
}
