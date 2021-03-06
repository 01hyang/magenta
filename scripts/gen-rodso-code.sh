#!/usr/bin/env bash

# Copyright 2016 The Fuchsia Authors
#
# Use of this source code is governed by a MIT-style
# license that can be found in the LICENSE file or at
# https://opensource.org/licenses/MIT

# This script reads symbols with nm and writes a C header file that
# defines macros <NAME>_CODE_*, <NAME>_DATA_* and <NAME>_ENTRY, with
# the address constants found in the symbol table for the symbols
# CODE_*, DATA_* and _start, respectively.

usage() {
  echo >&2 "Usage: $0 NM {NAME DSO}..."
  exit 2
}

if [ $# -lt 3 ]; then
  usage
fi

NM="$1"
shift

set -o pipefail -e

find_code_symbol() {
  local status=1
  local symbol type addr rest
  while read symbol type addr rest; do
    case "$symbol" in
    CODE_*|DATA_*|_start)
      if [ "$symbol" = _start ]; then
        symbol=ENTRY
      fi
      echo "#define ${1}_${symbol} 0x${addr}"
      status=0
      ;;
    esac
  done
  return $status
}

while [ $# -gt 0 ]; do
  if [ $# -lt 2 ]; then
    usage
  fi
  echo "#define ${1}_FILENAME \"${2}\""
  "$NM" -P "$2" | find_code_symbol "$1"
  shift 2
done
