#!/bin/bash
#compile
mkdir out
export ARCH=arm64
export CROSS_COMPILE=~/android/toolchain/bin/aarch64-linux-android-
export O=out
export TARGET_BUILD_VARIANT=user
make zte_a476_otg_defconfig 
make Image.gz-dtb -j5
