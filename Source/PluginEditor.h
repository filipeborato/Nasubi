/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "RasterKnob.h"

//==============================================================================
/**
*/
class NasubiAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NasubiAudioProcessorEditor (NasubiAudioProcessor&,  juce::AudioProcessorValueTreeState& vts);
    ~NasubiAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    juce::Image background;
    RasterKnob slider;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> sliderAttachment;
    NasubiAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NasubiAudioProcessorEditor)
};
