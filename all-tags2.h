//#define TAG_DEFINE_346342354254643(tag, name, description, source, format, templ, lenm, lenM, pc, example)

TAG_DEFINE_346342354254643( \
    "06", \
    "Object Identifier (OID)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "41", \
    "Country code and national data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "42", \
    "Issuer Identification Number (IIN)", \
    "The number that identifies the major industry and the card issuer and that forms the first part of the Primary Account Number (PAN)", \
    "Card", \
    "n 6", \
    "'BF0C' or '73'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "42", \
    "Issuer Identification Number (IIN)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "43", \
    "Card service data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "44", \
    "Initial access data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "45", \
    "Card issuer`s data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "46", \
    "Pre-issuing data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "47", \
    "Card capabilities", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "48", \
    "Status information", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "4D", \
    "Extended header list", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "4F", \
    "Application Identifier (ADF Name)", \
    "The ADF Name identifies the application as described in [ISO 7816-5]. The AID is made up of the Registered Application Provider Identifier (RID) and the Proprietary Identifier Extension (PIX).", \
    "Card", \
    "binary 40-128", \
    "'61'", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "50", \
    "Application Label", \
    "Mnemonic associated with the AID according to ISO/IEC 7816-5", \
    "Card", \
    "ans with the special character limited to space", \
    "'61' or 'A5'", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "50", \
    "Application Label", \
    "Mnemonic associated with AID according to [ISO 7816-5]. Used in application selection. Application Label is optional in the File Control Information (FCI) of an Application Definition File (ADF) and optional in an ADF directory entry.", \
    "Card", \
    "ans 1-16 (special characters limited to spaces)", \
    "", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "50", \
    "Application Label", \
    "Mnemonic associated with the AID according to ISO/IEC 7816-5 (with the special character limited to space).", \
    "Card", \
    "ans 1-16 (special characters limited to spaces)", \
    "", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "51", \
    "Path", \
    "A path may reference any file. It is a concatenation of file identifiers. The path begins with the identifier of a DF (the MF for an absolute path or the current DF for a relative path) and ends with the identifier of the file itself.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "52", \
    "Command to perform", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "53", \
    "Discretionary data, discretionary template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "56", \
    "Track 1 Data", \
    "Track 1 Data contains the data objects of the track 1 according to [ISO/IEC 7813] Structure B, excluding start sentinel, end sentinel and LRC. The Track 1 Data may be present in the file read using the READ RECORD command during a mag-stripe mode transaction.", \
    "", \
    "ans", \
    "", \
    "0", \
    "76", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "56", \
    "Track 1 Equivalent Data", \
    "", \
    "Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "57", \
    "Track 2 Equivalent Data", \
    "Contains the data objects of the track 2, in accordance with [ISO/IEC 7813], excluding start sentinel, end sentinel, and LRC.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "19", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "57", \
    "Track 2 Equivalent Data", \
    "Contains the data elements of track 2 according to ISO/IEC 7813, excluding start sentinel, end sentinel, and Longitudinal Redundancy Check (LRC), as follows:" \
    "-Primary Account Number" \
    "-Field Separator (Hex 'D')" \
    "-Expiration Date (YYMM)" \
    "-Service Code" \
    "-Discretionary Data (defined by individual payment systems)" \
    "-Pad with one Hex 'F' if needed to ensure whole bytes", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "19", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "57", \
    "Track 2 Equivalent Data", \
    "Contains the data elements of track 2 according to ISO/IEC 7813, excluding start sentinel, end sentinel, and Longitudinal Redundancy Check (LRC), as follows:" \
    "-Primary Account Number" \
    "-Field Separator (Hex 'D')" \
    "-Expiration Date (YYMM)" \
    "-Service Code" \
    "-Discretionary Data (defined by individual payment systems)" \
    "-Pad with one Hex 'F' if needed to ensure whole bytes", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "19", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "57", \
    "Track 2 Equivalent Data", \
    "Image of magnetic stripe Track 2. (For Kernel 4, Track 2 Equivalent Data may not be an exact image of magnetic stripe Track 2.)", \
    "Card", \
    "cn", \
    "'70' or '77'", \
    "0", \
    "19", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "57", \
    "Track 2 Equivalent Data", \
    "Contains the data elements of track 2 according to ISO/IEC 7813, excluding start sentinel, end sentinel, and Longitudinal Redundancy Check (LRC).", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "19", \
    "19", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "58", \
    "Track 3 Equivalent Data", \
    "", \
    "Card", \
    "binary", \
    "", \
    "", \
    "", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "59", \
    "Card expiration date", \
    "", \
    "Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5A", \
    "Application Primary Account Number (PAN)", \
    "Valid cardholder account number", \
    "Card", \
    "cn variable up to 19", \
    "'70' or '77'", \
    "0", \
    "10", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5A", \
    "Application Primary Account Number (PAN)", \
    "Cardholder account number. READ RECORD For transactions where Offline Data Authentication is performed, the Application PAN is returned. For transactions where Offline Data Authentication is not performed, the Application PAN does not need to be returned.", \
    "Card", \
    "cn variable up to 19", \
    "'70' or '77'", \
    "0", \
    "10", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5A", \
    "Application Primary Account Number (PAN)", \
    "Card Number. The Primary Account Number must be maintained as the same value for both the Kernel 4 mag-stripe mode and the EMV mode.", \
    "Card", \
    "cn variable up to 19", \
    "'70' or '77'", \
    "var. up to 10", \
    "var. up to 10", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5A", \
    "Application Primary Account Number (PAN)", \
    "Valid cardholder account number", \
    "Card", \
    "cn variable up to 19", \
    "'70' or '77'", \
    "var. up to 10", \
    "var. up to 10", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5B", \
    "Name of an individual", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5C", \
    "Tag list", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5D", \
    "Deleted (see 9D)", \
    "", \
    "Terminal", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5D", \
    "Header list", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5E", \
    "Proprietary login data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F20", \
    "Cardholder Name", \
    "Indicates cardholder name according to ISO 7813", \
    "Card", \
    "ans 2-26", \
    "'70' or '77'", \
    "2", \
    "26", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F20", \
    "Cardholder Name", \
    "Indicates cardholder name according to ISO 7813", \
    "Card", \
    "ans 2-26", \
    "'70' or '77'", \
    "2", \
    "26", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F20", \
    "Cardholder Name", \
    "Indicates cardholder name according to ISO 7813", \
    "Card", \
    "ans 2-26", \
    "'70' or '77'", \
    "2", \
    "26", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F20", \
    "Cardholder Name", \
    "Indicates cardholder name according to ISO 7813", \
    "Card", \
    "ans 2-26", \
    "'70' or '77'", \
    "2", \
    "26", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F21", \
    "Track 1, identical to the data coded", \
    "", \
    "Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F22", \
    "Track 2, identical to the data coded", \
    "", \
    "Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F23", \
    "Track 3, identical to the data coded", \
    "", \
    "Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F24", \
    "Application Expiration Date", \
    "Date after which application expires. The date is expressed in the YYMMDD format. For MasterCard applications, if the value of YY ranges from '00' to '49' the date reads 20YYMMDD. If the value of YY ranges from '50' to '99' the date reads 19YYMMDD.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F24", \
    "Application Expiration Date", \
    "Date after which the card application expires. For transactions where Offline Data Authentication is performed, the Application Expiration Date is returned. For transactions where Offline Data Authentication is not performed, the Application Expiration Date does not need to be returned.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F24", \
    "Application Expiration Date", \
    "Date after which the card application expires.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F24", \
    "Application Expiration Date", \
    "Date after which application expires. It shall be present for EMV Mode and Legacy Mode.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F25", \
    "Application Effective Date", \
    "Date from which the application may be used. The date is expressed in the YYMMDD format. For MasterCard branded applications if the value of YY ranges from '00' to '49' the date reads 20YYMMDD. If the value of YY ranges from '50' to '99', the date reads 19YYMMDD.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F25", \
    "Application Effective Date", \
    "Date from which the application may be used. The date is expressed in the YYMMDD format.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F25", \
    "Application Effective Date", \
    "Date from which the application may be used. The date is expressed in the YYMMDD format.", \
    "Card", \
    "n 6 (YYMMDD)", \
    "'70' or '77'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F26", \
    "Date, Card Effective", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F27", \
    "Interchange control", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F28", \
    "Issuer Country Code", \
    "Indicates the country of the issuer according to ISO 3166-1", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F28", \
    "Issuer Country Code", \
    "Indicates the country of the issuer according to ISO 3166-1", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F28", \
    "Issuer Country Code", \
    "Indicates the country of the issuer according to ISO 3166-1", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F28", \
    "Issuer Country Code", \
    "Indicates the country of the issuer according to ISO 3166-1", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F29", \
    "Interchange profile", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2A", \
    "Transaction Currency Code", \
    "Indicates the currency code of the transaction according to ISO 4217", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "0978")
TAG_DEFINE_346342354254643( \
    "5F2A", \
    "Transaction Currency Code", \
    "Indicates the currency code of the transaction according to ISO 4217", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "0978")
TAG_DEFINE_346342354254643( \
    "5F2A", \
    "Transaction Currency Code", \
    "Indicates the currency code of the transaction according to [ISO 4217]. The implied exponent is indicated by the minor unit of currency associated with the Transaction Currency Code in [ISO 4217].", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "0978")
TAG_DEFINE_346342354254643( \
    "5F2A", \
    "Transaction Currency Code", \
    "Indicates the currency code of the transaction according to [ISO 4217]", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "0978")
TAG_DEFINE_346342354254643( \
    "5F2A", \
    "Transaction Currency Code", \
    "Indicates the currency code of the transaction according to ISO 4217. Requested in CDOL1.", \
    "Configuration (POS)", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "0978")
TAG_DEFINE_346342354254643( \
    "5F2B", \
    "Date of birth", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2C", \
    "Cardholder nationality", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2D", \
    "Language Preference", \
    "1-4 languages stored in order of preference, each represented by 2 alphabetical characters according to ISO 639<br />Note: EMVCo strongly recommends that cards be personalised with data element '5F2D' coded in lowercase, but that terminals accept the data element whether it is coded in upper or lower case.", \
    "Card", \
    "an 2", \
    "'A5'", \
    "2", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2D", \
    "Language Preference", \
    "1-4 languages stored in order of preference, each represented by 2 lower case alphabetical characters according to ISO 639-1.", \
    "Card", \
    "an 2", \
    "'A5'", \
    "2", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2D", \
    "Language Preference", \
    "1-4 languages stored in order of preference, each represented by 2 lower case alphabetical characters according to ISO 639-1.", \
    "Card", \
    "an 2", \
    "'A5'", \
    "2", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2E", \
    "Cardholder biometric data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F2F", \
    "PIN usage policy", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F30", \
    "Service Code", \
    "Service code as defined in ISO/IEC 7813 for Track 1 and Track 2", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F30", \
    "Service Code", \
    "Contains the Service Code elements.", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F32", \
    "Transaction counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F33", \
    "Date, Transaction", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F34", \
    "Application Primary Account Number (PAN) Sequence Number (PSN)", \
    "Identifies and differentiates cards with the same Application PAN", \
    "Card", \
    "n 2", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F34", \
    "Application Primary Account Number (PAN) Sequence Number (PSN)", \
    "Identifies and differentiates cards with the same PAN", \
    "Card", \
    "n 2", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F34", \
    "Application Primary Account Number (PAN) Sequence Number (PSN)", \
    "Identifies and differentiates cards with the same PAN", \
    "Card", \
    "n 2", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F34", \
    "Application Primary Account Number (PAN) Sequence Number (PSN)", \
    "Identifies and differentiates cards (applications) with the same PAN", \
    "Card", \
    "n 2", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F34", \
    "Application Primary Account Number (PAN) Sequence Number (PSN)", \
    "Identifies and differentiates cards (applications) with the same PAN", \
    "Card", \
    "n 2", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F35", \
    "Sex (ISO 5218)", \
    "Representation of human sexes through a language-neutral single-digit code (0 = not known, 1 = male, 2 = female, 9 = not applicable)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F36", \
    "Transaction Currency Exponent", \
    "Identifies the decimal point position from the right of the transaction amount accordin to ISO 4217", \
    "Terminal", \
    "n 1", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F36", \
    "Transaction Currency Exponent", \
    "Indicates the implied position of the decimal point from the right of the transaction amount represented according to ISO 4217. Required to determine if Status Check is requested.", \
    "Configuration (POS)", \
    "n 1", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F37", \
    "Static internal authentication (one-step)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F38", \
    "Static internal authentication - first associated data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F39", \
    "Static internal authentication - second associated data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F3A", \
    "Dynamic internal authentication", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F3B", \
    "Dynamic external authentication", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F3C", \
    "Transaction Reference Currency Code", \
    "Identifies the common currency used by the terminal", \
    "Terminal", \
    "binary 2", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F3C", \
    "Dynamic mutual authentication", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F3D", \
    "Transaction Reference Currency Exponent", \
    "Identifies the decimal point position from the right of the terminal common currency", \
    "Terminal", \
    "n 1", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F40", \
    "Cardholder portrait image", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F41", \
    "Element list", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F42", \
    "Address", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F43", \
    "Cardholder handwritten signature image", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F44", \
    "Application image", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F45", \
    "Display message", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F46", \
    "Timer", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F47", \
    "Message reference", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F48", \
    "Cardholder private key", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F49", \
    "Cardholder public key", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F4A", \
    "Public key of certification authority", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F4B", \
    "Deprecated (see note 2 below)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F4C", \
    "Certificate holder authorization", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F4D", \
    "Integrated circuit manufacturer identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F4E", \
    "Certificate content", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "5F50", \
    "Issuer Uniform resource locator (URL)", \
    "The URL provides the location of the Issuer's Library Server on the Internet.", \
    "Card", \
    "ans", \
    "'BF0C' or '73'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F53", \
    "International Bank Account Number (IBAN)", \
    "Uniquely identifies the account of a customer at a financial institution as defined in ISO 13616.", \
    "Card", \
    "variable", \
    "'BF0C' or '73'", \
    "0", \
    "34", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F54", \
    "Bank Identifier Code (BIC)", \
    "Uniquely identifies a bank as defined in ISO 9362.", \
    "Card", \
    "variable", \
    "'BF0C' or '73'", \
    "8 or 11", \
    "8 or 11", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F55", \
    "Issuer Country Code (alpha2 format)", \
    "Indicates the country of the issuer as defined in ISO 3166 (using a 2 character alphabetic code)", \
    "Card", \
    "a 2", \
    "'BF0C' or '73'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F56", \
    "Issuer Country Code (alpha3 format)", \
    "Indicates the country of the issuer as defined in ISO 3166 (using a 3 character alphabetic code)", \
    "Card", \
    "a 3", \
    "'BF0C' or '73'", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "5F57", \
    "Account Type", \
    "Indicates the type of account selected on the terminal, coded as specified in Annex G", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "60", \
    "Template, Dynamic Authentication", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6080", \
    "Commitment (e.g., a positive number less than the public RSA modulus in use)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6081", \
    "Challenge (e.g., a number, possibly zero, less than the public RSA exponent in use)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6082", \
    "Response (e.g., a positive number less than the public RSA modulus in use)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6083", \
    "Committed challenge (e.g., the hash-code of a commitment data object)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6084", \
    "Authentication code (e.g., the hash-code of one or more data fields and a commitment data object)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6085", \
    "Exponential (e.g., a public positive number for establishing a session key by a DH method)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "60A0", \
    "Template, Identification data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "61", \
    "Application Template", \
    "Template containing one or more data objects relevant to an application directory entry according to [ISO 7816-5].", \
    "Card", \
    "binary", \
    "'70'", \
    "var. up to 252", \
    "var. up to 252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "61", \
    "Directory Entry", \
    "Contains one or more data objects relevant to an application directory entry according to [ISO 7816-5].", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62", \
    "File Control Parameters (FCP) Template", \
    "Identifies the FCP template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "", \
    "var. up to 252", \
    "var. up to 252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "6280", \
    "Number of data bytes in the file, excluding structural information", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6281", \
    "Number of data bytes in the file, including structural information if any", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6282", \
    "File descriptor byte", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6283", \
    "File identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6284", \
    "DF name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6285", \
    "Proprietary information, primitive encoding (i.e., not coded in BER-TLV)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6286", \
    "Security attribute in proprietary format", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6287", \
    "Identifier of an EF containing an extension of the file control information", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6288", \
    "Short EF identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "628A", \
    "Life cycle status byte (LCS)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "628B", \
    "Security attribute referencing the expanded format", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "628C", \
    "Security attribute in compact format", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "628D", \
    "Identifier of an EF containing security environment templates", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62A0", \
    "Template, Security attribute for data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62A1", \
    "Template, Security attribute for physical interfaces", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62A2", \
    "One or more pairs of data objects, short EF identifier (tag 88) - absolute or relative path (tag 51)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62A5", \
    "Proprietary information, constructed encoding", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62AB", \
    "Security attribute in expanded format", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "62AC", \
    "Identifier of a cryptographic mechanism", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "63", \
    "Wrapper", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "64", \
    "Template, File Management Data (FMD)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "65", \
    "Cardholder related data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "66", \
    "Template, Card data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "67", \
    "Template, Authentication data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "68", \
    "Special user requirements", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A", \
    "Template, Login", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A80", \
    "Qualifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A81", \
    "Telephone Number", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A82", \
    "Text", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A83", \
    "Delay indicators, for detecting an end of message", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6A84", \
    "Delay indicators, for detecting an absence of response", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6B", \
    "Template, Qualified name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6B06", \
    "Qualified name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6B80", \
    "Name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6BA0", \
    "Name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6C", \
    "Template, Cardholder image", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6D", \
    "Template, Application image", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6E", \
    "Application related data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6F", \
    "File Control Information (FCI) Template", \
    "Identifies the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "", \
    "0", \
    "252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "6F", \
    "File Control Information (FCI) Template", \
    "Identifies the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "", \
    "0", \
    "252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "6F", \
    "File Control Information (FCI) Template", \
    "Identifies the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "", \
    "0", \
    "252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "6F", \
    "Template, File Control Parameters and File Management Data (FCI)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "6FA5", \
    "Template, FCI A5", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "70", \
    "READ RECORD Response Message Template", \
    "Template containing the data objects returned by the Card in response to a READ RECORD command. Contains the contents of the record read. (Mandatory for SFIs 1-10. Response messages for SFIs 11-30 are outside the scope of EMV, but may use template '70')", \
    "Card", \
    "variable", \
    "", \
    "0", \
    "255", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "70", \
    "READ RECORD Response Message Template", \
    "Contains the contents of the record read. (Mandatory for SFIs 1-10. Response messages for SFIs 11-30 are outside the scope of EMV, but may use template '70')", \
    "Card", \
    "variable", \
    "", \
    "var. up to 252", \
    "var. up to 252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "70", \
    "Template, AEF Data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "71", \
    "Issuer Script Template 1", \
    "Contains proprietary issuer data for transmission to the ICC before the second GENERATE AC command", \
    "Issuer", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "71", \
    "Issuer Script Template 1", \
    "Contains proprietary issuer data for transmission to the ICC before the second GENERATE AC command", \
    "Issuer", \
    "binary", \
    "", \
    "var. up to 128", \
    "var. up to 128", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "71", \
    "Template, Issuer Script 1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7186", \
    "Issuer Script Command", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "719F18", \
    "Issuer Script Identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "72", \
    "Issuer Script Template 2", \
    "Contains proprietary issuer data for transmission to the ICC after the second GENERATE AC command", \
    "Issuer", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "72", \
    "Issuer Script Template 2", \
    "Contains proprietary issuer data for transmission to the ICC after the second GENERATE AC command", \
    "Issuer", \
    "binary", \
    "", \
    "var. up to 128", \
    "var. up to 128", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "72", \
    "Template, Issuer Script 2", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "73", \
    "Directory Discretionary Template", \
    "Issuer discretionary part of the directory according to ISO/IEC 7816-5", \
    "Card", \
    "variable", \
    "'61'", \
    "0", \
    "252", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "77", \
    "Response Message Template Format 2", \
    "Contains the data objects (with tags and lengths) returned by the ICC in response to a command", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "77", \
    "Response Message Template Format 2", \
    "Contains the data objects (with tags and lengths) returned by the card in response to a command.", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "77", \
    "Response Message Template Format 2", \
    "Contains the data objects (with tags and lengths) returned by the ICC in response to a command", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "77", \
    "Template, Response Message Format 2", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "78", \
    "Compatible Tag Allocation Authority", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "79", \
    "Coexistent Tag Allocation Authority", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A", \
    "Template, Security Support (SS)", \
    "see 6.4", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A80", \
    "Card session counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A81", \
    "Session identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A82", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A83", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A84", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A85", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A86", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A87", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A88", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A89", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A8A", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A8B", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A8C", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A8D", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A8E", \
    "File selection counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A93", \
    "Digital signature counter", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A9F2X", \
    "Internal progression value ('X'-is a specific index, e.g., an index referencing a counter of file selections)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7A9F3Y", \
    "External progression value ('Y'-is a specific index, e.g., an index referencing an external time stamp)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7B", \
    "Template, Security Environment (SE)", \
    "see 6.5", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7B80", \
    "SEID byte, mandatory", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7B8A", \
    "LCS byte, optional", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BAC", \
    "Cryptographic mechanism identifier template, optional", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BA4", \
    "Control reference template (CRT)", \
    "see 6.3.1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BAA", \
    "Control reference template (CRT)", \
    "see 6.3.1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BB4", \
    "Control reference template (CRT)", \
    "see 6.3.1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BB6", \
    "Control reference template (CRT)", \
    "see 6.3.1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7BB8", \
    "Control reference template (CRT)", \
    "see 6.3.1", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D", \
    "Template, Secure Messaging (SM)", \
    "see 6", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D80", \
    "Plain value not coded in BER-TLV", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D81", \
    "Plain value not coded in BER-TLV", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D82", \
    "Cryptogram (plain value coded in BER-TLV and including secure messaging data objects)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D83", \
    "Cryptogram (plain value coded in BER-TLV and including secure messaging data objects)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D84", \
    "Cryptogram (plain value coded in BER-TLV, but not including secure messaging data objects)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D85", \
    "Cryptogram (plain value coded in BER-TLV, but not including secure messaging data objects)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D86", \
    "Padding-content indicator byte followed by cryptogram (plain value not coded in BER-TLV)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D87", \
    "Padding-content indicator byte followed by cryptogram (plain value not coded in BER-TLV)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D8E", \
    "Cryptographic checksum (at least four bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D90", \
    "Hash-code", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D91", \
    "Hash-code", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D92", \
    "Certificate (not BER-TLV coded data)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D93", \
    "Certificate (not BER-TLV coded data)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D94", \
    "Security environment identifier (SEID byte, see 6.5)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D95", \
    "Security environment identifier (SEID byte, see 6.5)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D96", \
    "Number Le in the unsecured command APDU (one or two bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D97", \
    "Number Le in the unsecured command APDU (one or two bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D99", \
    "Processing status of the secured response APDU (new SW1-SW2, two bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D9A", \
    "Input data element for the computation of a digital signature (the value field is signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D9B", \
    "Input data element for the computation of a digital signature (the value field is signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D9C", \
    "Public key", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D9D", \
    "Public key", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7D9E", \
    "Digital signature", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA0", \
    "Input template for the computation of a hash-code (the template is hashed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA1", \
    "Input template for the computation of a hash-code (the template is hashed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA2", \
    "Input template for the verification of a cryptographic checksum (the template is integrated)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA4", \
    "Control reference template for authentication (AT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA5", \
    "Control reference template for authentication (AT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DA8", \
    "Input template for the verification of a digital signature (the template is signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAA", \
    "Template, Control reference for hash-code (HT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAB", \
    "Template, Control reference for hash-code (HT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAC", \
    "Input template for the computation of a digital signature (the concatenated value fields are signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAD", \
    "Input template for the computation of a digital signature (the concatenated value fields are signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAE", \
    "Input template for the computation of a certificate (the concatenated value fields are certified)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DAF", \
    "Input template for the computation of a certificate (the concatenated value fields are certified)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB0", \
    "Plain value coded in BER-TLV and including secure messaging data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB1", \
    "Plain value coded in BER-TLV and including secure messaging data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB2", \
    "Plain value coded in BER-TLV, but not including secure messaging data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB3", \
    "Plain value coded in BER-TLV, but not including secure messaging data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB4", \
    "Control reference template for cryptographic checksum (CCT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB5", \
    "Control reference template for cryptographic checksum (CCT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB6", \
    "Control reference template for digital signature (DST)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB7", \
    "Control reference template for digital signature (DST)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB8", \
    "Control reference template for confidentiality (CT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DB9", \
    "Control reference template for confidentiality (CT)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DBA", \
    "Response descriptor template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DBB", \
    "Response descriptor template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DBC", \
    "Input template for the computation of a digital signature (the template is signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DBD", \
    "Input template for the computation of a digital signature (the template is signed)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7DBE", \
    "Input template for the verification of a certificate (the template is certified)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7E", \
    "Template, Nesting Interindustry data objects", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F20", \
    "Display control template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F21", \
    "Cardholder certificate", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F2E", \
    "Biometric data template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F49", \
    "Template, Cardholder public key", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4980", \
    "Algorithm reference as used in control reference data objects for secure messaging", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4981", \
    "RSA Modulus (a number denoted as n coded on x bytes), or DSA First prime (a number denoted as p coded on y bytes), or ECDSA Prime (a number denoted as p coded on z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4982", \
    "RSA Public exponent (a number denoted as v, e.g., 65537), or DSA Second prime (a number denoted as q dividing p-1, e.g., 20 bytes), or ECDSA First coefficient (a number denoted as a coded on z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4983", \
    "DSA Basis (a number denoted as g of order q coded on y bytes), or ECDSA Second coefficient (a number denoted as b coded on z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4984", \
    "DSA Public key (a number denoted as y equal to g to the power x mod p where x is the private key coded on y bytes), or ECDSA Generator (a point denoted as PB on the curve, coded on 2z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4985", \
    "ECDSA Order (a prime number denoted as q, order of the generator PB, coded on z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4986", \
    "ECDSA Public key (a point denoted as PP on the curve, equal to x times PB where x is the private key, coded on 2z bytes)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4C", \
    "Template, Certificate Holder Authorization", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E", \
    "Certificate Body", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E42", \
    "Certificate Authority Reference", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E5F20", \
    "Certificate Holder Reference", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E5F24", \
    "Expiration Date, Certificate", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E5F25", \
    "Effective Date, Certificate", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E5F29", \
    "Certificate Profile Identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F4E65", \
    "Certificate Extensions", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "7F60", \
    "Template, Biometric information", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "80", \
    "Response Message Template Format 1", \
    "Contains the data objects (without tags and lengths) returned by the ICC in response to a command", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "80", \
    "Response Message Template Format 1", \
    "Contains the data objects (without tags and lengths) returned by the card in response to a command.", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "80", \
    "Response Message Template Format 1", \
    "Contains the data objects (without tags and lengths) returned by the ICC in response to a command", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "80", \
    "Response Message Template Format 1", \
    "Contains the data objects (without tags and lengths) returned by the ICC in response to a command", \
    "Card", \
    "variable", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "81", \
    "Amount, Authorised (Binary)", \
    "Authorised amount of the transaction (excluding adjustments)", \
    "Terminal", \
    "binary", \
    "", \
    "4", \
    "4", \
    "primitive", \
    "00010000")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application. Kernel 3 shall not act on AIP bit settings that are not supported for Kernel 3 or that are Reserved for Future Use (RFU).", \
    "Card", \
    "binary 16", \
    "'77' or '80'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application.", \
    "Card", \
    "binary 16", \
    "'77' or '80'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "82", \
    "Application Interchange Profile (AIP)", \
    "Indicates the capabilities of the card to support specific functions in the application.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "83", \
    "Command Template", \
    "Identifies the data field of a command message", \
    "Terminal", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "83", \
    "Command Template", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "84", \
    "Dedicated File (DF) Name", \
    "Identifies the name of the DF as described in ISO/IEC 7816-4", \
    "Card", \
    "binary", \
    "'6F'", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "84", \
    "Dedicated File (DF) Name", \
    "Identifies the name of the DF as described in ISO/IEC 7816-4", \
    "Card", \
    "binary 40-128", \
    "", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "84", \
    "Dedicated File (DF) Name", \
    "Identifies the name of the DF as described in ISO/IEC 7816-4", \
    "Card", \
    "binary", \
    "", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "84", \
    "Dedicated File (DF) Name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "86", \
    "Issuer Script Command", \
    "Contains a command for transmission to the ICC", \
    "Issuer", \
    "binary", \
    "'71' or '72'", \
    "var. up to 125", \
    "var. up to 125", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "86", \
    "Issuer Script Command", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "87", \
    "Application Priority Indicator", \
    "Indicates the priority of a given application or group of applications in a directory", \
    "Card", \
    "binary", \
    "'61' or 'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "87", \
    "Application Priority Indicator", \
    "Indicates the priority of a given application or group of applications in a directory", \
    "Card", \
    "binary 8", \
    "'61' or 'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "87", \
    "Application Priority Indicator", \
    "Indicates the priority of a given application or group of applications in a directory", \
    "Card", \
    "binary 8", \
    "'61' or 'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "87", \
    "Application Priority Indicator", \
    "Indicates the priority of a given application or group of applications in a directory", \
    "Card", \
    "binary", \
    "'61' or 'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "87", \
    "Application Priority Indicator", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "88", \
    "Short File Identifier (SFI)", \
    "Identifies the AEF referenced in commands related to a given ADF or DDF. It is a binary data object having a value in the range 1 to 30 and with the three high order bits set to zero.", \
    "Card", \
    "binary", \
    "'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "88", \
    "Short File Identifier (SFI)", \
    "Identifies the SFI to be used in the commands related to a given AEF.", \
    "Card", \
    "binary 8", \
    "'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "88", \
    "Short File Identifier (SFI)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "89", \
    "Authorisation Code", \
    "Nonzero value generated by the issuer for an approved transaction.", \
    "Issuer", \
    "ans 6 (special characters limited to spaces)", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "89", \
    "Authorisation Code", \
    "Non-zero value generated by the Authorisation Systems for an approved transaction.", \
    "Issuer", \
    "an 6", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "89", \
    "Authorization Code", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "8A", \
    "Authorisation Response Code (ARC)", \
    "Indicates the transaction disposition of the transaction received from the issuer for online authorisations.", \
    "Issuer/Terminal", \
    "an 2", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8A", \
    "Authorisation Response Code (ARC)", \
    "Data element generated by the Issuer Host System or the Reader indicating the disposition of the transaction.", \
    "Issuer/Terminal", \
    "an 2", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8A", \
    "Authorisation Response Code (ARC)", \
    "Code that defines the disposition of a message. ARC must be present if the Kernel is restarted after an Online Request Outcome.", \
    "Issuer", \
    "an 2", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8A", \
    "Authorization Response Code (ARC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "8C", \
    "Card Risk Management Data Object List 1 (CDOL1)", \
    "List of data objects (tag and length) to be passed to the ICC in the first GENERATE AC command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8C", \
    "Card Risk Management Data Object List 1 (CDOL1)", \
    "List of data objects (tag and length) to be passed to the ICC in the first GENERATE AC command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 64", \
    "var. up to 64", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8C", \
    "Card Risk Management Data Object List 1 (CDOL1)", \
    "List of data objects (tag and length) to be passed to the ICC in the first GENERATE AC command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 252", \
    "var. up to 252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8C", \
    "Card Risk Management Data Object List 1 (CDOL1)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "8D", \
    "Card Risk Management Data Object List 2 (CDOL2)", \
    "List of data objects (tag and length) to be passed to the ICC in the second GENERATE AC command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 64", \
    "var. up to 64", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8D", \
    "Card Risk Management Data Object List 2 (CDOL2)", \
    "List of data objects (tag and length) to be passed to the ICC in the second GENERATE AC command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 252", \
    "var. up to 252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8D", \
    "Card Risk Management Data Object List 2 (CDOL2)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "8E", \
    "Cardholder Verification Method (CVM) List", \
    "Identifies a method of verification of the cardholder supported by the application", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "10", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8E", \
    "Cardholder Verification Method (CVM) List", \
    "Identifies a prioritised list of methods of verification of the cardholder supported by the card application.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 32", \
    "var. up to 32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8E", \
    "Cardholder Verification Method (CVM) List", \
    "Identifies a prioritised list of methods of verification of the cardholder supported by the card application.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 252", \
    "var. up to 252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8E", \
    "Cardholder Verification Method (CVM) List", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "8F", \
    "Certification Authority Public Key Index (PKI)", \
    "Identifies the certification authority's public key in conjunction with the RID", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8F", \
    "Certification Authority Public Key Index (PKI)", \
    "Identifies the Certificate Authority's public key in conjunction with the RID for use in offline data authentication.", \
    "Card", \
    "binary 8", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8F", \
    "Certification Authority Public Key Index (PKI)", \
    "Identifies the Certificate Authority's public key in conjunction with the RID for use in static data authentication.", \
    "Card", \
    "binary 8", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8F", \
    "Certification Authority Public Key Index (PKI)", \
    "Identifies the certification authority's public key in conjunction with the RID. Required for EMV Mode.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "8F", \
    "Certification Authority Public Key Index (PKI)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "90", \
    "Issuer Public Key Certificate", \
    "Issuer public key certified by a certification authority", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NCA)", \
    "var. (NCA)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "90", \
    "Issuer Public Key Certificate", \
    "Issuer's public key certified by a certificate authority for use in offline data authentication.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NCA)", \
    "var. (NCA)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "90", \
    "Issuer Public Key Certificate", \
    "Issuer's public key certified by a certificate authority for use in static data authentication.", \
    "Card", \
    "binary 512-1984", \
    "'70' or '77'", \
    "var. 64-248", \
    "var. 64-248", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "90", \
    "Issuer Public Key Certificate", \
    "Issuer public key certified by a certification authority", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NCA)", \
    "var. (NCA)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "90", \
    "Issuer Public Key Certificate", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "91", \
    "Issuer Authentication Data", \
    "Data sent to the ICC for online Issuer Authentication", \
    "Issuer", \
    "binary 64-128", \
    "", \
    "8", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "91", \
    "Issuer Authentication Data", \
    "Issuer data transmitted to card for online Issuer authentication.", \
    "Issuer", \
    "binary 64-128", \
    "", \
    "var. up to 16", \
    "var. up to 16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "91", \
    "Issuer Authentication Data", \
    "Data sent to the ICC for online Issuer Authentication", \
    "Issuer", \
    "binary", \
    "", \
    "8", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "91", \
    "Issuer Authentication Data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "92", \
    "Issuer Public Key Remainder", \
    "Remaining digits of the Issuer Public Key Modulus", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI - NCA + 36)", \
    "var. (NI - NCA + 36)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "92", \
    "Issuer Public Key Remainder", \
    "Portion of the Issuer Public Key Modulus which does not fit into the Issuer PK Certificate.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI - NCA + 36)", \
    "var. (NI - NCA + 36)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "92", \
    "Issuer Public Key Remainder", \
    "Remaining digits of the Issuer's public key to be hashed.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "92", \
    "Issuer Public Key Remainder", \
    "Remaining digits of the Issuer Public Key Modulus", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI - NCA + 36)", \
    "var. (NI - NCA + 36)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "92", \
    "Issuer Public Key Remainder", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "93", \
    "Signed Static Application Data (SAD)", \
    "Digital signature on critical application parameters that is used in static data authentication (SDA).", \
    "Card", \
    "binary 512-1984", \
    "'70' or '77'", \
    "64", \
    "248", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "93", \
    "Signed Static Application Data (SAD)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "94", \
    "Application File Locator (AFL)", \
    "Indicates the location (SFI range of records) of the Application Elementary Files associated with a particular AID, and read by the Kernel during a transaction.", \
    "Card", \
    "binary, var.; multiple of 4 between 4 and 252", \
    "'77' or '80'", \
    "4", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "94", \
    "Application File Locator (AFL)", \
    "Indicates the location (SFI, range of records) of the AEFs related to a given application.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "4", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "94", \
    "Application File Locator (AFL)", \
    "Indicates the location (SFI, range of records) of the AEFs related to a given application.", \
    "Card", \
    "variable", \
    "'77' or '80'", \
    "var. up to 64", \
    "var. up to 64", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "94", \
    "Application File Locator (AFL)", \
    "Indicates the location (SFI, range of records) of the AEFs related to a given application.", \
    "Card", \
    "variable", \
    "'77' or '80'", \
    "var. up to 252", \
    "var. up to 252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "94", \
    "Application File Locator (AFL)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "Status of the different functions as seen from the terminal", \
    "Terminal", \
    "", \
    "", \
    "6", \
    "6", \
    "", \
    "Always '00 00 00 00 00'")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "Status of the different functions from the Terminal perspective. The Terminal Verification Results is coded according to Annex C.5 of [EMV Book 3].", \
    "Terminal", \
    "binary", \
    "", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "Status of the different functions as seen from the reader/terminal. For EMV mode transactions, all of the TVR bits sent online to the acquirer shall be set to 0b.", \
    "Terminal", \
    "binary 40", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "Status of the different functions as seen from the terminal.", \
    "Terminal", \
    "binary 40", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "Status of the different functions as seen from the terminal.", \
    "Kernel 5", \
    "binary", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "95", \
    "Terminal Verification Results (TVR)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "97", \
    "Transaction Certificate Data Object List (TDOL)", \
    "List of data objects (tag and length) to be used by the terminal in generating the TC Hash Value", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "98", \
    "Transaction Certificate (TC) Hash Value", \
    "Result of a hash function specified in Book 2, Annex B3.1", \
    "Terminal", \
    "binary", \
    "", \
    "20", \
    "20", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "99", \
    "Transaction Personal Identification Number (PIN) Data", \
    "Data entered by the cardholder for the purpose of the PIN verification", \
    "Terminal", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "Local date that the transaction was authorised", \
    "Terminal", \
    "n 6 (YYMMDD)", \
    "", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "Local date that the transaction was performed.", \
    "Terminal", \
    "n 6 (YYMMDD)", \
    "", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "Local date that the transaction was authorised", \
    "Terminal", \
    "n 6 (YYMMDD)", \
    "", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "Local date that the transaction was authorised", \
    "Terminal", \
    "n 6 (YYMMDD)", \
    "", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "Local date that the transaction was authorised. Requested in CDOL1.", \
    "POS", \
    "n 6 (YYMMDD)", \
    "", \
    "3", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9A", \
    "Transaction Date", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9B", \
    "Transaction Status Information (TSI)", \
    "Indicates the functions performed in a transaction", \
    "Terminal", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "Indicates the type of financial transaction, represented by the first two digits of the ISO 8583:1987 Processing Code. The actual values to be used for the Transaction Type data element are defined by the relevant payment system", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "Always '00'")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "Indicates the type of financial transaction, represented by the first two digits of the ISO 8583:1993 Processing Code. The actual values to be used for the Transaction Type data element are defined by the relevant payment system.", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "Indicates the type of transaction, represented by the values of the first two digits of Processing Code as defined by the payment system.", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "Indicates the type of transaction, represented by the values of the first two digits of Processing Code as defined by the payment system.", \
    "Terminal/Reader", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "Indicates the type of financial transaction, represented by the first two digits of the ISO 8583:1987 Processing Code. Requested in CDOL1. Possible values are:<br />- '00' for a purchase transaction<br />- '01' for a cash advance transaction<br />- '09' for a purchase with cashback<br />- '20' for a refund transaction", \
    "POS", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9C", \
    "Transaction Type", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9D", \
    "Directory Definition File (DDF) Name", \
    "Identifies the name of a DF associated with a directory", \
    "Card", \
    "binary", \
    "'61'", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F01", \
    "Acquirer Identifier", \
    "Uniquely identifies the acquirer within each payment system", \
    "Terminal", \
    "n 6-11", \
    "", \
    "6", \
    "11", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F01", \
    "Acquirer Identifier", \
    "Uniquely identifies the acquirer within each payment system", \
    "Terminal", \
    "n 6-11", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F01", \
    "Acquirer Identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Amount, Authorised (Numeric)", \
    "Authorised amount of the transaction (excluding adjustments)", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "000000010000")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Amount, Authorised (Numeric)", \
    "Authorised amount of the transaction (excluding adjustments). This amount is expressed with implicit decimal point corresponding to the minor unit of currency as defined by [ISO 4217] (for example the six bytes '00 00 00 00 01 23' represent USD 1.23 when the currency code is '840'). If the initial transaction amount needs to be replaced with a revised transaction amount, the Terminal must provide it before the chokepoint.", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "000000010000")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Amount, Authorised (Numeric)", \
    "Authorised amount of the transaction (including Amount, Other and excluding adjustments).", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "000000010000")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Amount, Authorised (Numeric)", \
    "Authorised amount of the transaction (excluding adjustments).", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "000000010000")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Amount, Authorised (Numeric)", \
    "Authorised amount of the transaction. Requested in CDOL1.", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "000000010000")
