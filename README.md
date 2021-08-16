This repo is a minimal example for having multiple entry points into the program and choosing the entry point at build time.

## Build and run
Enter through main.cpp:

`g++ *.cpp -o program -DMAIN && ./program`

Enter through addtwonumbers.cpp:

`g++ *.cpp -o program -DADDTWONUMBERS && ./program`