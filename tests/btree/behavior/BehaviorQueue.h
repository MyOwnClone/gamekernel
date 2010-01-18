#pragma once 

namespace bt 
{

class Behavior;

/**
 * @class BehaviorQueue
 */
class BehaviorQueue
{
public:
	BehaviorQueue();
	~BehaviorQueue();

	/**
	 * ť�� �ʱ�ȭ �Ѵ�. 
	 *
	 * @return �����̸� true
	 */
	bool Init();

	/**
	 * ť�� behavior�� �߰��Ѵ�
	 *
	 * @param behavior 		���� <������ ���� ����>
	 */
	void Put( Behavior* behavior );

	/**
	 * ���� behavior�� �����ϴ� ���� �۾��� �Ѵ�. �ֱ������� �Ҹ�
	 */
	void Update();

	/**
	 * �����Ѵ�. 
	 */
	void Fini();

private:
	// heap���� swap�� ����� ������ ������	
	// [1] BehaviorComparison�� binary_function���� �����Ѵ�. true�� �� �� ����
	typedef std::priority_queue< vector<Behavior*, BehaviorComparison> > PriorityQueue;

	PriorityQueue m_q;
};

} // namespace bt
