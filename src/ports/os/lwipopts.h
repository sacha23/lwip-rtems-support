/**
 * lwipopts.h - user/system specific lwIP configuration
 * RB 2015
 */

#ifndef LWIPOPTS_CONNECTION_TO_OMK_CONFIGURATION_HEADER_FILE
#define LWIPOPTS_CONNECTION_TO_OMK_CONFIGURATION_HEADER_FILE

/* read options from configuration generated by OMK */
#include "lwipconfig.h"

/* set common values different from lwip/opt.h if they are not configured in OMK */
/* all symbols and their descriptions are in lwip/opt.h */

/***   Platform specific locking   ***/
#ifdef CONFIG_LWIP_SYS_LIGHTWEIGHT_PROT
  #define SYS_LIGHTWEIGHT_PROT CONFIG_LWIP_SYS_LIGHTWEIGHT_PROT
#endif
#ifdef CONFIG_LWIP_NO_SYS
  #define NO_SYS CONFIG_LWIP_NO_SYS
#endif
#ifdef CONFIG_LWIP_NO_SYS_NO_TIMERS
  #define NO_SYS_NO_TIMERS CONFIG_LWIP_NO_SYS_NO_TIMERS
#endif
#ifdef CONFIG_LWIP_MEMCPY
  #define MEMCPY CONFIG_LWIP_MEMCPY
#endif
#ifdef CONFIG_LWIP_SMEMCPY
  #define SMEMCPY CONFIG_LWIP_SMEMCPY
#endif
#ifdef CONFIG_LWIP_LWIP_MPU_COMPATIBLE
  #define LWIP_MPU_COMPATIBLE CONFIG_LWIP_LWIP_MPU_COMPATIBLE
#endif

/***   Memory options   ***/
#ifdef CONFIG_LWIP_MEM_LIBC_MALLOC
  #define MEM_LIBC_MALLOC CONFIG_LWIP_MEM_LIBC_MALLOC
#endif
#ifdef CONFIG_LWIP_MEMP_MEM_MALLOC
  #define MEMP_MEM_MALLOC CONFIG_LWIP_MEMP_MEM_MALLOC
#endif
#ifdef CONFIG_LWIP_MEM_ALIGNMENT
  #define MEM_ALIGNMENT CONFIG_LWIP_MEM_ALIGNMENT
#endif
#ifdef CONFIG_LWIP_MEM_SIZE
  #define MEM_SIZE CONFIG_LWIP_MEM_SIZE
#endif
#ifdef CONFIG_LWIP_MEMP_SEPARATE_POOLS
  #define MEMP_SEPARATE_POOLS CONFIG_LWIP_MEMP_SEPARATE_POOLS
#endif
#ifdef CONFIG_LWIP_MEMP_OVERFLOW_CHECK
  #define MEMP_OVERFLOW_CHECK CONFIG_LWIP_MEMP_OVERFLOW_CHECK
#endif
#ifdef CONFIG_LWIP_MEMP_SANITY_CHECK
  #define MEMP_SANITY_CHECK CONFIG_LWIP_MEMP_SANITY_CHECK
#endif
#ifdef CONFIG_LWIP_MEM_USE_POOLS
  #define MEM_USE_POOLS CONFIG_LWIP_MEM_USE_POOLS
#endif
#ifdef CONFIG_LWIP_MEM_USE_POOLS_TRY_BIGGER_POOL
  #define MEM_USE_POOLS_TRY_BIGGER_POOL CONFIG_LWIP_MEM_USE_POOLS_TRY_BIGGER_POOL
#endif
#ifdef CONFIG_LWIP_MEMP_USE_CUSTOM_POOLS
  #define MEMP_USE_CUSTOM_POOLS CONFIG_LWIP_MEMP_USE_CUSTOM_POOLS
#endif
#ifdef CONFIG_LWIP_LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT
  #define LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT CONFIG_LWIP_LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT
#endif

/***   Internal Memory Pool Sizes   ***/
#ifdef CONFIG_LWIP_MEMP_NUM_PBUF
  #define MEMP_NUM_PBUF CONFIG_LWIP_MEMP_NUM_PBUF
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_RAW_PCB
  #define MEMP_NUM_RAW_PCB CONFIG_LWIP_MEMP_NUM_RAW_PCB
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_UDP_PCB
  #define MEMP_NUM_UDP_PCB CONFIG_LWIP_MEMP_NUM_UDP_PCB
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_TCP_PCB
  #define MEMP_NUM_TCP_PCB CONFIG_LWIP_MEMP_NUM_TCP_PCB
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_TCP_PCB_LISTEN
  #define MEMP_NUM_TCP_PCB_LISTEN CONFIG_LWIP_MEMP_NUM_TCP_PCB_LISTEN
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_TCP_SEG
  #define MEMP_NUM_TCP_SEG CONFIG_LWIP_MEMP_NUM_TCP_SEG
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_REASSDATA
  #define MEMP_NUM_REASSDATA CONFIG_LWIP_MEMP_NUM_REASSDATA
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_FRAG_PBUF
  #define MEMP_NUM_FRAG_PBUF CONFIG_LWIP_MEMP_NUM_FRAG_PBUF
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_ARP_QUEUE
  #define MEMP_NUM_ARP_QUEUE CONFIG_LWIP_MEMP_NUM_ARP_QUEUE
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_IGMP_GROUP
  #define MEMP_NUM_IGMP_GROUP CONFIG_LWIP_MEMP_NUM_IGMP_GROUP
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SYS_TIMEOUT
  #define MEMP_NUM_SYS_TIMEOUT CONFIG_LWIP_MEMP_NUM_SYS_TIMEOUT
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_NETBUF
  #define MEMP_NUM_NETBUF CONFIG_LWIP_MEMP_NUM_NETBUF
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_NETCONN
  #define MEMP_NUM_NETCONN CONFIG_LWIP_MEMP_NUM_NETCONN
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_API
  #define MEMP_NUM_TCPIP_MSG_API CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_API
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_INPKT
  #define MEMP_NUM_TCPIP_MSG_INPKT CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_INPKT
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_NODE
  #define MEMP_NUM_SNMP_NODE CONFIG_LWIP_MEMP_NUM_SNMP_NODE
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_ROOTNODE
  #define MEMP_NUM_SNMP_ROOTNODE CONFIG_LWIP_MEMP_NUM_SNMP_ROOTNODE
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_VARBIND
  #define MEMP_NUM_SNMP_VARBIND CONFIG_LWIP_MEMP_NUM_SNMP_VARBIND
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_VALUE
  #define MEMP_NUM_SNMP_VALUE CONFIG_LWIP_MEMP_NUM_SNMP_VALUE
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_NETDB
  #define MEMP_NUM_NETDB CONFIG_LWIP_MEMP_NUM_NETDB
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_LOCALHOSTLIST
  #define MEMP_NUM_LOCALHOSTLIST CONFIG_LWIP_MEMP_NUM_LOCALHOSTLIST
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_PPP_PCB
  #define MEMP_NUM_PPP_PCB CONFIG_LWIP_MEMP_NUM_PPP_PCB
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_PPPOS_INTERFACES
  #define MEMP_NUM_PPPOS_INTERFACES CONFIG_LWIP_MEMP_NUM_PPPOS_INTERFACES
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_PPPOE_INTERFACES
  #define MEMP_NUM_PPPOE_INTERFACES CONFIG_LWIP_MEMP_NUM_PPPOE_INTERFACES
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_PPPOL2TP_INTERFACES
  #define MEMP_NUM_PPPOL2TP_INTERFACES CONFIG_LWIP_MEMP_NUM_PPPOL2TP_INTERFACES
