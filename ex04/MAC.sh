#!/bin/sh
ip link | grep ether | cut -b 16-32
