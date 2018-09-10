#!/bin/bash
#compile
mkdir out
export ARCH=arm64
export CROSS_COMPILE=~/android/toolchain/bin/aarch64-linux-android-
export TARGET_BUILD_VARIANT=user
export  KBUILD_OUTPUT=out
make zte_a476_otg_defconfig 
make Image.gz-dtb -j5