#endif
#ifdef CONFIG_LWIP_PBUF_POOL_SIZE
  #define PBUF_POOL_SIZE CONFIG_LWIP_PBUF_POOL_SIZE
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_API_MSG
  #define MEMP_NUM_API_MSG CONFIG_LWIP_MEMP_NUM_API_MSG
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_DNS_API_MSG
  #define MEMP_NUM_DNS_API_MSG CONFIG_LWIP_MEMP_NUM_DNS_API_MSG
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_SOCKET_SETGETSOCKOPT_DATA
  #define MEMP_NUM_SOCKET_SETGETSOCKOPT_DATA CONFIG_LWIP_MEMP_NUM_SOCKET_SETGETSOCKOPT_DATA
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_NETIFAPI_MSG
  #define MEMP_NUM_NETIFAPI_MSG CONFIG_LWIP_MEMP_NUM_NETIFAPI_MSG
#endif

/***   ARP options   ***/
#ifdef CONFIG_LWIP_LWIP_ARP
  #define LWIP_ARP CONFIG_LWIP_LWIP_ARP
#endif
#ifdef CONFIG_LWIP_ARP_TABLE_SIZE
  #define ARP_TABLE_SIZE CONFIG_LWIP_ARP_TABLE_SIZE
#endif
#ifdef CONFIG_LWIP_ARP_QUEUEING
  #define ARP_QUEUEING CONFIG_LWIP_ARP_QUEUEING
#endif
#ifdef CONFIG_LWIP_ARP_QUEUE_LEN
  #define ARP_QUEUE_LEN CONFIG_LWIP_ARP_QUEUE_LEN
#endif
#ifdef CONFIG_LWIP_ETHARP_TRUST_IP_MAC
  #define ETHARP_TRUST_IP_MAC CONFIG_LWIP_ETHARP_TRUST_IP_MAC
#endif
#ifdef CONFIG_LWIP_ETHARP_SUPPORT_VLAN
  #define ETHARP_SUPPORT_VLAN CONFIG_LWIP_ETHARP_SUPPORT_VLAN
#endif
#ifdef CONFIG_LWIP_LWIP_ETHERNET
  #define LWIP_ETHERNET CONFIG_LWIP_LWIP_ETHERNET
#endif
#ifdef CONFIG_LWIP_ETH_PAD_SIZE
  #define ETH_PAD_SIZE CONFIG_LWIP_ETH_PAD_SIZE
#endif
#ifdef CONFIG_LWIP_ETHARP_SUPPORT_STATIC_ENTRIES
  #define ETHARP_SUPPORT_STATIC_ENTRIES CONFIG_LWIP_ETHARP_SUPPORT_STATIC_ENTRIES
#endif
#ifdef CONFIG_LWIP_ETHARP_TABLE_MATCH_NETIF
  #define ETHARP_TABLE_MATCH_NETIF CONFIG_LWIP_ETHARP_TABLE_MATCH_NETIF
#endif

/***   IP options   ***/
#ifdef CONFIG_LWIP_LWIP_IPV4
  #define LWIP_IPV4 CONFIG_LWIP_LWIP_IPV4
#endif
#ifdef CONFIG_LWIP_IP_FORWARD
  #define IP_FORWARD CONFIG_LWIP_IP_FORWARD
#endif
#ifdef CONFIG_LWIP_IP_REASSEMBLY
  #define IP_REASSEMBLY CONFIG_LWIP_IP_REASSEMBLY
#endif
#ifdef CONFIG_LWIP_IP_FRAG
  #define IP_FRAG CONFIG_LWIP_IP_FRAG
#endif
#ifdef CONFIG_LWIP_IP_OPTIONS_ALLOWED
  #define IP_OPTIONS_ALLOWED CONFIG_LWIP_IP_OPTIONS_ALLOWED
#endif
#ifdef CONFIG_LWIP_IP_REASS_MAXAGE
  #define IP_REASS_MAXAGE CONFIG_LWIP_IP_REASS_MAXAGE
#endif
#ifdef CONFIG_LWIP_IP_REASS_MAX_PBUFS
  #define IP_REASS_MAX_PBUFS CONFIG_LWIP_IP_REASS_MAX_PBUFS
#endif
#ifdef CONFIG_LWIP_IP_FRAG_USES_STATIC_BUF
  #define IP_FRAG_USES_STATIC_BUF CONFIG_LWIP_IP_FRAG_USES_STATIC_BUF
#endif
#ifdef CONFIG_LWIP_IP_FRAG_MAX_MTU
  #define IP_FRAG_MAX_MTU CONFIG_LWIP_IP_FRAG_MAX_MTU
#endif
#ifdef CONFIG_LWIP_IP_DEFAULT_TTL
  #define IP_DEFAULT_TTL CONFIG_LWIP_IP_DEFAULT_TTL
#endif
#ifdef CONFIG_LWIP_IP_SOF_BROADCAST
  #define IP_SOF_BROADCAST CONFIG_LWIP_IP_SOF_BROADCAST
#endif
#ifdef CONFIG_LWIP_IP_SOF_BROADCAST_RECV
  #define IP_SOF_BROADCAST_RECV CONFIG_LWIP_IP_SOF_BROADCAST_RECV
#endif
#ifdef CONFIG_LWIP_IP_FORWARD_ALLOW_TX_ON_RX_NETIF
  #define IP_FORWARD_ALLOW_TX_ON_RX_NETIF CONFIG_LWIP_IP_FORWARD_ALLOW_TX_ON_RX_NETIF
#endif
#ifdef CONFIG_LWIP_LWIP_RANDOMIZE_INITIAL_LOCAL_PORTS
  #define LWIP_RANDOMIZE_INITIAL_LOCAL_PORTS CONFIG_LWIP_LWIP_RANDOMIZE_INITIAL_LOCAL_PORTS
#endif

/***   ICMP options   ***/
#ifdef CONFIG_LWIP_LWIP_ICMP
  #define LWIP_ICMP CONFIG_LWIP_LWIP_ICMP
#endif
#ifdef CONFIG_LWIP_ICMP_TTL
  #define ICMP_TTL CONFIG_LWIP_ICMP_TTL
#endif
#ifdef CONFIG_LWIP_LWIP_BROADCAST_PING
  #define LWIP_BROADCAST_PING CONFIG_LWIP_LWIP_BROADCAST_PING
#endif
#ifdef CONFIG_LWIP_LWIP_MULTICAST_PING
  #define LWIP_MULTICAST_PING CONFIG_LWIP_LWIP_MULTICAST_PING
#endif


/***   RAW options   ***/
#ifdef CONFIG_LWIP_LWIP_RAW
  #define LWIP_RAW CONFIG_LWIP_LWIP_RAW
#endif
#ifdef CONFIG_LWIP_RAW_TTL
  #define RAW_TTL CONFIG_LWIP_RAW_TTL
#endif

/***   DHCP options   ***/
#ifdef CONFIG_LWIP_LWIP_DHCP
  #define LWIP_DHCP CONFIG_LWIP_LWIP_DHCP
#endif
#ifdef CONFIG_LWIP_DHCP_DOES_ARP_CHECK
  #define DHCP_DOES_ARP_CHECK CONFIG_LWIP_DHCP_DOES_ARP_CHECK
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_CHECK_LINK_UP
  #define LWIP_DHCP_CHECK_LINK_UP CONFIG_LWIP_LWIP_DHCP_CHECK_LINK_UP
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_BOOTP_FILE
  #define LWIP_DHCP_BOOTP_FILE CONFIG_LWIP_LWIP_DHCP_BOOTP_FILE
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_GET_NTP_SRV
  #define LWIP_DHCP_GET_NTP_SRV CONFIG_LWIP_LWIP_DHCP_GET_NTP_SRV
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_MAX_NTP_SERVERS
  #define LWIP_DHCP_MAX_NTP_SERVERS CONFIG_LWIP_LWIP_DHCP_MAX_NTP_SERVERS
#endif

/***   AUTOIP options   ***/
#ifdef CONFIG_LWIP_LWIP_AUTOIP
  #define LWIP_AUTOIP CONFIG_LWIP_LWIP_AUTOIP
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_AUTOIP_COOP
  #define LWIP_DHCP_AUTOIP_COOP CONFIG_LWIP_LWIP_DHCP_AUTOIP_COOP
