/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "StopwatchTests.hpp"

using namespace Ishiko;

StopwatchTests::StopwatchTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Stopwatch tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void StopwatchTests::ConstructorTest1(Test& test)
{
}
