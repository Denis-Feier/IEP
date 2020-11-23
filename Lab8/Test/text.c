#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int dummy_init(void)
{
    printk(KERN_INFO "Hello from cpp\n");
    return 0;
}

static void dummy_exit(void)
{
    printk(KERN_INFO "Bye from cpp\n");
}

module_init(dummy_init);
module_exit(dummy_exit);