#endif
#ifdef CONFIG_LWIP_LWIP_DHCP_AUTOIP_COOP_TRIES
  #define LWIP_DHCP_AUTOIP_COOP_TRIES CONFIG_LWIP_LWIP_DHCP_AUTOIP_COOP_TRIES
#endif

/***   SNMP options   ***/
#ifdef CONFIG_LWIP_LWIP_SNMP
  #define LWIP_SNMP CONFIG_LWIP_LWIP_SNMP
#endif
#ifdef CONFIG_LWIP_SNMP_CONCURRENT_REQUESTS
  #define SNMP_CONCURRENT_REQUESTS CONFIG_LWIP_SNMP_CONCURRENT_REQUESTS
#endif
#ifdef CONFIG_LWIP_SNMP_TRAP_DESTINATIONS
  #define SNMP_TRAP_DESTINATIONS CONFIG_LWIP_SNMP_TRAP_DESTINATIONS
#endif
#ifdef CONFIG_LWIP_SNMP_PRIVATE_MIB
  #define SNMP_PRIVATE_MIB CONFIG_LWIP_SNMP_PRIVATE_MIB
#endif
#ifdef CONFIG_LWIP_SNMP_SAFE_REQUESTS
  #define SNMP_SAFE_REQUESTS CONFIG_LWIP_SNMP_SAFE_REQUESTS
#endif
#ifdef CONFIG_LWIP_SNMP_MAX_OCTET_STRING_LEN
  #define SNMP_MAX_OCTET_STRING_LEN CONFIG_LWIP_SNMP_MAX_OCTET_STRING_LEN
#endif
#ifdef CONFIG_LWIP_SNMP_MAX_TREE_DEPTH
  #define SNMP_MAX_TREE_DEPTH CONFIG_LWIP_SNMP_MAX_TREE_DEPTH
#endif
#ifdef CONFIG_LWIP_SNMP_MAX_VALUE_SIZE
  #define SNMP_MAX_VALUE_SIZE CONFIG_LWIP_SNMP_MAX_VALUE_SIZE
#endif
#ifdef CONFIG_LWIP_SNMP_COMMUNITY
  #define SNMP_COMMUNITY CONFIG_LWIP_SNMP_COMMUNITY
#endif
#ifdef CONFIG_LWIP_SNMP_COMMUNITY_EXT
  #define SNMP_COMMUNITY_EXT CONFIG_LWIP_SNMP_COMMUNITY_EXT
#endif
#ifdef CONFIG_LWIP_SNMP_COMMUNITY_WRITE
  #define SNMP_COMMUNITY_WRITE CONFIG_LWIP_SNMP_COMMUNITY_WRITE
#endif
#ifdef CONFIG_LWIP_SNMP_COMMUNITY_TRAP
  #define SNMP_COMMUNITY_TRAP CONFIG_LWIP_SNMP_COMMUNITY_TRAP
#endif

/***   Multicast/IGMP options   ***/
#ifdef CONFIG_LWIP_LWIP_IGMP
  #define LWIP_IGMP CONFIG_LWIP_LWIP_IGMP
#endif
#ifdef CONFIG_LWIP_LWIP_MULTICAST_TX_OPTIONS
  #define LWIP_MULTICAST_TX_OPTIONS CONFIG_LWIP_LWIP_MULTICAST_TX_OPTIONS
#endif

/***   DNS options   ***/
#ifdef CONFIG_LWIP_LWIP_DNS
  #define LWIP_DNS CONFIG_LWIP_LWIP_DNS
#endif
#ifdef CONFIG_LWIP_DNS_TABLE_SIZE
  #define DNS_TABLE_SIZE CONFIG_LWIP_DNS_TABLE_SIZE
#endif
#ifdef CONFIG_LWIP_DNS_MAX_NAME_LENGTH
  #define DNS_MAX_NAME_LENGTH CONFIG_LWIP_DNS_MAX_NAME_LENGTH
#endif
#ifdef CONFIG_LWIP_DNS_MAX_SERVERS
  #define DNS_MAX_SERVERS CONFIG_LWIP_DNS_MAX_SERVERS
#endif
#ifdef CONFIG_LWIP_DNS_DOES_NAME_CHECK
  #define DNS_DOES_NAME_CHECK CONFIG_LWIP_DNS_DOES_NAME_CHECK
#endif
#ifdef CONFIG_LWIP_DNS_LOCAL_HOSTLIST
  #define DNS_LOCAL_HOSTLIST CONFIG_LWIP_DNS_LOCAL_HOSTLIST
#endif
#ifdef CONFIG_LWIP_DNS_LOCAL_HOSTLIST_IS_DYNAMIC
  #define DNS_LOCAL_HOSTLIST_IS_DYNAMIC CONFIG_LWIP_DNS_LOCAL_HOSTLIST_IS_DYNAMIC
#endif

/***   UDP options   ***/
#ifdef CONFIG_LWIP_LWIP_UDP
  #define LWIP_UDP CONFIG_LWIP_LWIP_UDP
#endif
#ifdef CONFIG_LWIP_LWIP_UDPLITE
  #define LWIP_UDPLITE CONFIG_LWIP_LWIP_UDPLITE
#endif
#ifdef CONFIG_LWIP_UDP_TTL
  #define UDP_TTL CONFIG_LWIP_UDP_TTL
#endif
#ifdef CONFIG_LWIP_LWIP_NETBUF_RECVINFO
  #define LWIP_NETBUF_RECVINFO CONFIG_LWIP_LWIP_NETBUF_RECVINFO
#endif

/***   TCP options   ***/
#ifdef CONFIG_LWIP_LWIP_TCP
  #define LWIP_TCP CONFIG_LWIP_LWIP_TCP
#endif
#ifdef CONFIG_LWIP_TCP_TTL
  #define TCP_TTL CONFIG_LWIP_TCP_TTL
#endif
#ifdef CONFIG_LWIP_TCP_WND
  #define TCP_WND CONFIG_LWIP_TCP_WND
#endif
#ifdef CONFIG_LWIP_TCP_MAXRTX
  #define TCP_MAXRTX CONFIG_LWIP_TCP_MAXRTX
#endif
#ifdef CONFIG_LWIP_TCP_SYNMAXRTX
  #define TCP_SYNMAXRTX CONFIG_LWIP_TCP_SYNMAXRTX
#endif
#ifdef CONFIG_LWIP_TCP_QUEUE_OOSEQ
  #define TCP_QUEUE_OOSEQ CONFIG_LWIP_TCP_QUEUE_OOSEQ
#endif
#ifdef CONFIG_LWIP_TCP_MSS
  #define TCP_MSS CONFIG_LWIP_TCP_MSS
#endif
#ifdef CONFIG_LWIP_TCP_CALCULATE_EFF_SEND_MSS
  #define TCP_CALCULATE_EFF_SEND_MSS CONFIG_LWIP_TCP_CALCULATE_EFF_SEND_MSS
#endif
#ifdef CONFIG_LWIP_TCP_SND_BUF
  #define TCP_SND_BUF CONFIG_LWIP_TCP_SND_BUF
#endif
#ifdef CONFIG_LWIP_TCP_SND_QUEUELEN
  #define TCP_SND_QUEUELEN CONFIG_LWIP_TCP_SND_QUEUELEN
#endif
#ifdef CONFIG_LWIP_TCP_SNDLOWAT
  #define TCP_SNDLOWAT CONFIG_LWIP_TCP_SNDLOWAT
#endif
#ifdef CONFIG_LWIP_TCP_SNDQUEUELOWAT
  #define TCP_SNDQUEUELOWAT CONFIG_LWIP_TCP_SNDQUEUELOWAT
#endif
#ifdef CONFIG_LWIP_TCP_OOSEQ_MAX_BYTES
  #define TCP_OOSEQ_MAX_BYTES CONFIG_LWIP_TCP_OOSEQ_MAX_BYTES
