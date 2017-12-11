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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/vehicle_local_position.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/vehicle_local_position.h>

constexpr char __orb_vehicle_local_position_fields[] = "uint64_t timestamp;uint64_t ref_timestamp;double ref_lat;double ref_lon;uint64_t surface_bottom_timestamp;float x;float y;float z;float[2] delta_xy;float delta_z;float vx;float vy;float vz;float z_deriv;float[2] delta_vxy;float delta_vz;float ax;float ay;float az;float yaw;float ref_alt;float dist_bottom;float dist_bottom_rate;float eph;float epv;float evh;float evv;uint8_t estimator_type;bool xy_valid;bool z_valid;bool v_xy_valid;bool v_z_valid;uint8_t xy_reset_counter;uint8_t z_reset_counter;uint8_t vxy_reset_counter;uint8_t vz_reset_counter;bool xy_global;bool z_global;bool dist_bottom_valid;uint8_t[4] _padding0;";

ORB_DEFINE(vehicle_local_position, struct vehicle_local_position_s, 148,
    __orb_vehicle_local_position_fields);
ORB_DEFINE(vehicle_local_position_groundtruth, struct vehicle_local_position_s, 148,
    __orb_vehicle_local_position_fields);
ORB_DEFINE(vehicle_vision_position, struct vehicle_local_position_s, 148,
    __orb_vehicle_local_position_fields);



void serialize_vehicle_local_position(const struct vehicle_local_position_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->ref_timestamp, microCDRWriter);
	serializeDouble(input->ref_lat, microCDRWriter);
	serializeDouble(input->ref_lon, microCDRWriter);
	serializeUnsignedLong(input->surface_bottom_timestamp, microCDRWriter);
	serializeFloat(input->x, microCDRWriter);
	serializeFloat(input->y, microCDRWriter);
	serializeFloat(input->z, microCDRWriter);
	serializeFloatArray(input->delta_xy, 2, microCDRWriter);
	serializeFloat(input->delta_z, microCDRWriter);
	serializeFloat(input->vx, microCDRWriter);
	serializeFloat(input->vy, microCDRWriter);
	serializeFloat(input->vz, microCDRWriter);
	serializeFloat(input->z_deriv, microCDRWriter);
	serializeFloatArray(input->delta_vxy, 2, microCDRWriter);
	serializeFloat(input->delta_vz, microCDRWriter);
	serializeFloat(input->ax, microCDRWriter);
	serializeFloat(input->ay, microCDRWriter);
	serializeFloat(input->az, microCDRWriter);
	serializeFloat(input->yaw, microCDRWriter);
	serializeFloat(input->ref_alt, microCDRWriter);
	serializeFloat(input->dist_bottom, microCDRWriter);
	serializeFloat(input->dist_bottom_rate, microCDRWriter);
	serializeFloat(input->eph, microCDRWriter);
	serializeFloat(input->epv, microCDRWriter);
	serializeFloat(input->evh, microCDRWriter);
	serializeFloat(input->evv, microCDRWriter);
	serializeUnsignedChar(input->estimator_type, microCDRWriter);
	serializeBool(input->xy_valid, microCDRWriter);
	serializeBool(input->z_valid, microCDRWriter);
	serializeBool(input->v_xy_valid, microCDRWriter);
	serializeBool(input->v_z_valid, microCDRWriter);
	serializeUnsignedChar(input->xy_reset_counter, microCDRWriter);
	serializeUnsignedChar(input->z_reset_counter, microCDRWriter);
	serializeUnsignedChar(input->vxy_reset_counter, microCDRWriter);
	serializeUnsignedChar(input->vz_reset_counter, microCDRWriter);
	serializeBool(input->xy_global, microCDRWriter);
	serializeBool(input->z_global, microCDRWriter);
	serializeBool(input->dist_bottom_valid, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_vehicle_local_position(struct vehicle_local_position_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->ref_timestamp, microCDRReader);
	deserializeDouble(&output->ref_lat, microCDRReader);
	deserializeDouble(&output->ref_lon, microCDRReader);
	deserializeUnsignedLong(&output->surface_bottom_timestamp, microCDRReader);
	deserializeFloat(&output->x, microCDRReader);
	deserializeFloat(&output->y, microCDRReader);
	deserializeFloat(&output->z, microCDRReader);
	deserializeFloat(&output->delta_xy[0], microCDRReader);
	deserializeFloat(&output->delta_xy[1], microCDRReader);
	deserializeFloat(&output->delta_z, microCDRReader);
	deserializeFloat(&output->vx, microCDRReader);
	deserializeFloat(&output->vy, microCDRReader);
	deserializeFloat(&output->vz, microCDRReader);
	deserializeFloat(&output->z_deriv, microCDRReader);
	deserializeFloat(&output->delta_vxy[0], microCDRReader);
	deserializeFloat(&output->delta_vxy[1], microCDRReader);
	deserializeFloat(&output->delta_vz, microCDRReader);
	deserializeFloat(&output->ax, microCDRReader);
	deserializeFloat(&output->ay, microCDRReader);
	deserializeFloat(&output->az, microCDRReader);
	deserializeFloat(&output->yaw, microCDRReader);
	deserializeFloat(&output->ref_alt, microCDRReader);
	deserializeFloat(&output->dist_bottom, microCDRReader);
	deserializeFloat(&output->dist_bottom_rate, microCDRReader);
	deserializeFloat(&output->eph, microCDRReader);
	deserializeFloat(&output->epv, microCDRReader);
	deserializeFloat(&output->evh, microCDRReader);
	deserializeFloat(&output->evv, microCDRReader);
	deserializeUnsignedChar(&output->estimator_type, microCDRReader);
	deserializeBool(&output->xy_valid, microCDRReader);
	deserializeBool(&output->z_valid, microCDRReader);
	deserializeBool(&output->v_xy_valid, microCDRReader);
	deserializeBool(&output->v_z_valid, microCDRReader);
	deserializeUnsignedChar(&output->xy_reset_counter, microCDRReader);
	deserializeUnsignedChar(&output->z_reset_counter, microCDRReader);
	deserializeUnsignedChar(&output->vxy_reset_counter, microCDRReader);
	deserializeUnsignedChar(&output->vz_reset_counter, microCDRReader);
	deserializeBool(&output->xy_global, microCDRReader);
	deserializeBool(&output->z_global, microCDRReader);
	deserializeBool(&output->dist_bottom_valid, microCDRReader);

}