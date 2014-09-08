/*
 * Main.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include"Link.h"
#include"Node.h"

using namespace NEAT_Expansion;

int main(){
	Node* input = new Node();
	Node* output = new Node();
	input->create_outgoing_link(output);
	output->create_outgoing_link(output);
	return 0;
}


