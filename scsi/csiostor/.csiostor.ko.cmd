cmd_drivers/scsi/csiostor/csiostor.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/csiostor/csiostor.ko drivers/scsi/csiostor/csiostor.o drivers/scsi/csiostor/csiostor.mod.o ;  true
