/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Wed Sep 26 12:53:56 2018. */

#ifndef PB_PARTICLE_CTRL_MESH_MESH_PB_H_INCLUDED
#define PB_PARTICLE_CTRL_MESH_MESH_PB_H_INCLUDED
#include <pb.h>

#include "extensions.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _particle_ctrl_mesh_AddJoinerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_AddJoinerReply) */
} particle_ctrl_mesh_AddJoinerReply;

typedef struct _particle_ctrl_mesh_AuthReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_AuthReply) */
} particle_ctrl_mesh_AuthReply;

typedef struct _particle_ctrl_mesh_AuthRequest {
    pb_callback_t password;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_AuthRequest) */
} particle_ctrl_mesh_AuthRequest;

typedef struct _particle_ctrl_mesh_GetNetworkInfoRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_GetNetworkInfoRequest) */
} particle_ctrl_mesh_GetNetworkInfoRequest;

typedef struct _particle_ctrl_mesh_JoinNetworkReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_JoinNetworkReply) */
} particle_ctrl_mesh_JoinNetworkReply;

typedef struct _particle_ctrl_mesh_JoinNetworkRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_JoinNetworkRequest) */
} particle_ctrl_mesh_JoinNetworkRequest;

typedef struct _particle_ctrl_mesh_LeaveNetworkReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_LeaveNetworkReply) */
} particle_ctrl_mesh_LeaveNetworkReply;

typedef struct _particle_ctrl_mesh_LeaveNetworkRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_LeaveNetworkRequest) */
} particle_ctrl_mesh_LeaveNetworkRequest;

typedef struct _particle_ctrl_mesh_PrepareJoinerReply {
    pb_callback_t eui64;
    pb_callback_t password;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_PrepareJoinerReply) */
} particle_ctrl_mesh_PrepareJoinerReply;

typedef struct _particle_ctrl_mesh_RemoveJoinerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_RemoveJoinerReply) */
} particle_ctrl_mesh_RemoveJoinerReply;

typedef struct _particle_ctrl_mesh_RemoveJoinerRequest {
    pb_callback_t eui64;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_RemoveJoinerRequest) */
} particle_ctrl_mesh_RemoveJoinerRequest;

typedef struct _particle_ctrl_mesh_ScanNetworksReply {
    pb_callback_t networks;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_ScanNetworksReply) */
} particle_ctrl_mesh_ScanNetworksReply;

typedef struct _particle_ctrl_mesh_ScanNetworksRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_ScanNetworksRequest) */
} particle_ctrl_mesh_ScanNetworksRequest;

typedef struct _particle_ctrl_mesh_StartCommissionerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_StartCommissionerReply) */
} particle_ctrl_mesh_StartCommissionerReply;

typedef struct _particle_ctrl_mesh_StopCommissionerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_StopCommissionerReply) */
} particle_ctrl_mesh_StopCommissionerReply;

typedef struct _particle_ctrl_mesh_StopCommissionerRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_StopCommissionerRequest) */
} particle_ctrl_mesh_StopCommissionerRequest;

typedef struct _particle_ctrl_mesh_AddJoinerRequest {
    pb_callback_t eui64;
    pb_callback_t password;
    uint32_t timeout;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_AddJoinerRequest) */
} particle_ctrl_mesh_AddJoinerRequest;

typedef struct _particle_ctrl_mesh_CreateNetworkRequest {
    pb_callback_t name;
    pb_callback_t password;
    uint32_t channel;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_CreateNetworkRequest) */
} particle_ctrl_mesh_CreateNetworkRequest;

typedef struct _particle_ctrl_mesh_NetworkInfo {
    pb_callback_t name;
    pb_callback_t ext_pan_id;
    uint32_t pan_id;
    uint32_t channel;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_NetworkInfo) */
} particle_ctrl_mesh_NetworkInfo;

typedef struct _particle_ctrl_mesh_StartCommissionerRequest {
    uint32_t timeout;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_StartCommissionerRequest) */
} particle_ctrl_mesh_StartCommissionerRequest;

typedef struct _particle_ctrl_mesh_CreateNetworkReply {
    particle_ctrl_mesh_NetworkInfo network;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_CreateNetworkReply) */
} particle_ctrl_mesh_CreateNetworkReply;

typedef struct _particle_ctrl_mesh_GetNetworkInfoReply {
    particle_ctrl_mesh_NetworkInfo network;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_GetNetworkInfoReply) */
} particle_ctrl_mesh_GetNetworkInfoReply;

