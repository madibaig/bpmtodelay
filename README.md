# bpmtodelay
Simple command line tool that prints delay times in ms corresponding to the bpm inputted.

So for example, ./bpmtodelay 120 will print out:

Delay length (D for dotted, T for triplet) | ms time
--------------------- | ---------------------
1/2D:   | 1500.000 ms
1/2:    | 1000.000 ms
1/2T:   | 666.667 ms
1/4D:   | 750.000 ms
1/4:    | 500.000 ms
1/4T:   | 333.333 ms
1/8D:   | 375.000 ms
1/8:    | 250.000 ms
1/8T:   | 166.667 ms
1/16D:  | 187.500 ms
1/16:   | 125.000 ms
1/16T:  | 83.333 ms
1/32D:  | 93.750 ms
1/32:   | 62.500 ms
1/32T:  | 41.667 ms
1/64D:  | 46.875 ms
1/64:   | 31.250 ms
1/64T:  | 20.833 ms

Run make to compile or make install to put the executable in ~/.local/bin/
