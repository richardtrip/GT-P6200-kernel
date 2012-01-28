cmd_drivers/serial/built-in.o :=  arm-eabi-ld -EL    -r -o drivers/serial/built-in.o drivers/serial/serial_core.o drivers/serial/8250.o drivers/serial/samsung.o drivers/serial/s5pv210.o 