#endif
#ifdef CONFIG_LWIP_TCP_OOSEQ_MAX_PBUFS
  #define TCP_OOSEQ_MAX_PBUFS CONFIG_LWIP_TCP_OOSEQ_MAX_PBUFS
#endif
#ifdef CONFIG_LWIP_TCP_LISTEN_BACKLOG
  #define TCP_LISTEN_BACKLOG CONFIG_LWIP_TCP_LISTEN_BACKLOG
#endif
#ifdef CONFIG_LWIP_TCP_DEFAULT_LISTEN_BACKLOG
  #define TCP_DEFAULT_LISTEN_BACKLOG CONFIG_LWIP_TCP_DEFAULT_LISTEN_BACKLOG
#endif
#ifdef CONFIG_LWIP_TCP_OVERSIZE
  #define TCP_OVERSIZE CONFIG_LWIP_TCP_OVERSIZE
#endif
#ifdef CONFIG_LWIP_LWIP_TCP_TIMESTAMPS
  #define LWIP_TCP_TIMESTAMPS CONFIG_LWIP_LWIP_TCP_TIMESTAMPS
#endif
#ifdef CONFIG_LWIP_TCP_WND_UPDATE_THRESHOLD
  #define TCP_WND_UPDATE_THRESHOLD CONFIG_LWIP_TCP_WND_UPDATE_THRESHOLD
#endif
#ifdef CONFIG_LWIP_LWIP_EVENT_API
  #define LWIP_EVENT_API CONFIG_LWIP_LWIP_EVENT_API
#endif
#ifdef CONFIG_LWIP_LWIP_CALLBACK_API
  #define LWIP_CALLBACK_API CONFIG_LWIP_LWIP_CALLBACK_API
#endif
#ifdef CONFIG_LWIP_LWIP_WND_SCALE
  #define LWIP_WND_SCALE CONFIG_LWIP_LWIP_WND_SCALE
#endif
#ifdef CONFIG_LWIP_TCP_RCV_SCALE
  #define TCP_RCV_SCALE CONFIG_LWIP_TCP_RCV_SCALE
#endif

/***   Pbuf options   ***/
#ifdef CONFIG_LWIP_PBUF_LINK_HLEN
  #define PBUF_LINK_HLEN CONFIG_LWIP_PBUF_LINK_HLEN
#endif
#ifdef CONFIG_LWIP_PBUF_LINK_ENCAPSULATION_HLEN
  #define PBUF_LINK_ENCAPSULATION_HLEN CONFIG_LWIP_PBUF_LINK_ENCAPSULATION_HLEN
#endif
#ifdef CONFIG_LWIP_PBUF_POOL_BUFSIZE
  #define PBUF_POOL_BUFSIZE CONFIG_LWIP_PBUF_POOL_BUFSIZE
#endif

/***   Network Interfaces options   ***/
#ifdef CONFIG_LWIP_LWIP_NETIF_HOSTNAME
  #define LWIP_NETIF_HOSTNAME CONFIG_LWIP_LWIP_NETIF_HOSTNAME
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_API
  #define LWIP_NETIF_API CONFIG_LWIP_LWIP_NETIF_API
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_STATUS_CALLBACK
  #define LWIP_NETIF_STATUS_CALLBACK CONFIG_LWIP_LWIP_NETIF_STATUS_CALLBACK
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_LINK_CALLBACK
  #define LWIP_NETIF_LINK_CALLBACK CONFIG_LWIP_LWIP_NETIF_LINK_CALLBACK
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_REMOVE_CALLBACK
  #define LWIP_NETIF_REMOVE_CALLBACK CONFIG_LWIP_LWIP_NETIF_REMOVE_CALLBACK
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_HWADDRHINT
  #define LWIP_NETIF_HWADDRHINT CONFIG_LWIP_LWIP_NETIF_HWADDRHINT
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_LOOPBACK
  #define LWIP_NETIF_LOOPBACK CONFIG_LWIP_LWIP_NETIF_LOOPBACK
#endif
#ifdef CONFIG_LWIP_LWIP_LOOPBACK_MAX_PBUFS
  #define LWIP_LOOPBACK_MAX_PBUFS CONFIG_LWIP_LWIP_LOOPBACK_MAX_PBUFS
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_LOOPBACK_MULTITHREADING
  #define LWIP_NETIF_LOOPBACK_MULTITHREADING CONFIG_LWIP_LWIP_NETIF_LOOPBACK_MULTITHREADING
#endif
#ifdef CONFIG_LWIP_LWIP_NETIF_TX_SINGLE_PBUF
  #define LWIP_NETIF_TX_SINGLE_PBUF CONFIG_LWIP_LWIP_NETIF_TX_SINGLE_PBUF
#endif

/***   LOOPIF options   ***/
#ifdef CONFIG_LWIP_LWIP_HAVE_LOOPIF
  #define LWIP_HAVE_LOOPIF CONFIG_LWIP_LWIP_HAVE_LOOPIF
#endif

/***   SLIPIF options   ***/
#ifdef CONFIG_LWIP_LWIP_HAVE_SLIPIF
  #define LWIP_HAVE_SLIPIF CONFIG_LWIP_LWIP_HAVE_SLIPIF
#endif

/***   Thread options   ***/
#ifdef CONFIG_LWIP_TCPIP_THREAD_NAME
  #define TCPIP_THREAD_NAME CONFIG_LWIP_TCPIP_THREAD_NAME
#endif
#ifdef CONFIG_LWIP_TCPIP_THREAD_STACKSIZE
  #define TCPIP_THREAD_STACKSIZE CONFIG_LWIP_TCPIP_THREAD_STACKSIZE
#endif
#ifdef CONFIG_LWIP_TCPIP_THREAD_PRIO
  #define TCPIP_THREAD_PRIO CONFIG_LWIP_TCPIP_THREAD_PRIO
#endif
#ifdef CONFIG_LWIP_TCPIP_MBOX_SIZE
  #define TCPIP_MBOX_SIZE CONFIG_LWIP_TCPIP_MBOX_SIZE
#endif
#ifdef CONFIG_LWIP_SLIPIF_THREAD_NAME
  #define SLIPIF_THREAD_NAME CONFIG_LWIP_SLIPIF_THREAD_NAME
#endif
#ifdef CONFIG_LWIP_SLIPIF_THREAD_STACKSIZE
  #define SLIPIF_THREAD_STACKSIZE CONFIG_LWIP_SLIPIF_THREAD_STACKSIZE
#endif
#ifdef CONFIG_LWIP_SLIPIF_THREAD_PRIO
  #define SLIPIF_THREAD_PRIO CONFIG_LWIP_SLIPIF_THREAD_PRIO
#endif
#ifdef CONFIG_LWIP_DEFAULT_THREAD_NAME
  #define DEFAULT_THREAD_NAME CONFIG_LWIP_DEFAULT_THREAD_NAME
#endif
#ifdef CONFIG_LWIP_DEFAULT_THREAD_STACKSIZE
  #define DEFAULT_THREAD_STACKSIZE CONFIG_LWIP_DEFAULT_THREAD_STACKSIZE
#endif
#ifdef CONFIG_LWIP_DEFAULT_THREAD_PRIO
  #define DEFAULT_THREAD_PRIO CONFIG_LWIP_DEFAULT_THREAD_PRIO
#endif
#ifdef CONFIG_LWIP_DEFAULT_RAW_RECVMBOX_SIZE
  #define DEFAULT_RAW_RECVMBOX_SIZE CONFIG_LWIP_DEFAULT_RAW_RECVMBOX_SIZE
#endif
#ifdef CONFIG_LWIP_DEFAULT_UDP_RECVMBOX_SIZE
  #define DEFAULT_UDP_RECVMBOX_SIZE CONFIG_LWIP_DEFAULT_UDP_RECVMBOX_SIZE
#endif
#ifdef CONFIG_LWIP_DEFAULT_TCP_RECVMBOX_SIZE
  #define DEFAULT_TCP_RECVMBOX_SIZE CONFIG_LWIP_DEFAULT_TCP_RECVMBOX_SIZE
