#include "Class.h"
#include <iostream>
# include <string>
FileData newfile; 

int ChannelTrack::GetNumChannels() {
	std::cout << "Input Channels: ";
	std::cin >> newfile.numchannels; \
	std::cout << "Channels: " << newfile.numchannels << std::endl;
	return newfile.numchannels;
}

int ChannelTrack::CreateObjectsforChannels() {
	//Do iteratively based on input of getnumchannels 
	newfile.ChannelArray = new Channel[newfile.numchannels];

	for (int i = 0; i < newfile.numchannels; i++) {
		InitChannelData(&newfile.ChannelArray[i]);
		OutputChannelData(&newfile.ChannelArray[i]);
	}
	return 0; 
}

int ChannelTrack::InitChannelData(Channel* channel) {
	channel->channeldata = 2; 
	channel->channelinfo = 3;
	return 0;
}

int ChannelTrack::OutputChannelData(Channel* channel) {
	newfile.count++;
	std::cout << newfile.count << " Data: " << channel->channeldata << " ";
	std::cout << "Info: " << channel->channelinfo << std::endl;
	
	if (newfile.count == newfile.numchannels){
		delete newfile.ChannelArray;
	}

	return 0;
}
