cmd_drivers/scsi/ses.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/ses.ko drivers/scsi/ses.o drivers/scsi/ses.mod.o ;  true
