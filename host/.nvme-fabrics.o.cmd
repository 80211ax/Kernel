cmd_drivers/nvme/host/nvme-fabrics.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvme/host/nvme-fabrics.o drivers/nvme/host/fabrics.o
