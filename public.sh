sudo mount -t vfat -o loop,offset=$((2048 * 512)) /var/lib/libvirt/images/efitester.img ~/efitester
sudo cp /home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/bin/bootx64.efi ~/efitester/EFI/BOOT/bootx64.efi
sudo umount ~/efitester/

OVMF_DISK_IMG=/usr/share/ovmf/x64/OVMF.fd
DISK_PATH=/var/lib/libvirt/images/efitester.img

# run
sudo qemu-system-x86_64 \
  -cpu qemu64 \
  -enable-kvm \
  -net none \
  -drive if=pflash,format=raw,unit=0,file=${OVMF_DISK_IMG},readonly=on \
  -drive if=ide,format=raw,file=/var/lib/libvirt/images/efitester.img