#endif
#ifdef CONFIG_LWIP_DEFAULT_ACCEPTMBOX_SIZE
  #define DEFAULT_ACCEPTMBOX_SIZE CONFIG_LWIP_DEFAULT_ACCEPTMBOX_SIZE
#endif

/***   Sequential layer options   ***/
#ifdef CONFIG_LWIP_LWIP_TCPIP_CORE_LOCKING
  #define LWIP_TCPIP_CORE_LOCKING CONFIG_LWIP_LWIP_TCPIP_CORE_LOCKING
#endif
#ifdef CONFIG_LWIP_LWIP_TCPIP_CORE_LOCKING_INPUT
  #define LWIP_TCPIP_CORE_LOCKING_INPUT CONFIG_LWIP_LWIP_TCPIP_CORE_LOCKING_INPUT
#endif
#ifdef CONFIG_LWIP_LWIP_NETCONN
  #define LWIP_NETCONN CONFIG_LWIP_LWIP_NETCONN
#endif
#ifdef CONFIG_LWIP_LWIP_TCPIP_TIMEOUT
  #define LWIP_TCPIP_TIMEOUT CONFIG_LWIP_LWIP_TCPIP_TIMEOUT
#endif
#ifdef CONFIG_LWIP_LWIP_NETCONN_SEM_PER_THREAD
  #define LWIP_NETCONN_SEM_PER_THREAD CONFIG_LWIP_LWIP_NETCONN_SEM_PER_THREAD
#endif
#ifdef CONFIG_LWIP_LWIP_NETCONN_FULLDUPLEX
  #define LWIP_NETCONN_FULLDUPLEX CONFIG_LWIP_LWIP_NETCONN_FULLDUPLEX
#endif

/***   Socket options   ***/
#ifdef CONFIG_LWIP_LWIP_SOCKET
  #define LWIP_SOCKET CONFIG_LWIP_LWIP_SOCKET
#endif
#ifdef CONFIG_LWIP_LWIP_SOCKET_SET_ERRNO
  #define LWIP_SOCKET_SET_ERRNO CONFIG_LWIP_LWIP_SOCKET_SET_ERRNO
#endif
#ifdef CONFIG_LWIP_LWIP_COMPAT_SOCKETS
  #define LWIP_COMPAT_SOCKETS CONFIG_LWIP_LWIP_COMPAT_SOCKETS
#endif
#ifdef CONFIG_LWIP_LWIP_POSIX_SOCKETS_IO_NAMES
  #define LWIP_POSIX_SOCKETS_IO_NAMES CONFIG_LWIP_LWIP_POSIX_SOCKETS_IO_NAMES
#endif
#ifdef CONFIG_LWIP_LWIP_SOCKET_OFFSET
  #define LWIP_SOCKET_OFFSET CONFIG_LWIP_LWIP_SOCKET_OFFSET
#endif
#ifdef CONFIG_LWIP_LWIP_TCP_KEEPALIVE
  #define LWIP_TCP_KEEPALIVE CONFIG_LWIP_LWIP_TCP_KEEPALIVE
#endif
#ifdef CONFIG_LWIP_LWIP_SO_SNDTIMEO
  #define LWIP_SO_SNDTIMEO CONFIG_LWIP_LWIP_SO_SNDTIMEO
#endif
#ifdef CONFIG_LWIP_LWIP_SO_RCVTIMEO
  #define LWIP_SO_RCVTIMEO CONFIG_LWIP_LWIP_SO_RCVTIMEO
#endif
#ifdef CONFIG_LWIP_LWIP_SO_SNDRCVTIMEO_NONSTANDARD
  #define LWIP_SO_SNDRCVTIMEO_NONSTANDARD CONFIG_LWIP_LWIP_SO_SNDRCVTIMEO_NONSTANDARD
#endif
#ifdef CONFIG_LWIP_LWIP_SO_RCVBUF
  #define LWIP_SO_RCVBUF CONFIG_LWIP_LWIP_SO_RCVBUF
#endif
#ifdef CONFIG_LWIP_LWIP_SO_LINGER
  #define LWIP_SO_LINGER CONFIG_LWIP_LWIP_SO_LINGER
#endif
#ifdef CONFIG_LWIP_RECV_BUFSIZE_DEFAULT
  #define RECV_BUFSIZE_DEFAULT CONFIG_LWIP_RECV_BUFSIZE_DEFAULT
#endif
#ifdef CONFIG_LWIP_LWIP_TCP_CLOSE_TIMEOUT_MS_DEFAULT
  #define LWIP_TCP_CLOSE_TIMEOUT_MS_DEFAULT CONFIG_LWIP_LWIP_TCP_CLOSE_TIMEOUT_MS_DEFAULT
#endif
#ifdef CONFIG_LWIP_SO_REUSE
  #define SO_REUSE CONFIG_LWIP_SO_REUSE
#endif
#ifdef CONFIG_LWIP_SO_REUSE_RXTOALL
  #define SO_REUSE_RXTOALL CONFIG_LWIP_SO_REUSE_RXTOALL
#endif
#ifdef CONFIG_LWIP_LWIP_FIONREAD_LINUXMODE
  #define LWIP_FIONREAD_LINUXMODE CONFIG_LWIP_LWIP_FIONREAD_LINUXMODE
#endif

/***   Statistics options   ***/
#ifdef CONFIG_LWIP_LWIP_STATS
  #define LWIP_STATS CONFIG_LWIP_LWIP_STATS
#endif
#ifdef CONFIG_LWIP_LWIP_STATS_DISPLAY
  #define LWIP_STATS_DISPLAY CONFIG_LWIP_LWIP_STATS_DISPLAY
#endif
#ifdef CONFIG_LWIP_LINK_STATS
  #define LINK_STATS CONFIG_LWIP_LINK_STATS
#endif
#ifdef CONFIG_LWIP_ETHARP_STATS
  #define ETHARP_STATS CONFIG_LWIP_ETHARP_STATS
#endif
#ifdef CONFIG_LWIP_IP_STATS
  #define IP_STATS CONFIG_LWIP_IP_STATS
#endif
#ifdef CONFIG_LWIP_IPFRAG_STATS
  #define IPFRAG_STATS CONFIG_LWIP_IPFRAG_STATS
#endif
#ifdef CONFIG_LWIP_ICMP_STATS
  #define ICMP_STATS CONFIG_LWIP_ICMP_STATS
#endif
#ifdef CONFIG_LWIP_IGMP_STATS
  #define IGMP_STATS CONFIG_LWIP_IGMP_STATS
#endif
#ifdef CONFIG_LWIP_UDP_STATS
  #define UDP_STATS CONFIG_LWIP_UDP_STATS
#endif
#ifdef CONFIG_LWIP_TCP_STATS
  #define TCP_STATS CONFIG_LWIP_TCP_STATS
#endif
#ifdef CONFIG_LWIP_MEM_STATS
  #define MEM_STATS CONFIG_LWIP_MEM_STATS
#endif
#ifdef CONFIG_LWIP_MEMP_STATS
  #define MEMP_STATS CONFIG_LWIP_MEMP_STATS
#endif
#ifdef CONFIG_LWIP_SYS_STATS
  #define SYS_STATS CONFIG_LWIP_SYS_STATS
#endif
#ifdef CONFIG_LWIP_IP6_STATS
  #define IP6_STATS CONFIG_LWIP_IP6_STATS
#endif
#ifdef CONFIG_LWIP_ICMP6_STATS
  #define ICMP6_STATS CONFIG_LWIP_ICMP6_STATS
#endif
#ifdef CONFIG_LWIP_IP6_FRAG_STATS
  #define IP6_FRAG_STATS CONFIG_LWIP_IP6_FRAG_STATS
#endif
#ifdef CONFIG_LWIP_MLD6_STATS
  #define MLD6_STATS CONFIG_LWIP_MLD6_STATS
#endif
#ifdef CONFIG_LWIP_ND6_STATS
  #define ND6_STATS CONFIG_LWIP_ND6_STATS
