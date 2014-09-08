/*
 * Link.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include "Link.h"

namespace NEAT_Expansion {

Link::Link(Node* in_node, Node* out_node, double weight) :
		weight(weight), in_node(in_node), out_node(out_node) {
	// TODO Auto-generated constructor stub

}

Link::~Link() {
	// TODO Auto-generated destructor stub
}

} /* namespace NEAT_Expansion */
