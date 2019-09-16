#include "molecular_v1/backoff.hpp"

thread_local uint32_t molecular_v1::Private::backoff_t::s_seed;
