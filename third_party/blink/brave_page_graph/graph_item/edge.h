/* Copyright (c) 2019 The Brave Software Team. Distributed under the MPL2
 * license. This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_PAGE_GRAPH_GRAPH_ITEM_EDGE_H_
#define BRAVE_COMPONENTS_BRAVE_PAGE_GRAPH_GRAPH_ITEM_EDGE_H_

#include <vector>
#include "brave/third_party/blink/brave_page_graph/graph_item.h"
#include "brave/third_party/blink/brave_page_graph/types.h"

using ::std::string;

namespace brave_page_graph {

class Node;
class PageGraph;

class Edge : public GraphItem {
friend class Node;
friend class PageGraph;
 public:
  Edge() = delete;
  string GraphMLTag() override;
  GraphMLFuncAttrMap GraphMLAttributeDefs() const override;

 protected:
  Edge(const PageGraph* graph, const PageGraphId id, const Node* out_node,
    const Node* in_node);
  string ToStringPrefix() const override;
  string ToStringSuffix() const override;
  string GraphMLId() const override;

  // These pointers are not owning, the PageGraph instance owns them.
  const Node* out_node_;
  const Node* in_node_;
};

}  // namespace brave_page_graph

#endif  // BRAVE_COMPONENTS_BRAVE_PAGE_GRAPH_GRAPH_ITEM_EDGE_H_