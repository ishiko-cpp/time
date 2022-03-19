/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TESTS_TIMEPOINTTESTS_HPP_
#define _ISHIKO_CPP_TIME_TESTS_TIMEPOINTTESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class TimePointTests : public Ishiko::TestSequence
{
public:
    TimePointTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void NowTest1(Ishiko::Test& test);
    static void ToRFC7231StringTest1(Ishiko::Test& test);
};

#endif
