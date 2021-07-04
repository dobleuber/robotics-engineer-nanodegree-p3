#include <gazebo/gazebo.hh>

namespace gazebo {
  class WorldPluginMyRobot : public WorldPlugin {
  public: WorldPluginMyRobot(): WorldPlugin() {
    printf("Welcome to Wbert's world!\n");
  }

  public: void Load(physics::WorldPtr _word, sdf::ElementPtr _sdf){
    }
  };

  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
