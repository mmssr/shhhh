#include <linux/init.h>     // macros used to mark up function,s eg __init__exit
#include <linux/module.h>   // core header for loading LKMs into the kernel
#include <linux/kernel.h>   // contains types, macros, functions for the kernel, eg KERN_INFO




static int __init mod_init(void)
{
    print(KERN_INFO, "shhhh: init\n");
    
    return 0;
}


static void __exit mod_exit(void)
{
    printk(KERN_INFO, "shhh: exit\n");

}


module_init(mod_init);
module_exit(mod_exit);
