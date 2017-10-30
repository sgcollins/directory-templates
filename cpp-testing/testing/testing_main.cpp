#include "gtest/gtest.h"
#include <iostream>

// Include your tests here:

int main (int argc, char** argv)
{
  std::cout << "Main function for running tests." << std::endl;
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
