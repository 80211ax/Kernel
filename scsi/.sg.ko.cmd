cmd_drivers/scsi/sg.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sg.ko drivers/scsi/sg.o drivers/scsi/sg.mod.o ;  true
