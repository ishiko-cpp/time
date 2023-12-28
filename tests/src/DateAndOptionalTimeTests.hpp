/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_TIME_TESTS_DATEANDOPTIONALTIMETESTS_HPP
#define GUARD_ISHIKO_CPP_TIME_TESTS_DATEANDOPTIONALTIMETESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class DateAndOptionalTimeTests : public Ishiko::TestSequence
{
public:
    DateAndOptionalTimeTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void ConstructorTest3(Ishiko::Test& test);
    static void ConstructorTest4(Ishiko::Test& test);
};

#endif