#endif

/***   PPP options   ***/
#ifdef CONFIG_LWIP_PPP_SUPPORT
  #define PPP_SUPPORT CONFIG_LWIP_PPP_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPPOE_SUPPORT
  #define PPPOE_SUPPORT CONFIG_LWIP_PPPOE_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPPOL2TP_SUPPORT
  #define PPPOL2TP_SUPPORT CONFIG_LWIP_PPPOL2TP_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPPOL2TP_AUTH_SUPPORT
  #define PPPOL2TP_AUTH_SUPPORT CONFIG_LWIP_PPPOL2TP_AUTH_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPPOS_SUPPORT
  #define PPPOS_SUPPORT CONFIG_LWIP_PPPOS_SUPPORT
#endif
#ifdef CONFIG_LWIP_LWIP_PPP_API
  #define LWIP_PPP_API CONFIG_LWIP_LWIP_PPP_API
#endif
#ifdef CONFIG_LWIP_PPP_INPROC_IRQ_SAFE
  #define PPP_INPROC_IRQ_SAFE CONFIG_LWIP_PPP_INPROC_IRQ_SAFE
#endif
#ifdef CONFIG_LWIP_PRINTPKT_SUPPORT
  #define PRINTPKT_SUPPORT CONFIG_LWIP_PRINTPKT_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPP_IPV4_SUPPORT
  #define PPP_IPV4_SUPPORT CONFIG_LWIP_PPP_IPV4_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPP_IPV6_SUPPORT
  #define PPP_IPV6_SUPPORT CONFIG_LWIP_PPP_IPV6_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPP_NOTIFY_PHASE
  #define PPP_NOTIFY_PHASE CONFIG_LWIP_PPP_NOTIFY_PHASE
#endif
#ifdef CONFIG_LWIP_PPP_USE_PBUF_RAM
  #define PPP_USE_PBUF_RAM CONFIG_LWIP_PPP_USE_PBUF_RAM
#endif
#ifdef CONFIG_LWIP_PPP_FCS_TABLE
  #define PPP_FCS_TABLE CONFIG_LWIP_PPP_FCS_TABLE
#endif
#ifdef CONFIG_LWIP_PAP_SUPPORT
  #define PAP_SUPPORT CONFIG_LWIP_PAP_SUPPORT
#endif
#ifdef CONFIG_LWIP_CHAP_SUPPORT
  #define CHAP_SUPPORT CONFIG_LWIP_CHAP_SUPPORT
#endif
#ifdef CONFIG_LWIP_MSCHAP_SUPPORT
  #define MSCHAP_SUPPORT CONFIG_LWIP_MSCHAP_SUPPORT
#endif
#ifdef CONFIG_LWIP_EAP_SUPPORT
  #define EAP_SUPPORT CONFIG_LWIP_EAP_SUPPORT
#endif
#ifdef CONFIG_LWIP_CCP_SUPPORT
  #define CCP_SUPPORT CONFIG_LWIP_CCP_SUPPORT
#endif
#ifdef CONFIG_LWIP_MPPE_SUPPORT
  #define MPPE_SUPPORT CONFIG_LWIP_MPPE_SUPPORT
#endif
#ifdef CONFIG_LWIP_CBCP_SUPPORT
  #define CBCP_SUPPORT CONFIG_LWIP_CBCP_SUPPORT
#endif
#ifdef CONFIG_LWIP_ECP_SUPPORT
  #define ECP_SUPPORT CONFIG_LWIP_ECP_SUPPORT
#endif
#ifdef CONFIG_LWIP_DEMAND_SUPPORT
  #define DEMAND_SUPPORT CONFIG_LWIP_DEMAND_SUPPORT
#endif
#ifdef CONFIG_LWIP_LQR_SUPPORT
  #define LQR_SUPPORT CONFIG_LWIP_LQR_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPP_SERVER
  #define PPP_SERVER CONFIG_LWIP_PPP_SERVER
#endif
#ifdef CONFIG_LWIP_PPP_OUR_NAME
  #define PPP_OUR_NAME CONFIG_LWIP_PPP_OUR_NAME
#endif
#ifdef CONFIG_LWIP_VJ_SUPPORT
  #define VJ_SUPPORT CONFIG_LWIP_VJ_SUPPORT
#endif
#ifdef CONFIG_LWIP_PPP_MD5_RANDM
  #define PPP_MD5_RANDM CONFIG_LWIP_PPP_MD5_RANDM
#endif
#ifdef CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_MD5
  #define LWIP_INCLUDED_POLARSSL_MD5 CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_MD5
#endif
#ifdef CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_MD4
  #define LWIP_INCLUDED_POLARSSL_MD4 CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_MD4
#endif
#ifdef CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_SHA1
  #define LWIP_INCLUDED_POLARSSL_SHA1 CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_SHA1
#endif
#ifdef CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_DES
  #define LWIP_INCLUDED_POLARSSL_DES CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_DES
#endif
#ifdef CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_ARC4
  #define LWIP_INCLUDED_POLARSSL_ARC4 CONFIG_LWIP_LWIP_INCLUDED_POLARSSL_ARC4
#endif
#ifdef CONFIG_LWIP_FSM_DEFTIMEOUT
  #define FSM_DEFTIMEOUT CONFIG_LWIP_FSM_DEFTIMEOUT
#endif
#ifdef CONFIG_LWIP_FSM_DEFMAXTERMREQS
  #define FSM_DEFMAXTERMREQS CONFIG_LWIP_FSM_DEFMAXTERMREQS
#endif
#ifdef CONFIG_LWIP_FSM_DEFMAXCONFREQS
  #define FSM_DEFMAXCONFREQS CONFIG_LWIP_FSM_DEFMAXCONFREQS
#endif
#ifdef CONFIG_LWIP_FSM_DEFMAXNAKLOOPS
  #define FSM_DEFMAXNAKLOOPS CONFIG_LWIP_FSM_DEFMAXNAKLOOPS
#endif
#ifdef CONFIG_LWIP_UPAP_DEFTIMEOUT
  #define UPAP_DEFTIMEOUT CONFIG_LWIP_UPAP_DEFTIMEOUT
#endif
#ifdef CONFIG_LWIP_UPAP_DEFTRANSMITS
  #define UPAP_DEFTRANSMITS CONFIG_LWIP_UPAP_DEFTRANSMITS
#endif
#ifdef CONFIG_LWIP_UPAP_DEFREQTIME
  #define UPAP_DEFREQTIME CONFIG_LWIP_UPAP_DEFREQTIME
#endif
#ifdef CONFIG_LWIP_CHAP_DEFTIMEOUT
  #define CHAP_DEFTIMEOUT CONFIG_LWIP_CHAP_DEFTIMEOUT
#endif
#ifdef CONFIG_LWIP_CHAP_DEFTRANSMITS
  #define CHAP_DEFTRANSMITS CONFIG_LWIP_CHAP_DEFTRANSMITS
#endif
#ifdef CONFIG_LWIP_CHAP_DEFRECHALLENGETIME
  #define CHAP_DEFRECHALLENGETIME CONFIG_LWIP_CHAP_DEFRECHALLENGETIME
#endif
#ifdef CONFIG_LWIP_EAP_DEFREQTIME
  #define EAP_DEFREQTIME CONFIG_LWIP_EAP_DEFREQTIME
#endif
#ifdef CONFIG_LWIP_EAP_DEFALLOWREQ
  #define EAP_DEFALLOWREQ CONFIG_LWIP_EAP_DEFALLOWREQ
#endif
#ifdef CONFIG_LWIP_EAP_DEFTIMEOUT
  #define EAP_DEFTIMEOUT CONFIG_LWIP_EAP_DEFTIMEOUT
#endif
#ifdef CONFIG_LWIP_EAP_DEFTRANSMITS
  #define EAP_DEFTRANSMITS CONFIG_LWIP_EAP_DEFTRANSMITS
