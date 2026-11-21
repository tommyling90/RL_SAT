//
// Created by Tommy Ling on 2026-11-17.
//

#ifndef RLTYPES_H
#define RLTYPES_H

#include <cstddef>

namespace Minisat {
namespace RL {

enum class State {
    ShallowLowLBD = 0,
    ShallowHighLBD,
    DeepLowLBD,
    DeepHighLBD,
    Count
};

enum class Action {
    FirstUIP = 0,
    AlternativeCut,
    Count
};

constexpr std::size_t StateCount =
    static_cast<std::size_t>(State::Count);

constexpr std::size_t ActionCount =
    static_cast<std::size_t>(Action::Count);

struct AgentConfig {
    double alpha = 0.1; // learning rate
    double gamma = 0.9; // discount factor
    double epsilon = 0.1; // exploration
    unsigned int seed = 42;
};
}
}

#endif //RLTYPES_H
