//
// Created by Tommy Ling on 2026-11-17.
//

#ifndef QAGENT_H
#define QAGENT_H

#include <array>
#include <random>

#include "minisat/rl/RLTypes.h"

namespace Minisat {
namespace RL {

class QAgent {
public:
    explicit QAgent(const AgentConfig& config = AgentConfig{})
        : config_(config), rng_(config.seed) {}

    Action selectAction(State state);

    // update Q-table
    void update(State state, Action action, double reward, State nextState, bool terminal);

    // Q-table value lookup
    double qValue(State state, Action action) const;

private:
    using QRow = std::array<double, ActionCount>;
    using QTable = std::array<QRow, StateCount>;

    AgentConfig config_;
    QTable q_{};
    std::mt19937 rng_;
};

}
}
#endif //QAGENT_H
