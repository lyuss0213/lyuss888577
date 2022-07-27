# generated from rosidl_cmake/cmake/rosidl_cmake-extras.cmake.in

set(px4_msgs_IDL_FILES "msg/ActionRequest.idl;msg/ActuatorArmed.idl;msg/ActuatorControls.idl;msg/ActuatorControls0.idl;msg/ActuatorControls1.idl;msg/ActuatorControls2.idl;msg/ActuatorControls3.idl;msg/ActuatorControlsStatus.idl;msg/ActuatorControlsStatus0.idl;msg/ActuatorControlsStatus1.idl;msg/ActuatorControlsVirtualFw.idl;msg/ActuatorControlsVirtualMc.idl;msg/ActuatorMotors.idl;msg/ActuatorOutputs.idl;msg/ActuatorOutputsSim.idl;msg/ActuatorServos.idl;msg/ActuatorServosTrim.idl;msg/ActuatorTest.idl;msg/AdcReport.idl;msg/Airspeed.idl;msg/AirspeedValidated.idl;msg/AirspeedWind.idl;msg/AutotuneAttitudeControlStatus.idl;msg/BatteryStatus.idl;msg/ButtonEvent.idl;msg/CameraCapture.idl;msg/CameraStatus.idl;msg/CameraTrigger.idl;msg/CellularStatus.idl;msg/CollisionConstraints.idl;msg/CollisionReport.idl;msg/CommanderState.idl;msg/ControlAllocatorStatus.idl;msg/Cpuload.idl;msg/DebugArray.idl;msg/DebugKeyValue.idl;msg/DebugValue.idl;msg/DebugVect.idl;msg/DifferentialPressure.idl;msg/DistanceSensor.idl;msg/Ekf2Timestamps.idl;msg/EscReport.idl;msg/EscStatus.idl;msg/EstimatorAidSource1D.idl;msg/EstimatorAidSource2D.idl;msg/EstimatorAidSource3D.idl;msg/EstimatorAidSrcBaroHgt.idl;msg/EstimatorAidSrcFakePos.idl;msg/EstimatorAidSrcGnssPos.idl;msg/EstimatorAidSrcGnssVel.idl;msg/EstimatorAidSrcRngHgt.idl;msg/EstimatorAttitude.idl;msg/EstimatorBaroBias.idl;msg/EstimatorEventFlags.idl;msg/EstimatorGlobalPosition.idl;msg/EstimatorGpsStatus.idl;msg/EstimatorInnovationTestRatios.idl;msg/EstimatorInnovationVariances.idl;msg/EstimatorInnovations.idl;msg/EstimatorLocalPosition.idl;msg/EstimatorOdometry.idl;msg/EstimatorOpticalFlowVel.idl;msg/EstimatorSelectorStatus.idl;msg/EstimatorSensorBias.idl;msg/EstimatorStates.idl;msg/EstimatorStatus.idl;msg/EstimatorStatusFlags.idl;msg/EstimatorVisualOdometryAligned.idl;msg/EstimatorWind.idl;msg/Event.idl;msg/FailureDetectorStatus.idl;msg/FollowTarget.idl;msg/FwVirtualAttitudeSetpoint.idl;msg/GeneratorStatus.idl;msg/GeofenceResult.idl;msg/GimbalDeviceAttitudeStatus.idl;msg/GimbalDeviceInformation.idl;msg/GimbalDeviceSetAttitude.idl;msg/GimbalManagerInformation.idl;msg/GimbalManagerSetAttitude.idl;msg/GimbalManagerSetManualControl.idl;msg/GimbalManagerStatus.idl;msg/GimbalV1Command.idl;msg/GpsDump.idl;msg/GpsInjectData.idl;msg/HeaterStatus.idl;msg/HomePosition.idl;msg/HoverThrustEstimate.idl;msg/InputRc.idl;msg/InternalCombustionEngineStatus.idl;msg/IridiumsbdStatus.idl;msg/IrlockReport.idl;msg/LandingGear.idl;msg/LandingTargetInnovations.idl;msg/LandingTargetPose.idl;msg/LedControl.idl;msg/LogMessage.idl;msg/LoggerStatus.idl;msg/MagWorkerData.idl;msg/MagnetometerBiasEstimate.idl;msg/ManualControlInput.idl;msg/ManualControlSetpoint.idl;msg/ManualControlSwitches.idl;msg/MavlinkLog.idl;msg/MavlinkTunnel.idl;msg/McVirtualAttitudeSetpoint.idl;msg/Mission.idl;msg/MissionResult.idl;msg/MountOrientation.idl;msg/NavigatorMissionItem.idl;msg/NpfgStatus.idl;msg/ObstacleDistance.idl;msg/ObstacleDistanceFused.idl;msg/OffboardControlMode.idl;msg/OnboardComputerStatus.idl;msg/OpticalFlow.idl;msg/OrbMultitest.idl;msg/OrbTest.idl;msg/OrbTestLarge.idl;msg/OrbTestMedium.idl;msg/OrbTestMediumMulti.idl;msg/OrbTestMediumQueue.idl;msg/OrbTestMediumQueuePoll.idl;msg/OrbTestMediumWrapAround.idl;msg/OrbitStatus.idl;msg/ParameterUpdate.idl;msg/Ping.idl;msg/PositionControllerLandingStatus.idl;msg/PositionControllerStatus.idl;msg/PositionSetpoint.idl;msg/PositionSetpointTriplet.idl;msg/PowerButtonState.idl;msg/PowerMonitor.idl;msg/PpsCapture.idl;msg/PwmInput.idl;msg/Px4IoStatus.idl;msg/RadioStatus.idl;msg/RateCtrlStatus.idl;msg/RcChannels.idl;msg/RcParameterMap.idl;msg/Rpm.idl;msg/RtlTimeEstimate.idl;msg/SafetyButton.idl;msg/SatelliteInfo.idl;msg/SensorAccel.idl;msg/SensorAccelFifo.idl;msg/SensorBaro.idl;msg/SensorCombined.idl;msg/SensorCorrection.idl;msg/SensorGnssRelative.idl;msg/SensorGps.idl;msg/SensorGyro.idl;msg/SensorGyroFft.idl;msg/SensorGyroFifo.idl;msg/SensorHygrometer.idl;msg/SensorMag.idl;msg/SensorPreflightMag.idl;msg/SensorSelection.idl;msg/SensorsStatus.idl;msg/SensorsStatusBaro.idl;msg/SensorsStatusImu.idl;msg/SensorsStatusMag.idl;msg/SystemPower.idl;msg/TakeoffStatus.idl;msg/TaskStackInfo.idl;msg/TecsStatus.idl;msg/TelemetryStatus.idl;msg/TestMotor.idl;msg/Timesync.idl;msg/TimesyncStatus.idl;msg/TrajectoryBezier.idl;msg/TrajectorySetpoint.idl;msg/TrajectoryWaypoint.idl;msg/TransponderReport.idl;msg/TuneControl.idl;msg/UavcanParameterRequest.idl;msg/UavcanParameterValue.idl;msg/UlogStream.idl;msg/UlogStreamAck.idl;msg/UwbDistance.idl;msg/UwbGrid.idl;msg/VehicleAcceleration.idl;msg/VehicleAirData.idl;msg/VehicleAngularAcceleration.idl;msg/VehicleAngularAccelerationSetpoint.idl;msg/VehicleAngularVelocity.idl;msg/VehicleAngularVelocityGroundtruth.idl;msg/VehicleAttitude.idl;msg/VehicleAttitudeGroundtruth.idl;msg/VehicleAttitudeSetpoint.idl;msg/VehicleCommand.idl;msg/VehicleCommandAck.idl;msg/VehicleConstraints.idl;msg/VehicleControlMode.idl;msg/VehicleGlobalPosition.idl;msg/VehicleGlobalPositionGroundtruth.idl;msg/VehicleGpsPosition.idl;msg/VehicleImu.idl;msg/VehicleImuStatus.idl;msg/VehicleLandDetected.idl;msg/VehicleLocalPosition.idl;msg/VehicleLocalPositionGroundtruth.idl;msg/VehicleLocalPositionSetpoint.idl;msg/VehicleMagnetometer.idl;msg/VehicleMocapOdometry.idl;msg/VehicleOdometry.idl;msg/VehicleRatesSetpoint.idl;msg/VehicleRoi.idl;msg/VehicleStatus.idl;msg/VehicleStatusFlags.idl;msg/VehicleThrustSetpoint.idl;msg/VehicleTorqueSetpoint.idl;msg/VehicleTrajectoryBezier.idl;msg/VehicleTrajectoryWaypoint.idl;msg/VehicleTrajectoryWaypointDesired.idl;msg/VehicleVisionAttitude.idl;msg/VehicleVisualOdometry.idl;msg/VtolVehicleStatus.idl;msg/WheelEncoders.idl;msg/Wind.idl;msg/YawEstimatorStatus.idl")
set(px4_msgs_INTERFACE_FILES "msg/ActionRequest.msg;msg/ActuatorArmed.msg;msg/ActuatorControls.msg;msg/ActuatorControls0.msg;msg/ActuatorControls1.msg;msg/ActuatorControls2.msg;msg/ActuatorControls3.msg;msg/ActuatorControlsStatus.msg;msg/ActuatorControlsStatus0.msg;msg/ActuatorControlsStatus1.msg;msg/ActuatorControlsVirtualFw.msg;msg/ActuatorControlsVirtualMc.msg;msg/ActuatorMotors.msg;msg/ActuatorOutputs.msg;msg/ActuatorOutputsSim.msg;msg/ActuatorServos.msg;msg/ActuatorServosTrim.msg;msg/ActuatorTest.msg;msg/AdcReport.msg;msg/Airspeed.msg;msg/AirspeedValidated.msg;msg/AirspeedWind.msg;msg/AutotuneAttitudeControlStatus.msg;msg/BatteryStatus.msg;msg/ButtonEvent.msg;msg/CameraCapture.msg;msg/CameraStatus.msg;msg/CameraTrigger.msg;msg/CellularStatus.msg;msg/CollisionConstraints.msg;msg/CollisionReport.msg;msg/CommanderState.msg;msg/ControlAllocatorStatus.msg;msg/Cpuload.msg;msg/DebugArray.msg;msg/DebugKeyValue.msg;msg/DebugValue.msg;msg/DebugVect.msg;msg/DifferentialPressure.msg;msg/DistanceSensor.msg;msg/Ekf2Timestamps.msg;msg/EscReport.msg;msg/EscStatus.msg;msg/EstimatorAidSource1D.msg;msg/EstimatorAidSource2D.msg;msg/EstimatorAidSource3D.msg;msg/EstimatorAidSrcBaroHgt.msg;msg/EstimatorAidSrcFakePos.msg;msg/EstimatorAidSrcGnssPos.msg;msg/EstimatorAidSrcGnssVel.msg;msg/EstimatorAidSrcRngHgt.msg;msg/EstimatorAttitude.msg;msg/EstimatorBaroBias.msg;msg/EstimatorEventFlags.msg;msg/EstimatorGlobalPosition.msg;msg/EstimatorGpsStatus.msg;msg/EstimatorInnovationTestRatios.msg;msg/EstimatorInnovationVariances.msg;msg/EstimatorInnovations.msg;msg/EstimatorLocalPosition.msg;msg/EstimatorOdometry.msg;msg/EstimatorOpticalFlowVel.msg;msg/EstimatorSelectorStatus.msg;msg/EstimatorSensorBias.msg;msg/EstimatorStates.msg;msg/EstimatorStatus.msg;msg/EstimatorStatusFlags.msg;msg/EstimatorVisualOdometryAligned.msg;msg/EstimatorWind.msg;msg/Event.msg;msg/FailureDetectorStatus.msg;msg/FollowTarget.msg;msg/FwVirtualAttitudeSetpoint.msg;msg/GeneratorStatus.msg;msg/GeofenceResult.msg;msg/GimbalDeviceAttitudeStatus.msg;msg/GimbalDeviceInformation.msg;msg/GimbalDeviceSetAttitude.msg;msg/GimbalManagerInformation.msg;msg/GimbalManagerSetAttitude.msg;msg/GimbalManagerSetManualControl.msg;msg/GimbalManagerStatus.msg;msg/GimbalV1Command.msg;msg/GpsDump.msg;msg/GpsInjectData.msg;msg/HeaterStatus.msg;msg/HomePosition.msg;msg/HoverThrustEstimate.msg;msg/InputRc.msg;msg/InternalCombustionEngineStatus.msg;msg/IridiumsbdStatus.msg;msg/IrlockReport.msg;msg/LandingGear.msg;msg/LandingTargetInnovations.msg;msg/LandingTargetPose.msg;msg/LedControl.msg;msg/LogMessage.msg;msg/LoggerStatus.msg;msg/MagWorkerData.msg;msg/MagnetometerBiasEstimate.msg;msg/ManualControlInput.msg;msg/ManualControlSetpoint.msg;msg/ManualControlSwitches.msg;msg/MavlinkLog.msg;msg/MavlinkTunnel.msg;msg/McVirtualAttitudeSetpoint.msg;msg/Mission.msg;msg/MissionResult.msg;msg/MountOrientation.msg;msg/NavigatorMissionItem.msg;msg/NpfgStatus.msg;msg/ObstacleDistance.msg;msg/ObstacleDistanceFused.msg;msg/OffboardControlMode.msg;msg/OnboardComputerStatus.msg;msg/OpticalFlow.msg;msg/OrbMultitest.msg;msg/OrbTest.msg;msg/OrbTestLarge.msg;msg/OrbTestMedium.msg;msg/OrbTestMediumMulti.msg;msg/OrbTestMediumQueue.msg;msg/OrbTestMediumQueuePoll.msg;msg/OrbTestMediumWrapAround.msg;msg/OrbitStatus.msg;msg/ParameterUpdate.msg;msg/Ping.msg;msg/PositionControllerLandingStatus.msg;msg/PositionControllerStatus.msg;msg/PositionSetpoint.msg;msg/PositionSetpointTriplet.msg;msg/PowerButtonState.msg;msg/PowerMonitor.msg;msg/PpsCapture.msg;msg/PwmInput.msg;msg/Px4IoStatus.msg;msg/RadioStatus.msg;msg/RateCtrlStatus.msg;msg/RcChannels.msg;msg/RcParameterMap.msg;msg/Rpm.msg;msg/RtlTimeEstimate.msg;msg/SafetyButton.msg;msg/SatelliteInfo.msg;msg/SensorAccel.msg;msg/SensorAccelFifo.msg;msg/SensorBaro.msg;msg/SensorCombined.msg;msg/SensorCorrection.msg;msg/SensorGnssRelative.msg;msg/SensorGps.msg;msg/SensorGyro.msg;msg/SensorGyroFft.msg;msg/SensorGyroFifo.msg;msg/SensorHygrometer.msg;msg/SensorMag.msg;msg/SensorPreflightMag.msg;msg/SensorSelection.msg;msg/SensorsStatus.msg;msg/SensorsStatusBaro.msg;msg/SensorsStatusImu.msg;msg/SensorsStatusMag.msg;msg/SystemPower.msg;msg/TakeoffStatus.msg;msg/TaskStackInfo.msg;msg/TecsStatus.msg;msg/TelemetryStatus.msg;msg/TestMotor.msg;msg/Timesync.msg;msg/TimesyncStatus.msg;msg/TrajectoryBezier.msg;msg/TrajectorySetpoint.msg;msg/TrajectoryWaypoint.msg;msg/TransponderReport.msg;msg/TuneControl.msg;msg/UavcanParameterRequest.msg;msg/UavcanParameterValue.msg;msg/UlogStream.msg;msg/UlogStreamAck.msg;msg/UwbDistance.msg;msg/UwbGrid.msg;msg/VehicleAcceleration.msg;msg/VehicleAirData.msg;msg/VehicleAngularAcceleration.msg;msg/VehicleAngularAccelerationSetpoint.msg;msg/VehicleAngularVelocity.msg;msg/VehicleAngularVelocityGroundtruth.msg;msg/VehicleAttitude.msg;msg/VehicleAttitudeGroundtruth.msg;msg/VehicleAttitudeSetpoint.msg;msg/VehicleCommand.msg;msg/VehicleCommandAck.msg;msg/VehicleConstraints.msg;msg/VehicleControlMode.msg;msg/VehicleGlobalPosition.msg;msg/VehicleGlobalPositionGroundtruth.msg;msg/VehicleGpsPosition.msg;msg/VehicleImu.msg;msg/VehicleImuStatus.msg;msg/VehicleLandDetected.msg;msg/VehicleLocalPosition.msg;msg/VehicleLocalPositionGroundtruth.msg;msg/VehicleLocalPositionSetpoint.msg;msg/VehicleMagnetometer.msg;msg/VehicleMocapOdometry.msg;msg/VehicleOdometry.msg;msg/VehicleRatesSetpoint.msg;msg/VehicleRoi.msg;msg/VehicleStatus.msg;msg/VehicleStatusFlags.msg;msg/VehicleThrustSetpoint.msg;msg/VehicleTorqueSetpoint.msg;msg/VehicleTrajectoryBezier.msg;msg/VehicleTrajectoryWaypoint.msg;msg/VehicleTrajectoryWaypointDesired.msg;msg/VehicleVisionAttitude.msg;msg/VehicleVisualOdometry.msg;msg/VtolVehicleStatus.msg;msg/WheelEncoders.msg;msg/Wind.msg;msg/YawEstimatorStatus.msg")
