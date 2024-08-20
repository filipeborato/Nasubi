
#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NasubiAudioProcessorEditor::NasubiAudioProcessorEditor(NasubiAudioProcessor &p, juce::AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor(&p), audioProcessor(p)
{
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
  addAndMakeVisible(slider);
  sliderAttachment.reset(
        new juce::AudioProcessorValueTreeState::SliderAttachment(
            vts, "one_knobe", slider));
  setSize(800, 400);
}

NasubiAudioProcessorEditor::~NasubiAudioProcessorEditor()
{
}

//==============================================================================
void NasubiAudioProcessorEditor::paint(juce::Graphics &g)
{
  // (Our component is opaque, so we must completely fill the background with a solid colour)
  //g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
  background = juce::ImageCache::getFromMemory(BinaryData::brushedMetalSHRUNK_jpg, BinaryData::brushedMetalSHRUNK_jpgSize);
    
  g.drawImageWithin(background, 0, 0, getWidth(), getHeight(), juce::RectanglePlacement::stretchToFit); 
}

void NasubiAudioProcessorEditor::resized()
{
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
  slider.setBounds(280, 84, 233, 233);
}
