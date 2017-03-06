#ifndef __TVECTOR_INCLUDED__
#define __TVECTOR_INCLUDED__

class TVector
{
public:
	using value_type = int;
	using size_type = size_t;
	using iterator = value_type *;
	using reference = value_type&;
	using const_reference = const value_type&;

private:
	value_type * Ptr;
	size_type Count;
	size_type InternalCapacity;
public:
	TVector()
		: Ptr(nullptr)
		, Count(0)
		, InternalCapacity(0)
	{ }
	
	TVector(size_type capacity)
		: Count(0)
		, InternalCapacity(capacity)
	{
		Ptr = new value_type[InternalCapacity];
	}

	~TVector()
	{
		delete[] Ptr;
	}
	
	bool empty() const throw()
	{
		return size() == 0;
	}

	size_type size() const throw()
	{
		return Count;
	}

	size_type capacity() const throw()
	{
		return InternalCapacity;
	}

	iterator begin() const throw()
	{
		return Ptr;
	}

	iterator end() const throw()
	{
		return Ptr + Count;
	}

	void reserve(size_type size)
	{
		// �����������
	}

	TVector(const TVector& rhs)
	{
		// �����������
	}

	TVector& operator=(const TVector& rhs)
	{
		// �����������
	}

	// ��������� ������� � ������
	// ���� �� ������� ������ � Ptr, �� �������� �����
	// ������ std::vector::push_back
	void push_back(const value_type& value)
	{
		// �����������		
	}
	
	reference at(size_type index)
	{
		// �����������	
	}

	value_type at(size_type index) const
	{
		// �����������	
	}

	reference operator[](size_type index)
	{
		// �����������
	}

	const_reference operator[](size_type index) const
	{
		// �����������
	}

	reference front()
	{
		// �����������	
	}

	const_reference front() const
	{
		// �����������	
	}

	reference back()
	{
		// �����������	
	}

	const_reference back() const
	{
		// �����������	
	}

	void clear()
	{
		// �����������	
	}

	void pop_back()
	{
		// �����������
	}

	void swap(TVector& other) throw()
	{
		// �����������
	}

	void resize(size_type count, value_type value = value_type())
	{
		// �����������
	}

	iterator insert(iterator pos, const value_type& value)
	{
		// �����������
	}

	void insert(iterator pos, size_type count, const value_type& value)
	{
		// �����������
	}

	iterator erase(iterator pos)
	{
		// �����������
	}

	iterator erase(iterator first, iterator last)
	{
		// �����������
	}
};


#endif // __TVECTOR_INCLUDED__