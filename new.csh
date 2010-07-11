#!/bin/tcsh -f
mkdir -p $argv[1] && tar xjvf qpd_New.tbz -C $argv[1] && \
cd $argv[1] && pwd && mv qpd.pro $argv[1].pro && qtcreator $argv[1].pro
