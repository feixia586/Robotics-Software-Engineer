#include <gazebo/gazebo.hh>
#include <iostream>

namespace gazebo {
  class WorldPluginOffice : public WorldPlugin {
    public: 
      WorldPluginOffice() : WorldPlugin() {
        std::cout << "Welcome to my office!" << std::endl;
      }
      
      void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
  };

  GZ_REGISTER_WORLD_PLUGIN(WorldPluginOffice)
}
