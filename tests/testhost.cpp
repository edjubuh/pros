
#define CATCH_CONFIG_RUNNER
#define CATCH_INTERNAL_CONFIG_NO_POSIX_SIGNALS

#include "catch.hpp"

#include "main.h"

void TaskRunner(void* _)
{
	const char* args[] = {"./pros"};
	Catch::Session().run(sizeof(args) / sizeof(char*), args);
}

pros::Task runerHost(TaskRunner);
