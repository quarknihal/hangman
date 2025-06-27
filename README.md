# Hangman💥
### So, a game which you can play on you terminal with your friends.
----
## But bruh how do we connect the terminal?😕
## **Dont worry, I got you!😆**
### All you have to do are these simple steps and you will be able to play!

### *If you both are connected to the same wifi then:*
#### 1. Install openssh in your host terminal(eg: your laptop or pc)

##### For Arch/Manjaro
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

#### 2. Then we need to get the ip which can be done as:
```bash
sudo systemctl start sshd
sudo systemctl enable sshd
ip a
```
#### 3. You will get a humongous chunk of stuffs.<br>But you just have to find our ip which will be in the **wlo1(Broadcast, Multicast...)** somewhat like
```md
ip 192.123.1.13
```
### Now we have our ip but still we need to do something to share the same terminal in both devices so that both can interact with the same program.<br>How can we do that?<br>By installing tmux!!
#### 1. Install tmux in your host terminal by
```bash
sudo pacman -S tmux
```
#### 2. Start a sharable tmux session
```bash
tmux new-session -s sharedgame
```
---
## We are done with the host side. Now lets move to the other terminal
#### 1. In the other terminal, install openssh as well.

##### For Arch/Manjaro
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
apt install openssh
```
#### 2. Connect with the host by using its ip as
```bash
ssh username@<host-ip>
```
#### 3. It might ask you to connect so type 'yes'
#### 4. Now just connect to the shared session by host.
```bash
tmux attach-session -t sharedgame
```

## Congrats😆 you are now connected. Have some fun guessing the words





