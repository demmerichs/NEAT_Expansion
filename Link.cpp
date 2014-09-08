/*
 * Link.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include "Link.h"
#include "Node.h"
#include<cassert>

namespace NEAT_Expansion {

Link::Link(Node* in_node, Node* out_node, double weight) :
		weight(weight), in_node(in_node), out_node(out_node) {
	// TODO Auto-generated constructor stub
	this->sending_queue.push(in_node->activation);
}

Link::~Link() {
	// TODO Auto-generated destructor stub
}

void Link::set_weight(double w) {
	weight = w;
}

void Link::send() {
	assert(sending_queue.size() <= 1);
	sending_queue.push(in_node->activation);
}

void Link::receive() {
	assert(sending_queue.size() > 0);
	out_node->incoming_activation_sum += sending_queue.front();
	sending_queue.pop();
}

} /* namespace NEAT_Expansion */
