#ifndef MUTEX_HPP_INCLUDED
#define MUTEX_HPP_INCLUDED

#include<noncopyable.hpp>
#include<pthread.h>
#include<assert.h>

namespace summer
{


class MutexLock
{
private:
    pthread_mutex_t m_mutex;
    pid_t m_holder;

public:
    MutexLock():m_holder(0)
    {
        pthread_mutex_init(&m_mutex,NULL);
    }
    ~MutexLock()
    {
        assert(m_holder==0);
        pthread_mutex_destory(&m_mutex);
    }

    bool isLocketByThisThread() const
    {
        //ToDo
    }


    void lock()
    {
        pthread_mutex_lock(&m_mutex);
    }
    void unlock()
    {
        pthread_mutex_lock(&m_mutex);

    }

}
}






#endif // MUTEX_HPP_INCLUDED
