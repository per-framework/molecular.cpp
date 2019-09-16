#include "molecular_v1/backoff.hpp"

#include "testing_v1/test.hpp"

using namespace molecular_v1;
using namespace testing_v1;

auto backoff_test = test([]() {
  backoff backoff;
  for (size_t i = 0; i < 1000; ++i)
    backoff();
});
