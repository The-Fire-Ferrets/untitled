#ifndef LEVELVIEW_H
#define LEVELVIEW_H

#include "Constants.h"
#include "ActorFactory.h"

class LevelView  {
	private:
		static const int size;
		static int num_actors;
		static sf::Texture background_texture;
		static sf::Sprite background;
		static std::string name;
		static sf::Clock level_clock;
		static sf::Text timer;
		static std::string timer_string;
		static sf::Font font;
		static sf::Vector2f timer_position;
		static void cleanUp(void);
	public:
		static StrongActorPtr actors[];		
		static std::string getName(void);
		static int getNumActors(void);
		static void start();
		static void quit(void);

		//ALL VIEW CLASSES MUST IMPLEMENT BELOW METHODS
		static void Create(const char* resource, int* state);
		static void update(sf::RenderWindow *window, int* state, float time);
		static void update(EventInterfacePtr e);
		static void render(sf::RenderWindow *window);
};

#endif
