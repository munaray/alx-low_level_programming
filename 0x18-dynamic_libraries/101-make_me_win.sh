#!/bin/bash
wget -P /tmp https://github.com/munaray/alx-low_level_programming/raw/main/0x18-dynamic_libraries/munaray.so
export LD_PRELOAD=/tmp/munaray.so
