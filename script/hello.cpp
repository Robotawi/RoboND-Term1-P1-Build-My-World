#include <gazebo/gazebo.hh>

namesapce gazebo {
    class WorldPluginMyRobot() : public WorldPlugin {
        public: WorldPluginMyRobot() : WorldPlugin {
            printf("Hello World!\n");
        }
        
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}