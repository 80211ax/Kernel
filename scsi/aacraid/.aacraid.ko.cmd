cmd_drivers/scsi/aacraid/aacraid.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/aacraid/aacraid.ko drivers/scsi/aacraid/aacraid.o drivers/scsi/aacraid/aacraid.mod.o ;  true
