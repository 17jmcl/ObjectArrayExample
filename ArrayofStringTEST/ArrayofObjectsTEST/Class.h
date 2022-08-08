#ifndef CLASS_H
#define CLASS_H
#endif 

struct Channel {
	int channelinfo;
	int channeldata;
};

struct FileData {
	int numchannels; 
	Channel* ChannelArray; 
	int count = 0; 
};

class ChannelTrack {
public:
	int GetNumChannels();
	int CreateObjectsforChannels();
	int InitChannelData(Channel* channel);
	int OutputChannelData(Channel* channel);
};
