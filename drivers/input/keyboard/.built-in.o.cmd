cmd_drivers/input/keyboard/built-in.o :=  arm-eabi-ld -EL    -r -o drivers/input/keyboard/built-in.o drivers/input/keyboard/atkbd.o drivers/input/keyboard/gpio_keys.o 
