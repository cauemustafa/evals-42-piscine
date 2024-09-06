#!/bin/bash
ifconfig | grep -i ether | awk '{print $2}'
