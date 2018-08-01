/*
 *  Copyright (c) 2016, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes nrf52840 compile-time configuration constants
 *   for OpenThread.
 */

#ifndef OPENTHREAD_CONFIG_PROJECT_H
#define OPENTHREAD_CONFIG_PROJECT_H

/*
 * The GNU Autoconf system defines a PACKAGE macro which is the name
 * of the software package. This name collides with PACKAGE field in
 * the nRF52 Factory Information Configuration Registers (FICR)
 * structure.
 */
#undef PACKAGE

#ifndef OPENTHREAD_RADIO
#define OPENTHREAD_RADIO 0
#endif /* OPENTHREAD_RADIO */

#ifndef OPENTHREAD_FTD
#define OPENTHREAD_FTD 1
#endif /* OPENTHREAD_FTD */

#ifndef OPENTHREAD_MTD
#define OPENTHREAD_MTD 0
#endif /* OPENTHREAD_MTD */

/**
 * @def OPENTHREAD_CONFIG_LOG_OUTPUT
 *
 * The nrf52840 platform provides an otPlatLog() function.
 */
#ifndef OPENTHREAD_CONFIG_LOG_OUTPUT /* allow command line override */
#define OPENTHREAD_CONFIG_LOG_OUTPUT  OPENTHREAD_CONFIG_LOG_OUTPUT_PLATFORM_DEFINED
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_INFO
 *
 * The platform-specific string to insert into the OpenThread version string.
 *
 */
#define OPENTHREAD_CONFIG_PLATFORM_INFO                         "Xenon"

/**
 * @def OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS
 *
 * The number of message buffers in the buffer pool.
 *
 */
#define OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS                   128

/**
 * @def OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS
 *
 * The maximum number of state-changed callback handlers (set using `otSetStateChangedCallback()`).
 *
 */
#define OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS              5

/**
 * @def OPENTHREAD_CONFIG_ADDRESS_CACHE_ENTRIES
 *
 * The number of EID-to-RLOC cache entries.
 *
 */
#define OPENTHREAD_CONFIG_ADDRESS_CACHE_ENTRIES                 20

/**
 * @def OPENTHREAD_CONFIG_LOG_PREPREND_LEVEL
 *
 * Define to prepend the log level to all log messages
 *
 */
#define OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL                     0

 /**
  * @def OPENTHREAD_CONFIG_ENABLE_SOFTWARE_ACK_TIMEOUT
  *
  * Define to 1 if you want to enable software ACK timeout logic.
  *
  */
#define OPENTHREAD_CONFIG_ENABLE_SOFTWARE_ACK_TIMEOUT           1

 /**
  * @def OPENTHREAD_CONFIG_ENABLE_SOFTWARE_RETRANSMIT
  *
  * Define to 1 if you want to enable software retransmission logic.
  *
  */
#define OPENTHREAD_CONFIG_ENABLE_SOFTWARE_RETRANSMIT            1

/**
 * @def OPENTHREAD_CONFIG_ENABLE_PLATFORM_USEC_TIMER
 *
 * Define to 1 if you want to support microsecond timer in platform.
 *
 */
#define OPENTHREAD_CONFIG_ENABLE_PLATFORM_USEC_TIMER     1

/**
 * @def SETTINGS_CONFIG_BASE_ADDRESS
 *
 * The base address of settings.
 *
 */
#define SETTINGS_CONFIG_BASE_ADDRESS                            0

/**
 * @def SETTINGS_CONFIG_PAGE_SIZE
 *
 * The page size of settings.
 *
 */
#define SETTINGS_CONFIG_PAGE_SIZE                               4096

/**
 * @def SETTINGS_CONFIG_PAGE_NUM
 *
 * The page number of settings.
 *
 */
#define SETTINGS_CONFIG_PAGE_NUM                                (utilsFlashGetSize() / SETTINGS_CONFIG_PAGE_SIZE)

/**
 * @def OPENTHREAD_CONFIG_MBEDTLS_HEAP_SIZE
 *
 * The size of mbedTLS heap buffer when DTLS is enabled.
 *
 */
#define OPENTHREAD_CONFIG_MBEDTLS_HEAP_SIZE                     (4096 * sizeof(void *))

/**
 * @def OPENTHREAD_CONFIG_MBEDTLS_HEAP_SIZE_NO_DTLS
 *
 * The size of mbedTLS heap buffer when DTLS is disabled.
 *
 */
#define OPENTHREAD_CONFIG_MBEDTLS_HEAP_SIZE_NO_DTLS             2048

/**
 * @def NRF_MBEDTLS_AES_ALT_INTERRUPT_CONTEXT
 *
 * Define as 1 to enable AES usage in interrupt context and AES-256, by introducing a software AES under platform layer.
 *
 * @note This feature must be enabled to support AES-256 used by Commissioner and Joiner.
 *
 */
#define NRF_MBEDTLS_AES_ALT_INTERRUPT_CONTEXT                   (1)

/*
 * Suppress the ARMCC warning on unreachable statement,
 * e.g. break after assert(false) or ExitNow() macro.
 */
#if defined(__CC_ARM)
    _Pragma("diag_suppress=111")
    _Pragma("diag_suppress=128")
#endif

#ifdef DEBUG_BUILD

// OT_LOG_LEVEL_DEBG: 5
// OT_LOG_LEVEL_INFO: 4
// OT_LOG_LEVEL_NOTE: 3
// OT_LOG_LEVEL_WARN: 2
// OT_LOG_LEVEL_CRIT: 1
// OT_LOG_LEVEL_NONE: 0
#define OPENTHREAD_CONFIG_LOG_LEVEL OT_LOG_LEVEL_INFO

#define OPENTHREAD_CONFIG_LOG_API 0
#define OPENTHREAD_CONFIG_LOG_MLE 1 // Enabled
#define OPENTHREAD_CONFIG_LOG_ARP 0
#define OPENTHREAD_CONFIG_LOG_NETDATA 0
#define OPENTHREAD_CONFIG_LOG_ICMP 0
#define OPENTHREAD_CONFIG_LOG_IP6 0
#define OPENTHREAD_CONFIG_LOG_MAC 0
#define OPENTHREAD_CONFIG_LOG_MEM 0
#define OPENTHREAD_CONFIG_LOG_PKT_DUMP 0
#define OPENTHREAD_CONFIG_LOG_NETDIAG 0
#define OPENTHREAD_CONFIG_LOG_PLATFORM 0
#define OPENTHREAD_CONFIG_LOG_CLI 0
#define OPENTHREAD_CONFIG_LOG_COAP 0
#define OPENTHREAD_CONFIG_LOG_CORE 0
#define OPENTHREAD_CONFIG_LOG_UTIL 0

#endif // defined(DEBUG_BUILD)

#endif // defined(OPENTHREAD_CONFIG_PROJECT_H)
