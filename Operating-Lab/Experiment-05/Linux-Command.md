**Display the manual page for a command in Linux**:
```
man command_name
```
Replace `command_name` with the name of the command you want to learn more about. This command will display the manual page, which provides detailed information about the command's usage, options, and examples.

**Change the network configuration in Linux**:
The network configuration in Linux can be changed using various methods depending on the Linux distribution. Commonly used commands include:

- **Using `ifconfig` (for older systems)**:
```
sudo ifconfig <interface> <IP_address>
```
Replace `<interface>` with the name of the network interface (e.g., eth0, wlan0) and `<IP_address>` with the desired IP address.

- **Using `ip` command (for newer systems)**:
```
sudo ip addr add <IP_address>/<subnet_mask> dev <interface>
```
This command assigns an IP address to a network interface. Replace `<IP_address>` with the desired IP address and `<subnet_mask>` with the subnet mask in CIDR notation (e.g., 24 for a subnet mask of 255.255.255.0), and `<interface>` with the name of the network interface.

- **Editing network configuration files**:
On many Linux distributions, network configuration files are located in `/etc/network/interfaces` or `/etc/sysconfig/network-scripts/`. You can edit these files directly to configure network settings.

**Display the list of installed packages in Linux**:
```
dpkg -l
```
This command displays a list of all installed packages along with their versions and descriptions. Note that this command works on Debian-based systems like Ubuntu. For systems using the RPM package manager (e.g., Fedora, CentOS), you can use `rpm -qa` to achieve similar results.

**Install a package in Linux**:
```
sudo apt install package_name
```
Replace `package_name` with the name of the package you want to install. This command installs the specified package and its dependencies using the `apt` package manager, which is commonly used on Debian-based systems like Ubuntu. If you're using a distribution with a different package manager (e.g., `yum` for CentOS), you would use the appropriate command (`sudo yum install package_name`).
