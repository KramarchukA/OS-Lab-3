#include <linux/module.h>   
#include <linux/kernel.h>   
#include <linux/printk.h> 
#include <linux/version.h>


int my_init(void) {
    pr_info("Welcome to Tomsk\n");
return 0;
}
void my_cleanup(void) {
    pr_info("Unloading the TSU Linux Module\n");
}
module_init(my_init); 
module_exit(my_cleanup); 

MODULE_LICENSE("GPL");