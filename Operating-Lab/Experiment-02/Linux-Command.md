To create a zip archive in Linux, you can use the `zip` command followed by the name of the archive you want to create and the list of files or directories you want to include in the archive. For example:

```
zip archive.zip file1 file2 directory1
```

This command will create a zip archive named `archive.zip` containing `file1`, `file2`, and `directory1`.

To extract a zip archive in Linux, you can use the `unzip` command followed by the name of the zip archive you want to extract. For example:

```
unzip archive.zip
```

This command will extract the contents of the `archive.zip` file into the current directory.

To compress a zip archive in Linux, you can use the `zip` command with the `-r` option followed by the name of the zip archive you want to create and the list of files or directories you want to compress. For example:

```
zip -r archive.zip directory1
```

This command will create a zip archive named `archive.zip` containing the contents of `directory1` recursively.

To display the network interfaces in Linux, you can use the `ip` command with the `link` option, or you can use the `ifconfig` command. For example:

```
ip link show
```

or

```
ifconfig
```

These commands will display information about the network interfaces configured on the system.

To configure a network interface in Linux, you can use various methods such as editing the configuration files directly or using network configuration utilities like `ifconfig`, `ip`, or `nmcli`. For example, to configure an interface with a static IP address using `ip` command:

```
sudo ip addr add <ip_address>/<subnet_mask> dev <interface_name>
```

Replace `<ip_address>` with the desired IP address, `<subnet_mask>` with the subnet mask in CIDR notation (e.g., 24 for a /24 subnet), and `<interface_name>` with the name of the network interface (e.g., eth0).

Alternatively, you can edit the network configuration files located in `/etc/network/interfaces` or use NetworkManager utilities such as `nmcli` to configure network interfaces.
