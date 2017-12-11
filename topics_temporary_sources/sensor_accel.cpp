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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/sensor_accel.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/sensor_accel.h>

constexpr char __orb_sensor_accel_fields[] = "uint64_t timestamp;uint64_t integral_dt;uint64_t error_count;float x;float y;float z;float x_integral;float y_integral;float z_integral;float temperature;float range_m_s2;float scaling;uint32_t device_id;int16_t x_raw;int16_t y_raw;int16_t z_raw;int16_t temperature_raw;";

ORB_DEFINE(sensor_accel, struct sensor_accel_s, 72,
    __orb_sensor_accel_fields);



void serialize_sensor_accel(const struct sensor_accel_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->integral_dt, microCDRWriter);
	serializeUnsignedLong(input->error_count, microCDRWriter);
	serializeFloat(input->x, microCDRWriter);
	serializeFloat(input->y, microCDRWriter);
	serializeFloat(input->z, microCDRWriter);
	serializeFloat(input->x_integral, microCDRWriter);
	serializeFloat(input->y_integral, microCDRWriter);
	serializeFloat(input->z_integral, microCDRWriter);
	serializeFloat(input->temperature, microCDRWriter);
	serializeFloat(input->range_m_s2, microCDRWriter);
	serializeFloat(input->scaling, microCDRWriter);
	serializeUnsignedInt(input->device_id, microCDRWriter);
	serializeShort(input->x_raw, microCDRWriter);
	serializeShort(input->y_raw, microCDRWriter);
	serializeShort(input->z_raw, microCDRWriter);
	serializeShort(input->temperature_raw, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_sensor_accel(struct sensor_accel_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->integral_dt, microCDRReader);
	deserializeUnsignedLong(&output->error_count, microCDRReader);
	deserializeFloat(&output->x, microCDRReader);
	deserializeFloat(&output->y, microCDRReader);
	deserializeFloat(&output->z, microCDRReader);
	deserializeFloat(&output->x_integral, microCDRReader);
	deserializeFloat(&output->y_integral, microCDRReader);
	deserializeFloat(&output->z_integral, microCDRReader);
	deserializeFloat(&output->temperature, microCDRReader);
	deserializeFloat(&output->range_m_s2, microCDRReader);
	deserializeFloat(&output->scaling, microCDRReader);
	deserializeUnsignedInt(&output->device_id, microCDRReader);
	deserializeShort(&output->x_raw, microCDRReader);
	deserializeShort(&output->y_raw, microCDRReader);
	deserializeShort(&output->z_raw, microCDRReader);
	deserializeShort(&output->temperature_raw, microCDRReader);

}