# Hangman on Terminal!💥
### A game you can play on you Terminal with you friends!😆

---

## 🤔But bruh... how do we connect our terminals?
### **Don't worry, I got you!😆**
All you have to do is follow these simple steps and you will be able to play in no time!

---

### 🗼**If you both are connected to the same Wi-fi then:**
### 🔧 1. **Install OpenSSH on the host system (e.g., your laptop/PC):**  

#### For Arch/Manjaro
```bash
sudo pacman -S openssh
```
#### For Ubuntu/Debian/Mint
```bash
sudo apt update
sudo apt install openssh-server
```
#### For Termux
```bash
pkg install openssh
```

### 🌐2. Start the Ssh server and find your IP:
```bash
sudo systemctl start sshd
sudo systemctl enable sshd
ip a
```
You'll see a lot of text — look for the wlo1 section (usually under Wi-Fi) and find something like:

```bash
ip 192.123.1.13
```
👉 Your IP is the number after inet (e.g., 192.168.1.13).

### 🧱3. Install tmux to share your terminal session:
```bash
sudo pacman -S tmux
```
### ⏯️2. Start a shared terminal session(from host terminal)
```bash
tmux new-session -s sharedgame
```
---
## 🤜Now on the second device(your friend's terminal):
### 🔧1. Install Open-ssh just like before.

### 🔗2. Connect to the host using its IP:
```bash
ssh username@<host-ip>
```
It might ask:
```bask
Are you sure you want to continue connecting (yes/no)?
```
Type
```bash
yes
```
### 📺3. Join the shared tmux session:
```bash
tmux attach-session -t sharedgame
```

## 🥳Boom! You are now connected to the same terminal!
Now just run the hangman file and have fun




