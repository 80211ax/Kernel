cmd_drivers/nvme/host/nvme-fc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o drivers/nvme/host/nvme-fc.ko drivers/nvme/host/nvme-fc.o drivers/nvme/host/nvme-fc.mod.o ;  true
