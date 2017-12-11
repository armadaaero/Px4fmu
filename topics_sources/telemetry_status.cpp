/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/telemetry_status.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/telemetry_status.h>

constexpr char __orb_telemetry_status_fields[] = "uint64_t timestamp;uint64_t heartbeat_time;uint64_t telem_time;uint16_t rxerrors;uint16_t fixed;uint8_t type;uint8_t rssi;uint8_t remote_rssi;uint8_t noise;uint8_t remote_noise;uint8_t txbuf;uint8_t system_id;uint8_t component_id;uint8_t[4] _padding0;";

ORB_DEFINE(telemetry_status, struct telemetry_status_s, 36,
    __orb_telemetry_status_fields);



void serialize_telemetry_status(const struct telemetry_status_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->heartbeat_time, microCDRWriter);
	serializeUnsignedLong(input->telem_time, microCDRWriter);
	serializeUnsignedShort(input->rxerrors, microCDRWriter);
	serializeUnsignedShort(input->fixed, microCDRWriter);
	serializeUnsignedChar(input->type, microCDRWriter);
	serializeUnsignedChar(input->rssi, microCDRWriter);
	serializeUnsignedChar(input->remote_rssi, microCDRWriter);
	serializeUnsignedChar(input->noise, microCDRWriter);
	serializeUnsignedChar(input->remote_noise, microCDRWriter);
	serializeUnsignedChar(input->txbuf, microCDRWriter);
	serializeUnsignedChar(input->system_id, microCDRWriter);
	serializeUnsignedChar(input->component_id, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_telemetry_status(struct telemetry_status_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->heartbeat_time, microCDRReader);
	deserializeUnsignedLong(&output->telem_time, microCDRReader);
	deserializeUnsignedShort(&output->rxerrors, microCDRReader);
	deserializeUnsignedShort(&output->fixed, microCDRReader);
	deserializeUnsignedChar(&output->type, microCDRReader);
	deserializeUnsignedChar(&output->rssi, microCDRReader);
	deserializeUnsignedChar(&output->remote_rssi, microCDRReader);
	deserializeUnsignedChar(&output->noise, microCDRReader);
	deserializeUnsignedChar(&output->remote_noise, microCDRReader);
	deserializeUnsignedChar(&output->txbuf, microCDRReader);
	deserializeUnsignedChar(&output->system_id, microCDRReader);
	deserializeUnsignedChar(&output->component_id, microCDRReader);

}