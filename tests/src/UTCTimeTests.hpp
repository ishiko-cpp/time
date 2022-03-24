/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TESTS_UTCTIMETESTS_HPP_
#define _ISHIKO_CPP_TIME_TESTS_UTCTIMETESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class UTCTimeTests : public Ishiko::TestSequence
{
public:
    UTCTimeTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
