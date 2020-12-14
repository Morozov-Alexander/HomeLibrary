#pragma once
#include "IMediaController.h"
#include "AllMedia.h"
ref class MediaControler : public IMediaController
{
	
	System::String^ addComment(System::String^ comment, Media^ media) override {
		Comment^ comment1;
		comment1->setRecord(comment);
		media->comments.push_back(comment1);
		return comment;
	}	
	 System::String^ rename(System::String^ name, Media^ media) override {
		 media->setName(name);
		 return name;
	 }
	 int addRating(int rate, Media^ media) override {
		 Rating^ rate1;
		 rate1->setRate(rate);
		 media->rating.push_back(rate1);
		 return rate;
	 }
	 void editMedia(System::String^ name, Media^ media) override {
		 media->setName(name);
	 }
};

