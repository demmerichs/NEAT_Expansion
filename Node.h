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
public:
	Node();
	virtual ~Node();

	double transfer_function(double);

	std::vector<Link*> incoming;
	std::vector<Link*> outgoing;

	void create_outgoing_link(Node* target);
};

} /* namespace NEAT_Expansion */

#endif /* NODE_H_ */
