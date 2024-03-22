To edit the DNS configuration in Linux, you typically modify the `/etc/resolv.conf` file using a text editor such as `nano` or `vi`. For example:

```
sudo nano /etc/resolv.conf
```

Replace `nano` with your preferred text editor. Then, you can edit the file to add or modify nameservers, search domains, or other DNS settings as needed. After saving the changes, the new DNS configuration will take effect.

To display system information in Linux, you can use the `uname` command to display system information such as the kernel name, hostname, kernel release, kernel version, machine hardware name, and processor type. For example:

```
uname -a
```

This command will display detailed system information.

To shut down the system in Linux, you can use the `shutdown` command with the `-h` option followed by a specified time or immediately. For example, to shut down the system immediately, you can use:

```
sudo shutdown -h now
```

Replace `now` with a specific time if you want to schedule the shutdown.

To restart the system in Linux, you can use the `shutdown` command with the `-r` option followed by a specified time or immediately. For example, to restart the system immediately, you can use:

```
sudo shutdown -r now
```

Replace `now` with a specific time if you want to schedule the restart.

To display the current network configuration in Linux, you can use various commands such as `ifconfig`, `ip addr`, or `nmcli`. For example:

```
ifconfig
```

or

```
ip addr show
```

These commands will display information about network interfaces, including their IP addresses, netmasks, and other network-related details. If you're using NetworkManager, you can also use:

```
nmcli connection show
```

This command will display the details of active network connections managed by NetworkManager.
