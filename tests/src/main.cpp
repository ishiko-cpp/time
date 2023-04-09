/*
    Copyright (c) 2021-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/time/blob/main/LICENSE.txt
*/

#include "DateAndOptionalTimeTests.hpp"
#include "DateTests.hpp"
#include "StopwatchTests.hpp"
#include "SystemTimeTests.hpp"
#include "TimeOfDayTests.hpp"
#include "UTCTimeTests.hpp"
#include <Ishiko/TestFramework/Core.hpp>
#include <Ishiko/Time/linkoptions.hpp>
#include <exception>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    try
    {
        TestHarness::CommandLineSpecification commandLineSpec;
        commandLineSpec.setDefaultValue("context.data", "../../data");
        commandLineSpec.setDefaultValue("context.output", "../../output");
        commandLineSpec.setDefaultValue("context.reference", "../../reference");

        Configuration configuration = commandLineSpec.createDefaultConfiguration();
        CommandLineParser::parse(commandLineSpec, argc, argv, configuration);

        TestHarness theTestHarness("Ishiko/C++ Time Library Tests", configuration);

        TestSequence& theTests = theTestHarness.tests();
        theTests.append<SystemTimeTests>();
        theTests.append<DateTests>();
        theTests.append<TimeOfDayTests>();
        theTests.append<UTCTimeTests>();
        theTests.append<DateAndOptionalTimeTests>();
        theTests.append<StopwatchTests>();

        return theTestHarness.run();
    }
    catch (const std::exception& e)
    {
        return TestApplicationReturnCode::exception;
    }
    catch (...)
    {
        return TestApplicationReturnCode::exception;
    }
}
