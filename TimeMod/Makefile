obj-m += timeMod.o

KDIR = /usr/src/linux-headers-5.4.0-97-generic
all:
			$(MAKE) -C $(KDIR) M=$(shell pwd) modules
			
clean:
			rm -rf *.o *.ko *.mod.* *.symvers *.order
			
