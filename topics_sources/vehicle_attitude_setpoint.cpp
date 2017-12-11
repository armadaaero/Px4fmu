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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1210_PixHawk2/Firmware/msg/vehicle_attitude_setpoint.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/vehicle_attitude_setpoint.h>

constexpr char __orb_vehicle_attitude_setpoint_fields[] = "uint64_t timestamp;float roll_body;float pitch_body;float yaw_body;float yaw_sp_move_rate;float[4] q_d;float thrust;float landing_gear;bool q_d_valid;bool roll_reset_integral;bool pitch_reset_integral;bool yaw_reset_integral;bool fw_control_yaw;bool disable_mc_yaw_control;bool apply_flaps;uint8_t[1] _padding0;";

ORB_DEFINE(vehicle_attitude_setpoint, struct vehicle_attitude_setpoint_s, 55,
    __orb_vehicle_attitude_setpoint_fields);
ORB_DEFINE(mc_virtual_attitude_setpoint, struct vehicle_attitude_setpoint_s, 55,
    __orb_vehicle_attitude_setpoint_fields);
ORB_DEFINE(fw_virtual_attitude_setpoint, struct vehicle_attitude_setpoint_s, 55,
    __orb_vehicle_attitude_setpoint_fields);



void serialize_vehicle_attitude_setpoint(const struct vehicle_attitude_setpoint_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloat(input->roll_body, microCDRWriter);
	serializeFloat(input->pitch_body, microCDRWriter);
	serializeFloat(input->yaw_body, microCDRWriter);
	serializeFloat(input->yaw_sp_move_rate, microCDRWriter);
	serializeFloatArray(input->q_d, 4, microCDRWriter);
	serializeFloat(input->thrust, microCDRWriter);
	serializeFloat(input->landing_gear, microCDRWriter);
	serializeBool(input->q_d_valid, microCDRWriter);
	serializeBool(input->roll_reset_integral, microCDRWriter);
	serializeBool(input->pitch_reset_integral, microCDRWriter);
	serializeBool(input->yaw_reset_integral, microCDRWriter);
	serializeBool(input->fw_control_yaw, microCDRWriter);
	serializeBool(input->disable_mc_yaw_control, microCDRWriter);
	serializeBool(input->apply_flaps, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_vehicle_attitude_setpoint(struct vehicle_attitude_setpoint_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->roll_body, microCDRReader);
	deserializeFloat(&output->pitch_body, microCDRReader);
	deserializeFloat(&output->yaw_body, microCDRReader);
	deserializeFloat(&output->yaw_sp_move_rate, microCDRReader);
	deserializeFloat(&output->q_d[0], microCDRReader);
	deserializeFloat(&output->q_d[1], microCDRReader);
	deserializeFloat(&output->q_d[2], microCDRReader);
	deserializeFloat(&output->q_d[3], microCDRReader);
	deserializeFloat(&output->thrust, microCDRReader);
	deserializeFloat(&output->landing_gear, microCDRReader);
	deserializeBool(&output->q_d_valid, microCDRReader);
	deserializeBool(&output->roll_reset_integral, microCDRReader);
	deserializeBool(&output->pitch_reset_integral, microCDRReader);
	deserializeBool(&output->yaw_reset_integral, microCDRReader);
	deserializeBool(&output->fw_control_yaw, microCDRReader);
	deserializeBool(&output->disable_mc_yaw_control, microCDRReader);
	deserializeBool(&output->apply_flaps, microCDRReader);

}