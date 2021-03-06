
// This source file is generated.

#include "pch.h"
#include "Dh.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDhW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Dh::~Dh(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Dh::Dh(void) 
{
    m_impl = new CkDhW();
}

//Chilkat::Dh::Dh(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDhW *)x;
//    if (!m_impl) m_impl = new CkDhW();
//    }
//    
//Platform::IntPtr Chilkat::Dh::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Dh::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Dh::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
int Chilkat::Dh::G::get()
    {
    return m_impl ? m_impl->get_G() : 0;
    }
String ^Chilkat::Dh::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Dh::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Dh::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Dh::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Dh::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Dh::P::get()
    {
    return ref new String(m_impl ? m_impl->p() : L"");
    }
Boolean Chilkat::Dh::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Dh::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Dh::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Platform::String ^Dh::CreateE(int numBits)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->createE(numBits);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Dh::FindK(Platform::String ^E)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->findK(E ? E->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Dh::GenPG(int numBits, int G)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GenPG(numBits,G);
    }
Boolean Dh::SetPG(Platform::String ^p, int g)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetPG(p ? p->Data() : L"",g);
    }
Boolean Dh::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
void Dh::UseKnownPrime(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->UseKnownPrime(index);
    }




