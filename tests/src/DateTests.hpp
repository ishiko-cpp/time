/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TIME_TESTS_DATETESTS_H_
#define _ISHIKO_CPP_TIME_TESTS_DATETESTS_H_

#include <Ishiko/Tests/Core.h>

class DateTests : public Ishiko::Tests::TestSequence
{
public:
    DateTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif
