
#include <JuceHeader.h>

class RasterKnob : public juce::Slider
{
public:
    RasterKnob() : Slider(SliderStyle::RotaryHorizontalVerticalDrag, TextEntryBoxPosition::NoTextBox)
    {
        setMouseCursor(juce::MouseCursor::PointingHandCursor);
        setLookAndFeel(&mainSliderLookAndFeel);
    }

    ~RasterKnob()
    {
        setLookAndFeel(nullptr);
    }

private:
    class RasterKnobLookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        RasterKnobLookAndFeel()
        {
            image = juce::ImageCache::getFromMemory(BinaryData::RasterKnob_png, BinaryData::RasterKnob_pngSize);
        }

        void drawRotarySlider(
            juce::Graphics& g, 
            int x, 
            int y, 
            int width, 
            int height, 
            float sliderPosProportional,
            float /*rotaryStartAngle*/, 
            float /*rotaryEndAngle*/, 
            juce::Slider& /*slider*/) override
        {
            const auto frames = 90;
            const auto frameId = static_cast<int>(ceil(sliderPosProportional * (static_cast<float>(frames) - 1.0f)));

            g.drawImage(image,
                x,
                y,
                width,
                height,
                (frameId % 9) * width,
                (frameId / 9) * height,
                width,
                height);
        }

    private:
        juce::Image image;

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(RasterKnobLookAndFeel)
    } mainSliderLookAndFeel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(RasterKnob)
};
