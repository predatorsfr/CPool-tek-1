#!/bin/bash

cut -d';' -f3 | grep -i -e "$1" | wc -l
