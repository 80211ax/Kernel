cmd_drivers/scsi/sd_mod.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/sd_mod.o drivers/scsi/sd.o drivers/scsi/sd_dif.o drivers/scsi/sd_zbc.o
