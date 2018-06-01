#!/bin/bash
make ARCH=arm64 CROSS_COMPILE=~/android/toolchain/bin/aarch64-linux-android- TARGET_BUILD_VARIANT=user zte_a476_otg_defconfig Image.gz-dtb -j5

