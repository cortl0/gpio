# Fast GPIO library
Minimum calculations at run time  
Maximum calculations at and before compile time  
C++

## Project directories and files

#### ./bash/
GPIO scripts

#### ./src/ (cpu || board) /
Board and CPU Implementation code

#### ./src/ (cpu || board) / * / *_definition_generator.cpp
Definition generator for each CPU and Board  
(calculations before compile time)

#### ./src/ (cpu || board) / * / *_example.hpp
Example usung for each CPU and Board

#### ./src/main.cpp
Example of using GPIO for CPUs and Boards

#### ./src/creator/creator.cpp
Template for new CPUs and boards

#### Available CPUs
Allwinner H2+  
http://www.allwinnertech.com/index.php?c=product&a=index&id=62  
  
Broadcom BCM2835  
  
Texas Instruments AM335x  
https://www.ti.com/sitesearch/docs/universalsearch.tsp?searchTerm=AM335x#q=AM335x&t=technicaldocument&linkId=3

#### Available boards
BananaPi P2 Zero (BPI-P2 Zero)  
http://www.banana-pi.org/m2pz.html  
  
BeagleBone Black  
https://beagleboard.org/black
  
Raspberry Pi Zero rev 1.3  

## Build
make  
make all  
make clean  
if available:  
make install  
make uninstall  
Qt build

## Author
Ilya Shishkin  
mailto:cortl@8iter.ru

## GitHub reference
https://github.com/cortl0/gpio

## License
This project is licensed under the GPL v3.0 - see the LICENSE file for details
