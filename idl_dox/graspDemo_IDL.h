// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_graspDemo_IDL
#define YARP_THRIFT_GENERATOR_graspDemo_IDL

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <yarp/os/Bottle.h>

class graspDemo_IDL;


/**
 * graspDemo_IDL
 * IDL Interface to \ref grasp-demo services.
 */
class graspDemo_IDL : public yarp::os::Wire {
public:
  graspDemo_IDL();
  /**
   *  Send the current 2D blob
   * @return a bottle containing all the 2D points of the blob
   */
  virtual yarp::os::Bottle get_blob();
  /**
   * Set the name of the object
   * (stored by the object property collector).
   * @param entry is the name of the object
   * @return true/false on success/failure.
   */
  virtual bool set_object_name(const std::string& entry);
  /**
   * Get the name of the object
   * @return a string with the name of the object.
   */
  virtual std::string get_object_name();
  /**
   * Ask to go to the next step, following the pipeline:
   * 1- compute superquadric
   * 2- compute pose
   * 3- ask the robot to move
   * @return true.
   */
  virtual bool go_next();
  /**
   * The pipeline is restarted and is
   * waiting the command "go_next" to start
   * from step 1.
   * @return true.
   */
  virtual bool start_from_scratch();
  /**
   * If you want just to perform step 1.
   *  @return true.
   */
  virtual bool acquire_superq();
  /**
   * Ask if the superquadric has been computed.
   * @return true/false on success/failure.
   */
  virtual std::string check_superq();
  /**
   * If you want just to perform step 2
   *  (if step 1 has been performed).
   *  @return true/false on success/failure.
   */
  virtual bool compute_pose();
  /**
   * To ask if the pose has been computed
   * @return true/false on success/failure.
   */
  virtual std::string check_pose();
  /**
   * If you want just to perform step 3
   *  (if step 2 has been performed).
   *  @return true/false on success/failure.
   */
  virtual bool grasp_object();
  /**
   * Ask the robot to stop and go back
   *  to home position with the arm
   *  that is moving.
   *  @return true/false on success/failure.
   */
  virtual bool go_back_home();
  /**
   * Ask the robot to put the object in a box on its side.
   *  @return true/false on success/failure.
   */
  virtual bool go_to_basket();
  /**
   * Clear all the computed poses
   *  @return true.
   */
  virtual bool clear_poses();
  /**
   * Clear the computed superq
   *  @return true.
   */
  virtual bool clear_superq();
  /**
   * Set the hand for pose computation.
   * @param entry can be "right", "left" or "both".
   * @return true/false on success/failure.
   */
  virtual bool set_hand_for_computation(const std::string& entry);
  /**
   * Get the hand for pose computation.
   * @return "right", "left" or "both".
   */
  virtual std::string get_hand_for_computation();
  /**
   * Set the hand for moving.
   * @param entry can be "right" or "left".
   * @return true/false on success/failure.
   */
  virtual bool set_hand_for_moving(const std::string& entry);
  /**
   * Get the hand for pose computation.
   * @return "right", "left" or "both".
   */
  virtual std::string get_hand_for_moving();
  /**
   * Get if automatic selection of the hand is on or off
   * @return "on" or "off".
   */
  virtual std::string get_automatic_hand();
  /**
   *  Set if automatic selection of the hand is on or off
   * @param entry can be "on" or "off"
   * @return true/false on success/failure.
   */
  virtual bool set_automatic_hand(const std::string& entry);
  /**
   * Set if to ask the filtered superquadric or not.
   * @param entry can be "on" or "off".
   * @return "on" or "off".
   */
  virtual bool set_filtered_superq(const std::string& entry);
  /**
   * Get if to ask the filtered superquadric or not.
   * @return true/false on success/failure.
   */
  virtual std::string get_filtered_superq();
  /**
   * Set if to reset the filtered superquadric or not.
   * @param entry can be "on" or "off".
   * @return "on" or "off".
   */
  virtual bool set_reset_filter(const std::string& entry);
  /**
   * Get if to reset the filtered superquadric or not.
   * @return true/false on success/failure.
   */
  virtual std::string get_reset_filter();
  /**
   * Set the current object class
   * @param entry the name of the object class
   * @return true/false on success/failure.
   */
  virtual bool set_object_class(const std::string& entry);
  /**
   * Get the current object class
   * @return the current object class.
   */
  virtual std::string get_object_class();
  /**
   * Calibrate plane height via superquadric computation
   * @return true/false on success/failure.
   */
  virtual bool calibrate();
  virtual bool read(yarp::os::ConnectionReader& connection) YARP_OVERRIDE;
  virtual std::vector<std::string> help(const std::string& functionName="--all");
};

#endif