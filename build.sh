#!/bin/bash

# This file let us configure the GCC - Architecture to Compile our sorce Code
echo "Building started..."

# GCC and ToolChain STAGING_DIR path
#export CXX=/home/omarerc/Documents/projects/wrt/openwrt-sdk-mvebu-cortexa53_gcc-14.2.0_musl.Linux-x86_64/staging_dir/host/bin/g++
#export STAGING_DIR=/home/omarerc/Documents/projects/wrt/openwrt-sdk-mvebu-cortexa53_gcc-14.2.0_musl.Linux-x86_64/staging_dir/host
export CXX=/bin/g++
export STAGING_DIR=/
make