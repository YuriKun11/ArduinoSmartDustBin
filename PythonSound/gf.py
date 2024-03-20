import os
import serial
import winsound

desktop_path = os.path.join(os.path.join(os.environ['USERPROFILE']), 'Desktop')

main_folder = 'PythonSound'
sound_folder = 'Sound'

audio_filename = 'beep.wav'
audio_filename_trumpet = 'trumpet.wav'

audio_file_path = os.path.join(desktop_path, main_folder, sound_folder, audio_filename)
audio_file_path_trampet = os.path.join(desktop_path, main_folder, sound_folder, audio_filename_trumpet)

ser = serial.Serial('COM3', 9600)

while True:
    data = ser.readline().decode().strip()

    print(data)
    if data == 'Item Detected':
        winsound.PlaySound(audio_file_path, winsound.SND_FILENAME)
        winsound.PlaySound(audio_file_path_trampet, winsound.SND_FILENAME)
        continue
