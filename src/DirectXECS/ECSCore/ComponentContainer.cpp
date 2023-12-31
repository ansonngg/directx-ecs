#include "ComponentContainer.h"

namespace DirectXECS::ECSCore {
template<typename ComponentType> requires std::is_base_of<Component, ComponentType>::value
std::vector<ComponentType> *ComponentContainer<ComponentType>::GetVector() {
    return &componentVector_;
}
}
