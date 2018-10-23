#!/bin/bash
#create out directory
mkdir out
#set architectute
export ARCH=arm64
export SUBARCH=arm64
#set cross compiller path
export CROSS_COMPILE=~/Kernel/toolchain/aarch64-linux-android-4.9/bin/aarch64-linux-android-
#set build variant(optinal)
export TARGET_BUILD_VARIANT=user
#set directory for build output
export  KBUILD_OUTPUT=out
#set defconfig
make zte_a476_otg_defconfig 
#start compile
make Image.gz-dtb -j5
