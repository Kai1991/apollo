#include <memory>
#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/examples/proto/examples.pb.h"

using apollo::cyber::examples::proto::Driver;
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;

class MyComponent : public Component<Driver,Driver>{
    public:
        bool Init() override;
        bool Proc(const std::shared_ptr<Driver>& msg0,
                const std::shared_ptr<Driver>& msg1) override;
};
//注册我的组件
CYBER_REGISTER_COMPONENT(MyComponent)