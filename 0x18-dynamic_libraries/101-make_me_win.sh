#!/bin/bash
wget -P /tmp/ https://github.com/billhong6981/holbertonschool-low_level_programming/tree/master/0x17-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
