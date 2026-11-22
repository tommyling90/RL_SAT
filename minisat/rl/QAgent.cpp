//
// Created by Tommy Ling on 2026-11-17.
//

#include "minisat/rl/QAgent.h"

namespace Minisat {
namespace RL {

Action QAgent::selectAction(State state) {
    //TODO: epsilon greedy(?)
    return Action::FirstUIP;
}

void QAgent::update(State state, Action action, double reward, State nextState, bool terminal) {
    //TODO:
    //target = reward if terminal
    //target = reward + gamma * max Q(nextState)
    //Q(s, a) += alpha * (target - Q(s,a))
}

double QAgent::qValue(State state, Action action) const {
    return q_[static_cast<std::size_t>(state)]
            [static_cast<std::size_t>(action)];
}

}
}