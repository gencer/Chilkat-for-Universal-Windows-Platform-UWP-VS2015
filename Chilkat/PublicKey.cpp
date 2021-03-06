
// This source file is generated.

#include "pch.h"
#include "PublicKey.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPublicKeyW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::PublicKey::~PublicKey(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::PublicKey::PublicKey(void) 
{
    m_impl = new CkPublicKeyW();
}

//Chilkat::PublicKey::PublicKey(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPublicKeyW *)x;
//    if (!m_impl) m_impl = new CkPublicKeyW();
//    }
//    
//Platform::IntPtr Chilkat::PublicKey::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::PublicKey::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::PublicKey::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
int Chilkat::PublicKey::KeySize::get()
    {
    return m_impl ? m_impl->get_KeySize() : 0;
    }
String ^Chilkat::PublicKey::KeyType::get()
    {
    return ref new String(m_impl ? m_impl->keyType() : L"");
    }
String ^Chilkat::PublicKey::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::PublicKey::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::PublicKey::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::PublicKey::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::PublicKey::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::PublicKey::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::PublicKey::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::PublicKey::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Windows::Foundation::Collections::IVector<uint8>^PublicKey::GetDer(Boolean preferPkcs1)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetDer(preferPkcs1,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PublicKey::GetEncoded(Boolean preferPkcs1, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getEncoded(preferPkcs1,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PublicKey::GetJwk(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getJwk();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PublicKey::GetJwkThumbprint(Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getJwkThumbprint(hashAlg ? hashAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^PublicKey::GetOpenSslDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetOpenSslDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PublicKey::GetOpenSslPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getOpenSslPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PublicKey::GetPem(Boolean preferPkcs1)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getPem(preferPkcs1);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PublicKey::GetPkcs1ENC(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getPkcs1ENC(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PublicKey::GetPkcs8ENC(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getPkcs8ENC(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^PublicKey::GetRsaDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetRsaDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PublicKey::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean PublicKey::LoadBase64(Platform::String ^keyStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadBase64(keyStr ? keyStr->Data() : L"");
    }
Boolean PublicKey::LoadFromBinary(Windows::Foundation::Collections::IVector<uint8>^keyBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (keyBytes != nullptr) { v0 = to_vector(keyBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->LoadFromBinary(db0);
    }
Boolean PublicKey::LoadFromFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFromFile(path ? path->Data() : L"");
    }
Boolean PublicKey::LoadFromString(Platform::String ^keyString)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFromString(keyString ? keyString->Data() : L"");
    }
Boolean PublicKey::LoadOpenSslDer(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->LoadOpenSslDer(db0);
    }
Boolean PublicKey::LoadOpenSslDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadOpenSslDerFile(path ? path->Data() : L"");
    }
Boolean PublicKey::LoadOpenSslPem(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadOpenSslPem(str ? str->Data() : L"");
    }
Boolean PublicKey::LoadOpenSslPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadOpenSslPemFile(path ? path->Data() : L"");
    }
Boolean PublicKey::LoadPkcs1Pem(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadPkcs1Pem(str ? str->Data() : L"");
    }
Boolean PublicKey::LoadRsaDer(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->LoadRsaDer(db0);
    }
Boolean PublicKey::LoadRsaDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadRsaDerFile(path ? path->Data() : L"");
    }
Boolean PublicKey::LoadXml(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXml(xml ? xml->Data() : L"");
    }
Boolean PublicKey::LoadXmlFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXmlFile(path ? path->Data() : L"");
    }
Boolean PublicKey::SaveDerFile(Boolean preferPkcs1, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveDerFile(preferPkcs1,path ? path->Data() : L"");
    }
Boolean PublicKey::SaveOpenSslDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveOpenSslDerFile(path ? path->Data() : L"");
    }
Boolean PublicKey::SaveOpenSslPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveOpenSslPemFile(path ? path->Data() : L"");
    }
Boolean PublicKey::SavePemFile(Boolean preferPkcs1, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SavePemFile(preferPkcs1,path ? path->Data() : L"");
    }
Boolean PublicKey::SaveRsaDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveRsaDerFile(path ? path->Data() : L"");
    }
Boolean PublicKey::SaveXmlFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveXmlFile(path ? path->Data() : L"");
    }




