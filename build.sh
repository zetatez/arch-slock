#!/bin/sh

rm -f config.h
sudo make clean install
sudo make clean

sudo chown root /usr/local/bin/slock
sudo chmod u+s  /usr/local/bin/slock
