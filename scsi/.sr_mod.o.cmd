cmd_drivers/scsi/sr_mod.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/sr_mod.o drivers/scsi/sr.o drivers/scsi/sr_ioctl.o drivers/scsi/sr_vendor.o
