/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateTests.hpp"
#include <Ishiko/Tests/Core.h>
#include <Ishiko/Time/linkoptions.hpp>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTime");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<DateTests>();

    return theTestHarness.run();
}
