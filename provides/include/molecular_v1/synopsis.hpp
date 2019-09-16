#pragma once

#include "molecular_v1/private.hpp"

namespace molecular_v1 {

// backoff.hpp =================================================================

/// A minimalist implementation of randomized exponential backoff for low level
/// spin-wait loops.
struct backoff : Private::backoff_t {
  /// Constructs a new backoff counter with limit set to minimum.
  backoff();

  /// On each invocation executes a random, but limited, number of `pause`
  /// instructions and doubles the limit until it reaches the maximum.
  void operator()();
};

} // namespace molecular_v1
