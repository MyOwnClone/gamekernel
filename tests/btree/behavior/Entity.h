#pragma once 

#include <behavior/BehaviorDispatcher.h>
#include <behavior/BehaviorSelector.h>

namespace bt 
{

/**
 * @class Entity 
 *
 * ������ �ൿ Ŭ������ ��Ÿ����.
 *
 * ���ο� BehaviorDispatcher�� �ϳ� ���´�.
 */
class Entity 
{
public:
	Entity();
	virtual ~Entity();

	/**
	 * ������ ������ �� �ֵ��� �ϸ鼭 �ʱ�ȭ�Ѵ�
	 *
	 * @param 	selector 
	 */
	virtual bool Init( BehaviorSelector* selector );

	/**
	 * �ֱ����� ó���� �Ѵ�. 
	 */
	virtual void Update( float tick );

	/**
	 * �޼����� �����Ѵ�.
	 */
	virtual void Message( Message* m );

	/**
	 * ��ƼƼ�� �����Ѵ�. 
	 */
	virtual void Fini();

protected:
	BehaviorDispatcher 	m_behaviorDispatcher;
	BehaviorSelector* 	m_selector;
};

} // namespace bt
