**Display system information in Linux**:
```
uname -a
```
This command will display system information including the kernel version, hostname, machine architecture, etc.

**Update system packages in Linux**:
```
sudo apt update && sudo apt upgrade
```
This command updates the package lists for upgrades and then upgrades all installed packages to their latest versions.

**Install a new package in Linux**:
```
sudo apt install package_name
```
Replace `package_name` with the name of the package you want to install. This command will download and install the specified package and its dependencies.

**Remove a package in Linux**:
```
sudo apt remove package_name
```
Replace `package_name` with the name of the package you want to remove. This command will uninstall the specified package from your system.

**Display system log messages in Linux**:
```
dmesg
```
This command displays the kernel ring buffer, which contains important system log messages, including those during boot time and hardware detection.
