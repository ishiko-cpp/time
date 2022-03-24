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
}

void UTCTimeTests::ConstructorTest1(Test& test)
{
    UTCTime time;

    ISHIKO_TEST_PASS();
}
