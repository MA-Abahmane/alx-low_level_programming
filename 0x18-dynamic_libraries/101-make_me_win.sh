#!/bin/bash
wget -P /tmp https://github.com/MA-Abahmane/alx-low_level_programming/raw/main/0x18-dynamic_libraries/MyRand.so
export LD_PRELOAD=/tmp/MyRand.so
