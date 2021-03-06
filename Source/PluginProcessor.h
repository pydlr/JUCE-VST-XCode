/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

/////////////////
/////  I/O  / ///
#include "TruePan.h"
////////////////

//==============================================================================
/**
*/
//      MainComponent                          Component 
class TruePan_0_01AudioProcessor  : public AudioProcessor
{
//TruePan_0_01AudioProcessor = MainComponent in JUCE documentation
public:
    ///////// I / O Patterns ///////////////////////////////////////////////////////
    float sliderValue;
    float numInputs;
    float w[513];
    ///////// I / O Patterns ///////////////////////////////////////////////////////
    //==============================================================================
    TruePan_0_01AudioProcessor(); // MainComponent()
    ~TruePan_0_01AudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool silenceInProducesSilenceOut() const override;
    double getTailLengthSeconds() const override;
 
    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    
    //Custom Methods, Params and Public Data
    enum Parameters{
        MasterBypass=0,	
        StereoWidth, 
        Gain, 
        totalNumParam};
    
private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TruePan_0_01AudioProcessor)
    
    
    
    
    bool NeedsUIUpdate(){return UIUpdateFlag;};
    void RequestUIUpdate(){UIUpdateFlag=true;};
    void ClearUIUpdateFlag(){UIUpdateFlag=false;};
    private:
    //Private Data, helper methods etc.
    float UserParams[totalNumParam];
    TruePan mWidthControl;
    bool UIUpdateFlag; 
    
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
