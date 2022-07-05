/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "UTCTimeTests.hpp"
#include "Ishiko/Time/UTCTime.hpp"

using namespace Ishiko;

UTCTimeTests::UTCTimeTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "UTCTime tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("toRFC7231String test 1", ToRFC7231StringTest1);
}

void UTCTimeTests::ConstructorTest1(Test& test)
{
    UTCTime time(Date(2022, Month::march, 19), TimeOfDay(17, 21, 00));

    ISHIKO_TEST_PASS();
}

void UTCTimeTests::ToRFC7231StringTest1(Test& test)
{
    UTCTime time(Date(2022, Month::march, 19), TimeOfDay(17, 21, 00));

    std::string rfc7213String = time.toRFC7231String();

    ISHIKO_TEST_FAIL_IF_NEQ(rfc7213String, "Sat, 19 Mar 2022 17:21:00 GMT");
    ISHIKO_TEST_PASS();
}
