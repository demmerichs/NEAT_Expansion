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
	// TODO Auto-generated constructor stub

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

void Node::create_outgoing_link(Node* target){
	Link* newlink= new Link(this, target, 0);
	this->outgoing.push_back(newlink);
}

} /* namespace NEAT_Expansion */
