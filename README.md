# CPP

Combinations of leetcode and some algorithm related problems

## C++ solutions

all the programs can be run using g++ compiler, I assume you have C++ 11 or higher as default
if not please specify that when compiling, this one is mine

```
    g++ std=c++17 program.cpp
    ./a.out
```

I have one header file (for now), in case need to be used, include that with an extra argument like this:

```
    g++ std=c++17 program.cpp -I headers/
```

This repo is more about solving problems and learning, so may not always be perfect.

I have added a small shell script in my code to use when input is too large to copy and paste, you just have to pass the link to the website where input is as an argument.

NOTE: following code needs to be added to the .cpp file before compiling so the
program knows to take input from file. The ```input.sh``` shell script copies the
input from the given link and writes that to ```input.in``` file and feeds that as input to ```a.out``` and writes the output to ```output.out```

```
freopen("input.in", "r", stdin);
freopen("output.out", "w", stdout);
```

An example of using ```input.sh``` executable. replace \<link> by your link to the input

```
./input.sh <link>
```