#!/bin/sh

ifconfig -a | grep -w "ether" | tr -d '\t' | cut -d ' ' -f2
