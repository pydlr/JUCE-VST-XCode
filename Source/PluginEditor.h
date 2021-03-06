/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_ED2E81A60680C205__
#define __JUCE_HEADER_ED2E81A60680C205__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TruePan_0_01AudioProcessorEditor  : public AudioProcessorEditor,
                                          public Timer,
                                          public SliderListener
{
public:
    //==============================================================================
    TruePan_0_01AudioProcessorEditor (TruePan_0_01AudioProcessor& ownerFilter);
    ~TruePan_0_01AudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback();
    TruePan_0_01AudioProcessor* getProcessor() const
        {return static_cast <TruePan_0_01AudioProcessor*>(getAudioProcessor());}
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);

    // Binary resources:
    static const char* _1_jpg;
    static const int _1_jpgSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //TruePan_0_01AudioProcessor& ownerFilter;
    //TruePan_0_01AudioProcessor& processor;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> slider;
    ScopedPointer<Label> label;
    Image cachedImage__1_jpg_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TruePan_0_01AudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_ED2E81A60680C205__
