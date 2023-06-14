	#pragma once
	/***********************************************************/

	typedef size_t Ptable[8];

	const char* allocate_Key(size_t n);

	class Hash_Table
	{
	public:
		unsigned table_Size();
		unsigned table_Cntr();
		static unsigned memory_Size(unsigned size);
		void* table_Pointer();
		size_t find_Link(const char* s);
		void add_Link(size_t n, const char* s);
		size_t init_Link(unsigned* nptr);
		size_t next_Link(unsigned* nptr);
		void set_Data(unsigned _size, unsigned _cntr, void* _table);

		Hash_Table();
		~Hash_Table();

	private:
		unsigned hash(const char* s);
		unsigned probe(unsigned index);
		void resize();
		size_t* table;
		unsigned size = 0;
		unsigned cntr = 0;
		// Ptable* ptable;
	};

	/***********************************************************/



