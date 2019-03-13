/* Copyright (c) 2019 The Brave Software Team. Distributed under the MPL2
 * license. This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/third_party/blink/brave_page_graph/graph_item/node/node_storage_localstorage.h"
#include <string>
#include "brave/third_party/blink/brave_page_graph/graph_item/node/node_storage.h"
#include "brave/third_party/blink/brave_page_graph/types.h"
#include "brave/third_party/blink/brave_page_graph/page_graph.h"

using ::std::string;
using ::std::to_string;

namespace brave_page_graph {

NodeStorageLocalStorage::NodeStorageLocalStorage(const PageGraph* graph,
    const PageGraphId id) :
      NodeStorage(graph, id) {}

NodeStorageLocalStorage::~NodeStorageLocalStorage() {}

string NodeStorageLocalStorage::ItemName() const {
  return "NodeStorageLocalStorage#" + to_string(id_);
}

}  // brave_page_graph