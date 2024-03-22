To add a route to the routing table in Linux, you can use the `ip route add` command followed by the destination network address and gateway address. For example:

```
sudo ip route add <destination_network> via <gateway_address>
```

Replace `<destination_network>` with the network address you want to add a route to, and `<gateway_address>` with the IP address of the gateway.

To delete a route from the routing table in Linux, you can use the `ip route del` command followed by the destination network address. For example:

```
sudo ip route del <destination_network>
```

Replace `<destination_network>` with the network address you want to delete the route for.

To ping a remote host in Linux, you can use the `ping` command followed by the IP address or hostname of the remote host. For example:

```
ping <remote_host>
```

Replace `<remote_host>` with the IP address or hostname of the remote host you want to ping.

To display the DNS configuration in Linux, you can check the contents of the `/etc/resolv.conf` file using a text editor or use the `cat` command. For example:

```
cat /etc/resolv.conf
```

This will display the DNS configuration including the nameservers being used.

To edit the DNS configuration in Linux, you can modify the `/etc/resolv.conf` file using a text editor such as `nano` or `vi`. For example:

```
sudo nano /etc/resolv.conf
```

Replace `nano` with your preferred text editor. Then, you can edit the file to add or modify nameservers, search domains, or other DNS settings as needed. After saving the changes, the new DNS configuration will take effect.