TAG_DEFINE_346342354254643( \
    "9F02", \
    "Authorised Amount (Numeric)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "Secondary amount associated with the transaction representing a cashback amount", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "Always '00 00 00 00 00 00'")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "Secondary amount associated with the transaction representing a cash back amount. This amount is expressed with implicit decimal point corresponding to the minor unit of currency as defined by [ISO 4217] (for example the 6 bytes '00 00 00 00 01 23' represent GBP 1.23 when the currency code is '826').", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "Secondary amount associated with the transaction representing a cashback amount.", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "Secondary amount associated with the transaction representing a cashback amount.", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "Secondary amount associated with the transaction representing a cashback amount. Requested in CDOL1.", \
    "Terminal", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F03", \
    "Amount, Other (Numeric)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F04", \
    "Amount, Other (Binary)", \
    "Secondary amount associated with the transaction representing a cashback amount", \
    "Terminal", \
    "binary", \
    "", \
    "4", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F05", \
    "Application Discretionary Data", \
    "Issuer or payment system specified data relating to the application", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F06", \
    "Application Identifier (AID), Terminal", \
    "Identifies the application as described in ISO/IEC 7816-5", \
    "Terminal", \
    "binary", \
    "", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F06", \
    "Application Identifier (AID), Terminal", \
    "Identifies the application as described in ISO/IEC 7816-5", \
    "Terminal", \
    "binary 40-128", \
    "", \
    "5", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F07", \
    "Application Usage Control (AUC)", \
    "Indicates issuer's specified restrictions on the geographic usage and services allowed for the application", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F07", \
    "Application Usage Control (AUC)", \
    "Indicates issuer's specified restrictions on the geographic usage and services allowed for the card application.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F07", \
    "Application Usage Control (AUC)", \
    "Indicates issuer's specified restrictions on the geographic usage and services allowed for the card application.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F07", \
    "Application Usage Control (AUC)", \
    "Indicates issuer's specified restrictions on the geographic usage and services allowed for the card application.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F07", \
    "Application Usage Control (AUC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F08", \
    "Application Version Number", \
    "Version number assigned by the payment system for the application in the Card", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F08", \
    "Application Version Number", \
    "Version number assigned by the Issuer for the application in the Card", \
    "Card", \
    "binary 16", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F08", \
    "Application Version Number, Card", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F09", \
    "Application Version Number", \
    "Version number assigned by the payment system for the Kernel application", \
    "Terminal", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F09", \
    "Application Version Number, Terminal", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0B", \
    "Cardholder Name - Extended", \
    "Indicates the whole cardholder name when greater than 26 characters using the same coding convention as in ISO 7813", \
    "Card", \
    "ans 27-45", \
    "'70' or '77'", \
    "27", \
    "45", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0D", \
    "Issuer Action Code - Default", \
    "Specifies the issuer's conditions that cause a transaction to be rejected if it might have been approved online, but the terminal is unable to process the transaction online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0D", \
    "Issuer Action Code - Default", \
    "Specifies conditions that cause a transaction to be declined if it might have been approved online, but the Reader is unable to process the transaction online.", \
    "Card", \
    "binary 40", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0D", \
    "Issuer Action Code - Default", \
    "Specifies the issuer's conditions that cause a transaction to be rejected if it might have been approved online, but the terminal is unable to process the transaction online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0D", \
    "Issuer Action Code - Default", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0E", \
    "Issuer Action Code - Denial", \
    "Specifies the issuer's conditions that cause the denial of a transaction without attempt to go online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0E", \
    "Issuer Action Code - Denial", \
    "Specifies conditions that cause the decline of a transaction without attempting to go online.", \
    "Card", \
    "binary 40", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0E", \
    "Issuer Action Code - Denial", \
    "Specifies the issuer's conditions that cause the denial of a transaction without attempt to go online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0E", \
    "Issuer Action Code - Denial", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0F", \
    "Issuer Action Code - Online", \
    "Specifies the issuer's conditions that cause a transaction to be transmitted online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0F", \
    "Issuer Action Code - Online", \
    "Specifies conditions that cause a transaction to be transmitted online.", \
    "Card", \
    "binary 40", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0F", \
    "Issuer Action Code - Online", \
    "Specifies the issuer's conditions that cause a transaction to be transmitted online", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F0F", \
    "Issuer Action Code - Online", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "Contains proprietary application data for transmission to the issuer in an online transaction. <br /> Note: For CCD-compliant applications, Annex C, section C7 defines the specific coding of the Issuer Application Data (IAD). To avoid potential conflicts with CCD-compliant applications, it is strongly recommended that the IAD data element in an application that is not CCD-compliant should not use the coding for a CCD-compliant application.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "0", \
    "32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "Contains proprietary application data for transmission to the issuer in an online transaction. <br /> Note: For CCD-compliant applications, Annex C, section C7 defines the specific coding of the Issuer Application Data (IAD). To avoid potential conflicts with CCD-compliant applications, it is strongly recommended that the IAD data element in an application that is not CCD-compliant should not use the coding for a CCD-compliant application.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "0", \
    "32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "Contains proprietary application data for transmission to the Issuer in an online transaction.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "0", \
    "32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "Contains proprietary application data for transmission to the Issuer in all transaction messages.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "var. 32", \
    "var. 32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "Contains proprietary application data for transmission to the Issuer in an online transaction.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "var. up to 32", \
    "var. up to 32", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F10", \
    "Issuer Application Data (IAD)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F11", \
    "Issuer Code Table Index", \
    "Indicates the code table according to ISO/IEC 8859 for displaying the Application Preferred Name", \
    "Card", \
    "n 2", \
    "'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F11", \
    "Issuer Code Table Index", \
    "Indicates the code table according to ISO/IEC 8859 for displaying the Application Preferred Name", \
    "Card", \
    "n 2", \
    "'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F11", \
    "Issuer Code Table Index", \
    "Indicates the code table according to ISO/IEC 8859 for displaying the Application Preferred Name", \
    "Card", \
    "n 2", \
    "'A5'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F11", \
    "Issuer Code Table Index", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F12", \
    "Application Preferred Name", \
    "Preferred mnemonic associated with the AID", \
    "Card", \
    "ans", \
    "'61' or 'A5'", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F12", \
    "Application Preferred Name", \
    "Preferred mnemonic associated with the AID", \
    "Card", \
    "ans 1-16", \
    "'61' or 'A5'", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F12", \
    "Application Preferred Name", \
    "Preferred mnemonic associated with the AID", \
    "Card", \
    "ans 1-16", \
    "'61' or 'A5'", \
    "1", \
    "16", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F12", \
    "Application Preferred Name", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F13", \
    "Last Online Application Transaction Counter (ATC) Register", \
    "ATC value of the last transaction that went online", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F14", \
    "Lower Consecutive Offline Limit (LCOL)", \
    "Issuer-specified preference for the maximum number of consecutive offline transactions for this ICC application allowed in a terminal with online capability", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F15", \
    "Merchant Category Code (MCC)", \
    "Classifies the type of business being done by the merchant, represented according to ISO 8583:1993 for Card Acceptor Business Code", \
    "Terminal", \
    "n 4", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F15", \
    "Merchant Category Code (MCC)", \
    "Classifies the type of business being done by the merchant, represented according to ISO 8583:1993 for Card Acceptor Business Code", \
    "Configuration (POS)", \
    "n 4", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F15", \
    "Merchant Category Code (MCC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F16", \
    "Merchant Identifier", \
    "When concatenated with the Acquirer Identifier, uniquely identifies a given merchant", \
    "Terminal", \
    "ans 15", \
    "", \
    "15", \
    "15", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F16", \
    "Merchant Identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F17", \
    "Personal Identification Number (PIN) Try Counter", \
    "Number of PIN tries remaining", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F18", \
    "Issuer Script Identifier", \
    "May be sent in authorisation response from issuer when response contains Issuer Script. Assigned by the issuer to uniquely identify the Issuer Script.", \
    "Issuer", \
    "binary 32", \
    "'71' or '72'", \
    "4", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F18", \
    "Issuer Script Identifier", \
    "Identification of the Issuer Script.", \
    "Issuer", \
    "binary", \
    "'71' or '72'", \
    "4", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F18", \
    "Issuer Script Identifier", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F19", \
    "Deleted (see 9F49)", \
    "", \
    "", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "Indicates the country of the terminal, represented according to ISO 3166", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "Indicates the country of the terminal, represented according to ISO 3166-1", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "Indicates the country of the terminal, represented according to ISO 3166", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "Indicates the country of the terminal, represented according to ISO 3166", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "Indicates the country of the terminal, represented according to ISO 3166. Requested in CDOL1.", \
    "Configuration (POS)", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1A", \
    "Terminal Country Code", \
    "", \
    "Terminal", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1B", \
    "Terminal Floor Limit", \
    "Indicates the floor limit in the terminal in conjunction with the AID", \
    "Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1B", \
    "Terminal Floor Limit", \
    "Indicates the floor limit in the terminal in conjunction with the AID", \
    "Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1B", \
    "Terminal Floor Limit", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1C", \
    "Terminal Identification", \
    "Designates the unique location of a Terminal at a merchant", \
    "Terminal", \
    "an 8", \
    "", \
    "8", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1C", \
    "Terminal Identification", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1D", \
    "Terminal Risk Management Data", \
    "Application-specific value used by the card for risk management purposes", \
    "Terminal", \
    "binary", \
    "", \
    "1", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1E", \
    "Interface Device (IFD) Serial Number", \
    "Unique and permanent serial number assigned to the IFD by the manufacturer", \
    "Terminal", \
    "an 8", \
    "", \
    "8", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1E", \
    "Interface Device (IFD) Serial Number", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1F", \
    "Track 1 Discretionary Data", \
    "Discretionary part of track 1 according to ISO/IEC 7813", \
    "Card", \
    "ans", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1F", \
    "Track 1 Discretionary Data", \
    "Discretionary part of track 1 according to ISO/IEC 7813", \
    "Card", \
    "ans", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1F", \
    "Track 1 Discretionary Data", \
    "Discretionary part of track 1 according to ISO/IEC 7813", \
    "Card", \
    "ans", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1F", \
    "Track 1 Discretionary Data", \
    "Discretionary part of track 1 according to ISO/IEC 7813", \
    "Card", \
    "ans", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F1F", \
    "Track 1, Discretionary Data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F20", \
    "Track 2 Discretionary Data", \
    "Discretionary part of track 2 according to ISO/IEC 7813", \
    "Card", \
    "cn", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F20", \
    "Track 2, Discretionary Data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F21", \
    "Transaction Time", \
    "Local time at which the transaction was performed.", \
    "Terminal", \
    "n 6 (HHMMSS)", \
    "", \
    "3", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F21", \
    "Transaction Time", \
    "Local time at which the transaction was authorised.", \
    "POS", \
    "n 6 (HHMMSS)", \
    "", \
    "3", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F21", \
    "Transaction Time", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F22", \
    "Certification Authority Public Key Index (PKI)", \
    "Identifies the Certificate Authority's public key in conjunction with the RID for use in offline static and dynamic data authentication.", \
    "Terminal", \
    "binary 8", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F22", \
    "Public Key Index, Certification Authority, Terminal", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F23", \
    "Upper Consecutive Offline Limit (UCOL)", \
    "Issuer-specified preference for the maximum number of consecutive offline transactions for this ICC application allowed in a terminal without online capability", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F24", \
    "Payment Account Reference (PAR) generated or linked directly to the provision request in the token vault", \
    "Payment Account Reference: EMV contact and contactless chip specifications products may support PAR by assigning a unique EMV tag (9F24) to represent PAR. PAR SHALL be required personalisation data for payment tokens but will be optional for terminals to read and transmit.", \
    "Card", \
    "ans 24", \
    "", \
    "24", \
    "24", \
    "", \
    "Q1Z28RKA1EBL470G9XYG90R5")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "Cryptogram returned by the ICC in response of the GENERATE AC or RECOVER AC command", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "8", \
    "8", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "Cryptogram returned by the ICC in response of the GENERATE AC or RECOVER AC command", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "8", \
    "8", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "Cryptogram returned by the card in response to the GPO command.", \
    "Card", \
    "binary 64", \
    "'77' or '80'", \
    "8", \
    "8", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "AC computed by the card during a transaction.", \
    "Card", \
    "binary 64", \
    "'77' or '80'", \
    "8", \
    "8", \
    "constructed", \
    "ARQC, AAC, TC")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "Cryptogram returned by the card in response of the GENERATE AC command.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "8", \
    "8", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F26", \
    "Application Cryptogram (AC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "Indicates the type of cryptogram and the actions to be performed by the terminal", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "Indicates the type of cryptogram and the actions to be performed by the Kernel. The Cryptogram Information Data is coded according to Table 14 of [EMV Book 3].", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "Indicates the type of cryptogram (TC, ARQC, or AAC) returned by the card and the actions to be performed by the reader.", \
    "Card", \
    "binary 8", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "Indicates the type of cryptogram (TC, ARQC, or AAC) returned by the card and the actions to be performed by the terminal.", \
    "Card", \
    "binary 8", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "Indicates the type of cryptogram and the actions to be performed by the terminal after the GENERATE AC command.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F27", \
    "Cryptogram Information Data (CID)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F29", \
    "Extended Selection", \
    "The value to be appended to the ADF Name in the data field of the SELECT command, if the Extended Selection Support flag is present and set to 1. Content is payment system proprietary.", \
    "Card", \
    "binary", \
    "'61'", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F2A", \
    "Kernel Identifier", \
    "Indicates the card's preference for the kernel on which the contactless application can be processed.", \
    "Card", \
    "binary", \
    "'61'", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F2D", \
    "Integrated Circuit Card (ICC) PIN Encipherment Public Key Certificate", \
    "ICC PIN Encipherment Public Key certified by the issuer", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI)", \
    "var. (NI)", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F2E", \
    "Integrated Circuit Card (ICC) PIN Encipherment Public Key Exponent", \
    "ICC PIN Encipherment Public Key Exponent used for PIN encipherment", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1 or 3", \
    "1 or 3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F2F", \
    "Integrated Circuit Card (ICC) PIN Encipherment Public Key Remainder", \
    "Remaining digits of the ICC PIN Encipherment Public Key Modulus", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NPE - NI + 42)", \
    "var. (NPE - NI + 42)", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F32", \
    "Issuer Public Key Exponent", \
    "Issuer public key exponent used for the verification of the Signed Static Application Data and the ICC Public Key Certificate", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F32", \
    "Issuer Public Key Exponent", \
    "Issuer public key exponent used for the verification of the Signed Static Application Data and the ICC Public Key Certificate", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1 or 3", \
    "1 or 3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F32", \
    "Issuer Public Key Exponent", \
    "Issuer-specified data to be used with the Issuer's public key algorithm for static data authentication.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1 or 3", \
    "1 or 3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F32", \
    "Issuer Public Key Exponent", \
    "Issuer public key exponent used for the verification of the Signed Static Application Data and the ICC Public Key Certificate", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F32", \
    "Issuer Public Key Exponent", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F33", \
    "Terminal Capabilities", \
    "Indicates the card data input, CVM, and security capabilities of the Terminal and Reader. The CVM capability (Byte 2) is instantiated with values depending on the transaction amount. The Terminal Capabilities is coded according to Annex A.2 of [EMV Book 4].", \
    "Terminal", \
    "binary", \
    "", \
    "3", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F33", \
    "Terminal Capabilities", \
    "Indicates the card data input, CVM, and security capabilities of the Terminal.", \
    "Terminal", \
    "binary 24", \
    "", \
    "3", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F33", \
    "Terminal Capabilities", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F34", \
    "Cardholder Verification Method (CVM) Results", \
    "Indicates the results of the last CVM performed", \
    "Terminal", \
    "binary", \
    "", \
    "3", \
    "3", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F34", \
    "Cardholder Verification Method (CVM) Results", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F35", \
    "Terminal Type", \
    "Indicates the environment of the terminal, its communications capability, and its operational control", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F35", \
    "Terminal Type", \
    "Indicates the environment of the terminal, its communications capability, and its operational control", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F35", \
    "Terminal Type", \
    "Indicates the environment of the terminal, its communications capability, and its operational control", \
    "Configuration (POS)", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F35", \
    "Terminal Type", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "Counter maintained by the application in the ICC (incrementing the ATC is managed by the ICC)", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "Counter maintained by the application in the ICC (incrementing the ATC is managed by the ICC)", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "Count of the number of transactions initiated since personalisation. Maintained by the application in the card.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "Counter maintained by the application in the card. Initial value is zero. It is incremented by 1 each time a transaction is performed.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "Counter maintained by the application in the card (incrementing the ATC is managed by the card).", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F36", \
    "Application Transaction Counter (ATC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN)", \
    "Value to provide variability and uniqueness to the generation of a cryptogram", \
    "Terminal", \
    "binary", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN)", \
    "Contains a Kernel challenge (random) to be used by the Card to ensure the variability and uniqueness to the generation of a cryptogram during an EMV mode transaction.", \
    "Terminal", \
    "binary", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN) (Reader/Terminal)", \
    "Value to provide variability and uniqueness to the generation of the application cryptogram.", \
    "Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN)", \
    "Value to provide variability and uniqueness to the generation of the application cryptogram.", \
    "Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN)", \
    "Value to provide variability and uniqueness to the generation of the application cryptogram. Requested in CDOL1.", \
    "POS", \
    "binary", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F37", \
    "Unpredictable Number (UN)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F38", \
    "Processing Options Data Object List (PDOL)", \
    "Contains a list of terminal resident data objects (tags and lengths) needed by the ICC in processing the GET PROCESSING OPTIONS command", \
    "Card", \
    "binary", \
    "'A5'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F38", \
    "Processing Options Data Object List (PDOL)", \
    "List of terminal/reader-related data objects (tags and lengths) requested by the card to be transmitted in the GET PROCESSING OPTIONS command.", \
    "Card", \
    "binary", \
    "'A5'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F38", \
    "Processing Options Data Object List (PDOL)", \
    "List of terminal/reader-related data objects (tags and lengths) requested by the card to be transmitted in the GET PROCESSING OPTIONS command.", \
    "Card", \
    "binary", \
    "'A5'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F38", \
    "Processing Options Data Object List (PDOL)", \
    "List of terminal/reader-related data objects (tags and lengths) requested by the card to be transmitted in the GET PROCESSING OPTIONS command.", \
    "Card", \
    "binary", \
    "'A5'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F38", \
    "Processing Options Data Object List (PDOL)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F39", \
    "Point-of-Service (POS) Entry Mode", \
    "Indicates the method by which the PAN was entered, according to the first two digits of the ISO 8583:1987 POS Entry Mode", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F3A", \
    "Amount, Reference Currency (Binary)", \
    "Authorised amount expressed in the reference currency", \
    "Terminal", \
    "binary", \
    "", \
    "4", \
    "4", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F3B", \
    "Currency Code, Application Reference", \
    "1-4 currency codes used between the terminal and the ICC when the Transaction Currency Code is different from the Application Currency Code; each code is 3 digits according to ISO 4217", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "8", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F3C", \
    "Currency Code, Transaction Reference", \
    "Code defining the common currency used by the terminal in case the Transaction Currency Code is different from the Application Currency Code", \
    "Terminal", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F3D", \
    "Currency Exponent, Transaction Reference", \
    "Indicates the implied position of the decimal point from the right of the transaction amount, with the Transaction Reference Currency Code represented according to ISO 4217", \
    "Terminal", \
    "n 1", \
    "", \
    "1", \
    "1", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "9F40", \
    "Additional Terminal Capabilities (ATC)", \
    "Indicates the data input and output capabilities of the Terminal and Reader. The Additional Terminal Capabilities is coded according to Annex A.3 of [EMV Book 4].", \
    "Terminal", \
    "binary", \
    "", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F40", \
    "Additional Terminal Capabilities (ATC)", \
    "Indicates the data input and output capabilities of the Terminal.", \
    "Terminal", \
    "binary", \
    "", \
    "5", \
    "5", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F40", \
    "Additional Terminal Capabilities (ATC)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F41", \
    "Transaction Sequence Counter", \
    "Counter maintained by the terminal that is incremented by one for each transaction", \
    "Terminal", \
    "n 4-8", \
    "", \
    "2", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F42", \
    "Currency Code, Application", \
    "Indicates the currency in which the account is managed according to ISO 4217", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F42", \
    "Currency Code, Application", \
    "Indicates the currency in which the account is managed according to ISO 4217", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F42", \
    "Currency Code, Application", \
    "Indicates the currency in which the account is managed according to ISO 4217", \
    "Card", \
    "n 3", \
    "'70' or '77'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F42", \
    "Currency Code, Application", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F43", \
    "Currency Exponent, Application Reference", \
    "Indicates the implied position of the decimal point from the right of the amount, for each of the 1-4 reference currencies represented according to ISO 4217", \
    "Card", \
    "n 1", \
    "'70' or '77'", \
    "1", \
    "4", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F44", \
    "Currency Exponent, Application", \
    "Indicates the implied position of the decimal point from the right of the amount represented according to ISO 4217", \
    "Card", \
    "n 1", \
    "'70' or '77'", \
    "1", \
    "1", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F44", \
    "Currency Exponent, Application", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F45", \
    "Data Authentication Code", \
    "An issuer assigned value that is retained by the terminal during the verification process of the Signed Static Application Data", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F46", \
    "Integrated Circuit Card (ICC) Public Key Certificate", \
    "ICC Public Key certified by the issuer", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI)", \
    "var. (NI)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F46", \
    "Integrated Circuit Card (ICC) Public Key Certificate", \
    "ICC Public Key certified by the issuer", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI)", \
    "var. (NI)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F46", \
    "Application Public Key Certificate", \
    "Application Public Key Certificate used during CDA.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. up to 128", \
    "var. up to 128", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F46", \
    "Integrated Circuit Card (ICC) Public Key Certificate", \
    "ICC Public Key certified by the issuer", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NI)", \
    "var. (NI)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F46", \
    "Integrated Circuit Card (ICC) Public Key Certificate", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F47", \
    "Integrated Circuit Card (ICC) Public Key Exponent", \
    "Exponent ICC Public Key Exponent used for the verification of the Signed Dynamic Application Data", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F47", \
    "Integrated Circuit Card (ICC) Public Key Exponent", \
    "Exponent ICC Public Key Exponent used for the verification of the Signed Dynamic Application Data", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F47", \
    "Application Public Key Exponent", \
    "Exponent of Application Public Key", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1 or 3", \
    "1 or 3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F47", \
    "Integrated Circuit Card (ICC) Public Key Exponent", \
    "Exponent ICC Public Key Exponent used for the verification of the Signed Dynamic Application Data", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "1", \
    "3", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F47", \
    "Integrated Circuit Card (ICC) Public Key Exponent", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F48", \
    "Integrated Circuit Card (ICC) Public Key Remainder", \
    "Remaining digits of the ICC Public Key Modulus", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NIC - NI + 42)", \
    "var. (NIC - NI + 42)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F48", \
    "Integrated Circuit Card (ICC) Public Key Remainder", \
    "Digits of the ICC Public Key Modulus which do not fit within the ICC Public Key Certificate.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NIC - NI + 42)", \
    "var. (NIC - NI + 42)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F48", \
    "Application Public Key Remainder", \
    "Remaining digits of Application Public Key.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F48", \
    "Integrated Circuit Card (ICC) Public Key Remainder", \
    "Digits of the ICC Public Key Modulus which do not fit within the ICC Public Key Certificate.", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "var. (NIC - NI + 42)", \
    "var. (NIC - NI + 42)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F48", \
    "Integrated Circuit Card (ICC) Public Key Remainder", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F49", \
    "Dynamic Data Authentication Data Object List (DDOL)", \
    "List of data objects (tag and length) to be passed to the ICC in the INTERNAL AUTHENTICATE command", \
    "Card", \
    "binary", \
    "'70' or '77'", \
    "0", \
    "252", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4A", \
    "Static Data Authentication Tag List (SDA)", \
    "List of tags of primitive data objects defined in this specification whose value fields are to be included in the Signed Static or Dynamic Application Data", \
    "Card", \
    "-", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4A", \
    "Static Data Authentication Tag List (SDA)", \
    "Contains list of tags of primitive data objects whose value fields are to be included in the ICC Public Key Certificate hash result.", \
    "Card", \
    "-", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4A", \
    "Static Data Authentication Tag List (SDA)", \
    "List of tags of primitive data objects defined in this specification whose value fields are to be included in the Signed Static or Dynamic Application Data", \
    "Card", \
    "-", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4A", \
    "Static Data Authentication Tag List (SDA)", \
    "List of tags of primitive data objects defined in this specification whose value fields are to be included in the Signed Static or Dynamic Application Data", \
    "Card", \
    "-", \
    "'70' or '77'", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4A", \
    "Static Data Authentication Tag List (SDA)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4B", \
    "Signed Dynamic Application Data (SDAD)", \
    "Digital signature on critical application parameters for CDA", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "var. (NIC)", \
    "var. (NIC)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4B", \
    "Signed Dynamic Application Data (SDAD)", \
    "Dynamic signature generated by the card and validated by the reader during fDDA processing.", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "var. (NIC)", \
    "var. (NIC)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4B", \
    "Signed Dynamic Application Data (SDAD)", \
    "Digital signature on critical application parameters for DDA or CDA", \
    "Card", \
    "binary", \
    "'77' or '80'", \
    "var. (NIC)", \
    "var. (NIC)", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4B", \
    "Signed Dynamic Application Data (SDAD)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4C", \
    "ICC Dynamic Number", \
    "Time-variant number generated by the ICC, to be captured by the terminal", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "8", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4C", \
    "ICC Dynamic Number", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4D", \
    "Log Entry", \
    "Provides the SFI of the Transaction Log file and its number of records", \
    "Card", \
    "binary", \
    "'BF0C' or '73'", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4D", \
    "Log Entry", \
    "Data element indicating the location (SFI) and the maximum number of transaction log records.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4D", \
    "Log Entry", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4E", \
    "Merchant Name and Location", \
    "Indicates the name and location of the merchant", \
    "Terminal", \
    "ans", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4E", \
    "Merchant Name and Location", \
    "Indicates the name and location of the merchant. The reader shall return the value of the Merchant Name and Location when requested by the card in a Data Object List.", \
    "Terminal", \
    "ans", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4E", \
    "Merchant Name and Location", \
    "Indicates the name and location of the merchant", \
    "Configuration (POS)", \
    "ans", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4E", \
    "Merchant Name and Location", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4F", \
    "Log Format", \
    "List (in tag and length format) of data objects representing the logged data elements that are passed to the terminal when a transaction log record is read", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "9F4F", \
    "Log Format", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F50", \
    "Offline Accumulator Balance", \
    "Represents the amount of offline spending available in the Card. The Offline Accumulator Balance is retrievable by the GET DATA command, if allowed by the Card configuration.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F50", \
    "Cardholder Verification Status", \
    "Indicates the CVM choice (already done or to be subsequently applied) for the transaction. Choice is made dynamically by card based on transaction context and card risk management configuration.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F51", \
    "Application Currency Code", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F51", \
    "DRDOL", \
    "A data object in the Card that provides the Kernel with a list of data objects that must be passed to the Card in the data field of the RECOVER AC command.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F52", \
    "Application Default Action (ADA)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F52", \
    "Terminal Compatibility Indicator", \
    "Indicates to the card the transaction modes (EMV, Magstripe) supported by the Kernel", \
    "Kernel 5", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F53", \
    "Consecutive Transaction Counter International Limit (CTCIL)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F53", \
    "Transaction Category Code", \
    "This is a data object defined by MasterCard which indicates the type of transaction being performed, and which may be used in card risk management.", \
    "Card", \
    "an", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F53", \
    "Terminal Interchange Profile (dynamic)", \
    "Defines the reader CVM requirement and capabilities, as well as other reader capabilities (online capability, contact EMV capability) for the Transaction", \
    "Kernel 5", \
    "binary", \
    "", \
    "3", \
    "3", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F54", \
    "Cumulative Total Transaction Amount Limit (CTTAL)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F54", \
    "DS ODS Card", \
    "Contains the Card stored operator proprietary data obtained in the response to the GET PROCESSING OPTIONS command.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "160", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F55", \
    "Geographic Indicator", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F55", \
    "Issuer Authentication Flags", \
    "", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "40")
