/**
 * FreeRDP: A Remote Desktop Protocol Client
 * RDP Constants
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __FREERDP_CONSTANTS
#define __FREERDP_CONSTANTS

/**
 * Protocol Security Negotiation Protocols
 */
enum RDP_NEG_PROTOCOLS
{
	PROTOCOL_RDP = 0x00000000,
	PROTOCOL_TLS = 0x00000001,
	PROTOCOL_NLA = 0x00000002
};

/**
 * Protocol Security Negotiation Failure Codes
 */
enum RDP_NEG_FAILURE_FAILURECODES
{
	SSL_REQUIRED_BY_SERVER = 0x00000001,
	SSL_NOT_ALLOWED_BY_SERVER = 0x00000002,
	SSL_CERT_NOT_ON_SERVER = 0x00000003,
	INCONSISTENT_FLAGS = 0x00000004,
	HYBRID_REQUIRED_BY_SERVER = 0x00000005
};

/**
 * Static Virtual Channel Flags
 */
enum RDP_SVC_CHANNEL_FLAG
{
	CHANNEL_FLAG_MIDDLE = 0,
	CHANNEL_FLAG_FIRST = 0x01,
	CHANNEL_FLAG_LAST = 0x02,
	CHANNEL_FLAG_ONLY = (CHANNEL_FLAG_FIRST | CHANNEL_FLAG_LAST),
	CHANNEL_FLAG_SHOW_PROTOCOL = 0x10,
	CHANNEL_FLAG_SUSPEND = 0x20,
	CHANNEL_FLAG_RESUME = 0x40,
	CHANNEL_FLAG_FAIL = 0x100
};

//#define CHANNEL_FLAG_ONLY (CHANNEL_FLAG_FIRST | CHANNEL_FLAG_LAST)

/**
 * Static Virtual Channel Options
 */
enum RDP_SVC_CHANNEL_OPTION
{
	CHANNEL_OPTION_SHOW_PROTOCOL = 0x00200000,
	CHANNEL_OPTION_COMPRESS      = 0x00400000,
	CHANNEL_OPTION_COMPRESS_RDP  = 0x00800000,
	CHANNEL_OPTION_PRI_LOW       = 0x02000000,
	CHANNEL_OPTION_PRI_MED       = 0x04000000,
	CHANNEL_OPTION_PRI_HIGH      = 0x08000000,
	CHANNEL_OPTION_ENCRYPT_CS    = 0x10000000,
	CHANNEL_OPTION_ENCRYPT_SC    = 0x20000000,
	CHANNEL_OPTION_ENCRYPT_RDP   = 0x40000000,
	CHANNEL_OPTION_INITIALIZED   = 0x80000000
};

/**
 * Static Virtual Channel Events
 */
enum RDP_SVC_CHANNEL_EVENT
{
	CHANNEL_EVENT_INITIALIZED = 0,
	CHANNEL_EVENT_CONNECTED = 1,
	CHANNEL_EVENT_V1_CONNECTED = 2,
	CHANNEL_EVENT_DISCONNECTED = 3,
	CHANNEL_EVENT_TERMINATED = 4,
	CHANNEL_EVENT_DATA_RECEIVED = 10,
	CHANNEL_EVENT_WRITE_COMPLETE = 11,
	CHANNEL_EVENT_WRITE_CANCELLED = 12,
	CHANNEL_EVENT_USER = 1000
};

/**
 * FreeRDP Event Types
 */
enum FRDP_EVENT_TYPE
{
	FRDP_EVENT_TYPE_DEBUG = 0,
	FRDP_EVENT_TYPE_VIDEO_FRAME = 1,
	FRDP_EVENT_TYPE_REDRAW = 2
};

#endif