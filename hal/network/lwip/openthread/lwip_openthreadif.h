/*
 * Copyright (c) 2018 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LWIP_OPENTHREAD_IF_H
#define LWIP_OPENTHREAD_IF_H

#include <lwip/netif.h>
#include <lwip/pbuf.h>
#include <openthread/message.h>
#include <openthread/ip6.h>
#include <openthread/dhcp6_client.h>

#ifdef __cplusplus

namespace particle { namespace net {

class OpenThreadNetif {
public:
    OpenThreadNetif(otInstance* ot = nullptr);
    ~OpenThreadNetif();

    /* LwIP netif init callback */
    static err_t initCb(netif *netif);
    /* LwIP netif output_ip6 callback */
    static err_t outputIp6Cb(netif* netif, pbuf* p, const ip6_addr_t* addr);

    /* OpenThread receive callback */
    static void otReceiveCb(otMessage* msg, void* ctx);
    /* OpenThread state changed callback */
    static void otStateChangedCb(uint32_t flags, void* ctx);

    netif* interface();

    otInstance* getOtInstance();

protected:
    void input(otMessage* message);
    void stateChanged(uint32_t flags);

    void refreshIpAddresses();

private:
    netif netif_ = {};
    otInstance* ot_ = nullptr;
    otNetifAddress slaacAddresses_[OPENTHREAD_CONFIG_NUM_SLAAC_ADDRESSES] = {};
#if OPENTHREAD_ENABLE_DHCP6_CLIENT
    otDhcpAddress dhcpAddresses_[OPENTHREAD_CONFIG_NUM_DHCP_PREFIXES];
#endif // OPENTHREAD_ENABLE_DHCP6_CLIENT
};

} } // namespace particle::net

#endif /* __cplusplus */


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LWIP_OPENTHREAD_IF_H */