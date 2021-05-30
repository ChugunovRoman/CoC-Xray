#!/bin/bash

find ./src/ -regextype egrep -regex ".*/*\.(cpp|h|c)" -exec clang-format -i {} \;
