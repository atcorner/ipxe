#define	DOWNLOAD_PROTO_HTTPS

#undef	SANBOOT_PROTO_ISCSI
#undef	SANBOOT_PROTO_AOE
#undef	SANBOOT_PROTO_IB_SRP
#undef	SANBOOT_PROTO_FCP

#define PING_CMD

#define	VLAN_CMD
#ifndef PXE_EFI
#define	PXE_CMD
#endif

#undef	BANNER_TIMEOUT
#define	BANNER_TIMEOUT	50

/* Maybe revert when Mellanox support with works again (TRITON-2432). */
#undef NET_PROTO_EAPOL
