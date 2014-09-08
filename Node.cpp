/*
 * Node.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include "Node.h"

#include "Link.h"

namespace NEAT_Expansion {

Node::Node() {
	type = BIAS;
	activation = 1;
}

Node::Node(double func(double)) {
	// TODO Auto-generated constructor stub
	(this->transfer_function) = func;
	type = NEURON;
	incoming_activation_sum = 0;
	activation = func(0);
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

Link* Node::create_outgoing_link(Node* target) {
	Link* newlink = new Link(this, target, 0);
	target->incoming.push_back(newlink);
	this->outgoing.push_back(newlink);
	return newlink;
}

void Node::do_timestep() {
	std::vector<Link*>::iterator linkit;
	if (type != BIAS) {
		this->incoming_activation_sum = 0;
		for (linkit = this->incoming.begin(); linkit != this->incoming.end();
				linkit++) {
			(*linkit)->receive();
		}
		activation = transfer_function(incoming_activation_sum);
	}
	for (linkit = this->outgoing.begin(); linkit != this->outgoing.end();
			linkit++)
		(*linkit)->send();
}

} /* namespace NEAT_Expansion */