TAG_DEFINE_346342354254643( \
    "9F55", \
    "Issuer Authentication Flags", \
    "", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "40")
TAG_DEFINE_346342354254643( \
    "9F55", \
    "Issuer Authentication Flags", \
    "", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "40")
TAG_DEFINE_346342354254643( \
    "9F56", \
    "Issuer Authentication Indicator", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F56", \
    "Issuer Proprietary Bitmap", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "00 00 7F FF FF 00 00 00 00 00 00 00 00 00 00 20 80 00")
TAG_DEFINE_346342354254643( \
    "9F56", \
    "Issuer Proprietary Bitmap", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "00 00 7F FF FF 00 00 00 00 00 00 00 00 00 00 20 80 00")
TAG_DEFINE_346342354254643( \
    "9F56", \
    "Issuer Proprietary Bitmap", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "00 00 7F FF FF 00 00 00 00 00 00 00 00 00 00 20 80 00")
TAG_DEFINE_346342354254643( \
    "9F57", \
    "Issuer Country Code", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F58", \
    "Consecutive Transaction Counter Limit (CTCL)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F59", \
    "Consecutive Transaction Counter Upper Limit (CTCUL)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5A", \
    "Application Program Identifier (Program ID)", \
    "Payment system proprietary data element identifying the Application Program ID of the card application. When personalised, the Application Program ID is returned in the FCI Issuer Discretionary Data of the SELECT response (Tag ‘BF0C'). EMV mode readers that support Dynamic Reader Limits (DRL) functionality examine the Application Program ID to determine the Reader Limit Set to apply.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5A", \
    "Application Program Identifier (Program ID)", \
    "Proprietary data element used by the device during Dynamic Reader Limit processing to determine the Reader Limit Set to apply for the transaction. EMV mode readers that support Dynamic Reader Limits (DRL) functionality support four or more Application Program Identifiers, each corresponding to a Reader Limit Set.", \
    "Terminal", \
    "binary", \
    "", \
    "1", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5B", \
    "Issuer Script Results", \
    "Indicates the results of Issuer Script processing. When the reader/terminal transmits this data element to the acquirer, in this version of Kernel 3, it is acceptable that only byte 1 is transmitted, although it is preferable for all five bytes to be transmitted.", \
    "Terminal", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5B", \
    "DSDOL", \
    "A data object in the Card that provides the Kernel with a list of data objects that must be passed to the Card in the data field of the GENERATE AC command after the CDOL1 Related Data. An example of value for DSDOL is 'DF6008DF6108DF6201DF63A0', representing TLDS Input (Card) TLDS Digest H TLDS ODS Info TLDS ODS Term. The Kernel must not presume that this is a given though, as the sequence and presence of data objects can vary. The presence of TL DS ODS Info is mandated and the processing of the last TL entry in DSDOL is different from normal TL processing as described in section 4.1.4.", \
    "Terminal", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5C", \
    "Cumulative Total Transaction Amount Upper Limit (CTTAUL)", \
    "Visa proprietary data element specifying the maximum total amount of offline transactions in the designated currency or designated and secondary currency allowed for the card application before a transaction is declined after an online transaction is unable to be performed.", \
    "Card", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5C", \
    "DS Requested Operator ID", \
    "Contains the Terminal determined operator identifier for data storage. It is sent to the Card in the GET PROCESSING OPTIONS command.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5C", \
    "Magstripe Data Object List (MDOL)", \
    "List of data objects (tag and length) to be passed to the card in the GET MAGSTRIPE DATA command.", \
    "Card", \
    "binary", \
    "", \
    "var. up to 252", \
    "var. up to 252", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5D", \
    "Available Offline Spending Amount (AOSA)", \
    "Kernel 3 proprietary data element indicating the remaining amount available to be spent offline. The AOSA is a calculated field used to allow the reader to print or display the amount of offline spend that is available on the card.", \
    "Card", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5D", \
    "Application Capabilities Information (ACI)", \
    "Lists a number of card features beyond regular payment.", \
    "Card", \
    "binary", \
    "", \
    "3", \
    "3", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5E", \
    "Consecutive Transaction International Upper Limit (CTIUL)", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5E", \
    "DS ID", \
    "Data Storage Identifier constructed as follows: Application PAN (without any 'F' padding) Application PAN Sequence Number If necessary, it is padded to the left with one hexadecimal zero to ensure whole bytes. If necessary, it is padded to the left with hexadecimal zeroes to ensure a minimum length of 8 bytes.", \
    "Card", \
    "n 16-22", \
    "", \
    "8", \
    "11", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5F", \
    "DS Slot Availability", \
    "Contains the Card indication, obtained in the response to the GET PROCESSING OPTIONS command, about the slot type(s) available for data storage.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F5F", \
    "Offline Balance", \
    "In the case of a prepaid card, represents the value stored in card. May be returned in the GENERATE AC response.", \
    "Card", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F60", \
    "CVC3 (Track1)", \
    "The CVC3 (Track1) is a 2-byte cryptogram returned by the Card in the response to the COMPUTE CRYPTOGRAPHIC CHECKSUM command.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F60", \
    "Issuer Update Parameter", \
    "Parameter from the ICC to indicate the behaviour/ergonomics (e.g. “present-and-hold” or “two presentments” or none) for processing the results of the online authorisation request.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F60", \
    "P3 Generated 3DES KEYS", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F61", \
    "CVC3 (Track2)", \
    "The CVC3 (Track2) is a 2-byte cryptogram returned by the Card in the response to the COMPUTE CRYPTOGRAPHIC CHECKSUM command.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F62", \
    "PCVC3 (Track1)", \
    "PCVC3(Track1) indicates to the Kernel the positions in the discretionary data field of the Track 1 Data where the CVC3 (Track1) digits must be copied.", \
    "", \
    "binary", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F62", \
    "Encrypted PIN - ISO 95641 Format 0 (Thales P3 Format 01)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F63", \
    "Offline Counter Initial Value", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F63", \
    "PUNATC (Track1)", \
    "PUNATC(Track1) indicates to the Kernel the positions in the discretionary data field of Track 1 Data where the Unpredictable Number (Numeric) digits and Application Transaction Counter digits have to be copied.", \
    "", \
    "binary", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F64", \
    "NATC (Track1)", \
    "The value of NATC(Track1) represents the number of digits of the Application Transaction Counter to be included in the discretionary data field of Track 1 Data.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F65", \
    "PCVC3 (Track2)", \
    "PCVC3(Track2) indicates to the Kernel the positions in the discretionary data field of the Track 2 Data where the CVC3 (Track2) digits must be copied.", \
    "", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F66", \
    "Terminal Transaction Qualifiers (TTQ)", \
    "Indicates reader capabilities, requirements, and preferences to the card. TTQ byte 2 bits 8-7 are transient values, and reset to zero at the beginning of the transaction. All other TTQ bits are static values, and not modified based on transaction conditions. TTQ byte 3 bit 7 shall be set by the acquirer-merchant to 1b.", \
    "Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F66", \
    "PUNATC (Track2)", \
    "PUNATC(Track2) indicates to the Kernel the positions in the discretionary data field of Track 2 Data where the Unpredictable Number (Numeric) digits and Application Transaction Counter digits have to be copied.", \
    "", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F67", \
    "MSD Offset", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F67", \
    "NATC (Track2)", \
    "The value of NATC(Track2) represents the number of digits of the Application Transaction Counter to be included in the discretionary data field of Track 2 Data.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F68", \
    "Card Additional Processes", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F69", \
    "Card Authentication Related Data", \
    "Contains the fDDA Version Number, Card Unpredictable Number, and Card Transaction Qualifiers. For transactions where fDDA is performed, the Card Authentication Related Data is returned in the last record specified by the Application File Locator for that transaction.", \
    "Card", \
    "binary", \
    "", \
    "5", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F69", \
    "UDOL", \
    "The UDOL is the DOL that specifies the data objects to be included in the data field of the COMPUTE CRYPTOGRAPHIC CHECKSUM command. The UDOL must at least include the Unpredictable Number (Numeric). The UDOL is not mandatory for the Card. If it is not present in the Card, then the Default UDOL is used.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6A", \
    "Unpredictable Number (Numeric)", \
    "Unpredictable number generated by the Kernel during a mag-stripe mode transaction. The Unpredictable Number (Numeric) is passed to the Card in the data field of the COMPUTE CRYPTOGRAPHIC CHECKSUM command.<br />The 8-nUN most significant digits must be set to zero.", \
    "Card", \
    "n 8", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6B", \
    "Card CVM Limit", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6B", \
    "Track 2 Data", \
    "Track 2 Data contains the data objects of the track 2 according to [ISO/IEC 7813], excluding start sentinel, end sentinel and LRC. The Track 2 Data is present in the file read using the READ RECORD command during a mag-stripe mode transaction.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "19", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6C", \
    "Card Transaction Qualifiers (CTQ)", \
    "In this version of the specification, used to indicate to the device the card CVM requirements, issuer preferences, and card capabilities.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6D", \
    "VLP Reset Threshold", \
    "", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6D", \
    "Mag-stripe Application Version Number (Reader)", \
    "Version number assigned by the payment system for the specific mag-stripe mode functionality of the Kernel.", \
    "Card", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6D", \
    "Kernel 4 Reader Capabilities", \
    "A proprietary data element with bits 8, 7, and 4 only used to indicate a terminal's capability to support Kernel 4 mag-stripe or EMV contactless. This data element is OR'd with Terminal Type, Tag '9F35', resulting in a modified Tag '9F35', which is passed to the card when requested.", \
    "Terminal", \
    "n 2", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6E", \
    "Third Party Data", \
    "The Third Party Data contains various information, possibly including information from a third party. If present in the Card, the Third Party Data must be returned in a file read using the READ RECORD command or in the File Control Information Template. 'Device Type' is present when the most significant bit of byte 1 of 'Unique Identifier' is set to 0b. In this case, the maximum length of 'Proprietary Data' is 26 bytes. Otherwise it is 28 bytes.", \
    "Card", \
    "binary", \
    "", \
    "5", \
    "32", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6E", \
    "Form Factor Indicator (qVSDC)", \
    "Indicates the form factor of the consumer payment device and the type of contactless interface over which the transaction was conducted. This information is made available to the issuer host.", \
    "Card/Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6E", \
    "Form Factor Indicator (FFI)", \
    "Indicates the form factor of the consumer payment device and the type of contactless interface over which the transaction was conducted. This information is made available to the issuer host.", \
    "Card/Terminal", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F6F", \
    "DS Slot Management Control", \
    "Contains the Card indication, obtained in the response to the GET PROCESSING OPTIONS command, about the status of the slot containing data associated to the DS Requested Operator ID.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F70", \
    "Protected Data Envelope 1", \
    "The Protected Data Envelopes contain proprietary information from the issuer, payment system or third party. The Protected Data Envelope can be retrieved with the GET DATA command. Updating the Protected Data Envelope with the PUT DATA command requires secure messaging and is outside the scope of this specification.", \
    "", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F70", \
    "Card Interface Capabilities", \
    "Data element indicating other interfaces supported by the device.", \
    "Card", \
    "binary 16", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F71", \
    "Protected Data Envelope 2", \
    "Same as Protected Data Envelope 1.", \
    "", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F71", \
    "Mobile CVM Results", \
    "Proprietary data element returned from the Card in the GET PROCESSING OPTIONS response, indicating the status of Mobile CVM entry.", \
    "Card", \
    "binary 32", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F72", \
    "Protected Data Envelope 3", \
    "Same as Protected Data Envelope 1.", \
    "", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F72", \
    "Consecutive Transaction Limit (International—Country)", \
    "Visa proprietary data element specifying the maximum number of the consecutive offline international (those not in the country of issue) transactions allowed for that card application before a transaction goes online.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F73", \
    "Protected Data Envelope 4", \
    "Same as Protected Data Envelope 1.", \
    "", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F73", \
    "Currency Conversion Parameters", \
    "A decimal value used in a conversion algorithm to convert the Secondary Application Currency Code to the card's domestic (Application Currency Code). Issuer Script may be used to modify this data element.", \
    "Card", \
    "n 8", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F74", \
    "Protected Data Envelope 5", \
    "Same as Protected Data Envelope 1.", \
    "", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F74", \
    "VLP Issuer Authorisation Code", \
    "A Visa proprietary data element containing a code indicating that the transaction was an approved VLP transaction. If present indicates offline approval from card.", \
    "Card", \
    "a 6", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F75", \
    "Unprotected Data Envelope 1", \
    "The Unprotected Data Envelopes contain proprietary information from the issuer, payment system or third party. Unprotected Data Envelopes can be retrieved with the GET DATA command and can be updated with the PUT DATA (CLA='80') command without secure messaging.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F75", \
    "Cumulative Total Transaction Amount Limit-Dual Currency", \
    "Visa proprietary data element specifying the upper limit of the total amount of offline domestic transactions in the designated currency (Application Currency Code) and a secondary currency (Secondary Application Currency Code) allowed for that card application before a transaction is forced to go online. This limit is in the designated currency.", \
    "Card", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F76", \
    "Unprotected Data Envelope 2", \
    "Same as Unprotected Data Envelope 1.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F76", \
    "Secondary Application Currency Code", \
    "Indicates a secondary currency to be converted to the designated currency in which the account is managed (Application Currency Code) according to ISO 4217.", \
    "Card", \
    "n 3", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F77", \
    "Unprotected Data Envelope 3", \
    "Same as Unprotected Data Envelope 1.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F77", \
    "VLP Funds Limit", \
    "A Visa proprietary data element, Issuer Limit for VLP available funds, is used to reset VLP Available Funds after an online approved transaction.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F78", \
    "Unprotected Data Envelope 4", \
    "Same as Unprotected Data Envelope 1.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F78", \
    "VLP Single Transaction Limit", \
    "A Visa proprietary data element indicating the maximum amount allowed for single VLP transaction", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F79", \
    "Unprotected Data Envelope 5", \
    "Same as Unprotected Data Envelope 1.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "192", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F79", \
    "VLP Available Funds", \
    "A counter that is decremented by the Amount Authorized when a VLP transaction is approved.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7A", \
    "VLP Terminal Support Indicator", \
    "If present indicates offline and/or online support. If absent indicates online only support", \
    "Terminal", \
    "n 1", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7B", \
    "VLP Terminal Transaction Limit", \
    "", \
    "Terminal", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7C", \
    "Customer Exclusive Data (CED)", \
    "Contains data for transmission to the issuer.", \
    "Card", \
    "binary", \
    "", \
    "var. up to 32", \
    "var. up to 32", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7C", \
    "Merchant Custom Data", \
    "Proprietary merchant data that may be requested by the Card.", \
    "Card", \
    "binary", \
    "", \
    "20", \
    "20", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7D", \
    "DS Summary 1", \
    "Contains the Card indication, obtained in the response to the GET PROCESSING OPTIONS command, about either the stored summary associated with DS ODS Card if present, or about a default zero-filled summary if DS ODS Card is not present and DS Unpredictable Number is present.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7D", \
    "VISA Applet Data", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7E", \
    "Mobile Support Indicator", \
    "The Mobile Support Indicator informs the Card that the Kernel supports extensions for mobile and requires on device cardholder verification.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7E", \
    "Application life cycle data (8 first bytes)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7F", \
    "DS Unpredictable Number", \
    "Contains the Card challenge (random), obtained in the response to the GET PROCESSING OPTIONS command, to be used by the Terminal in the summary calculation when providing DS ODS Term.", \
    "Card", \
    "binary", \
    "", \
    "4", \
    "4", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "9F7F", \
    "Card Production Life Cycle (CPLC) Data", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "A5", \
    "File Control Information (FCI) Proprietary Template", \
    "Identifies the data object proprietary to this specification in the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "'6F'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "A5", \
    "File Control Information (FCI) Proprietary Template", \
    "Identifies the data object proprietary to this specification in the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "'6F'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "A5", \
    "File Control Information (FCI) Proprietary Template", \
    "Identifies the data object proprietary to this specification in the FCI template according to ISO/IEC 7816-4", \
    "Card", \
    "variable", \
    "'6F'", \
    "var.", \
    "var.", \
    "constructed", \
    "")
TAG_DEFINE_346342354254643( \
    "BF0C", \
    "File Control Information (FCI) Issuer Discretionary Data", \
    "Issuer discretionary part of the File Control Information Proprietary Template.", \
    "Card", \
    "variable", \
    "'A5'", \
    "0", \
    "222", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "BF0C", \
    "File Control Information (FCI) Issuer Discretionary Data", \
    "Issuer discretionary part of the File Control Information Proprietary Template.", \
    "Card", \
    "variable", \
    "'A5'", \
    "0", \
    "222", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "BF0C", \
    "File Control Information (FCI) Issuer Discretionary Data", \
    "Issuer discretionary part of the File Control Information Proprietary Template.", \
    "Card", \
    "variable", \
    "'A5'", \
    "0", \
    "222", \
    "primitive", \
    "")
TAG_DEFINE_346342354254643( \
    "BF0C", \
    "File Control Information (FCI) Issuer Discretionary Data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "BF50", \
    "Visa Fleet - CDO", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "BF60", \
    "Integrated Data Storage Record Update Template", \
    "Part of the command data for the EXTENDED GET PROCESSING OPTIONS command. The IDS Record Update Template contains data to be updated in one or more IDS Records.", \
    "Data Exchange", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C3", \
    "Card issuer action code -decline", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C4", \
    "Card issuer action code -default", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C5", \
    "Card issuer action code online", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C6", \
    "PIN Try Limit", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C7", \
    "CDOL 1 Related Data Length", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C8", \
    "Card risk management country code", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "C9", \
    "Card risk management currency code", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "CA", \
    "Lower cummulative offline transaction amount", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "CB", \
    "Upper cumulative offline transaction amount", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "CD", \
    "Card Issuer Action Code (PayPass) - Default", \
    "", \
    "Card", \
    "H", \
    "", \
    "3", \
    "3", \
    "", \
    "005800")
TAG_DEFINE_346342354254643( \
    "CE", \
    "Card Issuer Action Code (PayPass) - Online", \
    "", \
    "Card", \
    "H", \
    "", \
    "3", \
    "3", \
    "", \
    "00F800")
TAG_DEFINE_346342354254643( \
    "CF", \
    "Card Issuer Action Code (PayPass) - Decline", \
    "", \
    "Card", \
    "H", \
    "", \
    "3", \
    "3", \
    "", \
    "080800")
TAG_DEFINE_346342354254643( \
    "D1", \
    "Currency conversion table", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D2", \
    "Integrated Data Storage Directory (IDSD)", \
    "Directory of Integrated Data Storage records on the card.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D3", \
    "Additional check table", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D5", \
    "Application Control", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D6", \
    "Default ARPC response code", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D7", \
    "Application Control (PayPass)", \
    "", \
    "Card", \
    "H", \
    "", \
    "3", \
    "3", \
    "", \
    "000080")
TAG_DEFINE_346342354254643( \
    "D8", \
    "AIP (PayPass)", \
    "", \
    "Card", \
    "H", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "D9", \
    "AFL (PayPass)", \
    "", \
    "Card", \
    "H", \
    "", \
    "12", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DA", \
    "Static CVC3-TRACK1", \
    "", \
    "Card", \
    "H", \
    "", \
    "2", \
    "2", \
    "", \
    "0000")
TAG_DEFINE_346342354254643( \
    "DB", \
    "Static CVC3-TRACK2", \
    "", \
    "Card", \
    "H", \
    "", \
    "2", \
    "2", \
    "", \
    "0000")
TAG_DEFINE_346342354254643( \
    "DC", \
    "IVCVC3-TRACK1", \
    "", \
    "Card", \
    "H", \
    "", \
    "2", \
    "2", \
    "", \
    "0000")
TAG_DEFINE_346342354254643( \
    "DD", \
    "IVCVC3-TRACK2", \
    "", \
    "Card", \
    "H", \
    "", \
    "2", \
    "2", \
    "", \
    "0000")
TAG_DEFINE_346342354254643( \
    "DF01", \
    "Encrypted PIN Block in Tag 9F62 - ISO 95641 Format 0", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF02", \
    "PEK Version Number", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF03", \
    "PIN Try Limit", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF04", \
    "PIN Try Counter (VSDC Application)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF05", \
    "AIP - For VISA Contactless", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF06", \
    "Products permitted", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF07", \
    "Offline checks mandated", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF08", \
    "UDKmac", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF09", \
    "UDKenc", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF0B", \
    "Retries Permitted Limit", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF0C", \
    "Script Message Update", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF0D", \
    "Fleet Issuer Action Code - Default", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF0E", \
    "Fleet Issuer Action Code - Denial", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF0F", \
    "Fleet Issuer Action Code - Online", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
	"DF11", \
	"Acquirer ID", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
    "DF12", \
    "Answer To Reset (ATR)", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF13", \
    "ISO 7811 Track 1 card data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF14", \
    "ISO 7811 Track 2 card data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF15", \
    "ISO 7811 Track 3 card data", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF16", \
    "Enciphered PIN Block", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF17", \
    "Key Serial Number", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF18", \
    "Risk Management", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF20", \
    "Issuer Proprietary Bitmap (IPB)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF21", \
    "Internet Authentication Flag (IAF)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF22", \
    "Encrypted PEK - RFU", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF23", \
    "PEK Key Check Value - RFU", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF24", \
    "MDK - Key derivation Index", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF25", \
    "VISA DPA - MDK - Key derivation Index", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF26", \
    "Encrypted PIN Block - ISO 9564-1 Format 1 PIN Block (Thales P3 Format 05)", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF40", \
    "qVSDC AIP", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF41", \
    "VSDC AIP", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF42", \
    "UDKac", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF43", \
    "UDKmac", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF44", \
    "UDKenc", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF47", \
    "UDKcvc", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF48", \
    "UDKac KCV", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF49", \
    "UDKmac KCV", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF4A", \
    "UDKenc KCV", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF4B", \
    "UDKcvc KCV", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF4B", \
    "POS Cardholder Interaction Information", \
    "The POS Cardholder Interaction Information informs the Kernel about the indicators set in the mobile phone that may influence the action flow of the merchant and cardholder.", \
    "", \
    "binary", \
    "", \
    "3", \
    "3", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF51", \
    "Grand Parent AC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF52", \
    "Parent AC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF53", \
    "Grand Parent MAC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF54", \
    "Parent MAC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF55", \
    "Grand Parent ENC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF56", \
    "Parent ENC/Terminal Action Code - Default", \
    "", \
    "Card/Terminal", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF57", \
    "Terminal Action Code - Decline", \
    "", \
    "Terminal", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF60", \
    "DS Input (Card)", \
    "Contains Terminal provided data if permanent data storage in the Card was applicable (DS Slot Management Control[8]=1b), remains applicable, or becomes applicable (DS ODS Info[8]=1b). Otherwise this data item is a filler to be supplied by the Kernel. The data is forwarded to the Card with the GENERATE AC command, as per DSDOL formatting.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF60", \
    "DDA Component P", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF61", \
    "DDA Component Q", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF61", \
    "DS Digest H", \
    "Contains the result of OWHF2(DS Input (Term)) or OWHF2AES(DS Input (Term)), if DS Input (Term) is provided by the Terminal. This data object is to be supplied to the Card with the GENERATE AC command, as per DSDOL formatting.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF62", \
    "DS ODS Info", \
    "Contains Terminal provided data to be forwarded to the Card with the GENERATE AC command, as per DSDOL formatting.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF62", \
    "DDA Component D1", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF63", \
    "DDA Component D2", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF63", \
    "DS ODS Term", \
    "Contains Terminal provided data to be forwarded to the Card with the GENERATE AC command, as per DSDOL formatting.", \
    "Card", \
    "binary", \
    "", \
    "0", \
    "160", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF64", \
    "DDA Component Q Minus 1 Mod P", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF65", \
    "DDA Private Exponent", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF6B", \
    "Paypass Contactless", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF79", \
    "Dynamic Data Authentication Keys", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8101", \
    "DS Summary 2", \
    "This data allows the Kernel to check the consistency between DS Summary 1 and DS Summary 2, and so to ensure that DS ODS Card is provided by a genuine Card. It is located in the ICC Dynamic Data recovered from the Signed Dynamic Application Data.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8102", \
    "DS Summary 3", \
    "This data allows the Kernel to check whether the Card has seen the same transaction data as were sent by the Terminal/Kernel. It is located in the ICC Dynamic Data recovered from the Signed Dynamic Application Data.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "16", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8104", \
    "Balance Read Before Gen AC", \
    "The presence of Balance Read Before Gen AC in the TLV Database is an indication to the Kernel to read the offline balance from the Card before the GENERATE AC command. The Kernel stores the offline balance read from the Card in Balance Read Before Gen AC.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8105", \
    "Balance Read After Gen AC", \
    "The presence of Balance Read After Gen AC in the TLV Database is an indication to the Kernel to read the offline balance from the Card after the GENERATE AC command. The Kernel stores the offline balance read from the Card in Balance Read After Gen AC.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8106", \
    "Data Needed", \
    "List of tags included in the DEK signal to request information from the Terminal.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8107", \
    "CDOL1 Related Data", \
    "Command data field of the GENERATE AC command, coded according to CDOL1.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8108", \
    "DS AC Type", \
    "Contains the AC type indicated by the Terminal for which IDS data must be stored in the Card.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8109", \
    "DS Input (Term)", \
    "Contains Terminal provided data if permanent data storage in the Card was applicable (DS Slot Management Control[8]=1b), remains applicable or becomes applicable (DS ODS Info[8]=1b). DS Input (Term) is used by the Kernel as input to calculate DS Digest H.", \
    "Card", \
    "binary", \
    "", \
    "8", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810A", \
    "DS ODS Info For Reader", \
    "Contains instructions from the Terminal on how to proceed with the transaction if:<br />- The AC requested by the Terminal does not match the AC proposed by the Kernel<br />- The update of the slot data has failed", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810B", \
    "DS Summary Status", \
    "Information reported by the Kernel to the Terminal about:<br />- The consistency between DS Summary 1 and DS Summary 2 (successful read)<br />- The difference between DS Summary 2 and DS Summary 3 (successful write)<br />This data object is part of the Discretionary Data.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810C", \
    "Kernel ID", \
    "Contains a value that uniquely identifies each Kernel. There is one occurrence of this data object for each Kernel in the Reader.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810D", \
    "DSVN Term", \
    "Integrated data storage support by the Kernel depends on the presence of this data object. If it is absent, or is present with a length of zero, integrated data storage is not supported. Its value is '02' for this version of data storage functionality. This variable length data item has an initial byte that defines the maximum version number supported by the Terminal and a variable number of subsequent bytes that define how the Terminal supports earlier versions of the specification. As this is the first version, no legacy support is described and no additional bytes are present.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810E", \
    "Post-Gen AC Put Data Status", \
    "Information reported by the Kernel to the Terminal, about the processing of PUT DATA commands after processing the GENERATE AC command. Possible values are 'completed' or 'not completed'. In the latter case, this status is not specific about which of the PUT DATA commands failed, or about how many of these commands have failed or succeeded. This data object is part of the Discretionary Data provided by the Kernel to the Terminal.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF810F", \
    "Pre-Gen AC Put Data Status", \
    "Information reported by the Kernel to the Terminal, about the processing of PUT DATA commands before sending the GENERATE AC command. Possible values are 'completed' or 'not completed'. In the latter case, this status is not specific about which of the PUT DATA commands failed, or about how many of these commands have failed or succeeded. This data object is part of the Discretionary Data provided by the Kernel to the Terminal.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8110", \
    "Proceed To First Write Flag", \
    "Indicates that the Terminal will send no more requests to read data other than as indicated in Tags To Read. This data item indicates the point at which the Kernel shifts from the Card reading phase to the Card writing phase. <br />If Proceed To First Write Flag is not present or is present with non zero length and value different from zero, then the Kernel proceeds without waiting. <br />If Proceed To First Write Flag is present with zero length, then the Kernel sends a DEK signal to the Terminal and waits for the DET signal. <br />If Proceed To First Write Flag is present with non zero length and value equal to zero, then the Kernel waits for a DET signal from the Terminal without sending a DEK signal.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8111", \
    "PDOL Related Data", \
    "Command data field of the GET PROCESSING OPTIONS command, coded according to PDOL.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8112", \
    "Tags To Read", \
    "List of tags indicating the data the Terminal has requested to be read. This data item is present if the Terminal wants any data back from the Card before the Data Record. This could be in the context of SDS, or for non data storage usage reasons, for example the PAN. This data item may contain configured data.<br />This data object may be provided several times by the Terminal. Therefore, the values of each of these tags must be accumulated in the Tags To Read Yet buffer.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8113", \
    "DRDOL Related Data", \
    "Command data field of the RECOVER AC command, coded according to DRDOL.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8114", \
    "Reference Control Parameter", \
    "Working variable to store the reference control parameter of the GENERATE AC command.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8115", \
    "Error Indication", \
    "Contains information regarding the nature of the error that has been encountered during the transaction processing. This data object is part of the Discretionary Data.", \
    "Card", \
    "binary", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8116", \
    "User Interface Request Data", \
    "Combines all parameters to be sent with the MSG signal.", \
    "", \
    "binary", \
    "", \
    "22", \
    "22", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8117", \
    "Card Data Input Capability", \
    "Indicates the card data input capability of the Terminal and Reader. The Card Data Input Capability is coded according to Annex A.2 of [EMV Book 4].", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8118", \
    "CVM Capability - CVM Required", \
    "Indicates the CVM capability of the Terminal and Reader when the transaction amount is greater than the Reader CVM Required Limit. The CVM Capability - CVM Required is coded according to Annex A.2 of [EMV Book 4].", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8119", \
    "CVM Capability - No CVM Required", \
    "Indicates the CVM capability of the Terminal and Reader when the transaction amount is less than or equal to the Reader CVM Required Limit. The CVM Capability - No CVM Required is coded according to Annex A.2 of [EMV Book 4].", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811A", \
    "Default UDOL", \
    "The Default UDOL is the UDOL to be used for constructing the value field of the COMPUTE CRYPTOGRAPHIC CHECKSUM command if the UDOL in the Card is not present. The Default UDOL must contain as its only entry the tag and length of the Unpredictable Number (Numeric) and has the value: '9F6A04'.", \
    "Card", \
    "binary", \
    "", \
    "3", \
    "3", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811B", \
    "Kernel Configuration", \
    "Indicates the Kernel configuration options.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811C", \
    "Max Lifetime of Torn Transaction Log Record", \
    "Maximum time, in seconds, that a record can remain in the Torn Transaction Log.", \
    "", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811D", \
    "Max Number of Torn Transaction Log Records", \
    "Indicates the maximum number of records that can be stored in the Torn Transaction Log.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811E", \
    "Mag-stripe CVM Capability - CVM Required", \
    "Indicates the CVM capability of the Terminal/Reader in the case of a mag-stripe mode transaction when the Amount, Authorized (Numeric) is greater than the Reader CVM Required Limit.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF811F", \
    "Security Capability", \
    "Indicates the security capability of the Kernel. The Security Capability is coded according to Annex A.2 of [EMV Book 4].", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8120", \
    "Terminal Action Code - Default", \
    "Specifies the acquirer's conditions that cause a transaction to be rejected on an offline only Terminal.", \
    "", \
    "binary", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8121", \
    "Terminal Action Code - Denial", \
    "Specifies the acquirer's conditions that cause the denial of a transaction without attempting to go online.", \
    "", \
    "binary", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8122", \
    "Terminal Action Code - Online", \
    "Specifies the acquirer's conditions that cause a transaction to be transmitted online on an online capable Terminal.", \
    "", \
    "binary", \
    "", \
    "5", \
    "5", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8123", \
    "Reader Contactless Floor Limit", \
    "Indicates the transaction amount above which transactions must be authorized online.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8124", \
    "Reader Contactless Transaction Limit (No On-device CVM)", \
    "Indicates the transaction amount above which the transaction is not allowed, when on device cardholder verification is not supported.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8125", \
    "Reader Contactless Transaction Limit (On-device CVM)", \
    "Indicates the transaction amount above which the transaction is not allowed, when on device cardholder verification is supported.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8126", \
    "Reader CVM Required Limit", \
    "Indicates the transaction amount above which the Kernel instantiates the CVM capabilities field in Terminal Capabilities with CVM Capability - CVM Required.", \
    "", \
    "n 12", \
    "", \
    "6", \
    "6", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8127", \
    "Time Out Value", \
    "Defines the time in ms before the timer generates a TIMEOUT signal.", \
    "", \
    "binary", \
    "", \
    "2", \
    "2", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8128", \
    "IDS Status", \
    "Indicates if the transaction performs an IDS read and/or write.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8129", \
    "Outcome Parameter Set", \
    "This data object is used to indicate to the Terminal the outcome of the transaction processing by the Kernel. Its value is an accumulation of results about applicable parts of the transaction.", \
    "", \
    "binary", \
    "", \
    "8", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF812A", \
    "DD Card (Track1)", \
    "If Track 1 Data is present, then DD Card (Track1) contains a copy of the discretionary data field of Track 1 Data as returned by the Card in the file read using the READ RECORD command during a mag-stripe mode transaction (i.e. without Unpredictable Number (Numeric), Application Transaction Counter, CVC3 (Track1) and nUN included).", \
    "Card", \
    "ans", \
    "", \
    "0", \
    "56", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF812B", \
    "DD Card (Track2)", \
    "DD Card (Track2) contains a copy of the discretionary data field of Track 2 Data as returned by the Card in the file read using the READ RECORD command during a mag-stripe mode transaction (i.e. without Unpredictable Number (Numeric), Application Transaction Counter, CVC3 (Track2) and nUN included).", \
    "Card", \
    "cn", \
    "", \
    "0", \
    "8", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF812C", \
    "Mag-stripe CVM Capability - No CVM Required", \
    "Indicates the CVM capability of the Terminal/Reader in the case of a mag-stripe mode transaction when the Amount, Authorized (Numeric) is less than or equal to the Reader CVM Required Limit.", \
    "Card", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF812D", \
    "Message Hold Time", \
    "Indicates the default delay for the processing of the next MSG signal. The Message Hold Time is an integer in units of 100ms.", \
    "", \
    "n 6", \
    "", \
    "3", \
    "3", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8130", \
    "Hold Time Value", \
    "Indicates the time that the field is to be turned off after the transaction is completed if requested to do so by the cardholder device. The Hold Time Value is in units of 100ms.", \
    "", \
    "binary", \
    "", \
    "1", \
    "1", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "DF8131", \
    "Phone Message Table", \
    "The Phone Message Table is a variable length list of entries of eight bytes each, and defines for the selected AID the message and status identifiers as a function of the POS Cardholder Interaction Information. Each entry in the Phone Message Table contains the fields shown in the table below.<br />Note that the last entry in the Phone Message Table must always have PCII Mask and PCII Value set to '000000'.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF60", \
    "Visa International", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF62", \
    "Visa Magnetic Stripe", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF63", \
    "Visa Quick VSDC", \
    "", \
    "Card", \
    "H", \
    "", \
    "", \
    "", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8101", \
    "Torn Record", \
    "A copy of a record from the Torn Transaction Log that is expired. Torn Record is sent to the Terminal as part of the Discretionary Data.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8102", \
    "Tags To Write Before Gen AC", \
    "List of data objects indicating the Terminal data writing requests to be sent to the Card before processing the GENERATE AC command or the RECOVER AC command. This data object may be provided several times by the Terminal in a DET signal. Therefore, these values must be accumulated in Tags To Write Yet Before Gen AC buffer.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8103", \
    "Tags To Write After Gen AC", \
    "Contains the Terminal data writing requests to be sent to the Card after processing the GENERATE AC command or the RECOVER AC command. The value of this data object is composed of a series of TLVs. This data object may be provided several times by the Terminal in a DET signal. Therefore, these values must be accumulated in Tags To Write Yet After Gen AC.", \
    "", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8104", \
    "Data To Send", \
    "List of data objects that contains the accumulated data sent by the Kernel to the Terminal in a DEK signal. These data may correspond to Terminal reading requests, obtained from the Card by means of GET DATA or READ RECORD commands, or may correspond to data that the Kernel posts to the Terminal as part of its own processing.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8105", \
    "Data Record", \
    "The Data Record is a list of TLV encoded data objects returned with the Outcome Parameter Set on the completion of transaction processing.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
    "FF8106", \
    "Discretionary Data", \
    "The Discretionary Data is a list of Kernel-specific data objects sent to the Terminal as a separate field in the OUT signal.", \
    "Card", \
    "binary", \
    "", \
    "var.", \
    "var.", \
    "", \
    "")
TAG_DEFINE_346342354254643( \
	"DF8147", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
	"DF814A", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
	"DF814B", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
	"DF814C", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
	"DF814D", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
TAG_DEFINE_346342354254643( \
	"DF814E", \
	"Please tell me", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"", \
	"")
