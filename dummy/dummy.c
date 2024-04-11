// dummy.c
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/fs.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("KRERK PIROMSOPA, PH.D. <Krerk.P@chula.ac.th>");
MODULE_DESCRIPTION("\"cpmod\" Dummy Kernel Module");
static int device_open(struct inode *, struct file *);
static int device_release(struct inode *inode, struct file *file);
static ssize_t device_read(struct file *, char *, size_t, loff_t *);

#define DEVICENAME "osinstructor"

// File operations structor
// Only implement those that will be used.
static struct file_operations dev_fops = {
}; 

static int dev_major;

int init_module(void)
{
	printk(KERN_INFO "CPMOD: init\n");
/* * non 0 - means init_module failed
/ module can't be loaded.
*/
	dev_major = register_chrdev(0,DEVICENAME, &dev_fops);
	if (dev_major < 0){
		printk(KERN_ALERT "Fail to register wih code value %d\n",dev_major);
		return dev_major;
	}
	 return 0;
}
void cleanup_module(void)
{
	printk(KERN_INFO "CPMOD: cleanup\n");
}
