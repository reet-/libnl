/* SPDX-License-Identifier: LGPL-2.1-only */
/*
 * Copyright (c) 2014 Thomas Graf <tgraf@suug.ch>
 */

#ifndef NETLINK_SOCKET_PRIV_H_
#define NETLINK_SOCKET_PRIV_H_

#include <netlink-private/netlink.h>

#ifdef __cplusplus
extern "C" {
#endif

int _nl_socket_is_local_port_unspecified (struct nl_sock *sk);
uint32_t _nl_socket_set_local_port_no_release(struct nl_sock *sk, int generate_other);

void _nl_socket_used_ports_release_all(const uint32_t *used_ports);
void _nl_socket_used_ports_set(uint32_t *used_ports, uint32_t port);

#ifdef __cplusplus
}
#endif

#endif
