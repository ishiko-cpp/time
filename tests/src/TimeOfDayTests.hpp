/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_TIME_TESTS_TIMEOFDAYTESTS_HPP
#define GUARD_ISHIKO_CPP_TIME_TESTS_TIMEOFDAYTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class TimeOfDayTests : public Ishiko::TestSequence
{
public:
    TimeOfDayTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void EqualityOperatorTest1(Ishiko::Test& test);
    static void InequalityOperatorTest1(Ishiko::Test& test);
    static void ToISO8601StringTest1(Ishiko::Test& test);
};

#endif
