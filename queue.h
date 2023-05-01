#pragma once
#include <vector>
#include <string>

class queue{
	private:
		std::vector<std::string> line;
		const int MAX_SIZE;
		int head, tail;
		
	public:
	
		queue();
		queue(int size);
		~queue();
		void enqueue(std::string data);
		std::string dequeue();
		std::string front();
		bool is_empty();
		bool is_full();
};
