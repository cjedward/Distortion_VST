/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
using namespace juce;

//==============================================================================
Distortion_VSTAudioProcessorEditor::Distortion_VSTAudioProcessorEditor(Distortion_VSTAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p)
{
    /////////////////////// Creates knob with text, sets style and size ///////
    // Drive knob
    addAndMakeVisible(driveKnob = new Slider("Drive"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    // Range knob
    addAndMakeVisible(rangeKnob = new Slider("Range"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    // Blend knob
    addAndMakeVisible(blendKnob = new Slider("Blend"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

    // Gain knob
    addAndMakeVisible(gainKnob = new Slider("Gain"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);


    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize(500, 200);
}

Distortion_VSTAudioProcessorEditor::~Distortion_VSTAudioProcessorEditor()
{
}

//==============================================================================
void Distortion_VSTAudioProcessorEditor::paint(juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

    g.setColour(juce::Colours::white);
    g.setFont(15.0f);
    g.drawFittedText("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void Distortion_VSTAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
