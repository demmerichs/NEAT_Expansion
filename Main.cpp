/*
 * Main.cpp
 *
 *  Created on: 08.09.2014
 *      Author: David
 */

#include<cmath>
#include<iostream>

#include"Link.h"
#include"Node.h"

using namespace NEAT_Expansion;

double sigmoid(double in) {
	return 1. / (1. + std::exp(-in));
}

int main() {
	Node* input = new Node();
	Node* output = new Node(sigmoid);
	Node* bias = new Node();
	Link* forward = input->create_outgoing_link(output);
	Link* recurrent = output->create_outgoing_link(output);
	forward->set_weight(2);
	recurrent->set_weight(2);
	bias->create_outgoing_link(output);

	for (int i = 0; i < 10; i++) {
		std::cout << output->activation << std::endl;
		input->activation = 0;
		input->do_timestep();
		output->do_timestep();
		bias->do_timestep();
	}
	for (int i = 0; i < 10; i++) {
		std::cout << output->activation << std::endl;
		input->activation = 1;
		input->do_timestep();
		output->do_timestep();
		bias->do_timestep();
	}
}