typedef struct _particle_ctrl_mesh_PrepareJoinerRequest {
    particle_ctrl_mesh_NetworkInfo network;
/* @@protoc_insertion_point(struct:particle_ctrl_mesh_PrepareJoinerRequest) */
} particle_ctrl_mesh_PrepareJoinerRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define particle_ctrl_mesh_NetworkInfo_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define particle_ctrl_mesh_AuthRequest_init_default {{{NULL}, NULL}}
#define particle_ctrl_mesh_AuthReply_init_default {0}
#define particle_ctrl_mesh_CreateNetworkRequest_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0}
#define particle_ctrl_mesh_CreateNetworkReply_init_default {particle_ctrl_mesh_NetworkInfo_init_default}
#define particle_ctrl_mesh_StartCommissionerRequest_init_default {0}
#define particle_ctrl_mesh_StartCommissionerReply_init_default {0}
#define particle_ctrl_mesh_StopCommissionerRequest_init_default {0}
#define particle_ctrl_mesh_StopCommissionerReply_init_default {0}
#define particle_ctrl_mesh_PrepareJoinerRequest_init_default {particle_ctrl_mesh_NetworkInfo_init_default}
#define particle_ctrl_mesh_PrepareJoinerReply_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define particle_ctrl_mesh_AddJoinerRequest_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0}
#define particle_ctrl_mesh_AddJoinerReply_init_default {0}
#define particle_ctrl_mesh_RemoveJoinerRequest_init_default {{{NULL}, NULL}}
#define particle_ctrl_mesh_RemoveJoinerReply_init_default {0}
#define particle_ctrl_mesh_JoinNetworkRequest_init_default {0}
#define particle_ctrl_mesh_JoinNetworkReply_init_default {0}
#define particle_ctrl_mesh_LeaveNetworkRequest_init_default {0}
#define particle_ctrl_mesh_LeaveNetworkReply_init_default {0}
#define particle_ctrl_mesh_GetNetworkInfoRequest_init_default {0}
#define particle_ctrl_mesh_GetNetworkInfoReply_init_default {particle_ctrl_mesh_NetworkInfo_init_default}
#define particle_ctrl_mesh_ScanNetworksRequest_init_default {0}
#define particle_ctrl_mesh_ScanNetworksReply_init_default {{{NULL}, NULL}}
#define particle_ctrl_mesh_NetworkInfo_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define particle_ctrl_mesh_AuthRequest_init_zero {{{NULL}, NULL}}
#define particle_ctrl_mesh_AuthReply_init_zero   {0}
#define particle_ctrl_mesh_CreateNetworkRequest_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0}
#define particle_ctrl_mesh_CreateNetworkReply_init_zero {particle_ctrl_mesh_NetworkInfo_init_zero}
#define particle_ctrl_mesh_StartCommissionerRequest_init_zero {0}
#define particle_ctrl_mesh_StartCommissionerReply_init_zero {0}
#define particle_ctrl_mesh_StopCommissionerRequest_init_zero {0}
#define particle_ctrl_mesh_StopCommissionerReply_init_zero {0}
#define particle_ctrl_mesh_PrepareJoinerRequest_init_zero {particle_ctrl_mesh_NetworkInfo_init_zero}
#define particle_ctrl_mesh_PrepareJoinerReply_init_zero {{{NULL}, NULL}, {{NULL}, NULL}}
#define particle_ctrl_mesh_AddJoinerRequest_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0}
#define particle_ctrl_mesh_AddJoinerReply_init_zero {0}
#define particle_ctrl_mesh_RemoveJoinerRequest_init_zero {{{NULL}, NULL}}
#define particle_ctrl_mesh_RemoveJoinerReply_init_zero {0}
#define particle_ctrl_mesh_JoinNetworkRequest_init_zero {0}
#define particle_ctrl_mesh_JoinNetworkReply_init_zero {0}
#define particle_ctrl_mesh_LeaveNetworkRequest_init_zero {0}
#define particle_ctrl_mesh_LeaveNetworkReply_init_zero {0}
#define particle_ctrl_mesh_GetNetworkInfoRequest_init_zero {0}
#define particle_ctrl_mesh_GetNetworkInfoReply_init_zero {particle_ctrl_mesh_NetworkInfo_init_zero}
#define particle_ctrl_mesh_ScanNetworksRequest_init_zero {0}
#define particle_ctrl_mesh_ScanNetworksReply_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define particle_ctrl_mesh_AuthRequest_password_tag 1
#define particle_ctrl_mesh_PrepareJoinerReply_eui64_tag 1
#define particle_ctrl_mesh_PrepareJoinerReply_password_tag 2
#define particle_ctrl_mesh_RemoveJoinerRequest_eui64_tag 1
#define particle_ctrl_mesh_ScanNetworksReply_networks_tag 1
#define particle_ctrl_mesh_AddJoinerRequest_eui64_tag 1
#define particle_ctrl_mesh_AddJoinerRequest_password_tag 2
#define particle_ctrl_mesh_AddJoinerRequest_timeout_tag 3
#define particle_ctrl_mesh_CreateNetworkRequest_name_tag 1
#define particle_ctrl_mesh_CreateNetworkRequest_password_tag 2
#define particle_ctrl_mesh_CreateNetworkRequest_channel_tag 3
#define particle_ctrl_mesh_NetworkInfo_name_tag  1
#define particle_ctrl_mesh_NetworkInfo_ext_pan_id_tag 2
#define particle_ctrl_mesh_NetworkInfo_pan_id_tag 3
#define particle_ctrl_mesh_NetworkInfo_channel_tag 4
#define particle_ctrl_mesh_StartCommissionerRequest_timeout_tag 1
#define particle_ctrl_mesh_CreateNetworkReply_network_tag 1
#define particle_ctrl_mesh_GetNetworkInfoReply_network_tag 1
#define particle_ctrl_mesh_PrepareJoinerRequest_network_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t particle_ctrl_mesh_NetworkInfo_fields[5];
extern const pb_field_t particle_ctrl_mesh_AuthRequest_fields[2];
extern const pb_field_t particle_ctrl_mesh_AuthReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_CreateNetworkRequest_fields[4];
extern const pb_field_t particle_ctrl_mesh_CreateNetworkReply_fields[2];
extern const pb_field_t particle_ctrl_mesh_StartCommissionerRequest_fields[2];
extern const pb_field_t particle_ctrl_mesh_StartCommissionerReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_StopCommissionerRequest_fields[1];
extern const pb_field_t particle_ctrl_mesh_StopCommissionerReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_PrepareJoinerRequest_fields[2];
extern const pb_field_t particle_ctrl_mesh_PrepareJoinerReply_fields[3];
extern const pb_field_t particle_ctrl_mesh_AddJoinerRequest_fields[4];
extern const pb_field_t particle_ctrl_mesh_AddJoinerReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_RemoveJoinerRequest_fields[2];
extern const pb_field_t particle_ctrl_mesh_RemoveJoinerReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_JoinNetworkRequest_fields[1];
extern const pb_field_t particle_ctrl_mesh_JoinNetworkReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_LeaveNetworkRequest_fields[1];
extern const pb_field_t particle_ctrl_mesh_LeaveNetworkReply_fields[1];
extern const pb_field_t particle_ctrl_mesh_GetNetworkInfoRequest_fields[1];
extern const pb_field_t particle_ctrl_mesh_GetNetworkInfoReply_fields[2];
extern const pb_field_t particle_ctrl_mesh_ScanNetworksRequest_fields[1];
extern const pb_field_t particle_ctrl_mesh_ScanNetworksReply_fields[2];