#endif
#ifdef CONFIG_LWIP_LCP_DEFLOOPBACKFAIL
  #define LCP_DEFLOOPBACKFAIL CONFIG_LWIP_LCP_DEFLOOPBACKFAIL
#endif
#ifdef CONFIG_LWIP_LCP_ECHOINTERVAL
  #define LCP_ECHOINTERVAL CONFIG_LWIP_LCP_ECHOINTERVAL
#endif
#ifdef CONFIG_LWIP_LCP_MAXECHOFAILS
  #define LCP_MAXECHOFAILS CONFIG_LWIP_LCP_MAXECHOFAILS
#endif
#ifdef CONFIG_LWIP_PPP_MAXIDLEFLAG
  #define PPP_MAXIDLEFLAG CONFIG_LWIP_PPP_MAXIDLEFLAG
#endif
#ifdef CONFIG_LWIP_PPP_MRU
  #define PPP_MRU CONFIG_LWIP_PPP_MRU
#endif
#ifdef CONFIG_LWIP_PPP_DEFMRU
  #define PPP_DEFMRU CONFIG_LWIP_PPP_DEFMRU
#endif
#ifdef CONFIG_LWIP_PPP_MAXMRU
  #define PPP_MAXMRU CONFIG_LWIP_PPP_MAXMRU
#endif
#ifdef CONFIG_LWIP_PPP_MINMRU
  #define PPP_MINMRU CONFIG_LWIP_PPP_MINMRU
#endif
#ifdef CONFIG_LWIP_PPPOL2TP_DEFMRU
  #define PPPOL2TP_DEFMRU CONFIG_LWIP_PPPOL2TP_DEFMRU
#endif
#ifdef CONFIG_LWIP_MAXNAMELEN
  #define MAXNAMELEN CONFIG_LWIP_MAXNAMELEN
#endif
#ifdef CONFIG_LWIP_MAXSECRETLEN
  #define MAXSECRETLEN CONFIG_LWIP_MAXSECRETLEN
#endif

/***   Checksum options   ***/
#ifdef CONFIG_LWIP_CHECKSUM_GEN_IP
  #define CHECKSUM_GEN_IP CONFIG_LWIP_CHECKSUM_GEN_IP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_GEN_UDP
  #define CHECKSUM_GEN_UDP CONFIG_LWIP_CHECKSUM_GEN_UDP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_GEN_TCP
  #define CHECKSUM_GEN_TCP CONFIG_LWIP_CHECKSUM_GEN_TCP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_GEN_ICMP
  #define CHECKSUM_GEN_ICMP CONFIG_LWIP_CHECKSUM_GEN_ICMP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_GEN_ICMP6
  #define CHECKSUM_GEN_ICMP6 CONFIG_LWIP_CHECKSUM_GEN_ICMP6
#endif
#ifdef CONFIG_LWIP_CHECKSUM_CHECK_IP
  #define CHECKSUM_CHECK_IP CONFIG_LWIP_CHECKSUM_CHECK_IP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_CHECK_UDP
  #define CHECKSUM_CHECK_UDP CONFIG_LWIP_CHECKSUM_CHECK_UDP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_CHECK_TCP
  #define CHECKSUM_CHECK_TCP CONFIG_LWIP_CHECKSUM_CHECK_TCP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_CHECK_ICMP
  #define CHECKSUM_CHECK_ICMP CONFIG_LWIP_CHECKSUM_CHECK_ICMP
#endif
#ifdef CONFIG_LWIP_CHECKSUM_CHECK_ICMP6
  #define CHECKSUM_CHECK_ICMP6 CONFIG_LWIP_CHECKSUM_CHECK_ICMP6
#endif
#ifdef CONFIG_LWIP_LWIP_CHECKSUM_ON_COPY
  #define LWIP_CHECKSUM_ON_COPY CONFIG_LWIP_LWIP_CHECKSUM_ON_COPY
#endif

/***   IPv6 options   ***/
#ifdef CONFIG_LWIP_LWIP_IPV6
  #define LWIP_IPV6 CONFIG_LWIP_LWIP_IPV6
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_NUM_ADDRESSES
  #define LWIP_IPV6_NUM_ADDRESSES CONFIG_LWIP_LWIP_IPV6_NUM_ADDRESSES
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_FORWARD
  #define LWIP_IPV6_FORWARD CONFIG_LWIP_LWIP_IPV6_FORWARD
#endif
#ifdef CONFIG_LWIP_LWIP_ICMP6
  #define LWIP_ICMP6 CONFIG_LWIP_LWIP_ICMP6
#endif
#ifdef CONFIG_LWIP_LWIP_ICMP6_DATASIZE
  #define LWIP_ICMP6_DATASIZE CONFIG_LWIP_LWIP_ICMP6_DATASIZE
#endif
#ifdef CONFIG_LWIP_LWIP_ICMP6_HL
  #define LWIP_ICMP6_HL CONFIG_LWIP_LWIP_ICMP6_HL
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_MLD
  #define LWIP_IPV6_MLD CONFIG_LWIP_LWIP_IPV6_MLD
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_MLD6_GROUP
  #define MEMP_NUM_MLD6_GROUP CONFIG_LWIP_MEMP_NUM_MLD6_GROUP
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_FRAG
  #define LWIP_IPV6_FRAG CONFIG_LWIP_LWIP_IPV6_FRAG
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_REASS
  #define LWIP_IPV6_REASS CONFIG_LWIP_LWIP_IPV6_REASS
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_QUEUEING
  #define LWIP_ND6_QUEUEING CONFIG_LWIP_LWIP_ND6_QUEUEING
#endif
#ifdef CONFIG_LWIP_MEMP_NUM_ND6_QUEUE
  #define MEMP_NUM_ND6_QUEUE CONFIG_LWIP_MEMP_NUM_ND6_QUEUE
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_NUM_NEIGHBORS
  #define LWIP_ND6_NUM_NEIGHBORS CONFIG_LWIP_LWIP_ND6_NUM_NEIGHBORS
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_NUM_DESTINATIONS
  #define LWIP_ND6_NUM_DESTINATIONS CONFIG_LWIP_LWIP_ND6_NUM_DESTINATIONS
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_NUM_PREFIXES
  #define LWIP_ND6_NUM_PREFIXES CONFIG_LWIP_LWIP_ND6_NUM_PREFIXES
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_NUM_ROUTERS
  #define LWIP_ND6_NUM_ROUTERS CONFIG_LWIP_LWIP_ND6_NUM_ROUTERS
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_MAX_MULTICAST_SOLICIT
  #define LWIP_ND6_MAX_MULTICAST_SOLICIT CONFIG_LWIP_LWIP_ND6_MAX_MULTICAST_SOLICIT
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_MAX_UNICAST_SOLICIT
  #define LWIP_ND6_MAX_UNICAST_SOLICIT CONFIG_LWIP_LWIP_ND6_MAX_UNICAST_SOLICIT
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_MAX_ANYCAST_DELAY_TIME
  #define LWIP_ND6_MAX_ANYCAST_DELAY_TIME CONFIG_LWIP_LWIP_ND6_MAX_ANYCAST_DELAY_TIME
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_MAX_NEIGHBOR_ADVERTISEMENT
  #define LWIP_ND6_MAX_NEIGHBOR_ADVERTISEMENT CONFIG_LWIP_LWIP_ND6_MAX_NEIGHBOR_ADVERTISEMENT
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_REACHABLE_TIME
  #define LWIP_ND6_REACHABLE_TIME CONFIG_LWIP_LWIP_ND6_REACHABLE_TIME
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_RETRANS_TIMER
  #define LWIP_ND6_RETRANS_TIMER CONFIG_LWIP_LWIP_ND6_RETRANS_TIMER
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_DELAY_FIRST_PROBE_TIME
  #define LWIP_ND6_DELAY_FIRST_PROBE_TIME CONFIG_LWIP_LWIP_ND6_DELAY_FIRST_PROBE_TIME
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_ALLOW_RA_UPDATES
  #define LWIP_ND6_ALLOW_RA_UPDATES CONFIG_LWIP_LWIP_ND6_ALLOW_RA_UPDATES
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_SEND_ROUTER_SOLICIT
  #define LWIP_IPV6_SEND_ROUTER_SOLICIT CONFIG_LWIP_LWIP_IPV6_SEND_ROUTER_SOLICIT
