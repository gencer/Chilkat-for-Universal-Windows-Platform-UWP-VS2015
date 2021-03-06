
// This header is generated for Chilkat v9.5.0

#pragma once

class CkImapW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkImapW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Email;
	ref class StringBuilder;
	ref class MessageSet;
	ref class BinData;
	ref class EmailBundle;
	ref class StringArray;
	ref class Cert;
	ref class Mailboxes;
	ref class PrivateKey;
	ref class SshKey;
	ref class XmlCertVault;
	ref class Ssh;
	ref class Socket;


public ref class Imap sealed
{
#include "friendDecls.h"
		
	private:
    CkImapW *m_impl;

	public:
	virtual ~Imap(void);
	Imap(void);
	//Imap(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	


	event ProgressInfoEventHandler^ ProgressInfo;
	event AbortCheckEventHandler^ AbortCheck;
	event PercentDoneEventHandler^ PercentDone;

	void FireAbortCheck(bool *abort)
	    {
	    Chilkat::AbortCheckEventArgs ^args = ref new Chilkat::AbortCheckEventArgs;
	    args->Abort = false;
	    AbortCheck(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FirePercentDone(int percentDone, bool *abort)
	    {
	    Chilkat::PercentDoneEventArgs ^args = ref new Chilkat::PercentDoneEventArgs;
	    args->PercentDone = percentDone;
	    args->Abort = false;
	    PercentDone(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FireProgressInfo(Platform::String ^name, Platform::String ^value)
	    {
	    Chilkat::ProgressInfoEventArgs ^args = ref new Chilkat::ProgressInfoEventArgs;
	    args->Name = name;
	    args->Value = value;
	    ProgressInfo(this,args);
	    }



	// ----------------------
	// Properties
	// ----------------------
	property Boolean AbortCurrent
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AppendSeen
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 AppendUid
	{
		int32 get();
	}
	property Platform::String ^AuthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AuthzId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean AutoDownloadAttachments
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoFix
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ConnectedToHost
	{
		Platform::String ^get();
	}
	property int32 ConnectTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Domain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^HttpProxyAuthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HttpProxyPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^HttpProxyUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean KeepSessionLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^LastAppendedMime
	{
		Platform::String ^get();
	}
	property Platform::String ^LastCommand
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastIntermediateResponse
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^LastResponse
	{
		Platform::String ^get();
	}
	property Platform::String ^LastResponseCode
	{
		Platform::String ^get();
	}
	property Platform::String ^LoggedInUser
	{
		Platform::String ^get();
	}
	property int32 NumMessages
	{
		int32 get();
	}
	property Boolean PeekMode
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property int32 Port
	{
		int32 get();
		void set(int32);
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ReadTimeout
	{
		int32 get();
		void set(int32);
	}
	property Boolean RequireSslCertVerify
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^SearchCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SelectedMailbox
	{
		Platform::String ^get();
	}
	property int32 SendBufferSize
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SeparatorChar
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SessionLog
	{
		Platform::String ^get();
	}
	property Platform::String ^SocksHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SocksPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SocksUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksVersion
	{
		int32 get();
		void set(int32);
	}
	property int32 SoRcvBuf
	{
		int32 get();
		void set(int32);
	}
	property int32 SoSndBuf
	{
		int32 get();
		void set(int32);
	}
	property Boolean Ssl
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^SslAllowedCiphers
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SslProtocol
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean SslServerCertVerified
	{
		Boolean get();
	}
	property Boolean StartTls
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^TlsCipherSuite
	{
		Platform::String ^get();
	}
	property Platform::String ^TlsPinSet
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TlsVersion
	{
		Platform::String ^get();
	}
	property int32 UidNext
	{
		int32 get();
	}
	property int32 UidValidity
	{
		int32 get();
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxBytes, Platform::String ^pfxPassword);

	Boolean AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^pfxPassword);

	IAsyncOperation<Boolean>^ AppendMailAsync(Platform::String ^mailbox, Chilkat::Email ^email);

	IAsyncOperation<Boolean>^ AppendMimeAsync(Platform::String ^mailbox, Platform::String ^mimeText);

	IAsyncOperation<Boolean>^ AppendMimeWithDateStrAsync(Platform::String ^mailbox, Platform::String ^mimeText, Platform::String ^internalDateStr);

	IAsyncOperation<Boolean>^ AppendMimeWithFlagsAsync(Platform::String ^mailbox, Platform::String ^mimeText, Boolean seen, Boolean flagged, Boolean answered, Boolean draft);

	IAsyncOperation<Boolean>^ AppendMimeWithFlagsSbAsync(Platform::String ^mailbox, Chilkat::StringBuilder ^sbMime, Boolean seen, Boolean flagged, Boolean answered, Boolean draft);

	IAsyncOperation<Platform::String ^>^ CapabilityAsync(void);

	Boolean CheckConnection(void);

	IAsyncOperation<MessageSet ^>^ CheckForNewEmailAsync(void);

	void ClearSessionLog(void);

	IAsyncOperation<Boolean>^ CloseMailboxAsync(Platform::String ^mailbox);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^domainName);

	IAsyncOperation<Boolean>^ CopyAsync(int msgId, Boolean bUid, Platform::String ^copyToMailbox);

	IAsyncOperation<Boolean>^ CopyMultipleAsync(Chilkat::MessageSet ^messageSet, Platform::String ^copyToMailbox);

	IAsyncOperation<Boolean>^ CopySequenceAsync(int startSeqNum, int count, Platform::String ^copyToMailbox);

	IAsyncOperation<Boolean>^ CreateMailboxAsync(Platform::String ^mailbox);

	IAsyncOperation<Boolean>^ DeleteMailboxAsync(Platform::String ^mailbox);

	IAsyncOperation<Boolean>^ DisconnectAsync(void);

	IAsyncOperation<Boolean>^ ExamineMailboxAsync(Platform::String ^mailbox);

	IAsyncOperation<Boolean>^ ExpungeAsync(void);

	IAsyncOperation<Boolean>^ ExpungeAndCloseAsync(void);

	IAsyncOperation<Boolean>^ FetchAttachmentAsync(Chilkat::Email ^emailObject, int attachmentIndex, Platform::String ^saveToPath);

	IAsyncOperation<Boolean>^ FetchAttachmentBdAsync(Chilkat::Email ^email, int attachmentIndex, Chilkat::BinData ^binData);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ FetchAttachmentBytesAsync(Chilkat::Email ^email, int attachIndex);

	IAsyncOperation<Boolean>^ FetchAttachmentSbAsync(Chilkat::Email ^email, int attachmentIndex, Platform::String ^charset, Chilkat::StringBuilder ^sb);

	IAsyncOperation<Platform::String ^>^ FetchAttachmentStringAsync(Chilkat::Email ^emailObject, int attachmentIndex, Platform::String ^charset);

	IAsyncOperation<EmailBundle ^>^ FetchBundleAsync(Chilkat::MessageSet ^messageSet);

	IAsyncOperation<StringArray ^>^ FetchBundleAsMimeAsync(Chilkat::MessageSet ^messageSet);

	IAsyncOperation<EmailBundle ^>^ FetchChunkAsync(int startSeqNum, int count, Chilkat::MessageSet ^failedSet, Chilkat::MessageSet ^fetchedSet);

	IAsyncOperation<Platform::String ^>^ FetchFlagsAsync(int msgId, Boolean bUid);

	IAsyncOperation<EmailBundle ^>^ FetchHeadersAsync(Chilkat::MessageSet ^messageSet);

	IAsyncOperation<EmailBundle ^>^ FetchSequenceAsync(int startSeqNum, int numMessages);

	IAsyncOperation<StringArray ^>^ FetchSequenceAsMimeAsync(int startSeqNum, int numMessages);

	IAsyncOperation<EmailBundle ^>^ FetchSequenceHeadersAsync(int startSeqNum, int numMessages);

	IAsyncOperation<Email ^>^ FetchSingleAsync(int msgId, Boolean bUid);

	IAsyncOperation<Platform::String ^>^ FetchSingleAsMimeAsync(int msgId, Boolean bUid);

	IAsyncOperation<Boolean>^ FetchSingleAsMimeSbAsync(int msgId, Boolean bUid, Chilkat::StringBuilder ^sbMime);

	IAsyncOperation<Email ^>^ FetchSingleHeaderAsync(int msgId, Boolean bUid);

	IAsyncOperation<Platform::String ^>^ FetchSingleHeaderAsMimeAsync(int msgId, Boolean bUID);

	IAsyncOperation<MessageSet ^>^ GetAllUidsAsync(void);

	Platform::String ^GetMailAttachFilename(Chilkat::Email ^email, int attachIndex);

	int GetMailAttachSize(Chilkat::Email ^email, int attachIndex);

	IAsyncOperation<Platform::String ^>^ GetMailboxStatusAsync(Platform::String ^mailbox);

	int GetMailFlag(Chilkat::Email ^email, Platform::String ^flagName);

	int GetMailNumAttach(Chilkat::Email ^email);

	int GetMailSize(Chilkat::Email ^email);

	IAsyncOperation<Platform::String ^>^ GetQuotaAsync(Platform::String ^quotaRoot);

	IAsyncOperation<Platform::String ^>^ GetQuotaRootAsync(Platform::String ^mailboxName);

	Cert ^GetSslServerCert(void);

	Boolean HasCapability(Platform::String ^name, Platform::String ^capabilityResponse);

	IAsyncOperation<Platform::String ^>^ IdleCheckAsync(int timeoutMs);

	IAsyncOperation<Boolean>^ IdleDoneAsync(void);

	IAsyncOperation<Boolean>^ IdleStartAsync(void);

	Boolean IsConnected(void);

	Boolean IsLoggedIn(void);

	Boolean IsUnlocked(void);

	IAsyncOperation<Mailboxes ^>^ ListMailboxesAsync(Platform::String ^reference, Platform::String ^wildcardedMailbox);

	IAsyncOperation<Mailboxes ^>^ ListSubscribedAsync(Platform::String ^reference, Platform::String ^wildcardedMailbox);

	IAsyncOperation<Boolean>^ LoginAsync(Platform::String ^loginName, Platform::String ^password);

	IAsyncOperation<Boolean>^ LogoutAsync(void);

	IAsyncOperation<Boolean>^ MoveMessagesAsync(Chilkat::MessageSet ^messageSet, Platform::String ^destFolder);

	IAsyncOperation<Boolean>^ NoopAsync(void);

	IAsyncOperation<Boolean>^ RefetchMailFlagsAsync(Chilkat::Email ^email);

	IAsyncOperation<Boolean>^ RenameMailboxAsync(Platform::String ^fromMailbox, Platform::String ^toMailbox);

	IAsyncOperation<MessageSet ^>^ SearchAsync(Platform::String ^criteria, Boolean bUid);

	IAsyncOperation<Boolean>^ SelectMailboxAsync(Platform::String ^mailbox);

	IAsyncOperation<Platform::String ^>^ SendRawCommandAsync(Platform::String ^cmd);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SendRawCommandBAsync(Platform::String ^cmd);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SendRawCommandCAsync(Windows::Foundation::Collections::IVector<uint8>^cmd);

	Boolean SetDecryptCert(Chilkat::Cert ^cert);

	Boolean SetDecryptCert2(Chilkat::Cert ^cert, Chilkat::PrivateKey ^key);

	IAsyncOperation<Boolean>^ SetFlagAsync(int msgId, Boolean bUid, Platform::String ^flagName, int value);

	IAsyncOperation<Boolean>^ SetFlagsAsync(Chilkat::MessageSet ^messageSet, Platform::String ^flagName, int value);

	IAsyncOperation<Boolean>^ SetMailFlagAsync(Chilkat::Email ^email, Platform::String ^flagName, int value);

	IAsyncOperation<Boolean>^ SetQuotaAsync(Platform::String ^quotaRoot, Platform::String ^resource, int quota);

	Boolean SetSslClientCert(Chilkat::Cert ^cert);

	Boolean SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword);

	Boolean SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword);

	IAsyncOperation<Boolean>^ SshAuthenticatePkAsync(Platform::String ^sshLogin, Chilkat::SshKey ^privateKey);

	IAsyncOperation<Boolean>^ SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword);

	IAsyncOperation<Boolean>^ SshCloseTunnelAsync(void);

	IAsyncOperation<Boolean>^ SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort);

	IAsyncOperation<Boolean>^ StoreFlagsAsync(int msgId, Boolean bUid, Platform::String ^flagNames, int value);

	IAsyncOperation<Boolean>^ SubscribeAsync(Platform::String ^mailbox);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<Boolean>^ UnsubscribeAsync(Platform::String ^mailbox);

	Boolean UseCertVault(Chilkat::XmlCertVault ^vault);

	Boolean UseSsh(Chilkat::Ssh ^ssh);

	Boolean UseSshTunnel(Chilkat::Socket ^tunnel);



};




private class CxImapProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Imap ^m_sender;
	CkImapW *m_impl;
	
    private:
	 	CxImapProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxImapProgress(CkImapW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxImapProgress(void)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(0);
	    m_impl = 0;
	    }


	// overrides for CkBaseProgressW methods
	void AbortCheck(bool *abort) 
	    { 
	    // if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FireAbortCheck(abort);
	    }

	void PercentDone(int pctDone, bool *abort) 
	    { 
	    // if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FirePercentDone(pctDone,abort);
	    }

	void ProgressInfo(const wchar_t *name, const wchar_t *value) 
	    { 
	    if (m_sender == nullptr) return;
	    Platform::String ^s1 = ref new Platform::String(name);
	    Platform::String ^s2 = ref new Platform::String(value);
		m_sender->FireProgressInfo(s1,s2);
	    }






    };







}