/* Maximum encoded size of messages (where known) */
/* particle_ctrl_mesh_NetworkInfo_size depends on runtime parameters */
/* particle_ctrl_mesh_AuthRequest_size depends on runtime parameters */
#define particle_ctrl_mesh_AuthReply_size        0
/* particle_ctrl_mesh_CreateNetworkRequest_size depends on runtime parameters */
#define particle_ctrl_mesh_CreateNetworkReply_size (6 + particle_ctrl_mesh_NetworkInfo_size)
#define particle_ctrl_mesh_StartCommissionerRequest_size 6
#define particle_ctrl_mesh_StartCommissionerReply_size 0
#define particle_ctrl_mesh_StopCommissionerRequest_size 0
#define particle_ctrl_mesh_StopCommissionerReply_size 0
#define particle_ctrl_mesh_PrepareJoinerRequest_size (6 + particle_ctrl_mesh_NetworkInfo_size)
/* particle_ctrl_mesh_PrepareJoinerReply_size depends on runtime parameters */
/* particle_ctrl_mesh_AddJoinerRequest_size depends on runtime parameters */
#define particle_ctrl_mesh_AddJoinerReply_size   0
/* particle_ctrl_mesh_RemoveJoinerRequest_size depends on runtime parameters */
#define particle_ctrl_mesh_RemoveJoinerReply_size 0
#define particle_ctrl_mesh_JoinNetworkRequest_size 0
#define particle_ctrl_mesh_JoinNetworkReply_size 0
#define particle_ctrl_mesh_LeaveNetworkRequest_size 0
#define particle_ctrl_mesh_LeaveNetworkReply_size 0
#define particle_ctrl_mesh_GetNetworkInfoRequest_size 0
#define particle_ctrl_mesh_GetNetworkInfoReply_size (6 + particle_ctrl_mesh_NetworkInfo_size)
#define particle_ctrl_mesh_ScanNetworksRequest_size 0
/* particle_ctrl_mesh_ScanNetworksReply_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESH_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