#endif
#ifdef CONFIG_LWIP_LWIP_ND6_TCP_REACHABILITY_HINTS
  #define LWIP_ND6_TCP_REACHABILITY_HINTS CONFIG_LWIP_LWIP_ND6_TCP_REACHABILITY_HINTS
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_AUTOCONFIG
  #define LWIP_IPV6_AUTOCONFIG CONFIG_LWIP_LWIP_IPV6_AUTOCONFIG
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_DUP_DETECT_ATTEMPTS
  #define LWIP_IPV6_DUP_DETECT_ATTEMPTS CONFIG_LWIP_LWIP_IPV6_DUP_DETECT_ATTEMPTS
#endif
#ifdef CONFIG_LWIP_LWIP_IPV6_DHCP6
  #define LWIP_IPV6_DHCP6 CONFIG_LWIP_LWIP_IPV6_DHCP6
#endif

/***   Debugging options   ***/
#ifdef CONFIG_LWIP_LWIP_DBG_MIN_LEVEL
  #define LWIP_DBG_MIN_LEVEL CONFIG_LWIP_LWIP_DBG_MIN_LEVEL
#endif
#ifdef CONFIG_LWIP_LWIP_DBG_TYPES_ON
  #define LWIP_DBG_TYPES_ON CONFIG_LWIP_LWIP_DBG_TYPES_ON
#endif
#ifdef CONFIG_LWIP_ETHARP_DEBUG
  #define ETHARP_DEBUG CONFIG_LWIP_ETHARP_DEBUG
#endif
#ifdef CONFIG_LWIP_NETIF_DEBUG
  #define NETIF_DEBUG CONFIG_LWIP_NETIF_DEBUG
#endif
#ifdef CONFIG_LWIP_PBUF_DEBUG
  #define PBUF_DEBUG CONFIG_LWIP_PBUF_DEBUG
#endif
#ifdef CONFIG_LWIP_API_LIB_DEBUG
  #define API_LIB_DEBUG CONFIG_LWIP_API_LIB_DEBUG
#endif
#ifdef CONFIG_LWIP_API_MSG_DEBUG
  #define API_MSG_DEBUG CONFIG_LWIP_API_MSG_DEBUG
#endif
#ifdef CONFIG_LWIP_SOCKETS_DEBUG
  #define SOCKETS_DEBUG CONFIG_LWIP_SOCKETS_DEBUG
#endif
#ifdef CONFIG_LWIP_ICMP_DEBUG
  #define ICMP_DEBUG CONFIG_LWIP_ICMP_DEBUG
#endif
#ifdef CONFIG_LWIP_IGMP_DEBUG
  #define IGMP_DEBUG CONFIG_LWIP_IGMP_DEBUG
#endif
#ifdef CONFIG_LWIP_INET_DEBUG
  #define INET_DEBUG CONFIG_LWIP_INET_DEBUG
#endif
#ifdef CONFIG_LWIP_IP_DEBUG
  #define IP_DEBUG CONFIG_LWIP_IP_DEBUG
#endif
#ifdef CONFIG_LWIP_IP_REASS_DEBUG
  #define IP_REASS_DEBUG CONFIG_LWIP_IP_REASS_DEBUG
#endif
#ifdef CONFIG_LWIP_RAW_DEBUG
  #define RAW_DEBUG CONFIG_LWIP_RAW_DEBUG
#endif
#ifdef CONFIG_LWIP_MEM_DEBUG
  #define MEM_DEBUG CONFIG_LWIP_MEM_DEBUG
#endif
#ifdef CONFIG_LWIP_MEMP_DEBUG
  #define MEMP_DEBUG CONFIG_LWIP_MEMP_DEBUG
#endif
#ifdef CONFIG_LWIP_SYS_DEBUG
  #define SYS_DEBUG CONFIG_LWIP_SYS_DEBUG
#endif
#ifdef CONFIG_LWIP_TIMERS_DEBUG
  #define TIMERS_DEBUG CONFIG_LWIP_TIMERS_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_DEBUG
  #define TCP_DEBUG CONFIG_LWIP_TCP_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_INPUT_DEBUG
  #define TCP_INPUT_DEBUG CONFIG_LWIP_TCP_INPUT_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_FR_DEBUG
  #define TCP_FR_DEBUG CONFIG_LWIP_TCP_FR_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_RTO_DEBUG
  #define TCP_RTO_DEBUG CONFIG_LWIP_TCP_RTO_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_CWND_DEBUG
  #define TCP_CWND_DEBUG CONFIG_LWIP_TCP_CWND_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_WND_DEBUG
  #define TCP_WND_DEBUG CONFIG_LWIP_TCP_WND_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_OUTPUT_DEBUG
  #define TCP_OUTPUT_DEBUG CONFIG_LWIP_TCP_OUTPUT_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_RST_DEBUG
  #define TCP_RST_DEBUG CONFIG_LWIP_TCP_RST_DEBUG
#endif
#ifdef CONFIG_LWIP_TCP_QLEN_DEBUG
  #define TCP_QLEN_DEBUG CONFIG_LWIP_TCP_QLEN_DEBUG
#endif
#ifdef CONFIG_LWIP_UDP_DEBUG
  #define UDP_DEBUG CONFIG_LWIP_UDP_DEBUG
#endif
#ifdef CONFIG_LWIP_TCPIP_DEBUG
  #define TCPIP_DEBUG CONFIG_LWIP_TCPIP_DEBUG
#endif
#ifdef CONFIG_LWIP_PPP_DEBUG
  #define PPP_DEBUG CONFIG_LWIP_PPP_DEBUG
#endif
#ifdef CONFIG_LWIP_SLIP_DEBUG
  #define SLIP_DEBUG CONFIG_LWIP_SLIP_DEBUG
#endif
#ifdef CONFIG_LWIP_DHCP_DEBUG
  #define DHCP_DEBUG CONFIG_LWIP_DHCP_DEBUG
#endif
#ifdef CONFIG_LWIP_AUTOIP_DEBUG
  #define AUTOIP_DEBUG CONFIG_LWIP_AUTOIP_DEBUG
#endif
#ifdef CONFIG_LWIP_SNMP_MSG_DEBUG
  #define SNMP_MSG_DEBUG CONFIG_LWIP_SNMP_MSG_DEBUG
#endif
#ifdef CONFIG_LWIP_SNMP_MIB_DEBUG
  #define SNMP_MIB_DEBUG CONFIG_LWIP_SNMP_MIB_DEBUG
#endif
#ifdef CONFIG_LWIP_DNS_DEBUG
  #define DNS_DEBUG CONFIG_LWIP_DNS_DEBUG
#endif
#ifdef CONFIG_LWIP_IP6_DEBUG
  #define IP6_DEBUG CONFIG_LWIP_IP6_DEBUG
#endif

/***   Performance tracking options   ***/
#ifdef CONFIG_LWIP_LWIP_PERF
  #define LWIP_PERF CONFIG_LWIP_LWIP_PERF
#endif

/* DEFAULT VALUES if not defined in OMK and we want them different from lwip/opt.h */
/* Prevent having to link sys_arch.c (we don't test the API layers in unit tests) */
#ifndef NO_SYS
  #define NO_SYS        1
#endif

#ifndef LWIP_NETCONN
  #define LWIP_NETCONN  0
#endif

#ifndef LWIP_SOCKET
  #define LWIP_SOCKET   0
#endif

#ifndef LWIP_STATS
  #define LWIP_STATS      0
#endif

#ifndef MEM_ALIGNMENT
  #define MEM_ALIGNMENT   2
#endif

#endif /* LWIPOPTS_CONNECTION_TO_OMK_CONFIGURATION_HEADER_FILE */
