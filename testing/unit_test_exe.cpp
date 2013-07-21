#include <gtest/gtest.h>
#include "unit_test_interface.h"

TEST(initialize_com, initialize_com){

	cppcomponents::com::com_initializer init;

	EXPECT_EQ(S_FALSE, CoInitializeEx(nullptr, COINIT_MULTITHREADED));

}

