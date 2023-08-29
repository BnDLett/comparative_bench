# comparative_bench
A benchmark for comparisons vs if statements in Python.

It is recommended to use optimization level 1 for the C bench, the GCC compiler will usually optimize the code beyond use if level 2 or 3 is applied.

Conclusion:
For Python, if statements are more optimized and faster; For C, if statements are slower HOWEVER the difference is insignificant and the compiler will usually optimize the code itself if you let it.
