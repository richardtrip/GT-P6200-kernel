cmd_drivers/regulator/built-in.o :=  arm-eabi-ld -EL    -r -o drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/fixed.o drivers/regulator/max8997.o drivers/regulator/samsung_pd.o 
