/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TESTS_DATETESTS_HPP_
#define _ISHIKO_CPP_TIME_TESTS_DATETESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class DateTests : public Ishiko::TestSequence
{
public:
    DateTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ToISO8601StringTest1(Ishiko::Test& test);
};

#endif
