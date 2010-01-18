#pragma once 

namespace bt 
{

class Entity;
class BehaviorSelector;

/**
 * @class BehaviorDispatcher 
 *
 * Behavior ����⿡ �ش��Ѵ�. 
 */
class BehaviorDispatcher 
{
public:
	BehaviorDispatcher();
	~BehaviorDispatcher();

	/**
	 * ������ �Ǵ� ��ƼƼ�� ���� ���ñ⸦ ���� �����Ѵ�. 
	 *
	 * @param owner 	������ �Ǵ� ��ƼƼ 
	 * @param selector 	���� ���ñ�
	 *
	 * @return �������̸� true
	 */
	bool Init( Entity* owner, BehaviorSelector* selector );

	/**
	 * �ֱ����� ó���� �Ѵ�. 
	 *
	 * @param tick 		������ �ð���
	 */
	void Update( float tick );

	/**
	 * �޼��� ����
	 *
	 * @param m 		�޼���. <������ ���� ����>
	 */
	void Message( Message* m );

	/**
	 * �����Ѵ�
	 */
	void Fini();

private:
	BehaviorQueue 		m_queue;
	BehaviorSelector* 	m_selector;
};

} // namespace bt
