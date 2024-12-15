#!/usr/bin/env bash

set -e

gcc src/*.c tests/*.c -W -Wall -Wextra -Werror -Iinclude -lcriterion -o unit_tests

./unit_tests
