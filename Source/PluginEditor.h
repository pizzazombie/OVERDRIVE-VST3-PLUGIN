/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class My_distortion_vstAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    My_distortion_vstAudioProcessorEditor (My_distortion_vstAudioProcessor&);
    ~My_distortion_vstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:

    ScopedPointer<Slider> driveKnob;
    ScopedPointer<Slider> rangeKnob;
    ScopedPointer<Slider> blendKnob;
    ScopedPointer<Slider> volumeKnob;

    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachment;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    My_distortion_vstAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (My_distortion_vstAudioProcessorEditor)
};
