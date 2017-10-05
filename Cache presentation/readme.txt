Shows speedup by improving cache hit rates.
Uses one 32 bit bit field instead of 32 separate booleans.

Timings in microseconds:
Fast version - 4191
Slow version - 10035

Cachegrind miss rates:
Fast version - L1D 0.8% L2D 0.8%
Slow version - L1D 10% L2D 9.9%
