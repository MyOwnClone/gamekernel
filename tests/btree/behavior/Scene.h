#pragma once 

namespace bt 
{

/**
 * @class Scene 
 * 
 * �׳� ��� �ϳ��� �ִ� ��ó�� �Ѵ�. 
 * �����ϰ� Entity���� �ν��Ͻ� �̸����� �����Ѵ�. 
 */
class Scene 
{
public:
	Scene();
	~Scene();

	void Add( Entity* e );

	Entity* Find( const tstring& name );

	void Remove( const tstring& name );

private:
	typedef stdext::hash_map<tstring, Entity*> EntityMap;

	EntityMap m_entities;
};

} // namespace bt 
