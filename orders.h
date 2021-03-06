/**
 * vnc2rdp: proxy for RDP client connect to VNC server
 *
 * Copyright 2014 Yiwei Li <leeyiw@gmail.com>
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

#ifndef _ORDERS_H_
#define _ORDERS_H_

/* Primary Drawing Order - controlFlags */
#define TS_STANDARD						0x01
#define TS_BOUNDS						0x04
#define TS_TYPE_CHANGE					0x08
#define TS_DELTA_COORDINATES			0x10
#define TS_ZERO_BOUNDS_DELTAS			0x20
#define TS_ZERO_FIELD_BYTE_BIT0			0x40
#define TS_ZERO_FIELD_BYTE_BIT1			0x80

/* Primary Drawing Order - orderType */
#define TS_ENC_DSTBLT_ORDER				0x00
#define TS_ENC_PATBLT_ORDER				0x01
#define TS_ENC_SCRBLT_ORDER				0x02
#define TS_ENC_DRAWNINEGRID_ORDER		0x07
#define TS_ENC_MULTI_DRAWNINEGRID_ORDER	0x08
#define TS_ENC_LINETO_ORDER				0x09
#define TS_ENC_OPAQUERECT_ORDER			0x0A
#define TS_ENC_SAVEBITMAP_ORDER			0x0B
#define TS_ENC_MEMBLT_ORDER				0x0D
#define TS_ENC_MEM3BLT_ORDER			0x0E
#define TS_ENC_MULTIDSTBLT_ORDER		0x0F
#define TS_ENC_MULTIPATBLT_ORDER		0x10
#define TS_ENC_MULTISCRBLT_ORDER		0x11
#define TS_ENC_MULTIOPAQUERECT_ORDER	0x12
#define TS_ENC_FAST_INDEX_ORDER			0x13
#define TS_ENC_POLYGON_SC_ORDER			0x14
#define TS_ENC_POLYGON_CB_ORDER			0x15
#define TS_ENC_POLYLINE_ORDER			0x16
#define TS_ENC_FAST_GLYPH_ORDER			0x18
#define TS_ENC_ELLIPSE_SC_ORDER			0x19
#define TS_ENC_ELLIPSE_CB_ORDER			0x1A
#define TS_ENC_INDEX_ORDER				0x1B

#endif  // _ORDERS_H_
