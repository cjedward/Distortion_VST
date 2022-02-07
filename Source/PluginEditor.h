/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
/**
*/
class Distortion_VSTAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    Distortion_VSTAudioProcessorEditor(Distortion_VSTAudioProcessor&);
    ~Distortion_VSTAudioProcessorEditor() override;

    //==============================================================================
    void paint(juce::Graphics&) override;
    void resized() override;

private:

    juce::ScopedPointer<juce::Slider> driveKnob;
    juce::ScopedPointer<juce::Slider> rangeKnob;
    juce::ScopedPointer<juce::Slider> blendKnob;
    juce::ScopedPointer<juce::Slider> gainKnob;

    ///////// allows you to share parameters betwween class, enabling presets ??????
    juce::ScopedPointer<juce::AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
    juce::ScopedPointer<juce::AudioProcessorValueTreeState::SliderAttachment> rangeAttachment;
    juce::ScopedPointer<juce::AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
    juce::ScopedPointer<juce::AudioProcessorValueTreeState::SliderAttachment> gainAttachment;


    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Distortion_VSTAudioProcessor& audioProcessor;



    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Distortion_VSTAudioProcessorEditor)
};
