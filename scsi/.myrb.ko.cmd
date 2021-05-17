cmd_drivers/scsi/myrb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/myrb.ko drivers/scsi/myrb.o drivers/scsi/myrb.mod.o ;  true
