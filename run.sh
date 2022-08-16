#!/bin/bash

OVMF_DISK_IMG=/usr/share/ovmf/x64/OVMF.fd
DISK_PATH=/var/lib/libvirt/images/efitester.img

# run
qemu-system-x86_64 \
  -cpu qemu64 \
  -enable-kvm \
  -net none \
  -drive if=pflash,format=raw,unit=0,file=${OVMF_DISK_IMG},readonly=on \
  -drive if=ide,format=raw,file=/var/lib/libvirt/images/efitester.img