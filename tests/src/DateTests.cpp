/*
    Copyright (c) 2021-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateTests.hpp"
#include "Ishiko/Time/Date.hpp"

using namespace Ishiko;

DateTests::DateTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Date tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("toISO8601String test 1", ToISO8601StringTest1);
}

void DateTests::ConstructorTest1(Test& test)
{
    Date date{2021, Month::december, 25};

    ISHIKO_TEST_FAIL_IF_NEQ(date.year(), 2021);
    ISHIKO_TEST_FAIL_IF_NEQ(date.month(), Month::december);
    ISHIKO_TEST_FAIL_IF_NEQ(date.day(), 25);
    ISHIKO_TEST_PASS();
}

void DateTests::EqualityOperatorTest1(Test& test)
{
    Date date_1{2021, Month::december, 25};
    Date date_2{2021, Month::december, 25};
    Date date_3{2022, Month::december, 25};
    Date date_4{2021, Month::january, 25};
    Date date_5{2021, Month::december, 22};

    ISHIKO_TEST_FAIL_IF_NOT(date_1 == date_1);
    ISHIKO_TEST_FAIL_IF_NOT(date_1 == date_2);
    ISHIKO_TEST_FAIL_IF(date_1 == date_3);
    ISHIKO_TEST_FAIL_IF(date_1 == date_4);
    ISHIKO_TEST_FAIL_IF(date_1 == date_5);
    ISHIKO_TEST_PASS();
}

void DateTests::InequalityOperatorTest1(Test& test)
{
    Date date_1{ 2021, Month::december, 25 };
    Date date_2{ 2021, Month::december, 25 };
    Date date_3{ 2022, Month::december, 25 };
    Date date_4{ 2021, Month::january, 25 };
    Date date_5{ 2021, Month::december, 22 };

    ISHIKO_TEST_FAIL_IF(date_1 != date_1);
    ISHIKO_TEST_FAIL_IF(date_1 != date_2);
    ISHIKO_TEST_FAIL_IF_NOT(date_1 != date_3);
    ISHIKO_TEST_FAIL_IF_NOT(date_1 != date_4);
    ISHIKO_TEST_FAIL_IF_NOT(date_1 != date_5);
    ISHIKO_TEST_PASS();
}

void DateTests::ToISO8601StringTest1(Test& test)
{
    Date date{2021, Month::january, 3};

    ISHIKO_TEST_FAIL_IF_NEQ(date.toISO8601String(), "2021-01-03");
    ISHIKO_TEST_PASS();
}
