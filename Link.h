/*
 * Link.h
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef LINK_H_
#define LINK_H_
//==============================
// included dependencies
#include<queue>
//==============================
namespace NEAT_Expansion {
//==============================
// forward declared dependencies
class Node;
//==============================
// the actual class

class Link {
	virtual ~Link();

	double weight;

	Node* in_node;
	Node* out_node;

	std::queue<double> sending_queue;

public:
	Link(Node*, Node*, double);
	void set_weight(double);
	void send();
	void receive();
};

} /* namespace NEAT_Expansion */

#endif /* LINK_H_ */
