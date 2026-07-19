# Green efficiency analysis

## Measurement Methodology
The objective of this task is to measure how fast code will run and it's impact on green tech efficiency. To do this, stop watches were implemented in 'instrumentation_lab.c.

A total of three phases were measured in the program, build, process and reduce. Using clock() from the time.h library, the code measures directly before and after these phases. To convert the numbers generated from the code, the answers are divided by 'CLOCKS_PER_SEC' to turn them into regular seconds. The last calculation that was observed is the total seconds the program took to complete the entire process.

To ensure that the logic in the code worked correctly, the program is compiled using 'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long'.

The final results are printed using a &.6f or in other words, 6 decimal point formatting.

## Observed Performance Differences
Below are the observed results from running the finished program.

TOTAL seconds: 0.001256
BUILD DATA seconds: 0.000315
PROCESS seconds: 0.000317
REDUCE seconds: 0.000621

Looking at these results, it is evident that most of the program's time was spent on the reduce step, taking 0.000621 seconds compared to the build, taking 0.000315 seconds, and the process, with 0.000317 seconds.

## Relation Between Runtime and Energy Consumption
When a computer takes longer to run, it uses more battery and power. When there is nothing to do, the processor can rest, designed to save energy. However, if a program is slower or not optimised, this will make the processor continue running at full power for a longer runtime.

In the results, the reduced step keeps the processor working for twice as long as the other phases. When the code runs slower, the extra electricity adds up when thinking about this in a wider view over multiple computers. By making the code faster, the processor can finish more quicker and turn back to 'sleep mode', saving energy consumption.

## Limitations of the Experiment
A significant limitation of this experiment is that it only used a small dataset on one computer. There could be other factors contributing to the time it took for the CPU to run, for example background programs. Each time the experiment runs, the results could be slightly different due to this. A way to decrease this limitation is to run the experiment on a larger dataset over multiple different computers. That way you can compare and average out the results.

## Practical Engineering Takeaway
The biggest takeaway from practical engineering is that it is important to look at the real data instead of trying to guess. If one was to guess instead of doing an experiment, they may believe that process phase would have taken longer than the rest. However, in reality, the actual data has proven that the reduce phase takes twice as much time as the process phase. It is important that practical engineering occurs so that engineers can use these results to attempt to fix aspects of their code to save on runtime and energy consumption.
