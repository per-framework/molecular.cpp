#pragma once

#include "molecular_v1/synopsis.hpp"

#include "dumpster_v1/ranqd1.hpp"
#include "intrinsics_v1/pause.hpp"

inline molecular_v1::Private::backoff_t::backoff_t() : m_count(0) {}

//

inline molecular_v1::backoff::backoff() {}

inline void molecular_v1::backoff::operator()() {
#if defined(__clang__)
#pragma unroll 1
#endif
  for (auto n = 1 + ((s_seed = dumpster::ranqd1(s_seed)) &
                     (m_count = 2 * m_count + 1));
       n;
       --n)
    intrinsics::pause();
}
