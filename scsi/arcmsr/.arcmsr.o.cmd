cmd_drivers/scsi/arcmsr/arcmsr.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/arcmsr/arcmsr.o drivers/scsi/arcmsr/arcmsr_attr.o drivers/scsi/arcmsr/arcmsr_hba.o
