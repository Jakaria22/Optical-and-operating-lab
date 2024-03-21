**View the routing table in Linux**:
```
ip route show
```
This command displays the current routing table, showing the routes the kernel knows about, including the destination network or host, gateway, and interface.

**Add a route to the routing table in Linux**:
```
sudo ip route add <destination_network> via <gateway_ip>
```
This command adds a route to the routing table. Replace `<destination_network>` with the network or host you want to reach, and `<gateway_ip>` with the IP address of the gateway to reach that destination.

**Delete a route from the routing table in Linux**:
```
sudo ip route del <destination_network> via <gateway_ip>
```
This command deletes a route from the routing table. Replace `<destination_network>` and `<gateway_ip>` with the same values used when adding the route.

**Ping a remote host in Linux**:
```
ping <remote_host>
```
Replace `<remote_host>` with the hostname or IP address of the remote host you want to ping. This command sends ICMP echo requests to the specified host and displays the responses, allowing you to check connectivity.

**Display the DNS configuration in Linux**:
```
cat /etc/resolv.conf
```
This command displays the DNS resolver configuration, including the IP addresses of the DNS servers used by your system for domain name resolution.
