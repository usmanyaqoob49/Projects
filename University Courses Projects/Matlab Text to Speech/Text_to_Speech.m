function Text_to_Speech(myText, rate)
tic
NET.addAssembly('System.Speech');

mySpeaker = System.Speech.Synthesis.SpeechSynthesizer;
mySpeaker.Rate = rate;
mySpeaker.Volume = 100;
Speak(mySpeaker, myText);
toc