#include <gazebo/gazebo.hh>
#include <gazebo/rendering/Visual.hh>

namespace gazebo
{
  class StopLightPlugin : public VisualPlugin
  {
  public:
    StopLightPlugin() {}

    virtual void Load(rendering::VisualPtr _visual, sdf::ElementPtr _sdf)
    {
      // Get the name of the visual
      std::cout << "Visual name: " << _visual->Name() << std::endl;
     
    }
  };

  GZ_REGISTER_VISUAL_PLUGIN(StopLightPlugin)
}
