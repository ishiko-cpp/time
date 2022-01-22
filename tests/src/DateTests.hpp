/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TESTS_DATETESTS_HPP_
#define _ISHIKO_CPP_TIME_TESTS_DATETESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class DateTests : public Ishiko::Tests::TestSequence
{
public:
    DateTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ToISO8601StringTest1(Ishiko::Tests::Test& test);
};

#endif
