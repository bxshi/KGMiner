//
// Created by Baoxu Shi on 11/11/15.
//

#ifndef KGMINER_GRAPHPROPERTY_H
#define KGMINER_GRAPHPROPERTY_H

#include <string>
#include <sstream>

namespace KGMiner {
  using namespace std;

  enum GraphType {
      GRAPH_DIRECTED    = 0x01,
      GRAPH_UNDIRECTED  = 0x02
  };

  class GraphProperty {
  private:
      unsigned long nVertices;
      unsigned long nEdges;

      unsigned long nVertexTypes;
      unsigned long nEdgeTypes;

      GraphType graphType;

  public:

      GraphProperty();
      GraphProperty(GraphType gtype);

      unsigned long getVertices() const;

      unsigned long getEdges() const;

      unsigned long getVertexTypes() const;

      unsigned long getEdgeTypes() const;

      GraphType getGraphType() const;

      void setVertices(unsigned long vertices);

      void setEdges(unsigned long edges);

      void setVertexTypes(unsigned long vtypes);

      void setEdgeTypes(unsigned long etypes);

      string str() const;

  };
}

#endif //KGMINER_GRAPHPROPERTY_H
