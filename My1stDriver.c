
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>


MODULE_LICENSE("Harman");
MODULE_AUTHOR(" RAVI ");
MODULE_DESCRIPTION("My 1st driver program !!");


static int __init hello_init(void)
{
	printk(KERN_INFO "This is my 1st driver msg.. ! \n");
	return 0;
}

static void __exit hello_cleanup(void)
{
	printk(KERN_INFO "cleaning up module. \n");
}


module_init(hello_init);
module_exit(hello_cleanup);

