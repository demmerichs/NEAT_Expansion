/*
 * Node.h
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef NODE_H_
#define NODE_H_
//==============================
// included dependencies
#include <vector>
//==============================
namespace NEAT_Expansion {
//==============================
// forward declared dependencies
class Link;
//==============================
// the actual class

class Node {
	enum node_type {
		BIAS = 0, NEURON = 1
	};
public:
	Node();
	Node(double transfer_function(double));
	virtual ~Node();

	double (*transfer_function)(double);

	node_type type;
	double incoming_activation_sum;
	double activation;

	std::vector<Link*> incoming;
	std::vector<Link*> outgoing;

	Link* create_outgoing_link(Node* target);
	void do_timestep();
}
;

} /* namespace NEAT_Expansion */

#endif /* NODE_H_ */
