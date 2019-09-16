#pragma once

#include "molecular_v1/config.hpp"

#include <cstdint>

namespace molecular_v1 {

struct backoff;

class Private {
  friend struct backoff;

  class backoff_t;
};

} // namespace molecular_v1

class molecular_v1::Private::backoff_t {
  friend struct backoff;
  backoff_t();
  static thread_local uint32_t s_seed;
  uint8_t m_count;
};
