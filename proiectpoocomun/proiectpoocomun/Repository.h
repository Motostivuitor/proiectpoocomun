#include <vector>
template<class Entity>
class Repository
{
protected:
	std::vector<Entity*> mEntities;
public:
	Add(Entity *entity) 
	{
		mEnteties.push_back(new Entity())
	};
	Remove(Entity *entity) 
	{
		for(int i=0;i<entity.size();i++)
			if (mEntities[i] == entity)
			{
				mEntities[i] = mEntities[mEntities.size() - 1];
				mEntities.pop_back();
				delete entity;
			}
	};
};

