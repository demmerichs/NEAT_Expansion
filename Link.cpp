/*
 * Link.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include "Link.h"
#include "Node.h"

namespace NEAT_Expansion {

Link::Link(Node* in_node, Node* out_node, double weight) :
		weight(weight), in_node(in_node), out_node(out_node) {
	// TODO Auto-generated constructor stub
	this->sending_queue.push(in_node->activation);
}

Link::~Link() {
	// TODO Auto-generated destructor stub
}

} /* namespace NEAT_Expansion */
