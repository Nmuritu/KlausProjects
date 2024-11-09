import os
import tkinter as tk
from tkinter import filedialog, messagebox

import pygame

class MusicPlayer:
    def __init__(self,root):
        self.root = root
        self.root.title("My music Player")
        self.root.geometry("400x350")
        self.root.resizable(0, 0)

        pygame.mixer.init()

        self.track = tk.StringVar()
        self.is_playing = False

        # create ui components
        self.create_widgets()

    def create_widgets(self):
        # Track leble
        track_lable = tk.Label(self.root, textvariable = self.track, wraplength = 300)
        track_lable.pack(pady = 20)

        # play button
        play_button = tk.Button(self.root, text = "Play", command = self.play_music)
        play_button.pack(pady = 5)

        # plause button
        pause_button = tk.Button(self.root, text = "Pause", command = self.pause_music)
        pause_button.pack(pady = 5)

        # resume button
        resume_button = tk.Button(self.root, text = "Resume", command  = self.resume_music)
        resume_button.pack(pady = 5)

        # stop button
        stop_button = tk.Button(self.root, text = "Stop", command = self.stop_music)
        stop_button.pack(pady = 5)

        # load button
        load_button = tk.Button(self.root, text = "Load", command = self.load_music)
        load_button.pack(pady = 5)

        def load_music(self):
            file_path = filedialog.askopenfilename(filetype =[("Audio File", "*.mp3;*.wav")])
            if file_path:
                self.track.set(os.path.basename(file_path))
                pygame.mixer.music.load(file_path)
                self.is_playing = False

        def play_music(self):
            if not self.is_playing:
                pygame.mixer.music.play()
                self.is_playing = True

        def pause_music(self):
            if self.is_playing:
                pygame.mixer.music.pause()
                self.is_playing = False


        def resume_music(self):
            pygame.mixer.music.unpause()
            self.is_playing = True


        def stop_music(self):
            pygame.mixer.music.stop()
            self.is_playing = False

if __name__ == "__main__":
    root = tk.Tk()
    player = MusicPlayer(root)
    root.mainloop()

