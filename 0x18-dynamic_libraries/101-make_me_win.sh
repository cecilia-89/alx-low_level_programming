#!/bin/bash
curl https://github.com/svelezg/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=../inject.so
