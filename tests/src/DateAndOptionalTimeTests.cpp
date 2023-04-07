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
}

void DateAndOptionalTimeTests::ConstructorTest1(Test& test)
{
    DateAndOptionalTime date{2021, Month::december, 25};

    ISHIKO_TEST_FAIL_IF_NEQ(date.date().year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.date().day(), 25);
    ISHIKO_TEST_PASS();
}
