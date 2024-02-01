// Figure 3.1 The Internet (IPv4) socket address structure
struct in_addr {
  in_addr_t s_addr;
};

struct sockaddr_in {
  uint8_t         sin_len;
  sa_family_t     sin_family;
  in_port_t       sin_port;
  struct in_addr  sin_addr;
  char            sin_zero[8];
};

// Figure 3.3 The generic socket address structure: sockaddr
struct sockaddr {
  uint8_t         sa_len;
  sa_family_t     sa_family;
  char            sa_data[14];
};

// Figure 3.4 IPv6 socket address structure: sockaddr_in6
struct in6_addr {
  uint8_t s6_addr[16];
};

struct sockaddr_in6 {
  uint8_t         sin6_len;
  sa_family_t     sin6_family;
  in_port_t       sin6_port;
  uint32_t        sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t        sin6_scope_id;
};

// Figure 3.5 The storage socket address structure: sockaddr_storage.
struct sockaddr_storage {
  uint8_t         ss_len;
  sa_family_t     ss_family;
};
