## 3.2 Socket Address Structures
### IPv4 Socket Address Structure
The four socket functions that pass a socket address structure from the process to the kernel.
  + bind
  + connect
  + sendto
  + sendmsg
The five socket functions that pass a socket address structure from the kernel to the process.
  + accept
  + recvfrom
  + recvmsg
  + getpeername
  + getsockname
  
### Generic Socket Address Structure

### IPv6 Socket Address Structure

### New Generic Socket Address Structure


```c
struct sockaddr_storage {
  uint8_t     ss_len;
  sa_family_t ss_family;
}
```
