/*
  ==============================================================================

    TruePan.cpp
    Created: 28 Feb 2016 7:39:11pm
    Author:  Mac

  ==============================================================================
*/

#include "TruePan.h"


#include "TruePan.h"

TruePan::TruePan(){SetWidth(1.0f);}
TruePan::~TruePan(){}

void TruePan::SetWidth(float width)
{
m_width=width;
float tmp;
if(1.0f+width>2.0f)
tmp=1.0f/(1.0f+m_width);
else
tmp=1.0f/2.0f;

diffGain=m_width*tmp;
sumGain=tmp;
}

void TruePan::ClockProcess(float* LeftSample, float* RightSample)
{
float m = sumGain*(*LeftSample+*RightSample);
float s = diffGain*
(*RightSample-*LeftSample);
*LeftSample=m-s;
*RightSample=m+s;
}