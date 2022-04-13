#include <linux/init.h>
#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/uaccess.h>
#include <linux/fs.h>

#include "/usr/include/stdc-predef.h"
#include "/usr/include/features.h"
#include "/usr/include/x86_64-linux-gnu/sys/time.h"
static int hello_init(void)
{
	
	printk(KERN_ALERT "From TimeMod: Initialized the module\n");
 do_gettimeofday(struct timeval *tv);

  struct timespec ts;
  getnstimeofday(&ts);6
  
  printk(KERN_ALERT "seconds is %ld",ts.tv_sec);
	
	return 0;
}

static void hello_exit(void)
{ 
	printk(KERN_ALERT "From TimeMod: Exiting the module\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ced18i017");

module_init(hello_init);
module_exit(hello_exit);
