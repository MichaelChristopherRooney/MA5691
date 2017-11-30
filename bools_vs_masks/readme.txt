Shows speedup by improving cache hit rates.
Uses one 32 bit bit field instead of 32 separate booleans.

Timings in microseconds:
Fast version - 182'945
Slow version - 253'773

Cachegrind miss rates:
Fast version - L1D 0.8% L2D 0%
Slow version - L1D 10% L2D 10%
