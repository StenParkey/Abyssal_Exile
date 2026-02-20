#include <iostream>

int main() {
	bool running = true;
	int choice1;
	int choice2;
	int choice3;

	while (running) {
		// Question 1
		std::cout << "You gaze into the darkness\n";
		std::cout << "What do you do now?  (options: 1=scan, 2=blink, or 3=run)\n";
		std::cin >> choice1;
		switch (choice1) {
			case 1:
				//scan
				std::cout << "You see faint movement in the dark, something large about 100 ft above and in front of you...\n";
				// Question 2
				std::cout << "What do you do now? (options: 1=scream , 2=peer , or 3=run)\n";
				std::cin >> choice2;
				switch (choice2) {
					case 1:
						//scream
						std::cout << "You scream out and the beast above snatches you up into dusty tendrils. You are horrifically devoured...\n";
						running = false;
						//break question 2
						break;
					case 2:
						//peer
						std::cout << "You peer at it, and its ghastly form becomes clearer to your adjusting eyes. It is hungry. Saliva drips from a mouth beaneath the floating dry crusty tendrils...\n";
						// Question 3
						std::cout << "What do you do now? (options: 1=sit 2=exhale 3=run)\n";
						std::cin >> choice3;
						switch (choice3) {
							case 1:
								//sit
								std::cout << "You sit down and lay low beneath the beast, the cool sand greets you and you doze off...\n";
								running = false;
								//break question 3
								break;
							case 2:
								//exhale
								std::cout << "You take a deep breath but the beast senses your awareness, it snatches you up and you are ripped apart...\n";
								running = false;
								//break question 3
								break;
							case 3:
								std::cout << "You turn your back to run and you hear faint the faint grand laughter of the beast above, it snatches you up and devours you whole...\n";
								running = false;
								//break question 3
								break;
							default:
								std::cout << "Invalid choice! Please choose either 1=, 2=, or 3=run\n";
								std::cin >> choice3;
								break;
						}
						//break question 2
						break;
					case 3:
						//run
						std::cout << "You turn your back to run but you pass out from exhaustion before you can take a step, goodnight...\n";
						running = false;
						//break question 2
						break;
					default:
						std::cout << "Invalid choice! Please choose either 1=, 2=, or 3=run\n";
						std::cin >> choice2;
						break;
				}
				//break question 1
				break;
			case 2:
				//blink
				std::cout << "You take a moment and blink, letting your eyes adjust to the darkness. During the brief moment your eyes were shut. You feel something bite at your feet from beneath cold sands..\n";
				// Question 2
				std::cout << "(options: 1=relax, 2=stomp, or 3=run)\n";
				std::cin >> choice2;
				switch (choice2) {
					case 1:
						//relax
						std::cout << "You loosen your muscles and you feel a cool breeze run over you, despite the eery environment a floral smell wafts your way....\n";
						// Question 3
						std::cout << "What do you do now? (options 1=inhale 2=lay 3=run)\n";
						std::cin >> choice3;
						switch (choice3) {
							case 1:
								//inhale
								std::cout << "You breath in and attempt to smell the floral scent closer, and it entrances you into a deep slumber, you are restless and have horrible nightmares...\n";
								running = false;
								//break question 3
								break;
							case 2:
								//lay
								std::cout << "You lay down onto the cool sand and the bug bites again at your back, but you instictually grab it and devour it whole. It tastes bitter and you fall asleep...\n";
								running = false;
								//break question 3
								break;
							case 3:
								std::cout << "You turn your back to run but you pass out from exhaustion before you can take a step, goodnight...\n";
								running = false;

								//break question 3
								break;
							default:
								std::cout << "Invalid choice! Please choose either 1=, 2=, or 3=run\n";
								std::cin >> choice3;
								break;
						}
						//break question 2
						break;
					case 2:
						//stomp
						std::cout << "You crush a hard bug beneath your foot but your stomp reveals your location to the dead beneath the sand, something rough and boney graps your ankles and drags you under.. you suffocate...\n";
						running = false;
						//break question 2
						break;
					case 3:
						//run
						std::cout << "You turn your back to run but you feel something cold and boney drag you under the sand, your lungs fill with sand...\n";
						running = false;
						//break question 2
						break;
					default:
						std::cout << "Invalid choice! Please choose either 1=, 2=, or 3=run\n";
						std::cin >> choice2;
						break;
				}
				//break question 1
				break;
			case 3:
				//run
				std::cout << "You turn your back to run but you pass out from exhaustion before you can take a step, goodnight...\n";
				running = false;
				//break question 1
				break;
			default:
				std::cout << "Invalid choice! Please choose either 1=scan, 2=blink, or 3=run\n";
				std::cin >> choice1;
				break;
		};
	}
	std::cout << "\n\nthnx for playing\n -jacky <3";
	return 0;
}
