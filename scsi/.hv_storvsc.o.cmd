cmd_drivers/scsi/hv_storvsc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/hv_storvsc.o drivers/scsi/storvsc_drv.o
