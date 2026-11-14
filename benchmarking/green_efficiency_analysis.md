# Green Efficiency Analysis

## Measurement Methodology

The experiments were conducted using three C programs to study execution time and algorithmic efficiency.

The baseline experiment measured the execution time of a deterministic loop containing 100,000,000 iterations. The program was executed three consecutive times, and the output of each run was recorded.

The algorithm comparison experiment used an array containing 50,000 elements. Two implementations were tested: a naive algorithm using nested loops and a single-pass algorithm using one loop. Both implementations processed the same data. Each program was executed three times, and the average execution time was calculated.

The controlled instrumentation experiment measured three separate phases: dataset construction, dataset processing, and checksum reduction. The clock() function from time.h was used to measure each phase and the total execution time.

## Observed Performance Differences

The baseline experiment produced three execution times:

- Run 1: [time] seconds
- Run 2: [time] seconds
- Run 3: [time] seconds

The results show [describe the measured variation].

In the algorithm comparison experiment, the naive algorithm produced an average execution time of [time] seconds, while the single-pass algorithm averaged [time] seconds.

The naive algorithm required more execution time because it repeatedly checks elements using nested loops. The single-pass implementation processes each element once, making it more efficient.

The relative performance difference was approximately [value] times.

## Limitations of the Experiment

The measurements were collected using clock(), which measures processor time rather than total elapsed wall-clock time.

Execution times may also be affected by compiler optimization, processor workload, background processes, and system scheduling.

Another limitation is that the experiments were performed on one computer. Different hardware and system configurations may produce different results.

The energy consumption was not directly measured, so runtime alone cannot establish the exact energy used by each program.

## Practical Engineering Takeaway

The experiments demonstrate the importance of selecting efficient algorithms before attempting low-level optimizations.

The comparison between nested loops and a single-pass implementation shows how algorithm design can influence execution time.

Engineers should measure performance rather than assume that an implementation is efficient. Repeating measurements and comparing averages provides more reliable information than relying on a single execution.

The instrumentation experiment also demonstrates the value of measuring individual program phases. This helps identify which operations require the most processing time.

## Relation Between Runtime and Energy Consumption

Execution time and energy consumption are related, but they are not identical measurements.

A program that finishes faster may use less energy if it reduces the time the processor remains active. However, energy consumption also depends on processor power, hardware behavior, and system activity.

The measured execution times provide information about computational performance, but they do not directly prove which implementation consumes less energy.

Further experiments using actual power measurements would be necessary to establish a reliable relationship between runtime and energy consumption.

Overall, efficient algorithms and accurate performance measurements are important for developing software that uses computing resources effectively.
