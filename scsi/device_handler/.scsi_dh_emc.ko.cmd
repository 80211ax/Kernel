cmd_drivers/scsi/device_handler/scsi_dh_emc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/device_handler/scsi_dh_emc.ko drivers/scsi/device_handler/scsi_dh_emc.o drivers/scsi/device_handler/scsi_dh_emc.mod.o ;  true
