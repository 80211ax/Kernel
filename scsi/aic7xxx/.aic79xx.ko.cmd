cmd_drivers/scsi/aic7xxx/aic79xx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/aic7xxx/aic79xx.ko drivers/scsi/aic7xxx/aic79xx.o drivers/scsi/aic7xxx/aic79xx.mod.o ;  true
