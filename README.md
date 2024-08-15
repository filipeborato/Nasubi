# Nasubi VST Plugin

## Overview

The **Nasubi VST Plugin** is a simple and intuitive audio effect plugin developed using the JUCE framework. This plugin is designed to offer a single control knob that can manipulate a specific audio parameter, providing an easy-to-use interface for both beginners and professionals.

## Installation

### Linux

1. Download the plugin on the tag/release version.
2. Find your VST folder and put the VST3 folder with the file.
3. Open your DAW and verify that the plugin is listed among the available VSTs.

### Win and Mac

Compiling the project and putting the VST in the respective folder.


## Building from Source

To build Wavetable Synth from the source, follow these steps:

1. *Clone the repository*:

``` 
git clone https://github.com/filipeborato/WavetableSynth](https://github.com/filipeborato/Nasubi
```

```
cd Nasubi
```    

2. *Install the JUCE Framework*:
    Download and install the JUCE framework from the [official website](https://juce.com/).

3. *Open the project in Projucer*:
    - Launch Projucer (tool provided by JUCE).
    - Open the .jucer file located in the project directory.
    - Configure the paths to the VST SDK and other necessary modules.

4. *Build the project*:
    - Choose the desired platform (Windows, macOS, or Linux).
    - Linux dependencies: https://github.com/juce-framework/JUCE/blob/master/docs/Linux%20Dependencies.md
    - Use Projucer to export the project to your preferred IDE (Visual Studio, Xcode, etc.).
    - Build the project in your IDE.
    - On Linux build your project with make file using:
      ```
      sudo make CONFIG=Release
      ```

## Usage

After installation or building, the plugin will be available in your preferred DAW. You can load Nasubi on a track and use it to improve your mix.
