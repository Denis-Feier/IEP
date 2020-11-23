#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>


int fib(int n) {
    if (n <= 1)
    return n;
    return fib(n-1) + fib(n-2);
}

int ackermann(int m, int n) {
    if(m==0)
        return n+1;
    else if(n==0)
        return ackermann(m-1,1);
    else
        return ackermann(m-1,ackermann(m,n-1));
}

static int dummy_init(void)
{   
    
    printk(KERN_INFO "Hello from ackermann\n");
    int ack = ackermann(0, 5);
    printk(KERN_INFO "%d", ack);
    printk(KERN_INFO "\n");
    return 0;
}

static void dummy_exit(void)
{
    printk(KERN_INFO "Bye from fib\n");
    int fi = fib(10);
    printk(KERN_INFO "%d", fi);
    printk(KERN_INFO "\n");
}

module_init(dummy_init);
module_exit(dummy_exit);