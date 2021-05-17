cmd_drivers/scsi/st.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o ;  true
