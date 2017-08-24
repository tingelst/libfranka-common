#pragma once

namespace research_interface {
namespace robot {

struct Errors {
  Errors() = delete;
  enum : size_t {
    kJointPositionLimitsViolation,
    kCartesianPositionLimitsViolation,
    kSelfcollisionAvoidanceViolation,
    kJointVelocityViolation,
    kCartesianVelocityViolation,
    kForceControlSafetyViolation,
    kJointReflex,
    kCartesianReflex,
    kMaxGoalPoseDeviationViolation,
    kMaxPathPoseDeviationViolation,
    kCartesianVelocityProfileSafetyViolation,
    kJointPositionMotionGeneratorStartPoseInvalid,
    kJointMotionGeneratorPositionLimitsViolation,
    kJointMotionGeneratorVelocityLimitsViolation,
    kJointMotionGeneratorVelocityDiscontinuity,
    kJointMotionGeneratorAccelerationDiscontinuity,
    kCartesianPositionMotionGeneratorStartPoseInvalid,
    kCartesianMotionGeneratorElbowLimitViolation,
    kCartesianMotionGeneratorVelocityLimitsViolation,
    kCartesianMotionGeneratorVelocityDiscontinuity,
    kCartesianMotionGeneratorAccelerationDiscontinuity,
    kCartesianMotionGeneratorElbowSignInconsistent,
    kCartesianMotionGeneratorStartElbowInvalid,
    kForceControllerDesiredForceToleranceViolation,
    kStartElbowSignInconsistent,
    kCommunicationConstraintsViolation,
    kPowerLimitViolation,
    kCartesianMotionGeneratorJointPositionLimitsViolation,
    kCartesianMotionGeneratorJointVelocityLimitsViolation,
    kCartesianMotionGeneratorJointVelocityDiscontinuity,
    kCartesianMotionGeneratorJointAccelerationDiscontinuity,
    kCartesianPositionMotionGeneratorInvalidFrame,
    kControllerTorqueDiscontinuity
  };
};

}  // namespace robot
}  // namespace research_interface
