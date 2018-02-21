
// Generated from ./Java8.g4 by ANTLR 4.7.1


#include "Java8Listener.h"

#include "Java8Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Java8Parser::Java8Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Java8Parser::~Java8Parser() {
  delete _interpreter;
}

std::string Java8Parser::getGrammarFileName() const {
  return "Java8.g4";
}

const std::vector<std::string>& Java8Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Java8Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LiteralContext ------------------------------------------------------------------

Java8Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LiteralContext::IntegerLiteral() {
  return getToken(Java8Parser::IntegerLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::FloatingPointLiteral() {
  return getToken(Java8Parser::FloatingPointLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::BooleanLiteral() {
  return getToken(Java8Parser::BooleanLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::CharacterLiteral() {
  return getToken(Java8Parser::CharacterLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::StringLiteral() {
  return getToken(Java8Parser::StringLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::NullLiteral() {
  return getToken(Java8Parser::NullLiteral, 0);
}


size_t Java8Parser::LiteralContext::getRuleIndex() const {
  return Java8Parser::RuleLiteral;
}

void Java8Parser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Java8Parser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

Java8Parser::LiteralContext* Java8Parser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 0, Java8Parser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

Java8Parser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitiveTypeContext* Java8Parser::TypeContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::TypeContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}


size_t Java8Parser::TypeContext::getRuleIndex() const {
  return Java8Parser::RuleType;
}

void Java8Parser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void Java8Parser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

Java8Parser::TypeContext* Java8Parser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 2, Java8Parser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      primitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
      referenceType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

Java8Parser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumericTypeContext* Java8Parser::PrimitiveTypeContext::numericType() {
  return getRuleContext<Java8Parser::NumericTypeContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::PrimitiveTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::PrimitiveTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::PrimitiveTypeContext::getRuleIndex() const {
  return Java8Parser::RulePrimitiveType;
}

void Java8Parser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void Java8Parser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}

Java8Parser::PrimitiveTypeContext* Java8Parser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, Java8Parser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(483);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(480);
        annotation();
        setState(485);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(486);
      numericType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(490);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(487);
        annotation();
        setState(492);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(493);
      match(Java8Parser::BOOLEAN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericTypeContext ------------------------------------------------------------------

Java8Parser::NumericTypeContext::NumericTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::IntegralTypeContext* Java8Parser::NumericTypeContext::integralType() {
  return getRuleContext<Java8Parser::IntegralTypeContext>(0);
}

Java8Parser::FloatingPointTypeContext* Java8Parser::NumericTypeContext::floatingPointType() {
  return getRuleContext<Java8Parser::FloatingPointTypeContext>(0);
}


size_t Java8Parser::NumericTypeContext::getRuleIndex() const {
  return Java8Parser::RuleNumericType;
}

void Java8Parser::NumericTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericType(this);
}

void Java8Parser::NumericTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericType(this);
}

Java8Parser::NumericTypeContext* Java8Parser::numericType() {
  NumericTypeContext *_localctx = _tracker.createInstance<NumericTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, Java8Parser::RuleNumericType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(498);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        integralType();
        break;
      }

      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(497);
        floatingPointType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegralTypeContext ------------------------------------------------------------------

Java8Parser::IntegralTypeContext::IntegralTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::IntegralTypeContext::getRuleIndex() const {
  return Java8Parser::RuleIntegralType;
}

void Java8Parser::IntegralTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegralType(this);
}

void Java8Parser::IntegralTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegralType(this);
}

Java8Parser::IntegralTypeContext* Java8Parser::integralType() {
  IntegralTypeContext *_localctx = _tracker.createInstance<IntegralTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, Java8Parser::RuleIntegralType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatingPointTypeContext ------------------------------------------------------------------

Java8Parser::FloatingPointTypeContext::FloatingPointTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::FloatingPointTypeContext::getRuleIndex() const {
  return Java8Parser::RuleFloatingPointType;
}

void Java8Parser::FloatingPointTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatingPointType(this);
}

void Java8Parser::FloatingPointTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatingPointType(this);
}

Java8Parser::FloatingPointTypeContext* Java8Parser::floatingPointType() {
  FloatingPointTypeContext *_localctx = _tracker.createInstance<FloatingPointTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, Java8Parser::RuleFloatingPointType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    _la = _input->LA(1);
    if (!(_la == Java8Parser::DOUBLE

    || _la == Java8Parser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceTypeContext ------------------------------------------------------------------

Java8Parser::ReferenceTypeContext::ReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ReferenceTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ReferenceTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ArrayTypeContext* Java8Parser::ReferenceTypeContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::ReferenceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleReferenceType;
}

void Java8Parser::ReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferenceType(this);
}

void Java8Parser::ReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferenceType(this);
}

Java8Parser::ReferenceTypeContext* Java8Parser::referenceType() {
  ReferenceTypeContext *_localctx = _tracker.createInstance<ReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, Java8Parser::RuleReferenceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(507);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(504);
      classOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(505);
      typeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(506);
      arrayType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lfno_classOrInterfaceTypeContext>(0);
}

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::ClassType_lf_classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::classType_lf_classOrInterfaceType() {
  return getRuleContexts<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>();
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType_lf_classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lf_classOrInterfaceType() {
  return getRuleContexts<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext>();
}

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lf_classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext>(i);
}


size_t Java8Parser::ClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassOrInterfaceType;
}

void Java8Parser::ClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrInterfaceType(this);
}

void Java8Parser::ClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrInterfaceType(this);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::classOrInterfaceType() {
  ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, Java8Parser::RuleClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(511);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(509);
      classType_lfno_classOrInterfaceType();
      break;
    }

    case 2: {
      setState(510);
      interfaceType_lfno_classOrInterfaceType();
      break;
    }

    }
    setState(517);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(515);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(513);
          classType_lf_classOrInterfaceType();
          break;
        }

        case 2: {
          setState(514);
          interfaceType_lf_classOrInterfaceType();
          break;
        }

        } 
      }
      setState(519);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeContext ------------------------------------------------------------------

Java8Parser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ClassTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::ClassTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType;
}

void Java8Parser::ClassTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType(this);
}

void Java8Parser::ClassTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType(this);
}

Java8Parser::ClassTypeContext* Java8Parser::classType() {
  ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, Java8Parser::RuleClassType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(542);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(523);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(520);
        annotation();
        setState(525);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(526);
      match(Java8Parser::Identifier);
      setState(528);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(527);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      classOrInterfaceType();
      setState(531);
      match(Java8Parser::DOT);
      setState(535);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(532);
        annotation();
        setState(537);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(538);
      match(Java8Parser::Identifier);
      setState(540);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(539);
        typeArguments();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType_lf_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType_lf_classOrInterfaceTypeContext::ClassType_lf_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType_lf_classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType_lf_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType_lf_classOrInterfaceType;
}

void Java8Parser::ClassType_lf_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType_lf_classOrInterfaceType(this);
}

void Java8Parser::ClassType_lf_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType_lf_classOrInterfaceType(this);
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::classType_lf_classOrInterfaceType() {
  ClassType_lf_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType_lf_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, Java8Parser::RuleClassType_lf_classOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    match(Java8Parser::DOT);
    setState(548);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(545);
      annotation();
      setState(550);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(551);
    match(Java8Parser::Identifier);
    setState(553);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(552);
      typeArguments();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType_lfno_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::ClassType_lfno_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType_lfno_classOrInterfaceType;
}

void Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType_lfno_classOrInterfaceType(this);
}

void Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType_lfno_classOrInterfaceType(this);
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::classType_lfno_classOrInterfaceType() {
  ClassType_lfno_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType_lfno_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, Java8Parser::RuleClassType_lfno_classOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(555);
      annotation();
      setState(560);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(561);
    match(Java8Parser::Identifier);
    setState(563);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(562);
      typeArguments();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceTypeContext::InterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassTypeContext* Java8Parser::InterfaceTypeContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}


size_t Java8Parser::InterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType;
}

void Java8Parser::InterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType(this);
}

void Java8Parser::InterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType(this);
}

Java8Parser::InterfaceTypeContext* Java8Parser::interfaceType() {
  InterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, Java8Parser::RuleInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    classType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType_lf_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::InterfaceType_lf_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::classType_lf_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType_lf_classOrInterfaceType;
}

void Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType_lf_classOrInterfaceType(this);
}

void Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType_lf_classOrInterfaceType(this);
}

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext* Java8Parser::interfaceType_lf_classOrInterfaceType() {
  InterfaceType_lf_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType_lf_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, Java8Parser::RuleInterfaceType_lf_classOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    classType_lf_classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType_lfno_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::InterfaceType_lfno_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::classType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lfno_classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType_lfno_classOrInterfaceType;
}

void Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType_lfno_classOrInterfaceType(this);
}

void Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType_lfno_classOrInterfaceType(this);
}

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext* Java8Parser::interfaceType_lfno_classOrInterfaceType() {
  InterfaceType_lfno_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType_lfno_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, Java8Parser::RuleInterfaceType_lfno_classOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    classType_lfno_classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVariableContext ------------------------------------------------------------------

Java8Parser::TypeVariableContext::TypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::TypeVariableContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::TypeVariableContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::TypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleTypeVariable;
}

void Java8Parser::TypeVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeVariable(this);
}

void Java8Parser::TypeVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeVariable(this);
}

Java8Parser::TypeVariableContext* Java8Parser::typeVariable() {
  TypeVariableContext *_localctx = _tracker.createInstance<TypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 28, Java8Parser::RuleTypeVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(571);
      annotation();
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(577);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

Java8Parser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitiveTypeContext* Java8Parser::ArrayTypeContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArrayTypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArrayTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ArrayTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ArrayTypeContext::getRuleIndex() const {
  return Java8Parser::RuleArrayType;
}

void Java8Parser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void Java8Parser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}

Java8Parser::ArrayTypeContext* Java8Parser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, Java8Parser::RuleArrayType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(588);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(579);
      primitiveType();
      setState(580);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(582);
      classOrInterfaceType();
      setState(583);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(585);
      typeVariable();
      setState(586);
      dims();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimsContext ------------------------------------------------------------------

Java8Parser::DimsContext::DimsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimsContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimsContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimsContext::getRuleIndex() const {
  return Java8Parser::RuleDims;
}

void Java8Parser::DimsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDims(this);
}

void Java8Parser::DimsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDims(this);
}

Java8Parser::DimsContext* Java8Parser::dims() {
  DimsContext *_localctx = _tracker.createInstance<DimsContext>(_ctx, getState());
  enterRule(_localctx, 32, Java8Parser::RuleDims);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(593);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(590);
      annotation();
      setState(595);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(596);
    match(Java8Parser::LBRACK);
    setState(597);
    match(Java8Parser::RBRACK);
    setState(608);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(601);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(598);
          annotation();
          setState(603);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(604);
        match(Java8Parser::LBRACK);
        setState(605);
        match(Java8Parser::RBRACK); 
      }
      setState(610);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

Java8Parser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::TypeParameterModifierContext *> Java8Parser::TypeParameterContext::typeParameterModifier() {
  return getRuleContexts<Java8Parser::TypeParameterModifierContext>();
}

Java8Parser::TypeParameterModifierContext* Java8Parser::TypeParameterContext::typeParameterModifier(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterModifierContext>(i);
}

Java8Parser::TypeBoundContext* Java8Parser::TypeParameterContext::typeBound() {
  return getRuleContext<Java8Parser::TypeBoundContext>(0);
}


size_t Java8Parser::TypeParameterContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameter;
}

void Java8Parser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void Java8Parser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}

Java8Parser::TypeParameterContext* Java8Parser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 34, Java8Parser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(611);
      typeParameterModifier();
      setState(616);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(617);
    match(Java8Parser::Identifier);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(618);
      typeBound();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterModifierContext ------------------------------------------------------------------

Java8Parser::TypeParameterModifierContext::TypeParameterModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::TypeParameterModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::TypeParameterModifierContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterModifier;
}

void Java8Parser::TypeParameterModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterModifier(this);
}

void Java8Parser::TypeParameterModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterModifier(this);
}

Java8Parser::TypeParameterModifierContext* Java8Parser::typeParameterModifier() {
  TypeParameterModifierContext *_localctx = _tracker.createInstance<TypeParameterModifierContext>(_ctx, getState());
  enterRule(_localctx, 36, Java8Parser::RuleTypeParameterModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

Java8Parser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeVariableContext* Java8Parser::TypeBoundContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::TypeBoundContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::TypeBoundContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::TypeBoundContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}


size_t Java8Parser::TypeBoundContext::getRuleIndex() const {
  return Java8Parser::RuleTypeBound;
}

void Java8Parser::TypeBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeBound(this);
}

void Java8Parser::TypeBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeBound(this);
}

Java8Parser::TypeBoundContext* Java8Parser::typeBound() {
  TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
  enterRule(_localctx, 38, Java8Parser::RuleTypeBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(623);
      match(Java8Parser::EXTENDS);
      setState(624);
      typeVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(625);
      match(Java8Parser::EXTENDS);
      setState(626);
      classOrInterfaceType();
      setState(630);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(627);
        additionalBound();
        setState(632);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionalBoundContext ------------------------------------------------------------------

Java8Parser::AdditionalBoundContext::AdditionalBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InterfaceTypeContext* Java8Parser::AdditionalBoundContext::interfaceType() {
  return getRuleContext<Java8Parser::InterfaceTypeContext>(0);
}


size_t Java8Parser::AdditionalBoundContext::getRuleIndex() const {
  return Java8Parser::RuleAdditionalBound;
}

void Java8Parser::AdditionalBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionalBound(this);
}

void Java8Parser::AdditionalBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionalBound(this);
}

Java8Parser::AdditionalBoundContext* Java8Parser::additionalBound() {
  AdditionalBoundContext *_localctx = _tracker.createInstance<AdditionalBoundContext>(_ctx, getState());
  enterRule(_localctx, 40, Java8Parser::RuleAdditionalBound);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(Java8Parser::BITAND);
    setState(636);
    interfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeArgumentListContext* Java8Parser::TypeArgumentsContext::typeArgumentList() {
  return getRuleContext<Java8Parser::TypeArgumentListContext>(0);
}


size_t Java8Parser::TypeArgumentsContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArguments;
}

void Java8Parser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArguments(this);
}

void Java8Parser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArguments(this);
}

Java8Parser::TypeArgumentsContext* Java8Parser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 42, Java8Parser::RuleTypeArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(638);
    match(Java8Parser::LT);
    setState(639);
    typeArgumentList();
    setState(640);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

Java8Parser::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeArgumentContext *> Java8Parser::TypeArgumentListContext::typeArgument() {
  return getRuleContexts<Java8Parser::TypeArgumentContext>();
}

Java8Parser::TypeArgumentContext* Java8Parser::TypeArgumentListContext::typeArgument(size_t i) {
  return getRuleContext<Java8Parser::TypeArgumentContext>(i);
}


size_t Java8Parser::TypeArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentList;
}

void Java8Parser::TypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentList(this);
}

void Java8Parser::TypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentList(this);
}

Java8Parser::TypeArgumentListContext* Java8Parser::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 44, Java8Parser::RuleTypeArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    typeArgument();
    setState(647);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(643);
      match(Java8Parser::COMMA);
      setState(644);
      typeArgument();
      setState(649);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

Java8Parser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReferenceTypeContext* Java8Parser::TypeArgumentContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::WildcardContext* Java8Parser::TypeArgumentContext::wildcard() {
  return getRuleContext<Java8Parser::WildcardContext>(0);
}


size_t Java8Parser::TypeArgumentContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgument;
}

void Java8Parser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgument(this);
}

void Java8Parser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgument(this);
}

Java8Parser::TypeArgumentContext* Java8Parser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 46, Java8Parser::RuleTypeArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(652);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(650);
      referenceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(651);
      wildcard();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardContext ------------------------------------------------------------------

Java8Parser::WildcardContext::WildcardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::WildcardContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::WildcardContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::WildcardBoundsContext* Java8Parser::WildcardContext::wildcardBounds() {
  return getRuleContext<Java8Parser::WildcardBoundsContext>(0);
}


size_t Java8Parser::WildcardContext::getRuleIndex() const {
  return Java8Parser::RuleWildcard;
}

void Java8Parser::WildcardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcard(this);
}

void Java8Parser::WildcardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcard(this);
}

Java8Parser::WildcardContext* Java8Parser::wildcard() {
  WildcardContext *_localctx = _tracker.createInstance<WildcardContext>(_ctx, getState());
  enterRule(_localctx, 48, Java8Parser::RuleWildcard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(654);
      annotation();
      setState(659);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(660);
    match(Java8Parser::QUESTION);
    setState(662);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS

    || _la == Java8Parser::SUPER) {
      setState(661);
      wildcardBounds();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardBoundsContext ------------------------------------------------------------------

Java8Parser::WildcardBoundsContext::WildcardBoundsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReferenceTypeContext* Java8Parser::WildcardBoundsContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}


size_t Java8Parser::WildcardBoundsContext::getRuleIndex() const {
  return Java8Parser::RuleWildcardBounds;
}

void Java8Parser::WildcardBoundsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcardBounds(this);
}

void Java8Parser::WildcardBoundsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcardBounds(this);
}

Java8Parser::WildcardBoundsContext* Java8Parser::wildcardBounds() {
  WildcardBoundsContext *_localctx = _tracker.createInstance<WildcardBoundsContext>(_ctx, getState());
  enterRule(_localctx, 50, Java8Parser::RuleWildcardBounds);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(668);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::EXTENDS: {
        enterOuterAlt(_localctx, 1);
        setState(664);
        match(Java8Parser::EXTENDS);
        setState(665);
        referenceType();
        break;
      }

      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 2);
        setState(666);
        match(Java8Parser::SUPER);
        setState(667);
        referenceType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageNameContext ------------------------------------------------------------------

Java8Parser::PackageNameContext::PackageNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageNameContext* Java8Parser::PackageNameContext::packageName() {
  return getRuleContext<Java8Parser::PackageNameContext>(0);
}


size_t Java8Parser::PackageNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageName;
}

void Java8Parser::PackageNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageName(this);
}

void Java8Parser::PackageNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageName(this);
}


Java8Parser::PackageNameContext* Java8Parser::packageName() {
   return packageName(0);
}

Java8Parser::PackageNameContext* Java8Parser::packageName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageNameContext *_localctx = _tracker.createInstance<PackageNameContext>(_ctx, parentState);
  Java8Parser::PackageNameContext *previousContext = _localctx;
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, Java8Parser::RulePackageName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(671);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(678);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageName);
        setState(673);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(674);
        match(Java8Parser::DOT);
        setState(675);
        match(Java8Parser::Identifier); 
      }
      setState(680);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

Java8Parser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::TypeNameContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}


size_t Java8Parser::TypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleTypeName;
}

void Java8Parser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void Java8Parser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}

Java8Parser::TypeNameContext* Java8Parser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 54, Java8Parser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(681);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(682);
      packageOrTypeName(0);
      setState(683);
      match(Java8Parser::DOT);
      setState(684);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageOrTypeNameContext ------------------------------------------------------------------

Java8Parser::PackageOrTypeNameContext::PackageOrTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageOrTypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::PackageOrTypeNameContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}


size_t Java8Parser::PackageOrTypeNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageOrTypeName;
}

void Java8Parser::PackageOrTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageOrTypeName(this);
}

void Java8Parser::PackageOrTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageOrTypeName(this);
}


Java8Parser::PackageOrTypeNameContext* Java8Parser::packageOrTypeName() {
   return packageOrTypeName(0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::packageOrTypeName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageOrTypeNameContext *_localctx = _tracker.createInstance<PackageOrTypeNameContext>(_ctx, parentState);
  Java8Parser::PackageOrTypeNameContext *previousContext = _localctx;
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, Java8Parser::RulePackageOrTypeName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(689);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(696);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageOrTypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageOrTypeName);
        setState(691);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(692);
        match(Java8Parser::DOT);
        setState(693);
        match(Java8Parser::Identifier); 
      }
      setState(698);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionNameContext ------------------------------------------------------------------

Java8Parser::ExpressionNameContext::ExpressionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExpressionNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ExpressionNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}


size_t Java8Parser::ExpressionNameContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionName;
}

void Java8Parser::ExpressionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionName(this);
}

void Java8Parser::ExpressionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionName(this);
}

Java8Parser::ExpressionNameContext* Java8Parser::expressionName() {
  ExpressionNameContext *_localctx = _tracker.createInstance<ExpressionNameContext>(_ctx, getState());
  enterRule(_localctx, 58, Java8Parser::RuleExpressionName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(704);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(699);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(700);
      ambiguousName(0);
      setState(701);
      match(Java8Parser::DOT);
      setState(702);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodNameContext ------------------------------------------------------------------

Java8Parser::MethodNameContext::MethodNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::MethodNameContext::getRuleIndex() const {
  return Java8Parser::RuleMethodName;
}

void Java8Parser::MethodNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodName(this);
}

void Java8Parser::MethodNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodName(this);
}

Java8Parser::MethodNameContext* Java8Parser::methodName() {
  MethodNameContext *_localctx = _tracker.createInstance<MethodNameContext>(_ctx, getState());
  enterRule(_localctx, 60, Java8Parser::RuleMethodName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(706);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AmbiguousNameContext ------------------------------------------------------------------

Java8Parser::AmbiguousNameContext::AmbiguousNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AmbiguousNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::AmbiguousNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}


size_t Java8Parser::AmbiguousNameContext::getRuleIndex() const {
  return Java8Parser::RuleAmbiguousName;
}

void Java8Parser::AmbiguousNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAmbiguousName(this);
}

void Java8Parser::AmbiguousNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAmbiguousName(this);
}


Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName() {
   return ambiguousName(0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AmbiguousNameContext *_localctx = _tracker.createInstance<AmbiguousNameContext>(_ctx, parentState);
  Java8Parser::AmbiguousNameContext *previousContext = _localctx;
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, Java8Parser::RuleAmbiguousName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(709);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(716);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AmbiguousNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAmbiguousName);
        setState(711);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(712);
        match(Java8Parser::DOT);
        setState(713);
        match(Java8Parser::Identifier); 
      }
      setState(718);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

Java8Parser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CompilationUnitContext::EOF() {
  return getToken(Java8Parser::EOF, 0);
}

Java8Parser::PackageDeclarationContext* Java8Parser::CompilationUnitContext::packageDeclaration() {
  return getRuleContext<Java8Parser::PackageDeclarationContext>(0);
}

std::vector<Java8Parser::ImportDeclarationContext *> Java8Parser::CompilationUnitContext::importDeclaration() {
  return getRuleContexts<Java8Parser::ImportDeclarationContext>();
}

Java8Parser::ImportDeclarationContext* Java8Parser::CompilationUnitContext::importDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ImportDeclarationContext>(i);
}

std::vector<Java8Parser::TypeDeclarationContext *> Java8Parser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<Java8Parser::TypeDeclarationContext>();
}

Java8Parser::TypeDeclarationContext* Java8Parser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<Java8Parser::TypeDeclarationContext>(i);
}


size_t Java8Parser::CompilationUnitContext::getRuleIndex() const {
  return Java8Parser::RuleCompilationUnit;
}

void Java8Parser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void Java8Parser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}

Java8Parser::CompilationUnitContext* Java8Parser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 64, Java8Parser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(719);
      packageDeclaration();
      break;
    }

    }
    setState(725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::IMPORT) {
      setState(722);
      importDeclaration();
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(731);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::AT) {
      setState(728);
      typeDeclaration();
      setState(733);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(734);
    match(Java8Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

Java8Parser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PackageNameContext* Java8Parser::PackageDeclarationContext::packageName() {
  return getRuleContext<Java8Parser::PackageNameContext>(0);
}

std::vector<Java8Parser::PackageModifierContext *> Java8Parser::PackageDeclarationContext::packageModifier() {
  return getRuleContexts<Java8Parser::PackageModifierContext>();
}

Java8Parser::PackageModifierContext* Java8Parser::PackageDeclarationContext::packageModifier(size_t i) {
  return getRuleContext<Java8Parser::PackageModifierContext>(i);
}


size_t Java8Parser::PackageDeclarationContext::getRuleIndex() const {
  return Java8Parser::RulePackageDeclaration;
}

void Java8Parser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclaration(this);
}

void Java8Parser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclaration(this);
}

Java8Parser::PackageDeclarationContext* Java8Parser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, Java8Parser::RulePackageDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(739);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(736);
      packageModifier();
      setState(741);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(742);
    match(Java8Parser::PACKAGE);
    setState(743);
    packageName(0);
    setState(744);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageModifierContext ------------------------------------------------------------------

Java8Parser::PackageModifierContext::PackageModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::PackageModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::PackageModifierContext::getRuleIndex() const {
  return Java8Parser::RulePackageModifier;
}

void Java8Parser::PackageModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageModifier(this);
}

void Java8Parser::PackageModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageModifier(this);
}

Java8Parser::PackageModifierContext* Java8Parser::packageModifier() {
  PackageModifierContext *_localctx = _tracker.createInstance<PackageModifierContext>(_ctx, getState());
  enterRule(_localctx, 68, Java8Parser::RulePackageModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(746);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

Java8Parser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SingleTypeImportDeclarationContext* Java8Parser::ImportDeclarationContext::singleTypeImportDeclaration() {
  return getRuleContext<Java8Parser::SingleTypeImportDeclarationContext>(0);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::typeImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::TypeImportOnDemandDeclarationContext>(0);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::ImportDeclarationContext::singleStaticImportDeclaration() {
  return getRuleContext<Java8Parser::SingleStaticImportDeclarationContext>(0);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::staticImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::StaticImportOnDemandDeclarationContext>(0);
}


size_t Java8Parser::ImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleImportDeclaration;
}

void Java8Parser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void Java8Parser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}

Java8Parser::ImportDeclarationContext* Java8Parser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, Java8Parser::RuleImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(752);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(748);
      singleTypeImportDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(749);
      typeImportOnDemandDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(750);
      singleStaticImportDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(751);
      staticImportOnDemandDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleTypeImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingleTypeImportDeclarationContext::SingleTypeImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::SingleTypeImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::SingleTypeImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleTypeImportDeclaration;
}

void Java8Parser::SingleTypeImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleTypeImportDeclaration(this);
}

void Java8Parser::SingleTypeImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleTypeImportDeclaration(this);
}

Java8Parser::SingleTypeImportDeclarationContext* Java8Parser::singleTypeImportDeclaration() {
  SingleTypeImportDeclarationContext *_localctx = _tracker.createInstance<SingleTypeImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, Java8Parser::RuleSingleTypeImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(754);
    match(Java8Parser::IMPORT);
    setState(755);
    typeName();
    setState(756);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeImportOnDemandDeclarationContext::TypeImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::TypeImportOnDemandDeclarationContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}


size_t Java8Parser::TypeImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeImportOnDemandDeclaration;
}

void Java8Parser::TypeImportOnDemandDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeImportOnDemandDeclaration(this);
}

void Java8Parser::TypeImportOnDemandDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeImportOnDemandDeclaration(this);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::typeImportOnDemandDeclaration() {
  TypeImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<TypeImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 74, Java8Parser::RuleTypeImportOnDemandDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    match(Java8Parser::IMPORT);
    setState(759);
    packageOrTypeName(0);
    setState(760);
    match(Java8Parser::DOT);
    setState(761);
    match(Java8Parser::MUL);
    setState(762);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleStaticImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingleStaticImportDeclarationContext::SingleStaticImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::SingleStaticImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::SingleStaticImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleStaticImportDeclaration;
}

void Java8Parser::SingleStaticImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleStaticImportDeclaration(this);
}

void Java8Parser::SingleStaticImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleStaticImportDeclaration(this);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::singleStaticImportDeclaration() {
  SingleStaticImportDeclarationContext *_localctx = _tracker.createInstance<SingleStaticImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 76, Java8Parser::RuleSingleStaticImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    match(Java8Parser::IMPORT);
    setState(765);
    match(Java8Parser::STATIC);
    setState(766);
    typeName();
    setState(767);
    match(Java8Parser::DOT);
    setState(768);
    match(Java8Parser::Identifier);
    setState(769);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::StaticImportOnDemandDeclarationContext::StaticImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::StaticImportOnDemandDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::StaticImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleStaticImportOnDemandDeclaration;
}

void Java8Parser::StaticImportOnDemandDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticImportOnDemandDeclaration(this);
}

void Java8Parser::StaticImportOnDemandDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticImportOnDemandDeclaration(this);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::staticImportOnDemandDeclaration() {
  StaticImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<StaticImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, Java8Parser::RuleStaticImportOnDemandDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    match(Java8Parser::IMPORT);
    setState(772);
    match(Java8Parser::STATIC);
    setState(773);
    typeName();
    setState(774);
    match(Java8Parser::DOT);
    setState(775);
    match(Java8Parser::MUL);
    setState(776);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassDeclarationContext* Java8Parser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::TypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}


size_t Java8Parser::TypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeDeclaration;
}

void Java8Parser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void Java8Parser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}

Java8Parser::TypeDeclarationContext* Java8Parser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 80, Java8Parser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(781);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(778);
      classDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(779);
      interfaceDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(780);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalClassDeclarationContext* Java8Parser::ClassDeclarationContext::normalClassDeclaration() {
  return getRuleContext<Java8Parser::NormalClassDeclarationContext>(0);
}

Java8Parser::EnumDeclarationContext* Java8Parser::ClassDeclarationContext::enumDeclaration() {
  return getRuleContext<Java8Parser::EnumDeclarationContext>(0);
}


size_t Java8Parser::ClassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassDeclaration;
}

void Java8Parser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void Java8Parser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

Java8Parser::ClassDeclarationContext* Java8Parser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 82, Java8Parser::RuleClassDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(785);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(783);
      normalClassDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(784);
      enumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalClassDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalClassDeclarationContext::NormalClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalClassDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::ClassBodyContext* Java8Parser::NormalClassDeclarationContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::NormalClassDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::NormalClassDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalClassDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::SuperclassContext* Java8Parser::NormalClassDeclarationContext::superclass() {
  return getRuleContext<Java8Parser::SuperclassContext>(0);
}

Java8Parser::SuperinterfacesContext* Java8Parser::NormalClassDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::NormalClassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalClassDeclaration;
}

void Java8Parser::NormalClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalClassDeclaration(this);
}

void Java8Parser::NormalClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalClassDeclaration(this);
}

Java8Parser::NormalClassDeclarationContext* Java8Parser::normalClassDeclaration() {
  NormalClassDeclarationContext *_localctx = _tracker.createInstance<NormalClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 84, Java8Parser::RuleNormalClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(787);
      classModifier();
      setState(792);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(793);
    match(Java8Parser::CLASS);
    setState(794);
    match(Java8Parser::Identifier);
    setState(796);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(795);
      typeParameters();
    }
    setState(799);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(798);
      superclass();
    }
    setState(802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(801);
      superinterfaces();
    }
    setState(804);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassModifierContext ------------------------------------------------------------------

Java8Parser::ClassModifierContext::ClassModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ClassModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ClassModifierContext::getRuleIndex() const {
  return Java8Parser::RuleClassModifier;
}

void Java8Parser::ClassModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassModifier(this);
}

void Java8Parser::ClassModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassModifier(this);
}

Java8Parser::ClassModifierContext* Java8Parser::classModifier() {
  ClassModifierContext *_localctx = _tracker.createInstance<ClassModifierContext>(_ctx, getState());
  enterRule(_localctx, 86, Java8Parser::RuleClassModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(814);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(806);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(807);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(808);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(809);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(810);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(811);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(812);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 8);
        setState(813);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

Java8Parser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeParameterListContext* Java8Parser::TypeParametersContext::typeParameterList() {
  return getRuleContext<Java8Parser::TypeParameterListContext>(0);
}


size_t Java8Parser::TypeParametersContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameters;
}

void Java8Parser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameters(this);
}

void Java8Parser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameters(this);
}

Java8Parser::TypeParametersContext* Java8Parser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 88, Java8Parser::RuleTypeParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
    match(Java8Parser::LT);
    setState(817);
    typeParameterList();
    setState(818);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

Java8Parser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeParameterContext *> Java8Parser::TypeParameterListContext::typeParameter() {
  return getRuleContexts<Java8Parser::TypeParameterContext>();
}

Java8Parser::TypeParameterContext* Java8Parser::TypeParameterListContext::typeParameter(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterContext>(i);
}


size_t Java8Parser::TypeParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterList;
}

void Java8Parser::TypeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterList(this);
}

void Java8Parser::TypeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterList(this);
}

Java8Parser::TypeParameterListContext* Java8Parser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 90, Java8Parser::RuleTypeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    typeParameter();
    setState(825);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(821);
      match(Java8Parser::COMMA);
      setState(822);
      typeParameter();
      setState(827);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperclassContext ------------------------------------------------------------------

Java8Parser::SuperclassContext::SuperclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassTypeContext* Java8Parser::SuperclassContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}


size_t Java8Parser::SuperclassContext::getRuleIndex() const {
  return Java8Parser::RuleSuperclass;
}

void Java8Parser::SuperclassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperclass(this);
}

void Java8Parser::SuperclassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperclass(this);
}

Java8Parser::SuperclassContext* Java8Parser::superclass() {
  SuperclassContext *_localctx = _tracker.createInstance<SuperclassContext>(_ctx, getState());
  enterRule(_localctx, 92, Java8Parser::RuleSuperclass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(Java8Parser::EXTENDS);
    setState(829);
    classType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperinterfacesContext ------------------------------------------------------------------

Java8Parser::SuperinterfacesContext::SuperinterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InterfaceTypeListContext* Java8Parser::SuperinterfacesContext::interfaceTypeList() {
  return getRuleContext<Java8Parser::InterfaceTypeListContext>(0);
}


size_t Java8Parser::SuperinterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleSuperinterfaces;
}

void Java8Parser::SuperinterfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperinterfaces(this);
}

void Java8Parser::SuperinterfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperinterfaces(this);
}

Java8Parser::SuperinterfacesContext* Java8Parser::superinterfaces() {
  SuperinterfacesContext *_localctx = _tracker.createInstance<SuperinterfacesContext>(_ctx, getState());
  enterRule(_localctx, 94, Java8Parser::RuleSuperinterfaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(831);
    match(Java8Parser::IMPLEMENTS);
    setState(832);
    interfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceTypeListContext ------------------------------------------------------------------

Java8Parser::InterfaceTypeListContext::InterfaceTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::InterfaceTypeContext *> Java8Parser::InterfaceTypeListContext::interfaceType() {
  return getRuleContexts<Java8Parser::InterfaceTypeContext>();
}

Java8Parser::InterfaceTypeContext* Java8Parser::InterfaceTypeListContext::interfaceType(size_t i) {
  return getRuleContext<Java8Parser::InterfaceTypeContext>(i);
}


size_t Java8Parser::InterfaceTypeListContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceTypeList;
}

void Java8Parser::InterfaceTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceTypeList(this);
}

void Java8Parser::InterfaceTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceTypeList(this);
}

Java8Parser::InterfaceTypeListContext* Java8Parser::interfaceTypeList() {
  InterfaceTypeListContext *_localctx = _tracker.createInstance<InterfaceTypeListContext>(_ctx, getState());
  enterRule(_localctx, 96, Java8Parser::RuleInterfaceTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    interfaceType();
    setState(839);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(835);
      match(Java8Parser::COMMA);
      setState(836);
      interfaceType();
      setState(841);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

Java8Parser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::ClassBodyContext::getRuleIndex() const {
  return Java8Parser::RuleClassBody;
}

void Java8Parser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void Java8Parser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}

Java8Parser::ClassBodyContext* Java8Parser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, Java8Parser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(842);
    match(Java8Parser::LBRACE);
    setState(846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(843);
      classBodyDeclaration();
      setState(848);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(849);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::ClassBodyDeclarationContext::classMemberDeclaration() {
  return getRuleContext<Java8Parser::ClassMemberDeclarationContext>(0);
}

Java8Parser::InstanceInitializerContext* Java8Parser::ClassBodyDeclarationContext::instanceInitializer() {
  return getRuleContext<Java8Parser::InstanceInitializerContext>(0);
}

Java8Parser::StaticInitializerContext* Java8Parser::ClassBodyDeclarationContext::staticInitializer() {
  return getRuleContext<Java8Parser::StaticInitializerContext>(0);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::ClassBodyDeclarationContext::constructorDeclaration() {
  return getRuleContext<Java8Parser::ConstructorDeclarationContext>(0);
}


size_t Java8Parser::ClassBodyDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassBodyDeclaration;
}

void Java8Parser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBodyDeclaration(this);
}

void Java8Parser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBodyDeclaration(this);
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, Java8Parser::RuleClassBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(855);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(851);
      classMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(852);
      instanceInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(853);
      staticInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(854);
      constructorDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::FieldDeclarationContext* Java8Parser::ClassMemberDeclarationContext::fieldDeclaration() {
  return getRuleContext<Java8Parser::FieldDeclarationContext>(0);
}

Java8Parser::MethodDeclarationContext* Java8Parser::ClassMemberDeclarationContext::methodDeclaration() {
  return getRuleContext<Java8Parser::MethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::ClassMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::ClassMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}


size_t Java8Parser::ClassMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassMemberDeclaration;
}

void Java8Parser::ClassMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclaration(this);
}

void Java8Parser::ClassMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclaration(this);
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 102, Java8Parser::RuleClassMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(862);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(857);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(858);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(859);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(860);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(861);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

Java8Parser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::FieldDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::FieldDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

std::vector<Java8Parser::FieldModifierContext *> Java8Parser::FieldDeclarationContext::fieldModifier() {
  return getRuleContexts<Java8Parser::FieldModifierContext>();
}

Java8Parser::FieldModifierContext* Java8Parser::FieldDeclarationContext::fieldModifier(size_t i) {
  return getRuleContext<Java8Parser::FieldModifierContext>(i);
}


size_t Java8Parser::FieldDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleFieldDeclaration;
}

void Java8Parser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void Java8Parser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}

Java8Parser::FieldDeclarationContext* Java8Parser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 104, Java8Parser::RuleFieldDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(867);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOLATILE))) != 0) || _la == Java8Parser::AT) {
      setState(864);
      fieldModifier();
      setState(869);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(870);
    unannType();
    setState(871);
    variableDeclaratorList();
    setState(872);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldModifierContext ------------------------------------------------------------------

Java8Parser::FieldModifierContext::FieldModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::FieldModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::FieldModifierContext::getRuleIndex() const {
  return Java8Parser::RuleFieldModifier;
}

void Java8Parser::FieldModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldModifier(this);
}

void Java8Parser::FieldModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldModifier(this);
}

Java8Parser::FieldModifierContext* Java8Parser::fieldModifier() {
  FieldModifierContext *_localctx = _tracker.createInstance<FieldModifierContext>(_ctx, getState());
  enterRule(_localctx, 106, Java8Parser::RuleFieldModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(882);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(874);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(875);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(876);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(877);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(878);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 6);
        setState(879);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::TRANSIENT: {
        enterOuterAlt(_localctx, 7);
        setState(880);
        match(Java8Parser::TRANSIENT);
        break;
      }

      case Java8Parser::VOLATILE: {
        enterOuterAlt(_localctx, 8);
        setState(881);
        match(Java8Parser::VOLATILE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorListContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorListContext::VariableDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableDeclaratorContext *> Java8Parser::VariableDeclaratorListContext::variableDeclarator() {
  return getRuleContexts<Java8Parser::VariableDeclaratorContext>();
}

Java8Parser::VariableDeclaratorContext* Java8Parser::VariableDeclaratorListContext::variableDeclarator(size_t i) {
  return getRuleContext<Java8Parser::VariableDeclaratorContext>(i);
}


size_t Java8Parser::VariableDeclaratorListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorList;
}

void Java8Parser::VariableDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaratorList(this);
}

void Java8Parser::VariableDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaratorList(this);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::variableDeclaratorList() {
  VariableDeclaratorListContext *_localctx = _tracker.createInstance<VariableDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 108, Java8Parser::RuleVariableDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(884);
    variableDeclarator();
    setState(889);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(885);
      match(Java8Parser::COMMA);
      setState(886);
      variableDeclarator();
      setState(891);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::VariableDeclaratorContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableDeclaratorContext::variableInitializer() {
  return getRuleContext<Java8Parser::VariableInitializerContext>(0);
}


size_t Java8Parser::VariableDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclarator;
}

void Java8Parser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void Java8Parser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}

Java8Parser::VariableDeclaratorContext* Java8Parser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 110, Java8Parser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892);
    variableDeclaratorId();
    setState(895);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::ASSIGN) {
      setState(893);
      match(Java8Parser::ASSIGN);
      setState(894);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::VariableDeclaratorIdContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::DimsContext* Java8Parser::VariableDeclaratorIdContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::VariableDeclaratorIdContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorId;
}

void Java8Parser::VariableDeclaratorIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaratorId(this);
}

void Java8Parser::VariableDeclaratorIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaratorId(this);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::variableDeclaratorId() {
  VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
  enterRule(_localctx, 112, Java8Parser::RuleVariableDeclaratorId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(897);
    match(Java8Parser::Identifier);
    setState(899);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(898);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

Java8Parser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::VariableInitializerContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::VariableInitializerContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::VariableInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializer;
}

void Java8Parser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializer(this);
}

void Java8Parser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializer(this);
}

Java8Parser::VariableInitializerContext* Java8Parser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 114, Java8Parser::RuleVariableInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(903);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(901);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(902);
        arrayInitializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannTypeContext ------------------------------------------------------------------

Java8Parser::UnannTypeContext::UnannTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnannTypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::UnannReferenceTypeContext* Java8Parser::UnannTypeContext::unannReferenceType() {
  return getRuleContext<Java8Parser::UnannReferenceTypeContext>(0);
}


size_t Java8Parser::UnannTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannType;
}

void Java8Parser::UnannTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannType(this);
}

void Java8Parser::UnannTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannType(this);
}

Java8Parser::UnannTypeContext* Java8Parser::unannType() {
  UnannTypeContext *_localctx = _tracker.createInstance<UnannTypeContext>(_ctx, getState());
  enterRule(_localctx, 116, Java8Parser::RuleUnannType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(907);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(905);
      unannPrimitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(906);
      unannReferenceType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannPrimitiveTypeContext ------------------------------------------------------------------

Java8Parser::UnannPrimitiveTypeContext::UnannPrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumericTypeContext* Java8Parser::UnannPrimitiveTypeContext::numericType() {
  return getRuleContext<Java8Parser::NumericTypeContext>(0);
}


size_t Java8Parser::UnannPrimitiveTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannPrimitiveType;
}

void Java8Parser::UnannPrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannPrimitiveType(this);
}

void Java8Parser::UnannPrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannPrimitiveType(this);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::unannPrimitiveType() {
  UnannPrimitiveTypeContext *_localctx = _tracker.createInstance<UnannPrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 118, Java8Parser::RuleUnannPrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(911);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(909);
        numericType();
        break;
      }

      case Java8Parser::BOOLEAN: {
        enterOuterAlt(_localctx, 2);
        setState(910);
        match(Java8Parser::BOOLEAN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannReferenceTypeContext ------------------------------------------------------------------

Java8Parser::UnannReferenceTypeContext::UnannReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannReferenceTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::UnannReferenceTypeContext::unannTypeVariable() {
  return getRuleContext<Java8Parser::UnannTypeVariableContext>(0);
}

Java8Parser::UnannArrayTypeContext* Java8Parser::UnannReferenceTypeContext::unannArrayType() {
  return getRuleContext<Java8Parser::UnannArrayTypeContext>(0);
}


size_t Java8Parser::UnannReferenceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannReferenceType;
}

void Java8Parser::UnannReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannReferenceType(this);
}

void Java8Parser::UnannReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannReferenceType(this);
}

Java8Parser::UnannReferenceTypeContext* Java8Parser::unannReferenceType() {
  UnannReferenceTypeContext *_localctx = _tracker.createInstance<UnannReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, Java8Parser::RuleUnannReferenceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(916);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(913);
      unannClassOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(914);
      unannTypeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(915);
      unannArrayType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassOrInterfaceTypeContext::UnannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lf_unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lf_unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>(i);
}


size_t Java8Parser::UnannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassOrInterfaceType;
}

void Java8Parser::UnannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassOrInterfaceType(this);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::unannClassOrInterfaceType() {
  UnannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, Java8Parser::RuleUnannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(920);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(918);
      unannClassType_lfno_unannClassOrInterfaceType();
      break;
    }

    case 2: {
      setState(919);
      unannInterfaceType_lfno_unannClassOrInterfaceType();
      break;
    }

    }
    setState(926);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(924);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          setState(922);
          unannClassType_lf_unannClassOrInterfaceType();
          break;
        }

        case 2: {
          setState(923);
          unannInterfaceType_lf_unannClassOrInterfaceType();
          break;
        }

        } 
      }
      setState(928);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassTypeContext::UnannClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannClassTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::UnannClassTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType;
}

void Java8Parser::UnannClassTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType(this);
}

void Java8Parser::UnannClassTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType(this);
}

Java8Parser::UnannClassTypeContext* Java8Parser::unannClassType() {
  UnannClassTypeContext *_localctx = _tracker.createInstance<UnannClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, Java8Parser::RuleUnannClassType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(945);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(929);
      match(Java8Parser::Identifier);
      setState(931);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(930);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(933);
      unannClassOrInterfaceType();
      setState(934);
      match(Java8Parser::DOT);
      setState(938);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(935);
        annotation();
        setState(940);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(941);
      match(Java8Parser::Identifier);
      setState(943);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(942);
        typeArguments();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType_lf_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::UnannClassType_lf_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType_lf_unannClassOrInterfaceType;
}

void Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType_lf_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType_lf_unannClassOrInterfaceType(this);
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::unannClassType_lf_unannClassOrInterfaceType() {
  UnannClassType_lf_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType_lf_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, Java8Parser::RuleUnannClassType_lf_unannClassOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    match(Java8Parser::DOT);
    setState(951);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(948);
      annotation();
      setState(953);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(954);
    match(Java8Parser::Identifier);
    setState(956);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(955);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType_lfno_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::UnannClassType_lfno_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType_lfno_unannClassOrInterfaceType;
}

void Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType_lfno_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType_lfno_unannClassOrInterfaceType(this);
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::unannClassType_lfno_unannClassOrInterfaceType() {
  UnannClassType_lfno_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType_lfno_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, Java8Parser::RuleUnannClassType_lfno_unannClassOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(958);
    match(Java8Parser::Identifier);
    setState(960);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(959);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceTypeContext::UnannInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::UnannInterfaceTypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType;
}

void Java8Parser::UnannInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType(this);
}

void Java8Parser::UnannInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType(this);
}

Java8Parser::UnannInterfaceTypeContext* Java8Parser::unannInterfaceType() {
  UnannInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, Java8Parser::RuleUnannInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(962);
    unannClassType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType_lf_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType_lf_unannClassOrInterfaceType;
}

void Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType_lf_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType_lf_unannClassOrInterfaceType(this);
}

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType_lf_unannClassOrInterfaceType() {
  UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 132, Java8Parser::RuleUnannInterfaceType_lf_unannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(964);
    unannClassType_lf_unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::unannClassType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType_lfno_unannClassOrInterfaceType;
}

void Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType_lfno_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType_lfno_unannClassOrInterfaceType(this);
}

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType_lfno_unannClassOrInterfaceType() {
  UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, Java8Parser::RuleUnannInterfaceType_lfno_unannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    unannClassType_lfno_unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannTypeVariableContext ------------------------------------------------------------------

Java8Parser::UnannTypeVariableContext::UnannTypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannTypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::UnannTypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleUnannTypeVariable;
}

void Java8Parser::UnannTypeVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannTypeVariable(this);
}

void Java8Parser::UnannTypeVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannTypeVariable(this);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::unannTypeVariable() {
  UnannTypeVariableContext *_localctx = _tracker.createInstance<UnannTypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 136, Java8Parser::RuleUnannTypeVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(968);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannArrayTypeContext ------------------------------------------------------------------

Java8Parser::UnannArrayTypeContext::UnannArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnannArrayTypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::UnannArrayTypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannArrayTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::UnannArrayTypeContext::unannTypeVariable() {
  return getRuleContext<Java8Parser::UnannTypeVariableContext>(0);
}


size_t Java8Parser::UnannArrayTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannArrayType;
}

void Java8Parser::UnannArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannArrayType(this);
}

void Java8Parser::UnannArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannArrayType(this);
}

Java8Parser::UnannArrayTypeContext* Java8Parser::unannArrayType() {
  UnannArrayTypeContext *_localctx = _tracker.createInstance<UnannArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 138, Java8Parser::RuleUnannArrayType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(979);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(970);
      unannPrimitiveType();
      setState(971);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(973);
      unannClassOrInterfaceType();
      setState(974);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(976);
      unannTypeVariable();
      setState(977);
      dims();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

Java8Parser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::MethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::MethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::MethodModifierContext *> Java8Parser::MethodDeclarationContext::methodModifier() {
  return getRuleContexts<Java8Parser::MethodModifierContext>();
}

Java8Parser::MethodModifierContext* Java8Parser::MethodDeclarationContext::methodModifier(size_t i) {
  return getRuleContext<Java8Parser::MethodModifierContext>(i);
}


size_t Java8Parser::MethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclaration;
}

void Java8Parser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void Java8Parser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}

Java8Parser::MethodDeclarationContext* Java8Parser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, Java8Parser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED))) != 0) || _la == Java8Parser::AT) {
      setState(981);
      methodModifier();
      setState(986);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(987);
    methodHeader();
    setState(988);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodModifierContext ------------------------------------------------------------------

Java8Parser::MethodModifierContext::MethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::MethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::MethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleMethodModifier;
}

void Java8Parser::MethodModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodModifier(this);
}

void Java8Parser::MethodModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodModifier(this);
}

Java8Parser::MethodModifierContext* Java8Parser::methodModifier() {
  MethodModifierContext *_localctx = _tracker.createInstance<MethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 142, Java8Parser::RuleMethodModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1000);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(990);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(991);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(992);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(993);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(994);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(995);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(996);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 8);
        setState(997);
        match(Java8Parser::SYNCHRONIZED);
        break;
      }

      case Java8Parser::NATIVE: {
        enterOuterAlt(_localctx, 9);
        setState(998);
        match(Java8Parser::NATIVE);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 10);
        setState(999);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodHeaderContext ------------------------------------------------------------------

Java8Parser::MethodHeaderContext::MethodHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ResultContext* Java8Parser::MethodHeaderContext::result() {
  return getRuleContext<Java8Parser::ResultContext>(0);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::MethodHeaderContext::methodDeclarator() {
  return getRuleContext<Java8Parser::MethodDeclaratorContext>(0);
}

Java8Parser::Throws_Context* Java8Parser::MethodHeaderContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}

Java8Parser::TypeParametersContext* Java8Parser::MethodHeaderContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::MethodHeaderContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::MethodHeaderContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::MethodHeaderContext::getRuleIndex() const {
  return Java8Parser::RuleMethodHeader;
}

void Java8Parser::MethodHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodHeader(this);
}

void Java8Parser::MethodHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodHeader(this);
}

Java8Parser::MethodHeaderContext* Java8Parser::methodHeader() {
  MethodHeaderContext *_localctx = _tracker.createInstance<MethodHeaderContext>(_ctx, getState());
  enterRule(_localctx, 144, Java8Parser::RuleMethodHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1019);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::VOID:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1002);
        result();
        setState(1003);
        methodDeclarator();
        setState(1005);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1004);
          throws_();
        }
        break;
      }

      case Java8Parser::LT: {
        enterOuterAlt(_localctx, 2);
        setState(1007);
        typeParameters();
        setState(1011);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(1008);
          annotation();
          setState(1013);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1014);
        result();
        setState(1015);
        methodDeclarator();
        setState(1017);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1016);
          throws_();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

Java8Parser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ResultContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}


size_t Java8Parser::ResultContext::getRuleIndex() const {
  return Java8Parser::RuleResult;
}

void Java8Parser::ResultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult(this);
}

void Java8Parser::ResultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult(this);
}

Java8Parser::ResultContext* Java8Parser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 146, Java8Parser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1023);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1021);
        unannType();
        break;
      }

      case Java8Parser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(1022);
        match(Java8Parser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclaratorContext ------------------------------------------------------------------

Java8Parser::MethodDeclaratorContext::MethodDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::MethodDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::DimsContext* Java8Parser::MethodDeclaratorContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::MethodDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclarator;
}

void Java8Parser::MethodDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclarator(this);
}

void Java8Parser::MethodDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclarator(this);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::methodDeclarator() {
  MethodDeclaratorContext *_localctx = _tracker.createInstance<MethodDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 148, Java8Parser::RuleMethodDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1025);
    match(Java8Parser::Identifier);
    setState(1026);
    match(Java8Parser::LPAREN);
    setState(1028);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1027);
      formalParameterList();
    }
    setState(1030);
    match(Java8Parser::RPAREN);
    setState(1032);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1031);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

Java8Parser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParameterListContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}

Java8Parser::FormalParametersContext* Java8Parser::FormalParameterListContext::formalParameters() {
  return getRuleContext<Java8Parser::FormalParametersContext>(0);
}

Java8Parser::LastFormalParameterContext* Java8Parser::FormalParameterListContext::lastFormalParameter() {
  return getRuleContext<Java8Parser::LastFormalParameterContext>(0);
}


size_t Java8Parser::FormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameterList;
}

void Java8Parser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void Java8Parser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}

Java8Parser::FormalParameterListContext* Java8Parser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 150, Java8Parser::RuleFormalParameterList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1040);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1034);
      receiverParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1035);
      formalParameters();
      setState(1036);
      match(Java8Parser::COMMA);
      setState(1037);
      lastFormalParameter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1039);
      lastFormalParameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

Java8Parser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::FormalParameterContext *> Java8Parser::FormalParametersContext::formalParameter() {
  return getRuleContexts<Java8Parser::FormalParameterContext>();
}

Java8Parser::FormalParameterContext* Java8Parser::FormalParametersContext::formalParameter(size_t i) {
  return getRuleContext<Java8Parser::FormalParameterContext>(i);
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParametersContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}


size_t Java8Parser::FormalParametersContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameters;
}

void Java8Parser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void Java8Parser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}

Java8Parser::FormalParametersContext* Java8Parser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 152, Java8Parser::RuleFormalParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1058);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1042);
      formalParameter();
      setState(1047);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1043);
          match(Java8Parser::COMMA);
          setState(1044);
          formalParameter(); 
        }
        setState(1049);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1050);
      receiverParameter();
      setState(1055);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1051);
          match(Java8Parser::COMMA);
          setState(1052);
          formalParameter(); 
        }
        setState(1057);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

Java8Parser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::FormalParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::FormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::FormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::FormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::FormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameter;
}

void Java8Parser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameter(this);
}

void Java8Parser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameter(this);
}

Java8Parser::FormalParameterContext* Java8Parser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 154, Java8Parser::RuleFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1063);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1060);
      variableModifier();
      setState(1065);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1066);
    unannType();
    setState(1067);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

Java8Parser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::VariableModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::VariableModifierContext::getRuleIndex() const {
  return Java8Parser::RuleVariableModifier;
}

void Java8Parser::VariableModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableModifier(this);
}

void Java8Parser::VariableModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableModifier(this);
}

Java8Parser::VariableModifierContext* Java8Parser::variableModifier() {
  VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
  enterRule(_localctx, 156, Java8Parser::RuleVariableModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1071);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1069);
        annotation();
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 2);
        setState(1070);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterContext ------------------------------------------------------------------

Java8Parser::LastFormalParameterContext::LastFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::LastFormalParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::LastFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LastFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LastFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::LastFormalParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::LastFormalParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::FormalParameterContext* Java8Parser::LastFormalParameterContext::formalParameter() {
  return getRuleContext<Java8Parser::FormalParameterContext>(0);
}


size_t Java8Parser::LastFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleLastFormalParameter;
}

void Java8Parser::LastFormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameter(this);
}

void Java8Parser::LastFormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameter(this);
}

Java8Parser::LastFormalParameterContext* Java8Parser::lastFormalParameter() {
  LastFormalParameterContext *_localctx = _tracker.createInstance<LastFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 158, Java8Parser::RuleLastFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1090);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1076);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
        setState(1073);
        variableModifier();
        setState(1078);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1079);
      unannType();
      setState(1083);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(1080);
        annotation();
        setState(1085);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1086);
      match(Java8Parser::ELLIPSIS);
      setState(1087);
      variableDeclaratorId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1089);
      formalParameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverParameterContext ------------------------------------------------------------------

Java8Parser::ReceiverParameterContext::ReceiverParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ReceiverParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ReceiverParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ReceiverParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::ReceiverParameterContext::getRuleIndex() const {
  return Java8Parser::RuleReceiverParameter;
}

void Java8Parser::ReceiverParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceiverParameter(this);
}

void Java8Parser::ReceiverParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceiverParameter(this);
}

Java8Parser::ReceiverParameterContext* Java8Parser::receiverParameter() {
  ReceiverParameterContext *_localctx = _tracker.createInstance<ReceiverParameterContext>(_ctx, getState());
  enterRule(_localctx, 160, Java8Parser::RuleReceiverParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1095);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1092);
      annotation();
      setState(1097);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1098);
    unannType();
    setState(1101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1099);
      match(Java8Parser::Identifier);
      setState(1100);
      match(Java8Parser::DOT);
    }
    setState(1103);
    match(Java8Parser::THIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throws_Context ------------------------------------------------------------------

Java8Parser::Throws_Context::Throws_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExceptionTypeListContext* Java8Parser::Throws_Context::exceptionTypeList() {
  return getRuleContext<Java8Parser::ExceptionTypeListContext>(0);
}


size_t Java8Parser::Throws_Context::getRuleIndex() const {
  return Java8Parser::RuleThrows_;
}

void Java8Parser::Throws_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrows_(this);
}

void Java8Parser::Throws_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrows_(this);
}

Java8Parser::Throws_Context* Java8Parser::throws_() {
  Throws_Context *_localctx = _tracker.createInstance<Throws_Context>(_ctx, getState());
  enterRule(_localctx, 162, Java8Parser::RuleThrows_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1105);
    match(Java8Parser::THROWS);
    setState(1106);
    exceptionTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionTypeListContext ------------------------------------------------------------------

Java8Parser::ExceptionTypeListContext::ExceptionTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExceptionTypeContext *> Java8Parser::ExceptionTypeListContext::exceptionType() {
  return getRuleContexts<Java8Parser::ExceptionTypeContext>();
}

Java8Parser::ExceptionTypeContext* Java8Parser::ExceptionTypeListContext::exceptionType(size_t i) {
  return getRuleContext<Java8Parser::ExceptionTypeContext>(i);
}


size_t Java8Parser::ExceptionTypeListContext::getRuleIndex() const {
  return Java8Parser::RuleExceptionTypeList;
}

void Java8Parser::ExceptionTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionTypeList(this);
}

void Java8Parser::ExceptionTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionTypeList(this);
}

Java8Parser::ExceptionTypeListContext* Java8Parser::exceptionTypeList() {
  ExceptionTypeListContext *_localctx = _tracker.createInstance<ExceptionTypeListContext>(_ctx, getState());
  enterRule(_localctx, 164, Java8Parser::RuleExceptionTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1108);
    exceptionType();
    setState(1113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1109);
      match(Java8Parser::COMMA);
      setState(1110);
      exceptionType();
      setState(1115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionTypeContext ------------------------------------------------------------------

Java8Parser::ExceptionTypeContext::ExceptionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassTypeContext* Java8Parser::ExceptionTypeContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ExceptionTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ExceptionTypeContext::getRuleIndex() const {
  return Java8Parser::RuleExceptionType;
}

void Java8Parser::ExceptionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionType(this);
}

void Java8Parser::ExceptionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionType(this);
}

Java8Parser::ExceptionTypeContext* Java8Parser::exceptionType() {
  ExceptionTypeContext *_localctx = _tracker.createInstance<ExceptionTypeContext>(_ctx, getState());
  enterRule(_localctx, 166, Java8Parser::RuleExceptionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1116);
      classType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1117);
      typeVariable();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

Java8Parser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::MethodBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::MethodBodyContext::getRuleIndex() const {
  return Java8Parser::RuleMethodBody;
}

void Java8Parser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodBody(this);
}

void Java8Parser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodBody(this);
}

Java8Parser::MethodBodyContext* Java8Parser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 168, Java8Parser::RuleMethodBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1120);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1121);
        match(Java8Parser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceInitializerContext ------------------------------------------------------------------

Java8Parser::InstanceInitializerContext::InstanceInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::InstanceInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::InstanceInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleInstanceInitializer;
}

void Java8Parser::InstanceInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceInitializer(this);
}

void Java8Parser::InstanceInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceInitializer(this);
}

Java8Parser::InstanceInitializerContext* Java8Parser::instanceInitializer() {
  InstanceInitializerContext *_localctx = _tracker.createInstance<InstanceInitializerContext>(_ctx, getState());
  enterRule(_localctx, 170, Java8Parser::RuleInstanceInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1124);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticInitializerContext ------------------------------------------------------------------

Java8Parser::StaticInitializerContext::StaticInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::StaticInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::StaticInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleStaticInitializer;
}

void Java8Parser::StaticInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticInitializer(this);
}

void Java8Parser::StaticInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticInitializer(this);
}

Java8Parser::StaticInitializerContext* Java8Parser::staticInitializer() {
  StaticInitializerContext *_localctx = _tracker.createInstance<StaticInitializerContext>(_ctx, getState());
  enterRule(_localctx, 172, Java8Parser::RuleStaticInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1126);
    match(Java8Parser::STATIC);
    setState(1127);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::ConstructorDeclarationContext::constructorDeclarator() {
  return getRuleContext<Java8Parser::ConstructorDeclaratorContext>(0);
}

Java8Parser::ConstructorBodyContext* Java8Parser::ConstructorDeclarationContext::constructorBody() {
  return getRuleContext<Java8Parser::ConstructorBodyContext>(0);
}

std::vector<Java8Parser::ConstructorModifierContext *> Java8Parser::ConstructorDeclarationContext::constructorModifier() {
  return getRuleContexts<Java8Parser::ConstructorModifierContext>();
}

Java8Parser::ConstructorModifierContext* Java8Parser::ConstructorDeclarationContext::constructorModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstructorModifierContext>(i);
}

Java8Parser::Throws_Context* Java8Parser::ConstructorDeclarationContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}


size_t Java8Parser::ConstructorDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclaration;
}

void Java8Parser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void Java8Parser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 174, Java8Parser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC))) != 0) || _la == Java8Parser::AT) {
      setState(1129);
      constructorModifier();
      setState(1134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1135);
    constructorDeclarator();
    setState(1137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::THROWS) {
      setState(1136);
      throws_();
    }
    setState(1139);
    constructorBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorModifierContext ------------------------------------------------------------------

Java8Parser::ConstructorModifierContext::ConstructorModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstructorModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ConstructorModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorModifier;
}

void Java8Parser::ConstructorModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorModifier(this);
}

void Java8Parser::ConstructorModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorModifier(this);
}

Java8Parser::ConstructorModifierContext* Java8Parser::constructorModifier() {
  ConstructorModifierContext *_localctx = _tracker.createInstance<ConstructorModifierContext>(_ctx, getState());
  enterRule(_localctx, 176, Java8Parser::RuleConstructorModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1141);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1142);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1143);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1144);
        match(Java8Parser::PRIVATE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclaratorContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclaratorContext::ConstructorDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SimpleTypeNameContext* Java8Parser::ConstructorDeclaratorContext::simpleTypeName() {
  return getRuleContext<Java8Parser::SimpleTypeNameContext>(0);
}

Java8Parser::TypeParametersContext* Java8Parser::ConstructorDeclaratorContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::FormalParameterListContext* Java8Parser::ConstructorDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}


size_t Java8Parser::ConstructorDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclarator;
}

void Java8Parser::ConstructorDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclarator(this);
}

void Java8Parser::ConstructorDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclarator(this);
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::constructorDeclarator() {
  ConstructorDeclaratorContext *_localctx = _tracker.createInstance<ConstructorDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 178, Java8Parser::RuleConstructorDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1147);
      typeParameters();
    }
    setState(1150);
    simpleTypeName();
    setState(1151);
    match(Java8Parser::LPAREN);
    setState(1153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1152);
      formalParameterList();
    }
    setState(1155);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeNameContext ------------------------------------------------------------------

Java8Parser::SimpleTypeNameContext::SimpleTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SimpleTypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::SimpleTypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleSimpleTypeName;
}

void Java8Parser::SimpleTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTypeName(this);
}

void Java8Parser::SimpleTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTypeName(this);
}

Java8Parser::SimpleTypeNameContext* Java8Parser::simpleTypeName() {
  SimpleTypeNameContext *_localctx = _tracker.createInstance<SimpleTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 180, Java8Parser::RuleSimpleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1157);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBodyContext ------------------------------------------------------------------

Java8Parser::ConstructorBodyContext::ConstructorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExplicitConstructorInvocationContext* Java8Parser::ConstructorBodyContext::explicitConstructorInvocation() {
  return getRuleContext<Java8Parser::ExplicitConstructorInvocationContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::ConstructorBodyContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::ConstructorBodyContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorBody;
}

void Java8Parser::ConstructorBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorBody(this);
}

void Java8Parser::ConstructorBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorBody(this);
}

Java8Parser::ConstructorBodyContext* Java8Parser::constructorBody() {
  ConstructorBodyContext *_localctx = _tracker.createInstance<ConstructorBodyContext>(_ctx, getState());
  enterRule(_localctx, 182, Java8Parser::RuleConstructorBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1159);
    match(Java8Parser::LBRACE);
    setState(1161);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(1160);
      explicitConstructorInvocation();
      break;
    }

    }
    setState(1164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1163);
      blockStatements();
    }
    setState(1166);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitConstructorInvocationContext ------------------------------------------------------------------

Java8Parser::ExplicitConstructorInvocationContext::ExplicitConstructorInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeArgumentsContext* Java8Parser::ExplicitConstructorInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ExplicitConstructorInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ExplicitConstructorInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::ExplicitConstructorInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ExplicitConstructorInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleExplicitConstructorInvocation;
}

void Java8Parser::ExplicitConstructorInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitConstructorInvocation(this);
}

void Java8Parser::ExplicitConstructorInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitConstructorInvocation(this);
}

Java8Parser::ExplicitConstructorInvocationContext* Java8Parser::explicitConstructorInvocation() {
  ExplicitConstructorInvocationContext *_localctx = _tracker.createInstance<ExplicitConstructorInvocationContext>(_ctx, getState());
  enterRule(_localctx, 184, Java8Parser::RuleExplicitConstructorInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1168);
        typeArguments();
      }
      setState(1171);
      match(Java8Parser::THIS);
      setState(1172);
      match(Java8Parser::LPAREN);
      setState(1174);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1173);
        argumentList();
      }
      setState(1176);
      match(Java8Parser::RPAREN);
      setState(1177);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1179);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1178);
        typeArguments();
      }
      setState(1181);
      match(Java8Parser::SUPER);
      setState(1182);
      match(Java8Parser::LPAREN);
      setState(1184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1183);
        argumentList();
      }
      setState(1186);
      match(Java8Parser::RPAREN);
      setState(1187);
      match(Java8Parser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1188);
      expressionName();
      setState(1189);
      match(Java8Parser::DOT);
      setState(1191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1190);
        typeArguments();
      }
      setState(1193);
      match(Java8Parser::SUPER);
      setState(1194);
      match(Java8Parser::LPAREN);
      setState(1196);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1195);
        argumentList();
      }
      setState(1198);
      match(Java8Parser::RPAREN);
      setState(1199);
      match(Java8Parser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1201);
      primary();
      setState(1202);
      match(Java8Parser::DOT);
      setState(1204);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1203);
        typeArguments();
      }
      setState(1206);
      match(Java8Parser::SUPER);
      setState(1207);
      match(Java8Parser::LPAREN);
      setState(1209);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1208);
        argumentList();
      }
      setState(1211);
      match(Java8Parser::RPAREN);
      setState(1212);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

Java8Parser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::EnumBodyContext* Java8Parser::EnumDeclarationContext::enumBody() {
  return getRuleContext<Java8Parser::EnumBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::EnumDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::EnumDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::SuperinterfacesContext* Java8Parser::EnumDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::EnumDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleEnumDeclaration;
}

void Java8Parser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void Java8Parser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}

Java8Parser::EnumDeclarationContext* Java8Parser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 186, Java8Parser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1216);
      classModifier();
      setState(1221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1222);
    match(Java8Parser::ENUM);
    setState(1223);
    match(Java8Parser::Identifier);
    setState(1225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(1224);
      superinterfaces();
    }
    setState(1227);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

Java8Parser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::EnumConstantListContext* Java8Parser::EnumBodyContext::enumConstantList() {
  return getRuleContext<Java8Parser::EnumConstantListContext>(0);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::EnumBodyContext::enumBodyDeclarations() {
  return getRuleContext<Java8Parser::EnumBodyDeclarationsContext>(0);
}


size_t Java8Parser::EnumBodyContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBody;
}

void Java8Parser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void Java8Parser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}

Java8Parser::EnumBodyContext* Java8Parser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 188, Java8Parser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1229);
    match(Java8Parser::LBRACE);
    setState(1231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1230);
      enumConstantList();
    }
    setState(1234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1233);
      match(Java8Parser::COMMA);
    }
    setState(1237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1236);
      enumBodyDeclarations();
    }
    setState(1239);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantListContext ------------------------------------------------------------------

Java8Parser::EnumConstantListContext::EnumConstantListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::EnumConstantContext *> Java8Parser::EnumConstantListContext::enumConstant() {
  return getRuleContexts<Java8Parser::EnumConstantContext>();
}

Java8Parser::EnumConstantContext* Java8Parser::EnumConstantListContext::enumConstant(size_t i) {
  return getRuleContext<Java8Parser::EnumConstantContext>(i);
}


size_t Java8Parser::EnumConstantListContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantList;
}

void Java8Parser::EnumConstantListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantList(this);
}

void Java8Parser::EnumConstantListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantList(this);
}

Java8Parser::EnumConstantListContext* Java8Parser::enumConstantList() {
  EnumConstantListContext *_localctx = _tracker.createInstance<EnumConstantListContext>(_ctx, getState());
  enterRule(_localctx, 190, Java8Parser::RuleEnumConstantList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1241);
    enumConstant();
    setState(1246);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1242);
        match(Java8Parser::COMMA);
        setState(1243);
        enumConstant(); 
      }
      setState(1248);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantContext ------------------------------------------------------------------

Java8Parser::EnumConstantContext::EnumConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumConstantContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::EnumConstantModifierContext *> Java8Parser::EnumConstantContext::enumConstantModifier() {
  return getRuleContexts<Java8Parser::EnumConstantModifierContext>();
}

Java8Parser::EnumConstantModifierContext* Java8Parser::EnumConstantContext::enumConstantModifier(size_t i) {
  return getRuleContext<Java8Parser::EnumConstantModifierContext>(i);
}

Java8Parser::ClassBodyContext* Java8Parser::EnumConstantContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::EnumConstantContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::EnumConstantContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstant;
}

void Java8Parser::EnumConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstant(this);
}

void Java8Parser::EnumConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstant(this);
}

Java8Parser::EnumConstantContext* Java8Parser::enumConstant() {
  EnumConstantContext *_localctx = _tracker.createInstance<EnumConstantContext>(_ctx, getState());
  enterRule(_localctx, 192, Java8Parser::RuleEnumConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1249);
      enumConstantModifier();
      setState(1254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1255);
    match(Java8Parser::Identifier);
    setState(1261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LPAREN) {
      setState(1256);
      match(Java8Parser::LPAREN);
      setState(1258);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1257);
        argumentList();
      }
      setState(1260);
      match(Java8Parser::RPAREN);
    }
    setState(1264);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACE) {
      setState(1263);
      classBody();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantModifierContext ------------------------------------------------------------------

Java8Parser::EnumConstantModifierContext::EnumConstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::EnumConstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::EnumConstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantModifier;
}

void Java8Parser::EnumConstantModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantModifier(this);
}

void Java8Parser::EnumConstantModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantModifier(this);
}

Java8Parser::EnumConstantModifierContext* Java8Parser::enumConstantModifier() {
  EnumConstantModifierContext *_localctx = _tracker.createInstance<EnumConstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 194, Java8Parser::RuleEnumConstantModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1266);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

Java8Parser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::EnumBodyDeclarationsContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBodyDeclarations;
}

void Java8Parser::EnumBodyDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBodyDeclarations(this);
}

void Java8Parser::EnumBodyDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBodyDeclarations(this);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::enumBodyDeclarations() {
  EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 196, Java8Parser::RuleEnumBodyDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1268);
    match(Java8Parser::SEMI);
    setState(1272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1269);
      classBodyDeclaration();
      setState(1274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::InterfaceDeclarationContext::normalInterfaceDeclaration() {
  return getRuleContext<Java8Parser::NormalInterfaceDeclarationContext>(0);
}

Java8Parser::AnnotationTypeDeclarationContext* Java8Parser::InterfaceDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<Java8Parser::AnnotationTypeDeclarationContext>(0);
}


size_t Java8Parser::InterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceDeclaration;
}

void Java8Parser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDeclaration(this);
}

void Java8Parser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDeclaration(this);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 198, Java8Parser::RuleInterfaceDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1275);
      normalInterfaceDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1276);
      annotationTypeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalInterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalInterfaceDeclarationContext::NormalInterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalInterfaceDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::InterfaceBodyContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceBody() {
  return getRuleContext<Java8Parser::InterfaceBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalInterfaceDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::NormalInterfaceDeclarationContext::extendsInterfaces() {
  return getRuleContext<Java8Parser::ExtendsInterfacesContext>(0);
}


size_t Java8Parser::NormalInterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalInterfaceDeclaration;
}

void Java8Parser::NormalInterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalInterfaceDeclaration(this);
}

void Java8Parser::NormalInterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalInterfaceDeclaration(this);
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::normalInterfaceDeclaration() {
  NormalInterfaceDeclarationContext *_localctx = _tracker.createInstance<NormalInterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 200, Java8Parser::RuleNormalInterfaceDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1279);
      interfaceModifier();
      setState(1284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1285);
    match(Java8Parser::INTERFACE);
    setState(1286);
    match(Java8Parser::Identifier);
    setState(1288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1287);
      typeParameters();
    }
    setState(1291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(1290);
      extendsInterfaces();
    }
    setState(1293);
    interfaceBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceModifierContext::InterfaceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::InterfaceModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceModifier;
}

void Java8Parser::InterfaceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceModifier(this);
}

void Java8Parser::InterfaceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceModifier(this);
}

Java8Parser::InterfaceModifierContext* Java8Parser::interfaceModifier() {
  InterfaceModifierContext *_localctx = _tracker.createInstance<InterfaceModifierContext>(_ctx, getState());
  enterRule(_localctx, 202, Java8Parser::RuleInterfaceModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1302);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1295);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1296);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1297);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1298);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(1299);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1300);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 7);
        setState(1301);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtendsInterfacesContext ------------------------------------------------------------------

Java8Parser::ExtendsInterfacesContext::ExtendsInterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InterfaceTypeListContext* Java8Parser::ExtendsInterfacesContext::interfaceTypeList() {
  return getRuleContext<Java8Parser::InterfaceTypeListContext>(0);
}


size_t Java8Parser::ExtendsInterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleExtendsInterfaces;
}

void Java8Parser::ExtendsInterfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtendsInterfaces(this);
}

void Java8Parser::ExtendsInterfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtendsInterfaces(this);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::extendsInterfaces() {
  ExtendsInterfacesContext *_localctx = _tracker.createInstance<ExtendsInterfacesContext>(_ctx, getState());
  enterRule(_localctx, 204, Java8Parser::RuleExtendsInterfaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1304);
    match(Java8Parser::EXTENDS);
    setState(1305);
    interfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

Java8Parser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::InterfaceMemberDeclarationContext *> Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration() {
  return getRuleContexts<Java8Parser::InterfaceMemberDeclarationContext>();
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMemberDeclarationContext>(i);
}


size_t Java8Parser::InterfaceBodyContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceBody;
}

void Java8Parser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceBody(this);
}

void Java8Parser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceBody(this);
}

Java8Parser::InterfaceBodyContext* Java8Parser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 206, Java8Parser::RuleInterfaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1307);
    match(Java8Parser::LBRACE);
    setState(1311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1308);
      interfaceMemberDeclaration();
      setState(1313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1314);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstantDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceMethodDeclaration() {
  return getRuleContext<Java8Parser::InterfaceMethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}


size_t Java8Parser::InterfaceMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMemberDeclaration;
}

void Java8Parser::InterfaceMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMemberDeclaration(this);
}

void Java8Parser::InterfaceMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMemberDeclaration(this);
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::interfaceMemberDeclaration() {
  InterfaceMemberDeclarationContext *_localctx = _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 208, Java8Parser::RuleInterfaceMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1321);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1316);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1317);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1318);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1319);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1320);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ConstantDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::ConstantDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

std::vector<Java8Parser::ConstantModifierContext *> Java8Parser::ConstantDeclarationContext::constantModifier() {
  return getRuleContexts<Java8Parser::ConstantModifierContext>();
}

Java8Parser::ConstantModifierContext* Java8Parser::ConstantDeclarationContext::constantModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstantModifierContext>(i);
}


size_t Java8Parser::ConstantDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstantDeclaration;
}

void Java8Parser::ConstantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclaration(this);
}

void Java8Parser::ConstantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclaration(this);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 210, Java8Parser::RuleConstantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC))) != 0) || _la == Java8Parser::AT) {
      setState(1323);
      constantModifier();
      setState(1328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1329);
    unannType();
    setState(1330);
    variableDeclaratorList();
    setState(1331);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantModifierContext ------------------------------------------------------------------

Java8Parser::ConstantModifierContext::ConstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ConstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstantModifier;
}

void Java8Parser::ConstantModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantModifier(this);
}

void Java8Parser::ConstantModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantModifier(this);
}

Java8Parser::ConstantModifierContext* Java8Parser::constantModifier() {
  ConstantModifierContext *_localctx = _tracker.createInstance<ConstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 212, Java8Parser::RuleConstantModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1333);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1334);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 3);
        setState(1335);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 4);
        setState(1336);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodDeclarationContext::InterfaceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::InterfaceMethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::InterfaceMethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::InterfaceMethodModifierContext *> Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier() {
  return getRuleContexts<Java8Parser::InterfaceMethodModifierContext>();
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMethodModifierContext>(i);
}


size_t Java8Parser::InterfaceMethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodDeclaration;
}

void Java8Parser::InterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodDeclaration(this);
}

void Java8Parser::InterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodDeclaration(this);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::interfaceMethodDeclaration() {
  InterfaceMethodDeclarationContext *_localctx = _tracker.createInstance<InterfaceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 214, Java8Parser::RuleInterfaceMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1342);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1339);
      interfaceMethodModifier();
      setState(1344);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1345);
    methodHeader();
    setState(1346);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodModifierContext::InterfaceMethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceMethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::InterfaceMethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodModifier;
}

void Java8Parser::InterfaceMethodModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodModifier(this);
}

void Java8Parser::InterfaceMethodModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodModifier(this);
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::interfaceMethodModifier() {
  InterfaceMethodModifierContext *_localctx = _tracker.createInstance<InterfaceMethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 216, Java8Parser::RuleInterfaceMethodModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1348);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1349);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1350);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::DEFAULT: {
        enterOuterAlt(_localctx, 4);
        setState(1351);
        match(Java8Parser::DEFAULT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(1352);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 6);
        setState(1353);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeDeclarationContext::AnnotationTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AnnotationTypeDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AnnotationTypeBodyContext* Java8Parser::AnnotationTypeDeclarationContext::annotationTypeBody() {
  return getRuleContext<Java8Parser::AnnotationTypeBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::AnnotationTypeDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::AnnotationTypeDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}


size_t Java8Parser::AnnotationTypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeDeclaration;
}

void Java8Parser::AnnotationTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeDeclaration(this);
}

void Java8Parser::AnnotationTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeDeclaration(this);
}

Java8Parser::AnnotationTypeDeclarationContext* Java8Parser::annotationTypeDeclaration() {
  AnnotationTypeDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 218, Java8Parser::RuleAnnotationTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1359);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1356);
        interfaceModifier(); 
      }
      setState(1361);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx);
    }
    setState(1362);
    match(Java8Parser::AT);
    setState(1363);
    match(Java8Parser::INTERFACE);
    setState(1364);
    match(Java8Parser::Identifier);
    setState(1365);
    annotationTypeBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeBodyContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeBodyContext::AnnotationTypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::AnnotationTypeMemberDeclarationContext *> Java8Parser::AnnotationTypeBodyContext::annotationTypeMemberDeclaration() {
  return getRuleContexts<Java8Parser::AnnotationTypeMemberDeclarationContext>();
}

Java8Parser::AnnotationTypeMemberDeclarationContext* Java8Parser::AnnotationTypeBodyContext::annotationTypeMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::AnnotationTypeMemberDeclarationContext>(i);
}


size_t Java8Parser::AnnotationTypeBodyContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeBody;
}

void Java8Parser::AnnotationTypeBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeBody(this);
}

void Java8Parser::AnnotationTypeBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeBody(this);
}

Java8Parser::AnnotationTypeBodyContext* Java8Parser::annotationTypeBody() {
  AnnotationTypeBodyContext *_localctx = _tracker.createInstance<AnnotationTypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 220, Java8Parser::RuleAnnotationTypeBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1367);
    match(Java8Parser::LBRACE);
    setState(1371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1368);
      annotationTypeMemberDeclaration();
      setState(1373);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1374);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeMemberDeclarationContext::AnnotationTypeMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationTypeElementDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::annotationTypeElementDeclaration() {
  return getRuleContext<Java8Parser::AnnotationTypeElementDeclarationContext>(0);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}


size_t Java8Parser::AnnotationTypeMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeMemberDeclaration;
}

void Java8Parser::AnnotationTypeMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeMemberDeclaration(this);
}

void Java8Parser::AnnotationTypeMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeMemberDeclaration(this);
}

Java8Parser::AnnotationTypeMemberDeclarationContext* Java8Parser::annotationTypeMemberDeclaration() {
  AnnotationTypeMemberDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 222, Java8Parser::RuleAnnotationTypeMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1381);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1376);
      annotationTypeElementDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1377);
      constantDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1378);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1379);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1380);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeElementDeclarationContext::AnnotationTypeElementDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::AnnotationTypeElementDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationTypeElementModifierContext *> Java8Parser::AnnotationTypeElementDeclarationContext::annotationTypeElementModifier() {
  return getRuleContexts<Java8Parser::AnnotationTypeElementModifierContext>();
}

Java8Parser::AnnotationTypeElementModifierContext* Java8Parser::AnnotationTypeElementDeclarationContext::annotationTypeElementModifier(size_t i) {
  return getRuleContext<Java8Parser::AnnotationTypeElementModifierContext>(i);
}

Java8Parser::DimsContext* Java8Parser::AnnotationTypeElementDeclarationContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::DefaultValueContext* Java8Parser::AnnotationTypeElementDeclarationContext::defaultValue() {
  return getRuleContext<Java8Parser::DefaultValueContext>(0);
}


size_t Java8Parser::AnnotationTypeElementDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeElementDeclaration;
}

void Java8Parser::AnnotationTypeElementDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementDeclaration(this);
}

void Java8Parser::AnnotationTypeElementDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementDeclaration(this);
}

Java8Parser::AnnotationTypeElementDeclarationContext* Java8Parser::annotationTypeElementDeclaration() {
  AnnotationTypeElementDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeElementDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 224, Java8Parser::RuleAnnotationTypeElementDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1386);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::ABSTRACT

    || _la == Java8Parser::PUBLIC || _la == Java8Parser::AT) {
      setState(1383);
      annotationTypeElementModifier();
      setState(1388);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1389);
    unannType();
    setState(1390);
    match(Java8Parser::Identifier);
    setState(1391);
    match(Java8Parser::LPAREN);
    setState(1392);
    match(Java8Parser::RPAREN);
    setState(1394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1393);
      dims();
    }
    setState(1397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DEFAULT) {
      setState(1396);
      defaultValue();
    }
    setState(1399);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementModifierContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeElementModifierContext::AnnotationTypeElementModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::AnnotationTypeElementModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::AnnotationTypeElementModifierContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeElementModifier;
}

void Java8Parser::AnnotationTypeElementModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementModifier(this);
}

void Java8Parser::AnnotationTypeElementModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementModifier(this);
}

Java8Parser::AnnotationTypeElementModifierContext* Java8Parser::annotationTypeElementModifier() {
  AnnotationTypeElementModifierContext *_localctx = _tracker.createInstance<AnnotationTypeElementModifierContext>(_ctx, getState());
  enterRule(_localctx, 226, Java8Parser::RuleAnnotationTypeElementModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1404);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1401);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1402);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1403);
        match(Java8Parser::ABSTRACT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

Java8Parser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ElementValueContext* Java8Parser::DefaultValueContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::DefaultValueContext::getRuleIndex() const {
  return Java8Parser::RuleDefaultValue;
}

void Java8Parser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void Java8Parser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}

Java8Parser::DefaultValueContext* Java8Parser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 228, Java8Parser::RuleDefaultValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1406);
    match(Java8Parser::DEFAULT);
    setState(1407);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

Java8Parser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalAnnotationContext* Java8Parser::AnnotationContext::normalAnnotation() {
  return getRuleContext<Java8Parser::NormalAnnotationContext>(0);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::AnnotationContext::markerAnnotation() {
  return getRuleContext<Java8Parser::MarkerAnnotationContext>(0);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::AnnotationContext::singleElementAnnotation() {
  return getRuleContext<Java8Parser::SingleElementAnnotationContext>(0);
}


size_t Java8Parser::AnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotation;
}

void Java8Parser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void Java8Parser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}

Java8Parser::AnnotationContext* Java8Parser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 230, Java8Parser::RuleAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1412);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1409);
      normalAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1410);
      markerAnnotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1411);
      singleElementAnnotation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalAnnotationContext ------------------------------------------------------------------

Java8Parser::NormalAnnotationContext::NormalAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::NormalAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ElementValuePairListContext* Java8Parser::NormalAnnotationContext::elementValuePairList() {
  return getRuleContext<Java8Parser::ElementValuePairListContext>(0);
}


size_t Java8Parser::NormalAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalAnnotation;
}

void Java8Parser::NormalAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalAnnotation(this);
}

void Java8Parser::NormalAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalAnnotation(this);
}

Java8Parser::NormalAnnotationContext* Java8Parser::normalAnnotation() {
  NormalAnnotationContext *_localctx = _tracker.createInstance<NormalAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 232, Java8Parser::RuleNormalAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1414);
    match(Java8Parser::AT);
    setState(1415);
    typeName();
    setState(1416);
    match(Java8Parser::LPAREN);
    setState(1418);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1417);
      elementValuePairList();
    }
    setState(1420);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairListContext ------------------------------------------------------------------

Java8Parser::ElementValuePairListContext::ElementValuePairListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValuePairContext *> Java8Parser::ElementValuePairListContext::elementValuePair() {
  return getRuleContexts<Java8Parser::ElementValuePairContext>();
}

Java8Parser::ElementValuePairContext* Java8Parser::ElementValuePairListContext::elementValuePair(size_t i) {
  return getRuleContext<Java8Parser::ElementValuePairContext>(i);
}


size_t Java8Parser::ElementValuePairListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePairList;
}

void Java8Parser::ElementValuePairListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePairList(this);
}

void Java8Parser::ElementValuePairListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePairList(this);
}

Java8Parser::ElementValuePairListContext* Java8Parser::elementValuePairList() {
  ElementValuePairListContext *_localctx = _tracker.createInstance<ElementValuePairListContext>(_ctx, getState());
  enterRule(_localctx, 234, Java8Parser::RuleElementValuePairList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1422);
    elementValuePair();
    setState(1427);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1423);
      match(Java8Parser::COMMA);
      setState(1424);
      elementValuePair();
      setState(1429);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairContext ------------------------------------------------------------------

Java8Parser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ElementValuePairContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::ElementValueContext* Java8Parser::ElementValuePairContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::ElementValuePairContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePair;
}

void Java8Parser::ElementValuePairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePair(this);
}

void Java8Parser::ElementValuePairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePair(this);
}

Java8Parser::ElementValuePairContext* Java8Parser::elementValuePair() {
  ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
  enterRule(_localctx, 236, Java8Parser::RuleElementValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1430);
    match(Java8Parser::Identifier);
    setState(1431);
    match(Java8Parser::ASSIGN);
    setState(1432);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

Java8Parser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ElementValueContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::ElementValueContext::elementValueArrayInitializer() {
  return getRuleContext<Java8Parser::ElementValueArrayInitializerContext>(0);
}

Java8Parser::AnnotationContext* Java8Parser::ElementValueContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ElementValueContext::getRuleIndex() const {
  return Java8Parser::RuleElementValue;
}

void Java8Parser::ElementValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValue(this);
}

void Java8Parser::ElementValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValue(this);
}

Java8Parser::ElementValueContext* Java8Parser::elementValue() {
  ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
  enterRule(_localctx, 238, Java8Parser::RuleElementValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1434);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1435);
      elementValueArrayInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1436);
      annotation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ElementValueListContext* Java8Parser::ElementValueArrayInitializerContext::elementValueList() {
  return getRuleContext<Java8Parser::ElementValueListContext>(0);
}


size_t Java8Parser::ElementValueArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueArrayInitializer;
}

void Java8Parser::ElementValueArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValueArrayInitializer(this);
}

void Java8Parser::ElementValueArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValueArrayInitializer(this);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::elementValueArrayInitializer() {
  ElementValueArrayInitializerContext *_localctx = _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 240, Java8Parser::RuleElementValueArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1439);
    match(Java8Parser::LBRACE);
    setState(1441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1440);
      elementValueList();
    }
    setState(1444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1443);
      match(Java8Parser::COMMA);
    }
    setState(1446);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueListContext ------------------------------------------------------------------

Java8Parser::ElementValueListContext::ElementValueListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValueContext *> Java8Parser::ElementValueListContext::elementValue() {
  return getRuleContexts<Java8Parser::ElementValueContext>();
}

Java8Parser::ElementValueContext* Java8Parser::ElementValueListContext::elementValue(size_t i) {
  return getRuleContext<Java8Parser::ElementValueContext>(i);
}


size_t Java8Parser::ElementValueListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueList;
}

void Java8Parser::ElementValueListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValueList(this);
}

void Java8Parser::ElementValueListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValueList(this);
}

Java8Parser::ElementValueListContext* Java8Parser::elementValueList() {
  ElementValueListContext *_localctx = _tracker.createInstance<ElementValueListContext>(_ctx, getState());
  enterRule(_localctx, 242, Java8Parser::RuleElementValueList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1448);
    elementValue();
    setState(1453);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1449);
        match(Java8Parser::COMMA);
        setState(1450);
        elementValue(); 
      }
      setState(1455);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MarkerAnnotationContext ------------------------------------------------------------------

Java8Parser::MarkerAnnotationContext::MarkerAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::MarkerAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::MarkerAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleMarkerAnnotation;
}

void Java8Parser::MarkerAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMarkerAnnotation(this);
}

void Java8Parser::MarkerAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMarkerAnnotation(this);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::markerAnnotation() {
  MarkerAnnotationContext *_localctx = _tracker.createInstance<MarkerAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 244, Java8Parser::RuleMarkerAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1456);
    match(Java8Parser::AT);
    setState(1457);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleElementAnnotationContext ------------------------------------------------------------------

Java8Parser::SingleElementAnnotationContext::SingleElementAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeNameContext* Java8Parser::SingleElementAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ElementValueContext* Java8Parser::SingleElementAnnotationContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::SingleElementAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleElementAnnotation;
}

void Java8Parser::SingleElementAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleElementAnnotation(this);
}

void Java8Parser::SingleElementAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleElementAnnotation(this);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::singleElementAnnotation() {
  SingleElementAnnotationContext *_localctx = _tracker.createInstance<SingleElementAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 246, Java8Parser::RuleSingleElementAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    match(Java8Parser::AT);
    setState(1460);
    typeName();
    setState(1461);
    match(Java8Parser::LPAREN);
    setState(1462);
    elementValue();
    setState(1463);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::VariableInitializerListContext* Java8Parser::ArrayInitializerContext::variableInitializerList() {
  return getRuleContext<Java8Parser::VariableInitializerListContext>(0);
}


size_t Java8Parser::ArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleArrayInitializer;
}

void Java8Parser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void Java8Parser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}

Java8Parser::ArrayInitializerContext* Java8Parser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 248, Java8Parser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1465);
    match(Java8Parser::LBRACE);
    setState(1467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1466);
      variableInitializerList();
    }
    setState(1470);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1469);
      match(Java8Parser::COMMA);
    }
    setState(1472);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerListContext ------------------------------------------------------------------

Java8Parser::VariableInitializerListContext::VariableInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableInitializerContext *> Java8Parser::VariableInitializerListContext::variableInitializer() {
  return getRuleContexts<Java8Parser::VariableInitializerContext>();
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableInitializerListContext::variableInitializer(size_t i) {
  return getRuleContext<Java8Parser::VariableInitializerContext>(i);
}


size_t Java8Parser::VariableInitializerListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializerList;
}

void Java8Parser::VariableInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializerList(this);
}

void Java8Parser::VariableInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializerList(this);
}

Java8Parser::VariableInitializerListContext* Java8Parser::variableInitializerList() {
  VariableInitializerListContext *_localctx = _tracker.createInstance<VariableInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 250, Java8Parser::RuleVariableInitializerList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1474);
    variableInitializer();
    setState(1479);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1475);
        match(Java8Parser::COMMA);
        setState(1476);
        variableInitializer(); 
      }
      setState(1481);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Java8Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockStatementsContext* Java8Parser::BlockContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::BlockContext::getRuleIndex() const {
  return Java8Parser::RuleBlock;
}

void Java8Parser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void Java8Parser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

Java8Parser::BlockContext* Java8Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 252, Java8Parser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1482);
    match(Java8Parser::LBRACE);
    setState(1484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1483);
      blockStatements();
    }
    setState(1486);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementsContext ------------------------------------------------------------------

Java8Parser::BlockStatementsContext::BlockStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::BlockStatementContext *> Java8Parser::BlockStatementsContext::blockStatement() {
  return getRuleContexts<Java8Parser::BlockStatementContext>();
}

Java8Parser::BlockStatementContext* Java8Parser::BlockStatementsContext::blockStatement(size_t i) {
  return getRuleContext<Java8Parser::BlockStatementContext>(i);
}


size_t Java8Parser::BlockStatementsContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatements;
}

void Java8Parser::BlockStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatements(this);
}

void Java8Parser::BlockStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatements(this);
}

Java8Parser::BlockStatementsContext* Java8Parser::blockStatements() {
  BlockStatementsContext *_localctx = _tracker.createInstance<BlockStatementsContext>(_ctx, getState());
  enterRule(_localctx, 254, Java8Parser::RuleBlockStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1489); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1488);
      blockStatement();
      setState(1491); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

Java8Parser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::BlockStatementContext::localVariableDeclarationStatement() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationStatementContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::BlockStatementContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::StatementContext* Java8Parser::BlockStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::BlockStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatement;
}

void Java8Parser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void Java8Parser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}

Java8Parser::BlockStatementContext* Java8Parser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 256, Java8Parser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1496);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1493);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1494);
      classDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1495);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationStatementContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationStatementContext::LocalVariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::LocalVariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}


size_t Java8Parser::LocalVariableDeclarationStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclarationStatement;
}

void Java8Parser::LocalVariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclarationStatement(this);
}

void Java8Parser::LocalVariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclarationStatement(this);
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::localVariableDeclarationStatement() {
  LocalVariableDeclarationStatementContext *_localctx = _tracker.createInstance<LocalVariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 258, Java8Parser::RuleLocalVariableDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1498);
    localVariableDeclaration();
    setState(1499);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::LocalVariableDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::LocalVariableDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LocalVariableDeclarationContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LocalVariableDeclarationContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::LocalVariableDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclaration;
}

void Java8Parser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclaration(this);
}

void Java8Parser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclaration(this);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 260, Java8Parser::RuleLocalVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1504);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1501);
      variableModifier();
      setState(1506);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1507);
    unannType();
    setState(1508);
    variableDeclaratorList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Java8Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementContext* Java8Parser::StatementContext::labeledStatement() {
  return getRuleContext<Java8Parser::LabeledStatementContext>(0);
}

Java8Parser::IfThenStatementContext* Java8Parser::StatementContext::ifThenStatement() {
  return getRuleContext<Java8Parser::IfThenStatementContext>(0);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::StatementContext::ifThenElseStatement() {
  return getRuleContext<Java8Parser::IfThenElseStatementContext>(0);
}

Java8Parser::WhileStatementContext* Java8Parser::StatementContext::whileStatement() {
  return getRuleContext<Java8Parser::WhileStatementContext>(0);
}

Java8Parser::ForStatementContext* Java8Parser::StatementContext::forStatement() {
  return getRuleContext<Java8Parser::ForStatementContext>(0);
}


size_t Java8Parser::StatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatement;
}

void Java8Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Java8Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

Java8Parser::StatementContext* Java8Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 262, Java8Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1516);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1510);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1511);
      labeledStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1512);
      ifThenStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1513);
      ifThenElseStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1514);
      whileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1515);
      forStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::StatementNoShortIfContext::StatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementNoShortIfContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::labeledStatementNoShortIf() {
  return getRuleContext<Java8Parser::LabeledStatementNoShortIfContext>(0);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::ifThenElseStatementNoShortIf() {
  return getRuleContext<Java8Parser::IfThenElseStatementNoShortIfContext>(0);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::whileStatementNoShortIf() {
  return getRuleContext<Java8Parser::WhileStatementNoShortIfContext>(0);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::forStatementNoShortIf() {
  return getRuleContext<Java8Parser::ForStatementNoShortIfContext>(0);
}


size_t Java8Parser::StatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleStatementNoShortIf;
}

void Java8Parser::StatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementNoShortIf(this);
}

void Java8Parser::StatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementNoShortIf(this);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::statementNoShortIf() {
  StatementNoShortIfContext *_localctx = _tracker.createInstance<StatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 264, Java8Parser::RuleStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1523);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1518);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1519);
      labeledStatementNoShortIf();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1520);
      ifThenElseStatementNoShortIf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1521);
      whileStatementNoShortIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1522);
      forStatementNoShortIf();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementWithoutTrailingSubstatementContext ------------------------------------------------------------------

Java8Parser::StatementWithoutTrailingSubstatementContext::StatementWithoutTrailingSubstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::StatementWithoutTrailingSubstatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::EmptyStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::emptyStatement() {
  return getRuleContext<Java8Parser::EmptyStatementContext>(0);
}

Java8Parser::ExpressionStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::expressionStatement() {
  return getRuleContext<Java8Parser::ExpressionStatementContext>(0);
}

Java8Parser::AssertStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::assertStatement() {
  return getRuleContext<Java8Parser::AssertStatementContext>(0);
}

Java8Parser::SwitchStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::switchStatement() {
  return getRuleContext<Java8Parser::SwitchStatementContext>(0);
}

Java8Parser::DoStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::doStatement() {
  return getRuleContext<Java8Parser::DoStatementContext>(0);
}

Java8Parser::BreakStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::breakStatement() {
  return getRuleContext<Java8Parser::BreakStatementContext>(0);
}

Java8Parser::ContinueStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::continueStatement() {
  return getRuleContext<Java8Parser::ContinueStatementContext>(0);
}

Java8Parser::ReturnStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::returnStatement() {
  return getRuleContext<Java8Parser::ReturnStatementContext>(0);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::synchronizedStatement() {
  return getRuleContext<Java8Parser::SynchronizedStatementContext>(0);
}

Java8Parser::ThrowStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::throwStatement() {
  return getRuleContext<Java8Parser::ThrowStatementContext>(0);
}

Java8Parser::TryStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::tryStatement() {
  return getRuleContext<Java8Parser::TryStatementContext>(0);
}


size_t Java8Parser::StatementWithoutTrailingSubstatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatementWithoutTrailingSubstatement;
}

void Java8Parser::StatementWithoutTrailingSubstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementWithoutTrailingSubstatement(this);
}

void Java8Parser::StatementWithoutTrailingSubstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementWithoutTrailingSubstatement(this);
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::statementWithoutTrailingSubstatement() {
  StatementWithoutTrailingSubstatementContext *_localctx = _tracker.createInstance<StatementWithoutTrailingSubstatementContext>(_ctx, getState());
  enterRule(_localctx, 266, Java8Parser::RuleStatementWithoutTrailingSubstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1525);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1526);
        emptyStatement();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 3);
        setState(1527);
        expressionStatement();
        break;
      }

      case Java8Parser::ASSERT: {
        enterOuterAlt(_localctx, 4);
        setState(1528);
        assertStatement();
        break;
      }

      case Java8Parser::SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(1529);
        switchStatement();
        break;
      }

      case Java8Parser::DO: {
        enterOuterAlt(_localctx, 6);
        setState(1530);
        doStatement();
        break;
      }

      case Java8Parser::BREAK: {
        enterOuterAlt(_localctx, 7);
        setState(1531);
        breakStatement();
        break;
      }

      case Java8Parser::CONTINUE: {
        enterOuterAlt(_localctx, 8);
        setState(1532);
        continueStatement();
        break;
      }

      case Java8Parser::RETURN: {
        enterOuterAlt(_localctx, 9);
        setState(1533);
        returnStatement();
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 10);
        setState(1534);
        synchronizedStatement();
        break;
      }

      case Java8Parser::THROW: {
        enterOuterAlt(_localctx, 11);
        setState(1535);
        throwStatement();
        break;
      }

      case Java8Parser::TRY: {
        enterOuterAlt(_localctx, 12);
        setState(1536);
        tryStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Java8Parser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::EmptyStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEmptyStatement;
}

void Java8Parser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void Java8Parser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}

Java8Parser::EmptyStatementContext* Java8Parser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 268, Java8Parser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1539);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

Java8Parser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::StatementContext* Java8Parser::LabeledStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::LabeledStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatement;
}

void Java8Parser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void Java8Parser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}

Java8Parser::LabeledStatementContext* Java8Parser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 270, Java8Parser::RuleLabeledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1541);
    match(Java8Parser::Identifier);
    setState(1542);
    match(Java8Parser::COLON);
    setState(1543);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::LabeledStatementNoShortIfContext::LabeledStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementNoShortIfContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::LabeledStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::LabeledStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatementNoShortIf;
}

void Java8Parser::LabeledStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatementNoShortIf(this);
}

void Java8Parser::LabeledStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatementNoShortIf(this);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::labeledStatementNoShortIf() {
  LabeledStatementNoShortIfContext *_localctx = _tracker.createInstance<LabeledStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 272, Java8Parser::RuleLabeledStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1545);
    match(Java8Parser::Identifier);
    setState(1546);
    match(Java8Parser::COLON);
    setState(1547);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

Java8Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionContext* Java8Parser::ExpressionStatementContext::statementExpression() {
  return getRuleContext<Java8Parser::StatementExpressionContext>(0);
}


size_t Java8Parser::ExpressionStatementContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionStatement;
}

void Java8Parser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void Java8Parser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

Java8Parser::ExpressionStatementContext* Java8Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 274, Java8Parser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1549);
    statementExpression();
    setState(1550);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionContext ------------------------------------------------------------------

Java8Parser::StatementExpressionContext::StatementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AssignmentContext* Java8Parser::StatementExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::StatementExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::StatementExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::StatementExpressionContext::postIncrementExpression() {
  return getRuleContext<Java8Parser::PostIncrementExpressionContext>(0);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::StatementExpressionContext::postDecrementExpression() {
  return getRuleContext<Java8Parser::PostDecrementExpressionContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::StatementExpressionContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::StatementExpressionContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}


size_t Java8Parser::StatementExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpression;
}

void Java8Parser::StatementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementExpression(this);
}

void Java8Parser::StatementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementExpression(this);
}

Java8Parser::StatementExpressionContext* Java8Parser::statementExpression() {
  StatementExpressionContext *_localctx = _tracker.createInstance<StatementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 276, Java8Parser::RuleStatementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1559);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1552);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1553);
      preIncrementExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1554);
      preDecrementExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1555);
      postIncrementExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1556);
      postDecrementExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1557);
      methodInvocation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1558);
      classInstanceCreationExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenStatementContext ------------------------------------------------------------------

Java8Parser::IfThenStatementContext::IfThenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::IfThenStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementContext* Java8Parser::IfThenStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenStatement;
}

void Java8Parser::IfThenStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenStatement(this);
}

void Java8Parser::IfThenStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenStatement(this);
}

Java8Parser::IfThenStatementContext* Java8Parser::ifThenStatement() {
  IfThenStatementContext *_localctx = _tracker.createInstance<IfThenStatementContext>(_ctx, getState());
  enterRule(_localctx, 278, Java8Parser::RuleIfThenStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1561);
    match(Java8Parser::IF);
    setState(1562);
    match(Java8Parser::LPAREN);
    setState(1563);
    expression();
    setState(1564);
    match(Java8Parser::RPAREN);
    setState(1565);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementContext::IfThenElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

Java8Parser::StatementContext* Java8Parser::IfThenElseStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenElseStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatement;
}

void Java8Parser::IfThenElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenElseStatement(this);
}

void Java8Parser::IfThenElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenElseStatement(this);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::ifThenElseStatement() {
  IfThenElseStatementContext *_localctx = _tracker.createInstance<IfThenElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 280, Java8Parser::RuleIfThenElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1567);
    match(Java8Parser::IF);
    setState(1568);
    match(Java8Parser::LPAREN);
    setState(1569);
    expression();
    setState(1570);
    match(Java8Parser::RPAREN);
    setState(1571);
    statementNoShortIf();
    setState(1572);
    match(Java8Parser::ELSE);
    setState(1573);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementNoShortIfContext::IfThenElseStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

std::vector<Java8Parser::StatementNoShortIfContext *> Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContexts<Java8Parser::StatementNoShortIfContext>();
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf(size_t i) {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(i);
}


size_t Java8Parser::IfThenElseStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatementNoShortIf;
}

void Java8Parser::IfThenElseStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenElseStatementNoShortIf(this);
}

void Java8Parser::IfThenElseStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenElseStatementNoShortIf(this);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::ifThenElseStatementNoShortIf() {
  IfThenElseStatementNoShortIfContext *_localctx = _tracker.createInstance<IfThenElseStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 282, Java8Parser::RuleIfThenElseStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1575);
    match(Java8Parser::IF);
    setState(1576);
    match(Java8Parser::LPAREN);
    setState(1577);
    expression();
    setState(1578);
    match(Java8Parser::RPAREN);
    setState(1579);
    statementNoShortIf();
    setState(1580);
    match(Java8Parser::ELSE);
    setState(1581);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssertStatementContext ------------------------------------------------------------------

Java8Parser::AssertStatementContext::AssertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::AssertStatementContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::AssertStatementContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}


size_t Java8Parser::AssertStatementContext::getRuleIndex() const {
  return Java8Parser::RuleAssertStatement;
}

void Java8Parser::AssertStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssertStatement(this);
}

void Java8Parser::AssertStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssertStatement(this);
}

Java8Parser::AssertStatementContext* Java8Parser::assertStatement() {
  AssertStatementContext *_localctx = _tracker.createInstance<AssertStatementContext>(_ctx, getState());
  enterRule(_localctx, 284, Java8Parser::RuleAssertStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1593);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1583);
      match(Java8Parser::ASSERT);
      setState(1584);
      expression();
      setState(1585);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1587);
      match(Java8Parser::ASSERT);
      setState(1588);
      expression();
      setState(1589);
      match(Java8Parser::COLON);
      setState(1590);
      expression();
      setState(1591);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

Java8Parser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::SwitchStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::SwitchBlockContext* Java8Parser::SwitchStatementContext::switchBlock() {
  return getRuleContext<Java8Parser::SwitchBlockContext>(0);
}


size_t Java8Parser::SwitchStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchStatement;
}

void Java8Parser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void Java8Parser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

Java8Parser::SwitchStatementContext* Java8Parser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 286, Java8Parser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1595);
    match(Java8Parser::SWITCH);
    setState(1596);
    match(Java8Parser::LPAREN);
    setState(1597);
    expression();
    setState(1598);
    match(Java8Parser::RPAREN);
    setState(1599);
    switchBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

Java8Parser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::SwitchBlockStatementGroupContext *> Java8Parser::SwitchBlockContext::switchBlockStatementGroup() {
  return getRuleContexts<Java8Parser::SwitchBlockStatementGroupContext>();
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::SwitchBlockContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<Java8Parser::SwitchBlockStatementGroupContext>(i);
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchBlockContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchBlockContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchBlockContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlock;
}

void Java8Parser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlock(this);
}

void Java8Parser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlock(this);
}

Java8Parser::SwitchBlockContext* Java8Parser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 288, Java8Parser::RuleSwitchBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1601);
    match(Java8Parser::LBRACE);
    setState(1605);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1602);
        switchBlockStatementGroup(); 
      }
      setState(1607);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx);
    }
    setState(1611);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1608);
      switchLabel();
      setState(1613);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1614);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

Java8Parser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SwitchLabelsContext* Java8Parser::SwitchBlockStatementGroupContext::switchLabels() {
  return getRuleContext<Java8Parser::SwitchLabelsContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::SwitchBlockStatementGroupContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlockStatementGroup;
}

void Java8Parser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlockStatementGroup(this);
}

void Java8Parser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlockStatementGroup(this);
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 290, Java8Parser::RuleSwitchBlockStatementGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1616);
    switchLabels();
    setState(1617);
    blockStatements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelsContext ------------------------------------------------------------------

Java8Parser::SwitchLabelsContext::SwitchLabelsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchLabelsContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchLabelsContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchLabelsContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabels;
}

void Java8Parser::SwitchLabelsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabels(this);
}

void Java8Parser::SwitchLabelsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabels(this);
}

Java8Parser::SwitchLabelsContext* Java8Parser::switchLabels() {
  SwitchLabelsContext *_localctx = _tracker.createInstance<SwitchLabelsContext>(_ctx, getState());
  enterRule(_localctx, 292, Java8Parser::RuleSwitchLabels);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1619);
    switchLabel();
    setState(1623);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1620);
      switchLabel();
      setState(1625);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

Java8Parser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstantExpressionContext* Java8Parser::SwitchLabelContext::constantExpression() {
  return getRuleContext<Java8Parser::ConstantExpressionContext>(0);
}

Java8Parser::EnumConstantNameContext* Java8Parser::SwitchLabelContext::enumConstantName() {
  return getRuleContext<Java8Parser::EnumConstantNameContext>(0);
}


size_t Java8Parser::SwitchLabelContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabel;
}

void Java8Parser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void Java8Parser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}

Java8Parser::SwitchLabelContext* Java8Parser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 294, Java8Parser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1636);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1626);
      match(Java8Parser::CASE);
      setState(1627);
      constantExpression();
      setState(1628);
      match(Java8Parser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1630);
      match(Java8Parser::CASE);
      setState(1631);
      enumConstantName();
      setState(1632);
      match(Java8Parser::COLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1634);
      match(Java8Parser::DEFAULT);
      setState(1635);
      match(Java8Parser::COLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantNameContext ------------------------------------------------------------------

Java8Parser::EnumConstantNameContext::EnumConstantNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumConstantNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::EnumConstantNameContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantName;
}

void Java8Parser::EnumConstantNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantName(this);
}

void Java8Parser::EnumConstantNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantName(this);
}

Java8Parser::EnumConstantNameContext* Java8Parser::enumConstantName() {
  EnumConstantNameContext *_localctx = _tracker.createInstance<EnumConstantNameContext>(_ctx, getState());
  enterRule(_localctx, 296, Java8Parser::RuleEnumConstantName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1638);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

Java8Parser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementContext* Java8Parser::WhileStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::WhileStatementContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatement;
}

void Java8Parser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void Java8Parser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

Java8Parser::WhileStatementContext* Java8Parser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 298, Java8Parser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1640);
    match(Java8Parser::WHILE);
    setState(1641);
    match(Java8Parser::LPAREN);
    setState(1642);
    expression();
    setState(1643);
    match(Java8Parser::RPAREN);
    setState(1644);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::WhileStatementNoShortIfContext::WhileStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::WhileStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::WhileStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatementNoShortIf;
}

void Java8Parser::WhileStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatementNoShortIf(this);
}

void Java8Parser::WhileStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatementNoShortIf(this);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::whileStatementNoShortIf() {
  WhileStatementNoShortIfContext *_localctx = _tracker.createInstance<WhileStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 300, Java8Parser::RuleWhileStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1646);
    match(Java8Parser::WHILE);
    setState(1647);
    match(Java8Parser::LPAREN);
    setState(1648);
    expression();
    setState(1649);
    match(Java8Parser::RPAREN);
    setState(1650);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

Java8Parser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementContext* Java8Parser::DoStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::DoStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::DoStatementContext::getRuleIndex() const {
  return Java8Parser::RuleDoStatement;
}

void Java8Parser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}

void Java8Parser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}

Java8Parser::DoStatementContext* Java8Parser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 302, Java8Parser::RuleDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1652);
    match(Java8Parser::DO);
    setState(1653);
    statement();
    setState(1654);
    match(Java8Parser::WHILE);
    setState(1655);
    match(Java8Parser::LPAREN);
    setState(1656);
    expression();
    setState(1657);
    match(Java8Parser::RPAREN);
    setState(1658);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

Java8Parser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementContext* Java8Parser::ForStatementContext::basicForStatement() {
  return getRuleContext<Java8Parser::BasicForStatementContext>(0);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::ForStatementContext::enhancedForStatement() {
  return getRuleContext<Java8Parser::EnhancedForStatementContext>(0);
}


size_t Java8Parser::ForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleForStatement;
}

void Java8Parser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void Java8Parser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

Java8Parser::ForStatementContext* Java8Parser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 304, Java8Parser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1662);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1660);
      basicForStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1661);
      enhancedForStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::ForStatementNoShortIfContext::ForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::basicForStatementNoShortIf() {
  return getRuleContext<Java8Parser::BasicForStatementNoShortIfContext>(0);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::enhancedForStatementNoShortIf() {
  return getRuleContext<Java8Parser::EnhancedForStatementNoShortIfContext>(0);
}


size_t Java8Parser::ForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleForStatementNoShortIf;
}

void Java8Parser::ForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatementNoShortIf(this);
}

void Java8Parser::ForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatementNoShortIf(this);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::forStatementNoShortIf() {
  ForStatementNoShortIfContext *_localctx = _tracker.createInstance<ForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 306, Java8Parser::RuleForStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1664);
      basicForStatementNoShortIf();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1665);
      enhancedForStatementNoShortIf();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

Java8Parser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementContext* Java8Parser::BasicForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatement;
}

void Java8Parser::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void Java8Parser::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}

Java8Parser::BasicForStatementContext* Java8Parser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 308, Java8Parser::RuleBasicForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1668);
    match(Java8Parser::FOR);
    setState(1669);
    match(Java8Parser::LPAREN);
    setState(1671);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1670);
      forInit();
    }
    setState(1673);
    match(Java8Parser::SEMI);
    setState(1675);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1674);
      expression();
    }
    setState(1677);
    match(Java8Parser::SEMI);
    setState(1679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1678);
      forUpdate();
    }
    setState(1681);
    match(Java8Parser::RPAREN);
    setState(1682);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::BasicForStatementNoShortIfContext::BasicForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementNoShortIfContext* Java8Parser::BasicForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementNoShortIfContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementNoShortIfContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatementNoShortIf;
}

void Java8Parser::BasicForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatementNoShortIf(this);
}

void Java8Parser::BasicForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatementNoShortIf(this);
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::basicForStatementNoShortIf() {
  BasicForStatementNoShortIfContext *_localctx = _tracker.createInstance<BasicForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 310, Java8Parser::RuleBasicForStatementNoShortIf);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1684);
    match(Java8Parser::FOR);
    setState(1685);
    match(Java8Parser::LPAREN);
    setState(1687);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1686);
      forInit();
    }
    setState(1689);
    match(Java8Parser::SEMI);
    setState(1691);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1690);
      expression();
    }
    setState(1693);
    match(Java8Parser::SEMI);
    setState(1695);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1694);
      forUpdate();
    }
    setState(1697);
    match(Java8Parser::RPAREN);
    setState(1698);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

Java8Parser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForInitContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::ForInitContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}


size_t Java8Parser::ForInitContext::getRuleIndex() const {
  return Java8Parser::RuleForInit;
}

void Java8Parser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void Java8Parser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}

Java8Parser::ForInitContext* Java8Parser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 312, Java8Parser::RuleForInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1702);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1700);
      statementExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1701);
      localVariableDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

Java8Parser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForUpdateContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}


size_t Java8Parser::ForUpdateContext::getRuleIndex() const {
  return Java8Parser::RuleForUpdate;
}

void Java8Parser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForUpdate(this);
}

void Java8Parser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForUpdate(this);
}

Java8Parser::ForUpdateContext* Java8Parser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 314, Java8Parser::RuleForUpdate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1704);
    statementExpressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionListContext ------------------------------------------------------------------

Java8Parser::StatementExpressionListContext::StatementExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::StatementExpressionContext *> Java8Parser::StatementExpressionListContext::statementExpression() {
  return getRuleContexts<Java8Parser::StatementExpressionContext>();
}

Java8Parser::StatementExpressionContext* Java8Parser::StatementExpressionListContext::statementExpression(size_t i) {
  return getRuleContext<Java8Parser::StatementExpressionContext>(i);
}


size_t Java8Parser::StatementExpressionListContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpressionList;
}

void Java8Parser::StatementExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementExpressionList(this);
}

void Java8Parser::StatementExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementExpressionList(this);
}

Java8Parser::StatementExpressionListContext* Java8Parser::statementExpressionList() {
  StatementExpressionListContext *_localctx = _tracker.createInstance<StatementExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 316, Java8Parser::RuleStatementExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1706);
    statementExpression();
    setState(1711);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1707);
      match(Java8Parser::COMMA);
      setState(1708);
      statementExpression();
      setState(1713);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementContext::EnhancedForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::EnhancedForStatementContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementContext* Java8Parser::EnhancedForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatement;
}

void Java8Parser::EnhancedForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnhancedForStatement(this);
}

void Java8Parser::EnhancedForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnhancedForStatement(this);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::enhancedForStatement() {
  EnhancedForStatementContext *_localctx = _tracker.createInstance<EnhancedForStatementContext>(_ctx, getState());
  enterRule(_localctx, 318, Java8Parser::RuleEnhancedForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1714);
    match(Java8Parser::FOR);
    setState(1715);
    match(Java8Parser::LPAREN);
    setState(1719);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1716);
      variableModifier();
      setState(1721);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1722);
    unannType();
    setState(1723);
    variableDeclaratorId();
    setState(1724);
    match(Java8Parser::COLON);
    setState(1725);
    expression();
    setState(1726);
    match(Java8Parser::RPAREN);
    setState(1727);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementNoShortIfContext::EnhancedForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::EnhancedForStatementNoShortIfContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::EnhancedForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatementNoShortIf;
}

void Java8Parser::EnhancedForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnhancedForStatementNoShortIf(this);
}

void Java8Parser::EnhancedForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnhancedForStatementNoShortIf(this);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::enhancedForStatementNoShortIf() {
  EnhancedForStatementNoShortIfContext *_localctx = _tracker.createInstance<EnhancedForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 320, Java8Parser::RuleEnhancedForStatementNoShortIf);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1729);
    match(Java8Parser::FOR);
    setState(1730);
    match(Java8Parser::LPAREN);
    setState(1734);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1731);
      variableModifier();
      setState(1736);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1737);
    unannType();
    setState(1738);
    variableDeclaratorId();
    setState(1739);
    match(Java8Parser::COLON);
    setState(1740);
    expression();
    setState(1741);
    match(Java8Parser::RPAREN);
    setState(1742);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

Java8Parser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BreakStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::BreakStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBreakStatement;
}

void Java8Parser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void Java8Parser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

Java8Parser::BreakStatementContext* Java8Parser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 322, Java8Parser::RuleBreakStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1744);
    match(Java8Parser::BREAK);
    setState(1746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1745);
      match(Java8Parser::Identifier);
    }
    setState(1748);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

Java8Parser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::ContinueStatementContext::getRuleIndex() const {
  return Java8Parser::RuleContinueStatement;
}

void Java8Parser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void Java8Parser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}

Java8Parser::ContinueStatementContext* Java8Parser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 324, Java8Parser::RuleContinueStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1750);
    match(Java8Parser::CONTINUE);
    setState(1752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1751);
      match(Java8Parser::Identifier);
    }
    setState(1754);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

Java8Parser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::ReturnStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ReturnStatementContext::getRuleIndex() const {
  return Java8Parser::RuleReturnStatement;
}

void Java8Parser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void Java8Parser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

Java8Parser::ReturnStatementContext* Java8Parser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 326, Java8Parser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    match(Java8Parser::RETURN);
    setState(1758);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1757);
      expression();
    }
    setState(1760);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

Java8Parser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::ThrowStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ThrowStatementContext::getRuleIndex() const {
  return Java8Parser::RuleThrowStatement;
}

void Java8Parser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void Java8Parser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}

Java8Parser::ThrowStatementContext* Java8Parser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 328, Java8Parser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1762);
    match(Java8Parser::THROW);
    setState(1763);
    expression();
    setState(1764);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SynchronizedStatementContext ------------------------------------------------------------------

Java8Parser::SynchronizedStatementContext::SynchronizedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::SynchronizedStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::BlockContext* Java8Parser::SynchronizedStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::SynchronizedStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSynchronizedStatement;
}

void Java8Parser::SynchronizedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSynchronizedStatement(this);
}

void Java8Parser::SynchronizedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSynchronizedStatement(this);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::synchronizedStatement() {
  SynchronizedStatementContext *_localctx = _tracker.createInstance<SynchronizedStatementContext>(_ctx, getState());
  enterRule(_localctx, 330, Java8Parser::RuleSynchronizedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1766);
    match(Java8Parser::SYNCHRONIZED);
    setState(1767);
    match(Java8Parser::LPAREN);
    setState(1768);
    expression();
    setState(1769);
    match(Java8Parser::RPAREN);
    setState(1770);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

Java8Parser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::TryStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::TryStatementContext::tryWithResourcesStatement() {
  return getRuleContext<Java8Parser::TryWithResourcesStatementContext>(0);
}


size_t Java8Parser::TryStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryStatement;
}

void Java8Parser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void Java8Parser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}

Java8Parser::TryStatementContext* Java8Parser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 332, Java8Parser::RuleTryStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1784);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1772);
      match(Java8Parser::TRY);
      setState(1773);
      block();
      setState(1774);
      catches();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1776);
      match(Java8Parser::TRY);
      setState(1777);
      block();
      setState(1779);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::CATCH) {
        setState(1778);
        catches();
      }
      setState(1781);
      finally_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1783);
      tryWithResourcesStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchesContext ------------------------------------------------------------------

Java8Parser::CatchesContext::CatchesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::CatchClauseContext *> Java8Parser::CatchesContext::catchClause() {
  return getRuleContexts<Java8Parser::CatchClauseContext>();
}

Java8Parser::CatchClauseContext* Java8Parser::CatchesContext::catchClause(size_t i) {
  return getRuleContext<Java8Parser::CatchClauseContext>(i);
}


size_t Java8Parser::CatchesContext::getRuleIndex() const {
  return Java8Parser::RuleCatches;
}

void Java8Parser::CatchesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatches(this);
}

void Java8Parser::CatchesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatches(this);
}

Java8Parser::CatchesContext* Java8Parser::catches() {
  CatchesContext *_localctx = _tracker.createInstance<CatchesContext>(_ctx, getState());
  enterRule(_localctx, 334, Java8Parser::RuleCatches);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1786);
    catchClause();
    setState(1790);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CATCH) {
      setState(1787);
      catchClause();
      setState(1792);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

Java8Parser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::CatchFormalParameterContext* Java8Parser::CatchClauseContext::catchFormalParameter() {
  return getRuleContext<Java8Parser::CatchFormalParameterContext>(0);
}

Java8Parser::BlockContext* Java8Parser::CatchClauseContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::CatchClauseContext::getRuleIndex() const {
  return Java8Parser::RuleCatchClause;
}

void Java8Parser::CatchClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchClause(this);
}

void Java8Parser::CatchClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchClause(this);
}

Java8Parser::CatchClauseContext* Java8Parser::catchClause() {
  CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
  enterRule(_localctx, 336, Java8Parser::RuleCatchClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1793);
    match(Java8Parser::CATCH);
    setState(1794);
    match(Java8Parser::LPAREN);
    setState(1795);
    catchFormalParameter();
    setState(1796);
    match(Java8Parser::RPAREN);
    setState(1797);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchFormalParameterContext ------------------------------------------------------------------

Java8Parser::CatchFormalParameterContext::CatchFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::CatchTypeContext* Java8Parser::CatchFormalParameterContext::catchType() {
  return getRuleContext<Java8Parser::CatchTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::CatchFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::CatchFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::CatchFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::CatchFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleCatchFormalParameter;
}

void Java8Parser::CatchFormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchFormalParameter(this);
}

void Java8Parser::CatchFormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchFormalParameter(this);
}

Java8Parser::CatchFormalParameterContext* Java8Parser::catchFormalParameter() {
  CatchFormalParameterContext *_localctx = _tracker.createInstance<CatchFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 338, Java8Parser::RuleCatchFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1802);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1799);
      variableModifier();
      setState(1804);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1805);
    catchType();
    setState(1806);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchTypeContext ------------------------------------------------------------------

Java8Parser::CatchTypeContext::CatchTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::CatchTypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}

std::vector<Java8Parser::ClassTypeContext *> Java8Parser::CatchTypeContext::classType() {
  return getRuleContexts<Java8Parser::ClassTypeContext>();
}

Java8Parser::ClassTypeContext* Java8Parser::CatchTypeContext::classType(size_t i) {
  return getRuleContext<Java8Parser::ClassTypeContext>(i);
}


size_t Java8Parser::CatchTypeContext::getRuleIndex() const {
  return Java8Parser::RuleCatchType;
}

void Java8Parser::CatchTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchType(this);
}

void Java8Parser::CatchTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchType(this);
}

Java8Parser::CatchTypeContext* Java8Parser::catchType() {
  CatchTypeContext *_localctx = _tracker.createInstance<CatchTypeContext>(_ctx, getState());
  enterRule(_localctx, 340, Java8Parser::RuleCatchType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1808);
    unannClassType();
    setState(1813);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::BITOR) {
      setState(1809);
      match(Java8Parser::BITOR);
      setState(1810);
      classType();
      setState(1815);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finally_Context ------------------------------------------------------------------

Java8Parser::Finally_Context::Finally_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::Finally_Context::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::Finally_Context::getRuleIndex() const {
  return Java8Parser::RuleFinally_;
}

void Java8Parser::Finally_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinally_(this);
}

void Java8Parser::Finally_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinally_(this);
}

Java8Parser::Finally_Context* Java8Parser::finally_() {
  Finally_Context *_localctx = _tracker.createInstance<Finally_Context>(_ctx, getState());
  enterRule(_localctx, 342, Java8Parser::RuleFinally_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1816);
    match(Java8Parser::FINALLY);
    setState(1817);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryWithResourcesStatementContext ------------------------------------------------------------------

Java8Parser::TryWithResourcesStatementContext::TryWithResourcesStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ResourceSpecificationContext* Java8Parser::TryWithResourcesStatementContext::resourceSpecification() {
  return getRuleContext<Java8Parser::ResourceSpecificationContext>(0);
}

Java8Parser::BlockContext* Java8Parser::TryWithResourcesStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryWithResourcesStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryWithResourcesStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}


size_t Java8Parser::TryWithResourcesStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryWithResourcesStatement;
}

void Java8Parser::TryWithResourcesStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryWithResourcesStatement(this);
}

void Java8Parser::TryWithResourcesStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryWithResourcesStatement(this);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::tryWithResourcesStatement() {
  TryWithResourcesStatementContext *_localctx = _tracker.createInstance<TryWithResourcesStatementContext>(_ctx, getState());
  enterRule(_localctx, 344, Java8Parser::RuleTryWithResourcesStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1819);
    match(Java8Parser::TRY);
    setState(1820);
    resourceSpecification();
    setState(1821);
    block();
    setState(1823);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::CATCH) {
      setState(1822);
      catches();
    }
    setState(1826);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::FINALLY) {
      setState(1825);
      finally_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceSpecificationContext ------------------------------------------------------------------

Java8Parser::ResourceSpecificationContext::ResourceSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ResourceListContext* Java8Parser::ResourceSpecificationContext::resourceList() {
  return getRuleContext<Java8Parser::ResourceListContext>(0);
}


size_t Java8Parser::ResourceSpecificationContext::getRuleIndex() const {
  return Java8Parser::RuleResourceSpecification;
}

void Java8Parser::ResourceSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceSpecification(this);
}

void Java8Parser::ResourceSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceSpecification(this);
}

Java8Parser::ResourceSpecificationContext* Java8Parser::resourceSpecification() {
  ResourceSpecificationContext *_localctx = _tracker.createInstance<ResourceSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 346, Java8Parser::RuleResourceSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1828);
    match(Java8Parser::LPAREN);
    setState(1829);
    resourceList();
    setState(1831);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1830);
      match(Java8Parser::SEMI);
    }
    setState(1833);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceListContext ------------------------------------------------------------------

Java8Parser::ResourceListContext::ResourceListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ResourceContext *> Java8Parser::ResourceListContext::resource() {
  return getRuleContexts<Java8Parser::ResourceContext>();
}

Java8Parser::ResourceContext* Java8Parser::ResourceListContext::resource(size_t i) {
  return getRuleContext<Java8Parser::ResourceContext>(i);
}


size_t Java8Parser::ResourceListContext::getRuleIndex() const {
  return Java8Parser::RuleResourceList;
}

void Java8Parser::ResourceListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceList(this);
}

void Java8Parser::ResourceListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceList(this);
}

Java8Parser::ResourceListContext* Java8Parser::resourceList() {
  ResourceListContext *_localctx = _tracker.createInstance<ResourceListContext>(_ctx, getState());
  enterRule(_localctx, 348, Java8Parser::RuleResourceList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1835);
    resource();
    setState(1840);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1836);
        match(Java8Parser::SEMI);
        setState(1837);
        resource(); 
      }
      setState(1842);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

Java8Parser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ResourceContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::ResourceContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::ResourceContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::ResourceContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::ResourceContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::ResourceContext::getRuleIndex() const {
  return Java8Parser::RuleResource;
}

void Java8Parser::ResourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource(this);
}

void Java8Parser::ResourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource(this);
}

Java8Parser::ResourceContext* Java8Parser::resource() {
  ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
  enterRule(_localctx, 350, Java8Parser::RuleResource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1843);
      variableModifier();
      setState(1848);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1849);
    unannType();
    setState(1850);
    variableDeclaratorId();
    setState(1851);
    match(Java8Parser::ASSIGN);
    setState(1852);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

Java8Parser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray_lfno_primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray_lfno_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primaryContext>(0);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::PrimaryContext::arrayCreationExpression() {
  return getRuleContext<Java8Parser::ArrayCreationExpressionContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_primaryContext *> Java8Parser::PrimaryContext::primaryNoNewArray_lf_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lf_primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray_lf_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primaryContext>(i);
}


size_t Java8Parser::PrimaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimary;
}

void Java8Parser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void Java8Parser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

Java8Parser::PrimaryContext* Java8Parser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 352, Java8Parser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1856);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1854);
      primaryNoNewArray_lfno_primary();
      break;
    }

    case 2: {
      setState(1855);
      arrayCreationExpression();
      break;
    }

    }
    setState(1861);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1858);
        primaryNoNewArray_lf_primary(); 
      }
      setState(1863);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArrayContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArrayContext::PrimaryNoNewArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArrayContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArrayContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArrayContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArrayContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArrayContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::PrimaryNoNewArrayContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArrayContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArrayContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArrayContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray;
}

void Java8Parser::PrimaryNoNewArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray(this);
}

void Java8Parser::PrimaryNoNewArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray(this);
}

Java8Parser::PrimaryNoNewArrayContext* Java8Parser::primaryNoNewArray() {
  PrimaryNoNewArrayContext *_localctx = _tracker.createInstance<PrimaryNoNewArrayContext>(_ctx, getState());
  enterRule(_localctx, 354, Java8Parser::RulePrimaryNoNewArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1893);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1864);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1865);
      typeName();
      setState(1870);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1866);
        match(Java8Parser::LBRACK);
        setState(1867);
        match(Java8Parser::RBRACK);
        setState(1872);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1873);
      match(Java8Parser::DOT);
      setState(1874);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1876);
      match(Java8Parser::VOID);
      setState(1877);
      match(Java8Parser::DOT);
      setState(1878);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1879);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1880);
      typeName();
      setState(1881);
      match(Java8Parser::DOT);
      setState(1882);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1884);
      match(Java8Parser::LPAREN);
      setState(1885);
      expression();
      setState(1886);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1888);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1889);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1890);
      arrayAccess();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1891);
      methodInvocation();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1892);
      methodReference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::PrimaryNoNewArray_lf_arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_arrayAccess;
}

void Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_arrayAccess(this);
}

void Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_arrayAccess(this);
}

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext* Java8Parser::primaryNoNewArray_lf_arrayAccess() {
  PrimaryNoNewArray_lf_arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 356, Java8Parser::RulePrimaryNoNewArray_lf_arrayAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::PrimaryNoNewArray_lfno_arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_arrayAccess;
}

void Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_arrayAccess(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_arrayAccess(this);
}

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext* Java8Parser::primaryNoNewArray_lfno_arrayAccess() {
  PrimaryNoNewArray_lfno_arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 358, Java8Parser::RulePrimaryNoNewArray_lfno_arrayAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1925);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1897);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1898);
      typeName();
      setState(1903);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1899);
        match(Java8Parser::LBRACK);
        setState(1900);
        match(Java8Parser::RBRACK);
        setState(1905);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1906);
      match(Java8Parser::DOT);
      setState(1907);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1909);
      match(Java8Parser::VOID);
      setState(1910);
      match(Java8Parser::DOT);
      setState(1911);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1912);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1913);
      typeName();
      setState(1914);
      match(Java8Parser::DOT);
      setState(1915);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1917);
      match(Java8Parser::LPAREN);
      setState(1918);
      expression();
      setState(1919);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1921);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1922);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1923);
      methodInvocation();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1924);
      methodReference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primaryContext::PrimaryNoNewArray_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::classInstanceCreationExpression_lf_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lf_primaryContext>(0);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::fieldAccess_lf_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lf_primaryContext>(0);
}

Java8Parser::ArrayAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::arrayAccess_lf_primary() {
  return getRuleContext<Java8Parser::ArrayAccess_lf_primaryContext>(0);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::methodInvocation_lf_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lf_primaryContext>(0);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::methodReference_lf_primary() {
  return getRuleContext<Java8Parser::MethodReference_lf_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary(this);
}

Java8Parser::PrimaryNoNewArray_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary() {
  PrimaryNoNewArray_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 360, Java8Parser::RulePrimaryNoNewArray_lf_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1932);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1927);
      classInstanceCreationExpression_lf_primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1928);
      fieldAccess_lf_primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1929);
      arrayAccess_lf_primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1930);
      methodInvocation_lf_primary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1931);
      methodReference_lf_primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(this);
}

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary() {
  PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 362, Java8Parser::RulePrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::classInstanceCreationExpression_lf_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lf_primaryContext>(0);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::fieldAccess_lf_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lf_primaryContext>(0);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::methodInvocation_lf_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lf_primaryContext>(0);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::methodReference_lf_primary() {
  return getRuleContext<Java8Parser::MethodReference_lf_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(this);
}

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary() {
  PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 364, Java8Parser::RulePrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1940);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1936);
      classInstanceCreationExpression_lf_primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1937);
      fieldAccess_lf_primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1938);
      methodInvocation_lf_primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1939);
      methodReference_lf_primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primaryContext::PrimaryNoNewArray_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::classInstanceCreationExpression_lfno_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext>(0);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::fieldAccess_lfno_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lfno_primaryContext>(0);
}

Java8Parser::ArrayAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::arrayAccess_lfno_primary() {
  return getRuleContext<Java8Parser::ArrayAccess_lfno_primaryContext>(0);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::methodInvocation_lfno_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lfno_primaryContext>(0);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::methodReference_lfno_primary() {
  return getRuleContext<Java8Parser::MethodReference_lfno_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary() {
  PrimaryNoNewArray_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 366, Java8Parser::RulePrimaryNoNewArray_lfno_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1982);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1942);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1943);
      typeName();
      setState(1948);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1944);
        match(Java8Parser::LBRACK);
        setState(1945);
        match(Java8Parser::RBRACK);
        setState(1950);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1951);
      match(Java8Parser::DOT);
      setState(1952);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1954);
      unannPrimitiveType();
      setState(1959);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1955);
        match(Java8Parser::LBRACK);
        setState(1956);
        match(Java8Parser::RBRACK);
        setState(1961);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1962);
      match(Java8Parser::DOT);
      setState(1963);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1965);
      match(Java8Parser::VOID);
      setState(1966);
      match(Java8Parser::DOT);
      setState(1967);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1968);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1969);
      typeName();
      setState(1970);
      match(Java8Parser::DOT);
      setState(1971);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1973);
      match(Java8Parser::LPAREN);
      setState(1974);
      expression();
      setState(1975);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1977);
      classInstanceCreationExpression_lfno_primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1978);
      fieldAccess_lfno_primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1979);
      arrayAccess_lfno_primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1980);
      methodInvocation_lfno_primary();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1981);
      methodReference_lfno_primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary() {
  PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 368, Java8Parser::RulePrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::classInstanceCreationExpression_lfno_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext>(0);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::fieldAccess_lfno_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lfno_primaryContext>(0);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::methodInvocation_lfno_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lfno_primaryContext>(0);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::methodReference_lfno_primary() {
  return getRuleContext<Java8Parser::MethodReference_lfno_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary() {
  PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 370, Java8Parser::RulePrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2025);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1986);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1987);
      typeName();
      setState(1992);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1988);
        match(Java8Parser::LBRACK);
        setState(1989);
        match(Java8Parser::RBRACK);
        setState(1994);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1995);
      match(Java8Parser::DOT);
      setState(1996);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1998);
      unannPrimitiveType();
      setState(2003);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1999);
        match(Java8Parser::LBRACK);
        setState(2000);
        match(Java8Parser::RBRACK);
        setState(2005);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2006);
      match(Java8Parser::DOT);
      setState(2007);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2009);
      match(Java8Parser::VOID);
      setState(2010);
      match(Java8Parser::DOT);
      setState(2011);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2012);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2013);
      typeName();
      setState(2014);
      match(Java8Parser::DOT);
      setState(2015);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2017);
      match(Java8Parser::LPAREN);
      setState(2018);
      expression();
      setState(2019);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2021);
      classInstanceCreationExpression_lfno_primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2022);
      fieldAccess_lfno_primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2023);
      methodInvocation_lfno_primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2024);
      methodReference_lfno_primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpressionContext::ClassInstanceCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpressionContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpressionContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpressionContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpressionContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpressionContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::ClassInstanceCreationExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression;
}

void Java8Parser::ClassInstanceCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression(this);
}

void Java8Parser::ClassInstanceCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression(this);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::classInstanceCreationExpression() {
  ClassInstanceCreationExpressionContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 372, Java8Parser::RuleClassInstanceCreationExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2027);
      match(Java8Parser::NEW);
      setState(2029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2028);
        typeArguments();
      }
      setState(2034);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2031);
        annotation();
        setState(2036);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2037);
      match(Java8Parser::Identifier);
      setState(2048);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::DOT) {
        setState(2038);
        match(Java8Parser::DOT);
        setState(2042);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2039);
          annotation();
          setState(2044);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2045);
        match(Java8Parser::Identifier);
        setState(2050);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2052);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2051);
        typeArgumentsOrDiamond();
      }
      setState(2054);
      match(Java8Parser::LPAREN);
      setState(2056);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2055);
        argumentList();
      }
      setState(2058);
      match(Java8Parser::RPAREN);
      setState(2060);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2059);
        classBody();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2062);
      expressionName();
      setState(2063);
      match(Java8Parser::DOT);
      setState(2064);
      match(Java8Parser::NEW);
      setState(2066);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2065);
        typeArguments();
      }
      setState(2071);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2068);
        annotation();
        setState(2073);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2074);
      match(Java8Parser::Identifier);
      setState(2076);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2075);
        typeArgumentsOrDiamond();
      }
      setState(2078);
      match(Java8Parser::LPAREN);
      setState(2080);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2079);
        argumentList();
      }
      setState(2082);
      match(Java8Parser::RPAREN);
      setState(2084);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2083);
        classBody();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2086);
      primary();
      setState(2087);
      match(Java8Parser::DOT);
      setState(2088);
      match(Java8Parser::NEW);
      setState(2090);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2089);
        typeArguments();
      }
      setState(2095);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2092);
        annotation();
        setState(2097);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2098);
      match(Java8Parser::Identifier);
      setState(2100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2099);
        typeArgumentsOrDiamond();
      }
      setState(2102);
      match(Java8Parser::LPAREN);
      setState(2104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2103);
        argumentList();
      }
      setState(2106);
      match(Java8Parser::RPAREN);
      setState(2108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2107);
        classBody();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression_lf_primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::ClassInstanceCreationExpression_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression_lf_primary;
}

void Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression_lf_primary(this);
}

void Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression_lf_primary(this);
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::classInstanceCreationExpression_lf_primary() {
  ClassInstanceCreationExpression_lf_primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 374, Java8Parser::RuleClassInstanceCreationExpression_lf_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2112);
    match(Java8Parser::DOT);
    setState(2113);
    match(Java8Parser::NEW);
    setState(2115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2114);
      typeArguments();
    }
    setState(2120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2117);
      annotation();
      setState(2122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2123);
    match(Java8Parser::Identifier);
    setState(2125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2124);
      typeArgumentsOrDiamond();
    }
    setState(2127);
    match(Java8Parser::LPAREN);
    setState(2129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2128);
      argumentList();
    }
    setState(2131);
    match(Java8Parser::RPAREN);
    setState(2133);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 226, _ctx)) {
    case 1: {
      setState(2132);
      classBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::ClassInstanceCreationExpression_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression_lfno_primary;
}

void Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression_lfno_primary(this);
}

void Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression_lfno_primary(this);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::classInstanceCreationExpression_lfno_primary() {
  ClassInstanceCreationExpression_lfno_primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 376, Java8Parser::RuleClassInstanceCreationExpression_lfno_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(2135);
        match(Java8Parser::NEW);
        setState(2137);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2136);
          typeArguments();
        }
        setState(2142);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2139);
          annotation();
          setState(2144);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2145);
        match(Java8Parser::Identifier);
        setState(2156);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::DOT) {
          setState(2146);
          match(Java8Parser::DOT);
          setState(2150);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == Java8Parser::AT) {
            setState(2147);
            annotation();
            setState(2152);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2153);
          match(Java8Parser::Identifier);
          setState(2158);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2159);
          typeArgumentsOrDiamond();
        }
        setState(2162);
        match(Java8Parser::LPAREN);
        setState(2164);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2163);
          argumentList();
        }
        setState(2166);
        match(Java8Parser::RPAREN);
        setState(2168);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
        case 1: {
          setState(2167);
          classBody();
          break;
        }

        }
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2170);
        expressionName();
        setState(2171);
        match(Java8Parser::DOT);
        setState(2172);
        match(Java8Parser::NEW);
        setState(2174);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2173);
          typeArguments();
        }
        setState(2179);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2176);
          annotation();
          setState(2181);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2182);
        match(Java8Parser::Identifier);
        setState(2184);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2183);
          typeArgumentsOrDiamond();
        }
        setState(2186);
        match(Java8Parser::LPAREN);
        setState(2188);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2187);
          argumentList();
        }
        setState(2190);
        match(Java8Parser::RPAREN);
        setState(2192);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
        case 1: {
          setState(2191);
          classBody();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsOrDiamondContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsOrDiamondContext::TypeArgumentsOrDiamondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeArgumentsContext* Java8Parser::TypeArgumentsOrDiamondContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::TypeArgumentsOrDiamondContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentsOrDiamond;
}

void Java8Parser::TypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentsOrDiamond(this);
}

void Java8Parser::TypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentsOrDiamond(this);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::typeArgumentsOrDiamond() {
  TypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<TypeArgumentsOrDiamondContext>(_ctx, getState());
  enterRule(_localctx, 378, Java8Parser::RuleTypeArgumentsOrDiamond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2196);
      typeArguments();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2197);
      match(Java8Parser::LT);
      setState(2198);
      match(Java8Parser::GT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccessContext ------------------------------------------------------------------

Java8Parser::FieldAccessContext::FieldAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::FieldAccessContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccessContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess;
}

void Java8Parser::FieldAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess(this);
}

void Java8Parser::FieldAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess(this);
}

Java8Parser::FieldAccessContext* Java8Parser::fieldAccess() {
  FieldAccessContext *_localctx = _tracker.createInstance<FieldAccessContext>(_ctx, getState());
  enterRule(_localctx, 380, Java8Parser::RuleFieldAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2201);
      primary();
      setState(2202);
      match(Java8Parser::DOT);
      setState(2203);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2205);
      match(Java8Parser::SUPER);
      setState(2206);
      match(Java8Parser::DOT);
      setState(2207);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2208);
      typeName();
      setState(2209);
      match(Java8Parser::DOT);
      setState(2210);
      match(Java8Parser::SUPER);
      setState(2211);
      match(Java8Parser::DOT);
      setState(2212);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess_lf_primaryContext::FieldAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::FieldAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess_lf_primary;
}

void Java8Parser::FieldAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess_lf_primary(this);
}

void Java8Parser::FieldAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess_lf_primary(this);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::fieldAccess_lf_primary() {
  FieldAccess_lf_primaryContext *_localctx = _tracker.createInstance<FieldAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 382, Java8Parser::RuleFieldAccess_lf_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2216);
    match(Java8Parser::DOT);
    setState(2217);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess_lfno_primaryContext::FieldAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccess_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess_lfno_primary;
}

void Java8Parser::FieldAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess_lfno_primary(this);
}

void Java8Parser::FieldAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess_lfno_primary(this);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::fieldAccess_lfno_primary() {
  FieldAccess_lfno_primaryContext *_localctx = _tracker.createInstance<FieldAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 384, Java8Parser::RuleFieldAccess_lfno_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(2219);
        match(Java8Parser::SUPER);
        setState(2220);
        match(Java8Parser::DOT);
        setState(2221);
        match(Java8Parser::Identifier);
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2222);
        typeName();
        setState(2223);
        match(Java8Parser::DOT);
        setState(2224);
        match(Java8Parser::SUPER);
        setState(2225);
        match(Java8Parser::DOT);
        setState(2226);
        match(Java8Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccessContext ------------------------------------------------------------------

Java8Parser::ArrayAccessContext::ArrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccessContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccessContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccessContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray_lfno_arrayAccess() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *> Java8Parser::ArrayAccessContext::primaryNoNewArray_lf_arrayAccess() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext>();
}

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray_lf_arrayAccess(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext>(i);
}


size_t Java8Parser::ArrayAccessContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess;
}

void Java8Parser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}

void Java8Parser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}

Java8Parser::ArrayAccessContext* Java8Parser::arrayAccess() {
  ArrayAccessContext *_localctx = _tracker.createInstance<ArrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 386, Java8Parser::RuleArrayAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      setState(2230);
      expressionName();
      setState(2231);
      match(Java8Parser::LBRACK);
      setState(2232);
      expression();
      setState(2233);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2235);
      primaryNoNewArray_lfno_arrayAccess();
      setState(2236);
      match(Java8Parser::LBRACK);
      setState(2237);
      expression();
      setState(2238);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::LBRACK) {
      setState(2242);
      primaryNoNewArray_lf_arrayAccess();
      setState(2243);
      match(Java8Parser::LBRACK);
      setState(2244);
      expression();
      setState(2245);
      match(Java8Parser::RBRACK);
      setState(2251);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess_lf_primaryContext::ArrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext* Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext>(0);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess_lf_primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess_lf_primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *> Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext* Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>(i);
}


size_t Java8Parser::ArrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess_lf_primary;
}

void Java8Parser::ArrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess_lf_primary(this);
}

void Java8Parser::ArrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess_lf_primary(this);
}

Java8Parser::ArrayAccess_lf_primaryContext* Java8Parser::arrayAccess_lf_primary() {
  ArrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<ArrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 388, Java8Parser::RuleArrayAccess_lf_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2252);
    primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary();
    setState(2253);
    match(Java8Parser::LBRACK);
    setState(2254);
    expression();
    setState(2255);
    match(Java8Parser::RBRACK);
    setState(2264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2257);
        primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary();
        setState(2258);
        match(Java8Parser::LBRACK);
        setState(2259);
        expression();
        setState(2260);
        match(Java8Parser::RBRACK); 
      }
      setState(2266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess_lfno_primaryContext::ArrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccess_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess_lfno_primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess_lfno_primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext* Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *> Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext* Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>(i);
}


size_t Java8Parser::ArrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess_lfno_primary;
}

void Java8Parser::ArrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess_lfno_primary(this);
}

void Java8Parser::ArrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess_lfno_primary(this);
}

Java8Parser::ArrayAccess_lfno_primaryContext* Java8Parser::arrayAccess_lfno_primary() {
  ArrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<ArrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 390, Java8Parser::RuleArrayAccess_lfno_primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
    case 1: {
      setState(2267);
      expressionName();
      setState(2268);
      match(Java8Parser::LBRACK);
      setState(2269);
      expression();
      setState(2270);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2272);
      primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary();
      setState(2273);
      match(Java8Parser::LBRACK);
      setState(2274);
      expression();
      setState(2275);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2279);
        primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary();
        setState(2280);
        match(Java8Parser::LBRACK);
        setState(2281);
        expression();
        setState(2282);
        match(Java8Parser::RBRACK); 
      }
      setState(2288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocationContext ------------------------------------------------------------------

Java8Parser::MethodInvocationContext::MethodInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocationContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::MethodInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation;
}

void Java8Parser::MethodInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation(this);
}

void Java8Parser::MethodInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation(this);
}

Java8Parser::MethodInvocationContext* Java8Parser::methodInvocation() {
  MethodInvocationContext *_localctx = _tracker.createInstance<MethodInvocationContext>(_ctx, getState());
  enterRule(_localctx, 392, Java8Parser::RuleMethodInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2357);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2289);
      methodName();
      setState(2290);
      match(Java8Parser::LPAREN);
      setState(2292);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2291);
        argumentList();
      }
      setState(2294);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2296);
      typeName();
      setState(2297);
      match(Java8Parser::DOT);
      setState(2299);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2298);
        typeArguments();
      }
      setState(2301);
      match(Java8Parser::Identifier);
      setState(2302);
      match(Java8Parser::LPAREN);
      setState(2304);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2303);
        argumentList();
      }
      setState(2306);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2308);
      expressionName();
      setState(2309);
      match(Java8Parser::DOT);
      setState(2311);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2310);
        typeArguments();
      }
      setState(2313);
      match(Java8Parser::Identifier);
      setState(2314);
      match(Java8Parser::LPAREN);
      setState(2316);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2315);
        argumentList();
      }
      setState(2318);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2320);
      primary();
      setState(2321);
      match(Java8Parser::DOT);
      setState(2323);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2322);
        typeArguments();
      }
      setState(2325);
      match(Java8Parser::Identifier);
      setState(2326);
      match(Java8Parser::LPAREN);
      setState(2328);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2327);
        argumentList();
      }
      setState(2330);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2332);
      match(Java8Parser::SUPER);
      setState(2333);
      match(Java8Parser::DOT);
      setState(2335);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2334);
        typeArguments();
      }
      setState(2337);
      match(Java8Parser::Identifier);
      setState(2338);
      match(Java8Parser::LPAREN);
      setState(2340);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2339);
        argumentList();
      }
      setState(2342);
      match(Java8Parser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2343);
      typeName();
      setState(2344);
      match(Java8Parser::DOT);
      setState(2345);
      match(Java8Parser::SUPER);
      setState(2346);
      match(Java8Parser::DOT);
      setState(2348);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2347);
        typeArguments();
      }
      setState(2350);
      match(Java8Parser::Identifier);
      setState(2351);
      match(Java8Parser::LPAREN);
      setState(2353);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2352);
        argumentList();
      }
      setState(2355);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation_lf_primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation_lf_primaryContext::MethodInvocation_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodInvocation_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation_lf_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::MethodInvocation_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation_lf_primary;
}

void Java8Parser::MethodInvocation_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation_lf_primary(this);
}

void Java8Parser::MethodInvocation_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation_lf_primary(this);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::methodInvocation_lf_primary() {
  MethodInvocation_lf_primaryContext *_localctx = _tracker.createInstance<MethodInvocation_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 394, Java8Parser::RuleMethodInvocation_lf_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2359);
    match(Java8Parser::DOT);
    setState(2361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2360);
      typeArguments();
    }
    setState(2363);
    match(Java8Parser::Identifier);
    setState(2364);
    match(Java8Parser::LPAREN);
    setState(2366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2365);
      argumentList();
    }
    setState(2368);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation_lfno_primaryContext::MethodInvocation_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation_lfno_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}


size_t Java8Parser::MethodInvocation_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation_lfno_primary;
}

void Java8Parser::MethodInvocation_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation_lfno_primary(this);
}

void Java8Parser::MethodInvocation_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation_lfno_primary(this);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::methodInvocation_lfno_primary() {
  MethodInvocation_lfno_primaryContext *_localctx = _tracker.createInstance<MethodInvocation_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 396, Java8Parser::RuleMethodInvocation_lfno_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2426);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2370);
      methodName();
      setState(2371);
      match(Java8Parser::LPAREN);
      setState(2373);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2372);
        argumentList();
      }
      setState(2375);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2377);
      typeName();
      setState(2378);
      match(Java8Parser::DOT);
      setState(2380);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2379);
        typeArguments();
      }
      setState(2382);
      match(Java8Parser::Identifier);
      setState(2383);
      match(Java8Parser::LPAREN);
      setState(2385);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2384);
        argumentList();
      }
      setState(2387);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2389);
      expressionName();
      setState(2390);
      match(Java8Parser::DOT);
      setState(2392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2391);
        typeArguments();
      }
      setState(2394);
      match(Java8Parser::Identifier);
      setState(2395);
      match(Java8Parser::LPAREN);
      setState(2397);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2396);
        argumentList();
      }
      setState(2399);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2401);
      match(Java8Parser::SUPER);
      setState(2402);
      match(Java8Parser::DOT);
      setState(2404);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2403);
        typeArguments();
      }
      setState(2406);
      match(Java8Parser::Identifier);
      setState(2407);
      match(Java8Parser::LPAREN);
      setState(2409);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2408);
        argumentList();
      }
      setState(2411);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2412);
      typeName();
      setState(2413);
      match(Java8Parser::DOT);
      setState(2414);
      match(Java8Parser::SUPER);
      setState(2415);
      match(Java8Parser::DOT);
      setState(2417);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2416);
        typeArguments();
      }
      setState(2419);
      match(Java8Parser::Identifier);
      setState(2420);
      match(Java8Parser::LPAREN);
      setState(2422);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2421);
        argumentList();
      }
      setState(2424);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

Java8Parser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArgumentListContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}


size_t Java8Parser::ArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleArgumentList;
}

void Java8Parser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void Java8Parser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}

Java8Parser::ArgumentListContext* Java8Parser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 398, Java8Parser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2428);
    expression();
    setState(2433);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2429);
      match(Java8Parser::COMMA);
      setState(2430);
      expression();
      setState(2435);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReferenceContext ------------------------------------------------------------------

Java8Parser::MethodReferenceContext::MethodReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReferenceContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReferenceContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::MethodReferenceContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodReferenceContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReferenceContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ClassTypeContext* Java8Parser::MethodReferenceContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

Java8Parser::ArrayTypeContext* Java8Parser::MethodReferenceContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::MethodReferenceContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference;
}

void Java8Parser::MethodReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference(this);
}

void Java8Parser::MethodReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference(this);
}

Java8Parser::MethodReferenceContext* Java8Parser::methodReference() {
  MethodReferenceContext *_localctx = _tracker.createInstance<MethodReferenceContext>(_ctx, getState());
  enterRule(_localctx, 400, Java8Parser::RuleMethodReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2483);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2436);
      expressionName();
      setState(2437);
      match(Java8Parser::COLONCOLON);
      setState(2439);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2438);
        typeArguments();
      }
      setState(2441);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2443);
      referenceType();
      setState(2444);
      match(Java8Parser::COLONCOLON);
      setState(2446);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2445);
        typeArguments();
      }
      setState(2448);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2450);
      primary();
      setState(2451);
      match(Java8Parser::COLONCOLON);
      setState(2453);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2452);
        typeArguments();
      }
      setState(2455);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2457);
      match(Java8Parser::SUPER);
      setState(2458);
      match(Java8Parser::COLONCOLON);
      setState(2460);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2459);
        typeArguments();
      }
      setState(2462);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2463);
      typeName();
      setState(2464);
      match(Java8Parser::DOT);
      setState(2465);
      match(Java8Parser::SUPER);
      setState(2466);
      match(Java8Parser::COLONCOLON);
      setState(2468);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2467);
        typeArguments();
      }
      setState(2470);
      match(Java8Parser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2472);
      classType();
      setState(2473);
      match(Java8Parser::COLONCOLON);
      setState(2475);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2474);
        typeArguments();
      }
      setState(2477);
      match(Java8Parser::NEW);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2479);
      arrayType();
      setState(2480);
      match(Java8Parser::COLONCOLON);
      setState(2481);
      match(Java8Parser::NEW);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference_lf_primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference_lf_primaryContext::MethodReference_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodReference_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::MethodReference_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference_lf_primary;
}

void Java8Parser::MethodReference_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference_lf_primary(this);
}

void Java8Parser::MethodReference_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference_lf_primary(this);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::methodReference_lf_primary() {
  MethodReference_lf_primaryContext *_localctx = _tracker.createInstance<MethodReference_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 402, Java8Parser::RuleMethodReference_lf_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2485);
    match(Java8Parser::COLONCOLON);
    setState(2487);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2486);
      typeArguments();
    }
    setState(2489);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference_lfno_primaryContext::MethodReference_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReference_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::MethodReference_lfno_primaryContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReference_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

Java8Parser::ClassTypeContext* Java8Parser::MethodReference_lfno_primaryContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

Java8Parser::ArrayTypeContext* Java8Parser::MethodReference_lfno_primaryContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::MethodReference_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference_lfno_primary;
}

void Java8Parser::MethodReference_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference_lfno_primary(this);
}

void Java8Parser::MethodReference_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference_lfno_primary(this);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::methodReference_lfno_primary() {
  MethodReference_lfno_primaryContext *_localctx = _tracker.createInstance<MethodReference_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 404, Java8Parser::RuleMethodReference_lfno_primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2531);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2491);
      expressionName();
      setState(2492);
      match(Java8Parser::COLONCOLON);
      setState(2494);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2493);
        typeArguments();
      }
      setState(2496);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2498);
      referenceType();
      setState(2499);
      match(Java8Parser::COLONCOLON);
      setState(2501);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2500);
        typeArguments();
      }
      setState(2503);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2505);
      match(Java8Parser::SUPER);
      setState(2506);
      match(Java8Parser::COLONCOLON);
      setState(2508);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2507);
        typeArguments();
      }
      setState(2510);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2511);
      typeName();
      setState(2512);
      match(Java8Parser::DOT);
      setState(2513);
      match(Java8Parser::SUPER);
      setState(2514);
      match(Java8Parser::COLONCOLON);
      setState(2516);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2515);
        typeArguments();
      }
      setState(2518);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2520);
      classType();
      setState(2521);
      match(Java8Parser::COLONCOLON);
      setState(2523);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2522);
        typeArguments();
      }
      setState(2525);
      match(Java8Parser::NEW);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2527);
      arrayType();
      setState(2528);
      match(Java8Parser::COLONCOLON);
      setState(2529);
      match(Java8Parser::NEW);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ArrayCreationExpressionContext::ArrayCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitiveTypeContext* Java8Parser::ArrayCreationExpressionContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::DimExprsContext* Java8Parser::ArrayCreationExpressionContext::dimExprs() {
  return getRuleContext<Java8Parser::DimExprsContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArrayCreationExpressionContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArrayCreationExpressionContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::ArrayCreationExpressionContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::ArrayCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleArrayCreationExpression;
}

void Java8Parser::ArrayCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayCreationExpression(this);
}

void Java8Parser::ArrayCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayCreationExpression(this);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::arrayCreationExpression() {
  ArrayCreationExpressionContext *_localctx = _tracker.createInstance<ArrayCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 406, Java8Parser::RuleArrayCreationExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2533);
      match(Java8Parser::NEW);
      setState(2534);
      primitiveType();
      setState(2535);
      dimExprs();
      setState(2537);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2536);
        dims();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2539);
      match(Java8Parser::NEW);
      setState(2540);
      classOrInterfaceType();
      setState(2541);
      dimExprs();
      setState(2543);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
      case 1: {
        setState(2542);
        dims();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2545);
      match(Java8Parser::NEW);
      setState(2546);
      primitiveType();
      setState(2547);
      dims();
      setState(2548);
      arrayInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2550);
      match(Java8Parser::NEW);
      setState(2551);
      classOrInterfaceType();
      setState(2552);
      dims();
      setState(2553);
      arrayInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprsContext ------------------------------------------------------------------

Java8Parser::DimExprsContext::DimExprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::DimExprContext *> Java8Parser::DimExprsContext::dimExpr() {
  return getRuleContexts<Java8Parser::DimExprContext>();
}

Java8Parser::DimExprContext* Java8Parser::DimExprsContext::dimExpr(size_t i) {
  return getRuleContext<Java8Parser::DimExprContext>(i);
}


size_t Java8Parser::DimExprsContext::getRuleIndex() const {
  return Java8Parser::RuleDimExprs;
}

void Java8Parser::DimExprsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimExprs(this);
}

void Java8Parser::DimExprsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimExprs(this);
}

Java8Parser::DimExprsContext* Java8Parser::dimExprs() {
  DimExprsContext *_localctx = _tracker.createInstance<DimExprsContext>(_ctx, getState());
  enterRule(_localctx, 408, Java8Parser::RuleDimExprs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2557);
    dimExpr();
    setState(2561);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2558);
        dimExpr(); 
      }
      setState(2563);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprContext ------------------------------------------------------------------

Java8Parser::DimExprContext::DimExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::DimExprContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimExprContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimExprContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimExprContext::getRuleIndex() const {
  return Java8Parser::RuleDimExpr;
}

void Java8Parser::DimExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimExpr(this);
}

void Java8Parser::DimExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimExpr(this);
}

Java8Parser::DimExprContext* Java8Parser::dimExpr() {
  DimExprContext *_localctx = _tracker.createInstance<DimExprContext>(_ctx, getState());
  enterRule(_localctx, 410, Java8Parser::RuleDimExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2567);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2564);
      annotation();
      setState(2569);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2570);
    match(Java8Parser::LBRACK);
    setState(2571);
    expression();
    setState(2572);
    match(Java8Parser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

Java8Parser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::ConstantExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ConstantExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConstantExpression;
}

void Java8Parser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void Java8Parser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}

Java8Parser::ConstantExpressionContext* Java8Parser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 412, Java8Parser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2574);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

Java8Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaExpressionContext* Java8Parser::ExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::ExpressionContext::assignmentExpression() {
  return getRuleContext<Java8Parser::AssignmentExpressionContext>(0);
}


size_t Java8Parser::ExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExpression;
}

void Java8Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void Java8Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

Java8Parser::ExpressionContext* Java8Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 414, Java8Parser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2576);
      lambdaExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2577);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

Java8Parser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaParametersContext* Java8Parser::LambdaExpressionContext::lambdaParameters() {
  return getRuleContext<Java8Parser::LambdaParametersContext>(0);
}

Java8Parser::LambdaBodyContext* Java8Parser::LambdaExpressionContext::lambdaBody() {
  return getRuleContext<Java8Parser::LambdaBodyContext>(0);
}


size_t Java8Parser::LambdaExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaExpression;
}

void Java8Parser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void Java8Parser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}

Java8Parser::LambdaExpressionContext* Java8Parser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 416, Java8Parser::RuleLambdaExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2580);
    lambdaParameters();
    setState(2581);
    match(Java8Parser::ARROW);
    setState(2582);
    lambdaBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

Java8Parser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::LambdaParametersContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::LambdaParametersContext::inferredFormalParameterList() {
  return getRuleContext<Java8Parser::InferredFormalParameterListContext>(0);
}


size_t Java8Parser::LambdaParametersContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaParameters;
}

void Java8Parser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameters(this);
}

void Java8Parser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameters(this);
}

Java8Parser::LambdaParametersContext* Java8Parser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 418, Java8Parser::RuleLambdaParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2584);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2585);
      match(Java8Parser::LPAREN);
      setState(2587);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FINAL)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

      || _la == Java8Parser::AT) {
        setState(2586);
        formalParameterList();
      }
      setState(2589);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2590);
      match(Java8Parser::LPAREN);
      setState(2591);
      inferredFormalParameterList();
      setState(2592);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InferredFormalParameterListContext ------------------------------------------------------------------

Java8Parser::InferredFormalParameterListContext::InferredFormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::InferredFormalParameterListContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::InferredFormalParameterListContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}


size_t Java8Parser::InferredFormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleInferredFormalParameterList;
}

void Java8Parser::InferredFormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInferredFormalParameterList(this);
}

void Java8Parser::InferredFormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInferredFormalParameterList(this);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::inferredFormalParameterList() {
  InferredFormalParameterListContext *_localctx = _tracker.createInstance<InferredFormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 420, Java8Parser::RuleInferredFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2596);
    match(Java8Parser::Identifier);
    setState(2601);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2597);
      match(Java8Parser::COMMA);
      setState(2598);
      match(Java8Parser::Identifier);
      setState(2603);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaBodyContext ------------------------------------------------------------------

Java8Parser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::LambdaBodyContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::BlockContext* Java8Parser::LambdaBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::LambdaBodyContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaBody;
}

void Java8Parser::LambdaBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaBody(this);
}

void Java8Parser::LambdaBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaBody(this);
}

Java8Parser::LambdaBodyContext* Java8Parser::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 422, Java8Parser::RuleLambdaBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2606);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(2604);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(2605);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

Java8Parser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::AssignmentContext* Java8Parser::AssignmentExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}


size_t Java8Parser::AssignmentExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentExpression;
}

void Java8Parser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void Java8Parser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 424, Java8Parser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2610);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2608);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2609);
      assignment();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

Java8Parser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LeftHandSideContext* Java8Parser::AssignmentContext::leftHandSide() {
  return getRuleContext<Java8Parser::LeftHandSideContext>(0);
}

Java8Parser::AssignmentOperatorContext* Java8Parser::AssignmentContext::assignmentOperator() {
  return getRuleContext<Java8Parser::AssignmentOperatorContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::AssignmentContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::AssignmentContext::getRuleIndex() const {
  return Java8Parser::RuleAssignment;
}

void Java8Parser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void Java8Parser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

Java8Parser::AssignmentContext* Java8Parser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 426, Java8Parser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2612);
    leftHandSide();
    setState(2613);
    assignmentOperator();
    setState(2614);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftHandSideContext ------------------------------------------------------------------

Java8Parser::LeftHandSideContext::LeftHandSideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::LeftHandSideContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::LeftHandSideContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::LeftHandSideContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}


size_t Java8Parser::LeftHandSideContext::getRuleIndex() const {
  return Java8Parser::RuleLeftHandSide;
}

void Java8Parser::LeftHandSideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeftHandSide(this);
}

void Java8Parser::LeftHandSideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeftHandSide(this);
}

Java8Parser::LeftHandSideContext* Java8Parser::leftHandSide() {
  LeftHandSideContext *_localctx = _tracker.createInstance<LeftHandSideContext>(_ctx, getState());
  enterRule(_localctx, 428, Java8Parser::RuleLeftHandSide);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2619);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2616);
      expressionName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2617);
      fieldAccess();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2618);
      arrayAccess();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

Java8Parser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::AssignmentOperatorContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentOperator;
}

void Java8Parser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void Java8Parser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

Java8Parser::AssignmentOperatorContext* Java8Parser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 430, Java8Parser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2621);
    _la = _input->LA(1);
    if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Java8Parser::ASSIGN - 66))
      | (1ULL << (Java8Parser::ADD_ASSIGN - 66))
      | (1ULL << (Java8Parser::SUB_ASSIGN - 66))
      | (1ULL << (Java8Parser::MUL_ASSIGN - 66))
      | (1ULL << (Java8Parser::DIV_ASSIGN - 66))
      | (1ULL << (Java8Parser::AND_ASSIGN - 66))
      | (1ULL << (Java8Parser::OR_ASSIGN - 66))
      | (1ULL << (Java8Parser::XOR_ASSIGN - 66))
      | (1ULL << (Java8Parser::MOD_ASSIGN - 66))
      | (1ULL << (Java8Parser::LSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::RSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::URSHIFT_ASSIGN - 66)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::ConditionalExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}


size_t Java8Parser::ConditionalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalExpression;
}

void Java8Parser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void Java8Parser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 432, Java8Parser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2630);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2623);
      conditionalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2624);
      conditionalOrExpression(0);
      setState(2625);
      match(Java8Parser::QUESTION);
      setState(2626);
      expression();
      setState(2627);
      match(Java8Parser::COLON);
      setState(2628);
      conditionalExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOrExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalOrExpressionContext::ConditionalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}


size_t Java8Parser::ConditionalOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalOrExpression;
}

void Java8Parser::ConditionalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalOrExpression(this);
}

void Java8Parser::ConditionalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalOrExpression(this);
}


Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression() {
   return conditionalOrExpression(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalOrExpressionContext *_localctx = _tracker.createInstance<ConditionalOrExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalOrExpressionContext *previousContext = _localctx;
  size_t startState = 434;
  enterRecursionRule(_localctx, 434, Java8Parser::RuleConditionalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2633);
    conditionalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalOrExpression);
        setState(2635);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2636);
        match(Java8Parser::OR);
        setState(2637);
        conditionalAndExpression(0); 
      }
      setState(2642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalAndExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalAndExpressionContext::ConditionalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::ConditionalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalAndExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}


size_t Java8Parser::ConditionalAndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalAndExpression;
}

void Java8Parser::ConditionalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalAndExpression(this);
}

void Java8Parser::ConditionalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalAndExpression(this);
}


Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression() {
   return conditionalAndExpression(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalAndExpressionContext *_localctx = _tracker.createInstance<ConditionalAndExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalAndExpressionContext *previousContext = _localctx;
  size_t startState = 436;
  enterRecursionRule(_localctx, 436, Java8Parser::RuleConditionalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2644);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2651);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalAndExpression);
        setState(2646);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2647);
        match(Java8Parser::AND);
        setState(2648);
        inclusiveOrExpression(0); 
      }
      setState(2653);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}


size_t Java8Parser::InclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleInclusiveOrExpression;
}

void Java8Parser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void Java8Parser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::InclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 438;
  enterRecursionRule(_localctx, 438, Java8Parser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2655);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2662);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(2657);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2658);
        match(Java8Parser::BITOR);
        setState(2659);
        exclusiveOrExpression(0); 
      }
      setState(2664);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AndExpressionContext* Java8Parser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}


size_t Java8Parser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExclusiveOrExpression;
}

void Java8Parser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void Java8Parser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::ExclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 440;
  enterRecursionRule(_localctx, 440, Java8Parser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2666);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2673);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(2668);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2669);
        match(Java8Parser::CARET);
        setState(2670);
        andExpression(0); 
      }
      setState(2675);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

Java8Parser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::EqualityExpressionContext* Java8Parser::AndExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}

Java8Parser::AndExpressionContext* Java8Parser::AndExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}


size_t Java8Parser::AndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAndExpression;
}

void Java8Parser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void Java8Parser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


Java8Parser::AndExpressionContext* Java8Parser::andExpression() {
   return andExpression(0);
}

Java8Parser::AndExpressionContext* Java8Parser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  Java8Parser::AndExpressionContext *previousContext = _localctx;
  size_t startState = 442;
  enterRecursionRule(_localctx, 442, Java8Parser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2677);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2684);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(2679);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2680);
        match(Java8Parser::BITAND);
        setState(2681);
        equalityExpression(0); 
      }
      setState(2686);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

Java8Parser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::RelationalExpressionContext* Java8Parser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}


size_t Java8Parser::EqualityExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleEqualityExpression;
}

void Java8Parser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void Java8Parser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression() {
   return equalityExpression(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  Java8Parser::EqualityExpressionContext *previousContext = _localctx;
  size_t startState = 444;
  enterRecursionRule(_localctx, 444, Java8Parser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2688);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2698);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2696);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2690);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2691);
          match(Java8Parser::EQUAL);
          setState(2692);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2693);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2694);
          match(Java8Parser::NOTEQUAL);
          setState(2695);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(2700);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

Java8Parser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ShiftExpressionContext* Java8Parser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::RelationalExpressionContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}


size_t Java8Parser::RelationalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleRelationalExpression;
}

void Java8Parser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void Java8Parser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression() {
   return relationalExpression(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  Java8Parser::RelationalExpressionContext *previousContext = _localctx;
  size_t startState = 446;
  enterRecursionRule(_localctx, 446, Java8Parser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2702);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2721);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2719);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2704);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(2705);
          match(Java8Parser::LT);
          setState(2706);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2707);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(2708);
          match(Java8Parser::GT);
          setState(2709);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2710);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2711);
          match(Java8Parser::LE);
          setState(2712);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2713);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2714);
          match(Java8Parser::GE);
          setState(2715);
          shiftExpression(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2716);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2717);
          match(Java8Parser::INSTANCEOF);
          setState(2718);
          referenceType();
          break;
        }

        } 
      }
      setState(2723);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

Java8Parser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AdditiveExpressionContext* Java8Parser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}


size_t Java8Parser::ShiftExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleShiftExpression;
}

void Java8Parser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void Java8Parser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression() {
   return shiftExpression(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  Java8Parser::ShiftExpressionContext *previousContext = _localctx;
  size_t startState = 448;
  enterRecursionRule(_localctx, 448, Java8Parser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2725);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2742);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2740);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2727);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2728);
          match(Java8Parser::LT);
          setState(2729);
          match(Java8Parser::LT);
          setState(2730);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2731);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2732);
          match(Java8Parser::GT);
          setState(2733);
          match(Java8Parser::GT);
          setState(2734);
          additiveExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2735);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2736);
          match(Java8Parser::GT);
          setState(2737);
          match(Java8Parser::GT);
          setState(2738);
          match(Java8Parser::GT);
          setState(2739);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(2744);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

Java8Parser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}


size_t Java8Parser::AdditiveExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAdditiveExpression;
}

void Java8Parser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void Java8Parser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression() {
   return additiveExpression(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  Java8Parser::AdditiveExpressionContext *previousContext = _localctx;
  size_t startState = 450;
  enterRecursionRule(_localctx, 450, Java8Parser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2746);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2756);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2754);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2748);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2749);
          match(Java8Parser::ADD);
          setState(2750);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2751);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2752);
          match(Java8Parser::SUB);
          setState(2753);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(2758);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

Java8Parser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnaryExpressionContext* Java8Parser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}


size_t Java8Parser::MultiplicativeExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleMultiplicativeExpression;
}

void Java8Parser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void Java8Parser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  Java8Parser::MultiplicativeExpressionContext *previousContext = _localctx;
  size_t startState = 452;
  enterRecursionRule(_localctx, 452, Java8Parser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2760);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(2773);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2771);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2762);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2763);
          match(Java8Parser::MUL);
          setState(2764);
          unaryExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2765);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2766);
          match(Java8Parser::DIV);
          setState(2767);
          unaryExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2768);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2769);
          match(Java8Parser::MOD);
          setState(2770);
          unaryExpression();
          break;
        }

        } 
      }
      setState(2775);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::UnaryExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::UnaryExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::UnaryExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}


size_t Java8Parser::UnaryExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpression;
}

void Java8Parser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void Java8Parser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}

Java8Parser::UnaryExpressionContext* Java8Parser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 454, Java8Parser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2783);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(2776);
        preIncrementExpression();
        break;
      }

      case Java8Parser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(2777);
        preDecrementExpression();
        break;
      }

      case Java8Parser::ADD: {
        enterOuterAlt(_localctx, 3);
        setState(2778);
        match(Java8Parser::ADD);
        setState(2779);
        unaryExpression();
        break;
      }

      case Java8Parser::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(2780);
        match(Java8Parser::SUB);
        setState(2781);
        unaryExpression();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 5);
        setState(2782);
        unaryExpressionNotPlusMinus();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreIncrementExpressionContext::PreIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreIncrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreIncrementExpression;
}

void Java8Parser::PreIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIncrementExpression(this);
}

void Java8Parser::PreIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIncrementExpression(this);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::preIncrementExpression() {
  PreIncrementExpressionContext *_localctx = _tracker.createInstance<PreIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 456, Java8Parser::RulePreIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2785);
    match(Java8Parser::INC);
    setState(2786);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreDecrementExpressionContext::PreDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreDecrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreDecrementExpression;
}

void Java8Parser::PreDecrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreDecrementExpression(this);
}

void Java8Parser::PreDecrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreDecrementExpression(this);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::preDecrementExpression() {
  PreDecrementExpressionContext *_localctx = _tracker.createInstance<PreDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 458, Java8Parser::RulePreDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2788);
    match(Java8Parser::DEC);
    setState(2789);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionNotPlusMinusContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionNotPlusMinusContext::UnaryExpressionNotPlusMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::CastExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::castExpression() {
  return getRuleContext<Java8Parser::CastExpressionContext>(0);
}


size_t Java8Parser::UnaryExpressionNotPlusMinusContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpressionNotPlusMinus;
}

void Java8Parser::UnaryExpressionNotPlusMinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpressionNotPlusMinus(this);
}

void Java8Parser::UnaryExpressionNotPlusMinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpressionNotPlusMinus(this);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::unaryExpressionNotPlusMinus() {
  UnaryExpressionNotPlusMinusContext *_localctx = _tracker.createInstance<UnaryExpressionNotPlusMinusContext>(_ctx, getState());
  enterRule(_localctx, 460, Java8Parser::RuleUnaryExpressionNotPlusMinus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2797);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2791);
      postfixExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2792);
      match(Java8Parser::TILDE);
      setState(2793);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2794);
      match(Java8Parser::BANG);
      setState(2795);
      unaryExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2796);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::PostfixExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::PostfixExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postIncrementExpression_lf_postfixExpression() {
  return getRuleContexts<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext>();
}

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext* Java8Parser::PostfixExpressionContext::postIncrementExpression_lf_postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext>(i);
}

std::vector<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postDecrementExpression_lf_postfixExpression() {
  return getRuleContexts<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext>();
}

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext* Java8Parser::PostfixExpressionContext::postDecrementExpression_lf_postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext>(i);
}


size_t Java8Parser::PostfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostfixExpression;
}

void Java8Parser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void Java8Parser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}

Java8Parser::PostfixExpressionContext* Java8Parser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 462, Java8Parser::RulePostfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2801);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 317, _ctx)) {
    case 1: {
      setState(2799);
      primary();
      break;
    }

    case 2: {
      setState(2800);
      expressionName();
      break;
    }

    }
    setState(2807);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2805);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Java8Parser::INC: {
            setState(2803);
            postIncrementExpression_lf_postfixExpression();
            break;
          }

          case Java8Parser::DEC: {
            setState(2804);
            postDecrementExpression_lf_postfixExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(2809);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpressionContext::PostIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostIncrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}


size_t Java8Parser::PostIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression;
}

void Java8Parser::PostIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression(this);
}

void Java8Parser::PostIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression(this);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::postIncrementExpression() {
  PostIncrementExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 464, Java8Parser::RulePostIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2810);
    postfixExpression();
    setState(2811);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpression_lf_postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::PostIncrementExpression_lf_postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression_lf_postfixExpression;
}

void Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression_lf_postfixExpression(this);
}

void Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression_lf_postfixExpression(this);
}

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext* Java8Parser::postIncrementExpression_lf_postfixExpression() {
  PostIncrementExpression_lf_postfixExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpression_lf_postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 466, Java8Parser::RulePostIncrementExpression_lf_postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2813);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpressionContext::PostDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostDecrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}


size_t Java8Parser::PostDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression;
}

void Java8Parser::PostDecrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecrementExpression(this);
}

void Java8Parser::PostDecrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecrementExpression(this);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::postDecrementExpression() {
  PostDecrementExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 468, Java8Parser::RulePostDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2815);
    postfixExpression();
    setState(2816);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpression_lf_postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::PostDecrementExpression_lf_postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression_lf_postfixExpression;
}

void Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecrementExpression_lf_postfixExpression(this);
}

void Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecrementExpression_lf_postfixExpression(this);
}

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext* Java8Parser::postDecrementExpression_lf_postfixExpression() {
  PostDecrementExpression_lf_postfixExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpression_lf_postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 470, Java8Parser::RulePostDecrementExpression_lf_postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2818);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

Java8Parser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitiveTypeContext* Java8Parser::CastExpressionContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::CastExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::CastExpressionContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::CastExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::CastExpressionContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::CastExpressionContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}

Java8Parser::LambdaExpressionContext* Java8Parser::CastExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}


size_t Java8Parser::CastExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleCastExpression;
}

void Java8Parser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void Java8Parser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}

Java8Parser::CastExpressionContext* Java8Parser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 472, Java8Parser::RuleCastExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2847);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 322, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2820);
      match(Java8Parser::LPAREN);
      setState(2821);
      primitiveType();
      setState(2822);
      match(Java8Parser::RPAREN);
      setState(2823);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2825);
      match(Java8Parser::LPAREN);
      setState(2826);
      referenceType();
      setState(2830);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2827);
        additionalBound();
        setState(2832);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2833);
      match(Java8Parser::RPAREN);
      setState(2834);
      unaryExpressionNotPlusMinus();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2836);
      match(Java8Parser::LPAREN);
      setState(2837);
      referenceType();
      setState(2841);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2838);
        additionalBound();
        setState(2843);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2844);
      match(Java8Parser::RPAREN);
      setState(2845);
      lambdaExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Java8Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 26: return packageNameSempred(dynamic_cast<PackageNameContext *>(context), predicateIndex);
    case 28: return packageOrTypeNameSempred(dynamic_cast<PackageOrTypeNameContext *>(context), predicateIndex);
    case 31: return ambiguousNameSempred(dynamic_cast<AmbiguousNameContext *>(context), predicateIndex);
    case 217: return conditionalOrExpressionSempred(dynamic_cast<ConditionalOrExpressionContext *>(context), predicateIndex);
    case 218: return conditionalAndExpressionSempred(dynamic_cast<ConditionalAndExpressionContext *>(context), predicateIndex);
    case 219: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 220: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 221: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 222: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 223: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 224: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 225: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 226: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageNameSempred(PackageNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageOrTypeNameSempred(PackageOrTypeNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::ambiguousNameSempred(AmbiguousNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalOrExpressionSempred(ConditionalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalAndExpressionSempred(ConditionalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Java8Parser::_decisionToDFA;
atn::PredictionContextCache Java8Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Java8Parser::_atn;
std::vector<uint16_t> Java8Parser::_serializedATN;

std::vector<std::string> Java8Parser::_ruleNames = {
  "literal", "type", "primitiveType", "numericType", "integralType", "floatingPointType", 
  "referenceType", "classOrInterfaceType", "classType", "classType_lf_classOrInterfaceType", 
  "classType_lfno_classOrInterfaceType", "interfaceType", "interfaceType_lf_classOrInterfaceType", 
  "interfaceType_lfno_classOrInterfaceType", "typeVariable", "arrayType", 
  "dims", "typeParameter", "typeParameterModifier", "typeBound", "additionalBound", 
  "typeArguments", "typeArgumentList", "typeArgument", "wildcard", "wildcardBounds", 
  "packageName", "typeName", "packageOrTypeName", "expressionName", "methodName", 
  "ambiguousName", "compilationUnit", "packageDeclaration", "packageModifier", 
  "importDeclaration", "singleTypeImportDeclaration", "typeImportOnDemandDeclaration", 
  "singleStaticImportDeclaration", "staticImportOnDemandDeclaration", "typeDeclaration", 
  "classDeclaration", "normalClassDeclaration", "classModifier", "typeParameters", 
  "typeParameterList", "superclass", "superinterfaces", "interfaceTypeList", 
  "classBody", "classBodyDeclaration", "classMemberDeclaration", "fieldDeclaration", 
  "fieldModifier", "variableDeclaratorList", "variableDeclarator", "variableDeclaratorId", 
  "variableInitializer", "unannType", "unannPrimitiveType", "unannReferenceType", 
  "unannClassOrInterfaceType", "unannClassType", "unannClassType_lf_unannClassOrInterfaceType", 
  "unannClassType_lfno_unannClassOrInterfaceType", "unannInterfaceType", 
  "unannInterfaceType_lf_unannClassOrInterfaceType", "unannInterfaceType_lfno_unannClassOrInterfaceType", 
  "unannTypeVariable", "unannArrayType", "methodDeclaration", "methodModifier", 
  "methodHeader", "result", "methodDeclarator", "formalParameterList", "formalParameters", 
  "formalParameter", "variableModifier", "lastFormalParameter", "receiverParameter", 
  "throws_", "exceptionTypeList", "exceptionType", "methodBody", "instanceInitializer", 
  "staticInitializer", "constructorDeclaration", "constructorModifier", 
  "constructorDeclarator", "simpleTypeName", "constructorBody", "explicitConstructorInvocation", 
  "enumDeclaration", "enumBody", "enumConstantList", "enumConstant", "enumConstantModifier", 
  "enumBodyDeclarations", "interfaceDeclaration", "normalInterfaceDeclaration", 
  "interfaceModifier", "extendsInterfaces", "interfaceBody", "interfaceMemberDeclaration", 
  "constantDeclaration", "constantModifier", "interfaceMethodDeclaration", 
  "interfaceMethodModifier", "annotationTypeDeclaration", "annotationTypeBody", 
  "annotationTypeMemberDeclaration", "annotationTypeElementDeclaration", 
  "annotationTypeElementModifier", "defaultValue", "annotation", "normalAnnotation", 
  "elementValuePairList", "elementValuePair", "elementValue", "elementValueArrayInitializer", 
  "elementValueList", "markerAnnotation", "singleElementAnnotation", "arrayInitializer", 
  "variableInitializerList", "block", "blockStatements", "blockStatement", 
  "localVariableDeclarationStatement", "localVariableDeclaration", "statement", 
  "statementNoShortIf", "statementWithoutTrailingSubstatement", "emptyStatement", 
  "labeledStatement", "labeledStatementNoShortIf", "expressionStatement", 
  "statementExpression", "ifThenStatement", "ifThenElseStatement", "ifThenElseStatementNoShortIf", 
  "assertStatement", "switchStatement", "switchBlock", "switchBlockStatementGroup", 
  "switchLabels", "switchLabel", "enumConstantName", "whileStatement", "whileStatementNoShortIf", 
  "doStatement", "forStatement", "forStatementNoShortIf", "basicForStatement", 
  "basicForStatementNoShortIf", "forInit", "forUpdate", "statementExpressionList", 
  "enhancedForStatement", "enhancedForStatementNoShortIf", "breakStatement", 
  "continueStatement", "returnStatement", "throwStatement", "synchronizedStatement", 
  "tryStatement", "catches", "catchClause", "catchFormalParameter", "catchType", 
  "finally_", "tryWithResourcesStatement", "resourceSpecification", "resourceList", 
  "resource", "primary", "primaryNoNewArray", "primaryNoNewArray_lf_arrayAccess", 
  "primaryNoNewArray_lfno_arrayAccess", "primaryNoNewArray_lf_primary", 
  "primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary", "primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary", 
  "primaryNoNewArray_lfno_primary", "primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary", 
  "primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary", "classInstanceCreationExpression", 
  "classInstanceCreationExpression_lf_primary", "classInstanceCreationExpression_lfno_primary", 
  "typeArgumentsOrDiamond", "fieldAccess", "fieldAccess_lf_primary", "fieldAccess_lfno_primary", 
  "arrayAccess", "arrayAccess_lf_primary", "arrayAccess_lfno_primary", "methodInvocation", 
  "methodInvocation_lf_primary", "methodInvocation_lfno_primary", "argumentList", 
  "methodReference", "methodReference_lf_primary", "methodReference_lfno_primary", 
  "arrayCreationExpression", "dimExprs", "dimExpr", "constantExpression", 
  "expression", "lambdaExpression", "lambdaParameters", "inferredFormalParameterList", 
  "lambdaBody", "assignmentExpression", "assignment", "leftHandSide", "assignmentOperator", 
  "conditionalExpression", "conditionalOrExpression", "conditionalAndExpression", 
  "inclusiveOrExpression", "exclusiveOrExpression", "andExpression", "equalityExpression", 
  "relationalExpression", "shiftExpression", "additiveExpression", "multiplicativeExpression", 
  "unaryExpression", "preIncrementExpression", "preDecrementExpression", 
  "unaryExpressionNotPlusMinus", "postfixExpression", "postIncrementExpression", 
  "postIncrementExpression_lf_postfixExpression", "postDecrementExpression", 
  "postDecrementExpression_lf_postfixExpression", "castExpression"
};

std::vector<std::string> Java8Parser::_literalNames = {
  "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
  "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
  "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", "'instanceof'", 
  "'int'", "'interface'", "'long'", "'native'", "'new'", "'package'", "'private'", 
  "'protected'", "'public'", "'return'", "'short'", "'static'", "'strictfp'", 
  "'super'", "'switch'", "'synchronized'", "'this'", "'throw'", "'throws'", 
  "'transient'", "'try'", "'void'", "'volatile'", "'while'", "", "", "", 
  "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", 
  "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'?'", "':'", "'=='", "'<='", 
  "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", 
  "'&'", "'|'", "'^'", "'%'", "'->'", "'::'", "'+='", "'-='", "'*='", "'/='", 
  "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "", "'@'", 
  "'...'"
};

std::vector<std::string> Java8Parser::_symbolicNames = {
  "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
  "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", "IMPLEMENTS", 
  "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW", "PACKAGE", 
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRICTFP", 
  "SUPER", "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", 
  "TRY", "VOID", "VOLATILE", "WHILE", "IntegerLiteral", "FloatingPointLiteral", 
  "BooleanLiteral", "CharacterLiteral", "StringLiteral", "NullLiteral", 
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", 
  "DOT", "ASSIGN", "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", 
  "LE", "GE", "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", 
  "DIV", "BITAND", "BITOR", "CARET", "MOD", "ARROW", "COLONCOLON", "ADD_ASSIGN", 
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
  "MOD_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "Identifier", 
  "AT", "ELLIPSIS", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary Java8Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Java8Parser::_tokenNames;

Java8Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x6d, 0xb24, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x4, 0xd6, 0x9, 0xd6, 0x4, 0xd7, 
       0x9, 0xd7, 0x4, 0xd8, 0x9, 0xd8, 0x4, 0xd9, 0x9, 0xd9, 0x4, 0xda, 
       0x9, 0xda, 0x4, 0xdb, 0x9, 0xdb, 0x4, 0xdc, 0x9, 0xdc, 0x4, 0xdd, 
       0x9, 0xdd, 0x4, 0xde, 0x9, 0xde, 0x4, 0xdf, 0x9, 0xdf, 0x4, 0xe0, 
       0x9, 0xe0, 0x4, 0xe1, 0x9, 0xe1, 0x4, 0xe2, 0x9, 0xe2, 0x4, 0xe3, 
       0x9, 0xe3, 0x4, 0xe4, 0x9, 0xe4, 0x4, 0xe5, 0x9, 0xe5, 0x4, 0xe6, 
       0x9, 0xe6, 0x4, 0xe7, 0x9, 0xe7, 0x4, 0xe8, 0x9, 0xe8, 0x4, 0xe9, 
       0x9, 0xe9, 0x4, 0xea, 0x9, 0xea, 0x4, 0xeb, 0x9, 0xeb, 0x4, 0xec, 
       0x9, 0xec, 0x4, 0xed, 0x9, 0xed, 0x4, 0xee, 0x9, 0xee, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1e1, 0xa, 0x3, 0x3, 0x4, 
       0x7, 0x4, 0x1e4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1e7, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x7, 0x4, 0x1eb, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1ee, 
       0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1f1, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x5, 0x5, 0x1f5, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1fe, 0xa, 0x8, 0x3, 0x9, 
       0x3, 0x9, 0x5, 0x9, 0x202, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
       0x206, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x209, 0xb, 0x9, 0x3, 0xa, 0x7, 
       0xa, 0x20c, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x20f, 0xb, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x5, 0xa, 0x213, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x7, 0xa, 0x218, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x21b, 0xb, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x5, 0xa, 0x21f, 0xa, 0xa, 0x5, 0xa, 0x221, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x225, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
       0x228, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x22c, 0xa, 0xb, 0x3, 
       0xc, 0x7, 0xc, 0x22f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x232, 0xb, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x236, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x7, 0x10, 0x23f, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x242, 0xb, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x24f, 0xa, 0x11, 
       0x3, 0x12, 0x7, 0x12, 0x252, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x255, 
       0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x25a, 0xa, 
       0x12, 0xc, 0x12, 0xe, 0x12, 0x25d, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x7, 0x12, 0x261, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x264, 0xb, 0x12, 
       0x3, 0x13, 0x7, 0x13, 0x267, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x26a, 
       0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x26e, 0xa, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x7, 0x15, 0x277, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x27a, 0xb, 
       0x15, 0x5, 0x15, 0x27c, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x7, 0x18, 0x288, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x28b, 
       0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x28f, 0xa, 0x19, 0x3, 
       0x1a, 0x7, 0x1a, 0x292, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x295, 0xb, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x299, 0xa, 0x1a, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x29f, 0xa, 0x1b, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 
       0x1c, 0x2a7, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x2aa, 0xb, 0x1c, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x2b1, 
       0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x7, 0x1e, 0x2b9, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x2bc, 
       0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x5, 0x1f, 0x2c3, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2cd, 
       0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x2d0, 0xb, 0x21, 0x3, 0x22, 0x5, 
       0x22, 0x2d3, 0xa, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2d6, 0xa, 0x22, 0xc, 
       0x22, 0xe, 0x22, 0x2d9, 0xb, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2dc, 0xa, 
       0x22, 0xc, 0x22, 0xe, 0x22, 0x2df, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x23, 0x7, 0x23, 0x2e4, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2e7, 
       0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x2f3, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x310, 
       0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x314, 0xa, 0x2b, 0x3, 
       0x2c, 0x7, 0x2c, 0x317, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x31a, 0xb, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x31f, 0xa, 0x2c, 
       0x3, 0x2c, 0x5, 0x2c, 0x322, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x325, 
       0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
       0x331, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x33a, 0xa, 0x2f, 0xc, 0x2f, 
       0xe, 0x2f, 0x33d, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x348, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x34b, 0xb, 0x32, 0x3, 
       0x33, 0x3, 0x33, 0x7, 0x33, 0x34f, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 
       0x352, 0xb, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x5, 0x34, 0x35a, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x361, 0xa, 0x35, 0x3, 
       0x36, 0x7, 0x36, 0x364, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x367, 0xb, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x5, 0x37, 0x375, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x7, 0x38, 0x37a, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x37d, 0xb, 0x38, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x382, 0xa, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x386, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
       0x5, 0x3b, 0x38a, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x38e, 
       0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x392, 0xa, 0x3d, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x397, 0xa, 0x3e, 0x3, 0x3f, 
       0x3, 0x3f, 0x5, 0x3f, 0x39b, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 
       0x3f, 0x39f, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x3a2, 0xb, 0x3f, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x3a6, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x7, 0x40, 0x3ab, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x3ae, 
       0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x3b2, 0xa, 0x40, 0x5, 
       0x40, 0x3b4, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x3b8, 0xa, 
       0x41, 0xc, 0x41, 0xe, 0x41, 0x3bb, 0xb, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x3bf, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3c3, 
       0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x5, 0x47, 0x3d6, 0xa, 0x47, 0x3, 0x48, 0x7, 0x48, 0x3d9, 0xa, 0x48, 
       0xc, 0x48, 0xe, 0x48, 0x3dc, 0xb, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3eb, 
       0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3f0, 0xa, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x3f4, 0xa, 0x4a, 0xc, 0x4a, 
       0xe, 0x4a, 0x3f7, 0xb, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 
       0x4a, 0x3fc, 0xa, 0x4a, 0x5, 0x4a, 0x3fe, 0xa, 0x4a, 0x3, 0x4b, 0x3, 
       0x4b, 0x5, 0x4b, 0x402, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x5, 0x4c, 0x407, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x40b, 
       0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x5, 0x4d, 0x413, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x7, 0x4e, 0x418, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x41b, 0xb, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x420, 0xa, 0x4e, 
       0xc, 0x4e, 0xe, 0x4e, 0x423, 0xb, 0x4e, 0x5, 0x4e, 0x425, 0xa, 0x4e, 
       0x3, 0x4f, 0x7, 0x4f, 0x428, 0xa, 0x4f, 0xc, 0x4f, 0xe, 0x4f, 0x42b, 
       0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 
       0x5, 0x50, 0x432, 0xa, 0x50, 0x3, 0x51, 0x7, 0x51, 0x435, 0xa, 0x51, 
       0xc, 0x51, 0xe, 0x51, 0x438, 0xb, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 
       0x51, 0x43c, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x43f, 0xb, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x445, 0xa, 0x51, 
       0x3, 0x52, 0x7, 0x52, 0x448, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x44b, 
       0xb, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x450, 0xa, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x54, 0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 0x45a, 0xa, 0x54, 0xc, 0x54, 
       0xe, 0x54, 0x45d, 0xb, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x461, 
       0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x465, 0xa, 0x56, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x7, 
       0x59, 0x46d, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x470, 0xb, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x5, 0x59, 0x474, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x47c, 0xa, 
       0x5a, 0x3, 0x5b, 0x5, 0x5b, 0x47f, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x5, 0x5b, 0x484, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x48c, 0xa, 0x5d, 
       0x3, 0x5d, 0x5, 0x5d, 0x48f, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5e, 0x5, 0x5e, 0x494, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x499, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 
       0x5e, 0x49e, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 
       0x4a3, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x4aa, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x4af, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4b7, 0xa, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4bc, 0xa, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4c1, 0xa, 0x5e, 0x3, 0x5f, 0x7, 0x5f, 
       0x4c4, 0xa, 0x5f, 0xc, 0x5f, 0xe, 0x5f, 0x4c7, 0xb, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x4cc, 0xa, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x4d2, 0xa, 0x60, 0x3, 0x60, 
       0x5, 0x60, 0x4d5, 0xa, 0x60, 0x3, 0x60, 0x5, 0x60, 0x4d8, 0xa, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 
       0x4df, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x4e2, 0xb, 0x61, 0x3, 0x62, 
       0x7, 0x62, 0x4e5, 0xa, 0x62, 0xc, 0x62, 0xe, 0x62, 0x4e8, 0xb, 0x62, 
       0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4ed, 0xa, 0x62, 0x3, 
       0x62, 0x5, 0x62, 0x4f0, 0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4f3, 0xa, 
       0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x4f9, 
       0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x4fc, 0xb, 0x64, 0x3, 0x65, 0x3, 
       0x65, 0x5, 0x65, 0x500, 0xa, 0x65, 0x3, 0x66, 0x7, 0x66, 0x503, 0xa, 
       0x66, 0xc, 0x66, 0xe, 0x66, 0x506, 0xb, 0x66, 0x3, 0x66, 0x3, 0x66, 
       0x3, 0x66, 0x5, 0x66, 0x50b, 0xa, 0x66, 0x3, 0x66, 0x5, 0x66, 0x50e, 
       0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x519, 0xa, 
       0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x7, 
       0x69, 0x520, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 0x523, 0xb, 0x69, 0x3, 
       0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x5, 0x6a, 0x52c, 0xa, 0x6a, 0x3, 0x6b, 0x7, 0x6b, 0x52f, 0xa, 
       0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x532, 0xb, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
       0x5, 0x6c, 0x53c, 0xa, 0x6c, 0x3, 0x6d, 0x7, 0x6d, 0x53f, 0xa, 0x6d, 
       0xc, 0x6d, 0xe, 0x6d, 0x542, 0xb, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
       0x6e, 0x5, 0x6e, 0x54d, 0xa, 0x6e, 0x3, 0x6f, 0x7, 0x6f, 0x550, 0xa, 
       0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x553, 0xb, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x7, 0x70, 
       0x55c, 0xa, 0x70, 0xc, 0x70, 0xe, 0x70, 0x55f, 0xb, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
       0x5, 0x71, 0x568, 0xa, 0x71, 0x3, 0x72, 0x7, 0x72, 0x56b, 0xa, 0x72, 
       0xc, 0x72, 0xe, 0x72, 0x56e, 0xb, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x575, 0xa, 0x72, 0x3, 0x72, 
       0x5, 0x72, 0x578, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 
       0x73, 0x3, 0x73, 0x5, 0x73, 0x57f, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 
       0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x587, 0xa, 
       0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x58d, 
       0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
       0x7, 0x77, 0x594, 0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0x597, 0xb, 0x77, 
       0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 
       0x3, 0x79, 0x5, 0x79, 0x5a0, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x5, 
       0x7a, 0x5a4, 0xa, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x5a7, 0xa, 0x7a, 0x3, 
       0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x7, 0x7b, 0x5ae, 
       0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0x5b1, 0xb, 0x7b, 0x3, 0x7c, 0x3, 
       0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5be, 0xa, 0x7e, 
       0x3, 0x7e, 0x5, 0x7e, 0x5c1, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
       0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 0x5c8, 0xa, 0x7f, 0xc, 0x7f, 
       0xe, 0x7f, 0x5cb, 0xb, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x5cf, 
       0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x6, 0x81, 0x5d4, 0xa, 
       0x81, 0xd, 0x81, 0xe, 0x81, 0x5d5, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
       0x5, 0x82, 0x5db, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
       0x84, 0x7, 0x84, 0x5e1, 0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 0x5e4, 0xb, 
       0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x5ef, 0xa, 0x85, 
       0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 
       0x5f6, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x5, 0x87, 0x604, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 
       0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 
       0x5, 0x8c, 0x61a, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x63c, 
       0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x7, 0x92, 0x646, 0xa, 0x92, 0xc, 
       0x92, 0xe, 0x92, 0x649, 0xb, 0x92, 0x3, 0x92, 0x7, 0x92, 0x64c, 0xa, 
       0x92, 0xc, 0x92, 0xe, 0x92, 0x64f, 0xb, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x7, 0x94, 
       0x658, 0xa, 0x94, 0xc, 0x94, 0xe, 0x94, 0x65b, 0xb, 0x94, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x667, 0xa, 0x95, 0x3, 
       0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x5, 
       0x9a, 0x681, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x685, 0xa, 
       0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x68a, 0xa, 0x9c, 
       0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x68e, 0xa, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x5, 0x9c, 0x692, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
       0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x69a, 0xa, 0x9d, 0x3, 
       0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x69e, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
       0x5, 0x9d, 0x6a2, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 
       0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x6a9, 0xa, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 
       0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x7, 0xa0, 0x6b0, 0xa, 0xa0, 0xc, 
       0xa0, 0xe, 0xa0, 0x6b3, 0xb, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x7, 0xa1, 0x6b8, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x6bb, 0xb, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x7, 0xa2, 0x6c7, 0xa, 
       0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x6ca, 0xb, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
       0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 
       0x3, 0xa3, 0x5, 0xa3, 0x6d5, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 
       0xa4, 0x3, 0xa4, 0x5, 0xa4, 0x6db, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
       0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x6e1, 0xa, 0xa5, 0x3, 0xa5, 0x3, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 0x3, 
       0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 
       0xa8, 0x6f6, 0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 
       0x6fb, 0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x7, 0xa9, 0x6ff, 0xa, 0xa9, 
       0xc, 0xa9, 0xe, 0xa9, 0x702, 0xb, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
       0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xab, 0x7, 0xab, 0x70b, 
       0xa, 0xab, 0xc, 0xab, 0xe, 0xab, 0x70e, 0xb, 0xab, 0x3, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x7, 0xac, 0x716, 
       0xa, 0xac, 0xc, 0xac, 0xe, 0xac, 0x719, 0xb, 0xac, 0x3, 0xad, 0x3, 
       0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 
       0xae, 0x722, 0xa, 0xae, 0x3, 0xae, 0x5, 0xae, 0x725, 0xa, 0xae, 0x3, 
       0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x72a, 0xa, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x7, 0xb0, 0x731, 0xa, 
       0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x734, 0xb, 0xb0, 0x3, 0xb1, 0x7, 0xb1, 
       0x737, 0xa, 0xb1, 0xc, 0xb1, 0xe, 0xb1, 0x73a, 0xb, 0xb1, 0x3, 0xb1, 
       0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 
       0x5, 0xb2, 0x743, 0xa, 0xb2, 0x3, 0xb2, 0x7, 0xb2, 0x746, 0xa, 0xb2, 
       0xc, 0xb2, 0xe, 0xb2, 0x749, 0xb, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x3, 0xb3, 0x7, 0xb3, 0x74f, 0xa, 0xb3, 0xc, 0xb3, 0xe, 0xb3, 
       0x752, 0xb, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x768, 0xa, 0xb3, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x7, 0xb5, 0x770, 0xa, 0xb5, 0xc, 0xb5, 0xe, 0xb5, 0x773, 0xb, 0xb5, 
       0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x3, 0xb5, 0x5, 0xb5, 0x788, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x3, 
       0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x78f, 0xa, 0xb6, 0x3, 0xb7, 
       0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 
       0x797, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x7, 
       0xb9, 0x79d, 0xa, 0xb9, 0xc, 0xb9, 0xe, 0xb9, 0x7a0, 0xb, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x7, 
       0xb9, 0x7a8, 0xa, 0xb9, 0xc, 0xb9, 0xe, 0xb9, 0x7ab, 0xb, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x7c1, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7c9, 0xa, 
       0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7cc, 0xb, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7d4, 0xa, 
       0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7d7, 0xb, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x7ec, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x7f0, 0xa, 0xbc, 
       0x3, 0xbc, 0x7, 0xbc, 0x7f3, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x7f6, 
       0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x7fb, 0xa, 
       0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x7fe, 0xb, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 
       0x801, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x804, 0xb, 0xbc, 0x3, 0xbc, 
       0x5, 0xbc, 0x807, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x80b, 
       0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x80f, 0xa, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x815, 0xa, 0xbc, 
       0x3, 0xbc, 0x7, 0xbc, 0x818, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x81b, 
       0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x81f, 0xa, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x823, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x5, 0xbc, 0x827, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x5, 0xbc, 0x82d, 0xa, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x830, 0xa, 
       0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x833, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x5, 0xbc, 0x837, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x83b, 
       0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x83f, 0xa, 0xbc, 0x5, 
       0xbc, 0x841, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 
       0x846, 0xa, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x849, 0xa, 0xbd, 0xc, 0xbd, 
       0xe, 0xbd, 0x84c, 0xb, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x850, 
       0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x854, 0xa, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x858, 0xa, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 
       0x5, 0xbe, 0x85c, 0xa, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x85f, 0xa, 0xbe, 
       0xc, 0xbe, 0xe, 0xbe, 0x862, 0xb, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x7, 0xbe, 0x867, 0xa, 0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x86a, 0xb, 
       0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x86d, 0xa, 0xbe, 0xc, 0xbe, 0xe, 0xbe, 
       0x870, 0xb, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x873, 0xa, 0xbe, 0x3, 0xbe, 
       0x3, 0xbe, 0x5, 0xbe, 0x877, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 
       0xbe, 0x87b, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
       0x5, 0xbe, 0x881, 0xa, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x884, 0xa, 0xbe, 
       0xc, 0xbe, 0xe, 0xbe, 0x887, 0xb, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 
       0xbe, 0x88b, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x88f, 0xa, 
       0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x893, 0xa, 0xbe, 0x5, 0xbe, 
       0x895, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x89a, 
       0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 
       0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 
       0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8a9, 0xa, 0xc0, 0x3, 0xc1, 0x3, 
       0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
       0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x8b7, 
       0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 
       0x8c3, 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x7, 0xc3, 0x8ca, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x8cd, 0xb, 
       0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 
       0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x7, 0xc4, 0x8d9, 
       0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 0x8dc, 0xb, 0xc4, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x8e8, 0xa, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x7, 0xc5, 0x8ef, 0xa, 
       0xc5, 0xc, 0xc5, 0xe, 0xc5, 0x8f2, 0xb, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x5, 0xc6, 0x8f7, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x8fe, 0xa, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x903, 0xa, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x90a, 0xa, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x90f, 0xa, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x916, 
       0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x91b, 0xa, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
       0xc6, 0x922, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 
       0x927, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x92f, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x5, 0xc6, 0x934, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
       0xc6, 0x938, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x93c, 0xa, 
       0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x941, 0xa, 0xc7, 
       0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x948, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x5, 0xc8, 0x94f, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x5, 0xc8, 0x954, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x95b, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x5, 0xc8, 0x960, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x967, 0xa, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x96c, 0xa, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x974, 
       0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x979, 0xa, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x97d, 0xa, 0xc8, 0x3, 0xc9, 
       0x3, 0xc9, 0x3, 0xc9, 0x7, 0xc9, 0x982, 0xa, 0xc9, 0xc, 0xc9, 0xe, 
       0xc9, 0x985, 0xb, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 
       0x98a, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x5, 0xca, 0x991, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x998, 0xa, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x99f, 0xa, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x5, 0xca, 0x9a7, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x5, 0xca, 0x9ae, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9b6, 0xa, 
       0xca, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9ba, 0xa, 0xcb, 0x3, 0xcb, 
       0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9c1, 0xa, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 
       0xcc, 0x9c8, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x5, 0xcc, 0x9cf, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9d7, 0xa, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 
       0x9de, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9e6, 0xa, 0xcc, 0x3, 0xcd, 0x3, 0xcd, 
       0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9ec, 0xa, 0xcd, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9f2, 0xa, 0xcd, 0x3, 0xcd, 
       0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 
       0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9fe, 0xa, 0xcd, 0x3, 
       0xce, 0x3, 0xce, 0x7, 0xce, 0xa02, 0xa, 0xce, 0xc, 0xce, 0xe, 0xce, 
       0xa05, 0xb, 0xce, 0x3, 0xcf, 0x7, 0xcf, 0xa08, 0xa, 0xcf, 0xc, 0xcf, 
       0xe, 0xcf, 0xa0b, 0xb, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 
       0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x5, 0xd1, 0xa15, 
       0xa, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x5, 0xd3, 0xa1e, 0xa, 0xd3, 0x3, 0xd3, 0x3, 
       0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x5, 0xd3, 0xa25, 0xa, 0xd3, 
       0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x7, 0xd4, 0xa2a, 0xa, 0xd4, 0xc, 
       0xd4, 0xe, 0xd4, 0xa2d, 0xb, 0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x5, 0xd5, 
       0xa31, 0xa, 0xd5, 0x3, 0xd6, 0x3, 0xd6, 0x5, 0xd6, 0xa35, 0xa, 0xd6, 
       0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd8, 0x3, 0xd8, 
       0x3, 0xd8, 0x5, 0xd8, 0xa3e, 0xa, 0xd8, 0x3, 0xd9, 0x3, 0xd9, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x5, 0xda, 0xa49, 0xa, 0xda, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 
       0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x7, 0xdb, 0xa51, 0xa, 0xdb, 0xc, 
       0xdb, 0xe, 0xdb, 0xa54, 0xb, 0xdb, 0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 
       0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x7, 0xdc, 0xa5c, 0xa, 0xdc, 0xc, 
       0xdc, 0xe, 0xdc, 0xa5f, 0xb, 0xdc, 0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 
       0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x7, 0xdd, 0xa67, 0xa, 0xdd, 0xc, 
       0xdd, 0xe, 0xdd, 0xa6a, 0xb, 0xdd, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 
       0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x7, 0xde, 0xa72, 0xa, 0xde, 0xc, 
       0xde, 0xe, 0xde, 0xa75, 0xb, 0xde, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x7, 0xdf, 0xa7d, 0xa, 0xdf, 0xc, 
       0xdf, 0xe, 0xdf, 0xa80, 0xb, 0xdf, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x7, 0xe0, 0xa8b, 0xa, 0xe0, 0xc, 0xe0, 0xe, 0xe0, 0xa8e, 0xb, 0xe0, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x7, 0xe1, 0xaa2, 0xa, 0xe1, 0xc, 0xe1, 0xe, 0xe1, 0xaa5, 0xb, 0xe1, 
       0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x7, 0xe2, 0xab7, 0xa, 
       0xe2, 0xc, 0xe2, 0xe, 0xe2, 0xaba, 0xb, 0xe2, 0x3, 0xe3, 0x3, 0xe3, 
       0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 
       0x3, 0xe3, 0x7, 0xe3, 0xac5, 0xa, 0xe3, 0xc, 0xe3, 0xe, 0xe3, 0xac8, 
       0xb, 0xe3, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 
       0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 
       0x3, 0xe4, 0x7, 0xe4, 0xad6, 0xa, 0xe4, 0xc, 0xe4, 0xe, 0xe4, 0xad9, 
       0xb, 0xe4, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 
       0x3, 0xe5, 0x3, 0xe5, 0x5, 0xe5, 0xae2, 0xa, 0xe5, 0x3, 0xe6, 0x3, 
       0xe6, 0x3, 0xe6, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe8, 0x3, 
       0xe8, 0x3, 0xe8, 0x3, 0xe8, 0x3, 0xe8, 0x3, 0xe8, 0x5, 0xe8, 0xaf0, 
       0xa, 0xe8, 0x3, 0xe9, 0x3, 0xe9, 0x5, 0xe9, 0xaf4, 0xa, 0xe9, 0x3, 
       0xe9, 0x3, 0xe9, 0x7, 0xe9, 0xaf8, 0xa, 0xe9, 0xc, 0xe9, 0xe, 0xe9, 
       0xafb, 0xb, 0xe9, 0x3, 0xea, 0x3, 0xea, 0x3, 0xea, 0x3, 0xeb, 0x3, 
       0xeb, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xed, 0x3, 0xed, 0x3, 
       0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 
       0xee, 0x3, 0xee, 0x7, 0xee, 0xb0f, 0xa, 0xee, 0xc, 0xee, 0xe, 0xee, 
       0xb12, 0xb, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 
       0xee, 0x3, 0xee, 0x7, 0xee, 0xb1a, 0xa, 0xee, 0xc, 0xee, 0xe, 0xee, 
       0xb1d, 0xb, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x5, 0xee, 0xb22, 
       0xa, 0xee, 0x3, 0xee, 0x2, 0xf, 0x36, 0x3a, 0x40, 0x1b4, 0x1b6, 0x1b8, 
       0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 0x1c4, 0x1c6, 0xef, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
       0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
       0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
       0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
       0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 
       0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
       0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
       0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 
       0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 
       0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 
       0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
       0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 
       0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 
       0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 
       0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 
       0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 
       0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 
       0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 
       0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 
       0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 0x1a8, 0x1aa, 0x1ac, 
       0x1ae, 0x1b0, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 0x1ba, 0x1bc, 0x1be, 0x1c0, 
       0x1c2, 0x1c4, 0x1c6, 0x1c8, 0x1ca, 0x1cc, 0x1ce, 0x1d0, 0x1d2, 0x1d4, 
       0x1d6, 0x1d8, 0x1da, 0x2, 0x6, 0x3, 0x2, 0x35, 0x3a, 0x7, 0x2, 0x7, 
       0x7, 0xa, 0xa, 0x1d, 0x1d, 0x1f, 0x1f, 0x27, 0x27, 0x4, 0x2, 0x10, 
       0x10, 0x16, 0x16, 0x4, 0x2, 0x44, 0x44, 0x5d, 0x67, 0x2, 0xc15, 0x2, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f0, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1f6, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1fd, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x201, 0x3, 0x2, 0x2, 0x2, 0x12, 0x220, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x222, 0x3, 0x2, 0x2, 0x2, 0x16, 0x230, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x237, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x239, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x240, 0x3, 0x2, 
       0x2, 0x2, 0x20, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x253, 0x3, 0x2, 
       0x2, 0x2, 0x24, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26, 0x26f, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27d, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0x280, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x284, 0x3, 0x2, 
       0x2, 0x2, 0x30, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x293, 0x3, 0x2, 
       0x2, 0x2, 0x34, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2a0, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2b2, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2c4, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2d2, 0x3, 0x2, 
       0x2, 0x2, 0x44, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2ec, 0x3, 0x2, 
       0x2, 0x2, 0x48, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2f4, 0x3, 0x2, 
       0x2, 0x2, 0x4c, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x2fe, 0x3, 0x2, 
       0x2, 0x2, 0x50, 0x305, 0x3, 0x2, 0x2, 0x2, 0x52, 0x30f, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x313, 0x3, 0x2, 0x2, 0x2, 0x56, 0x318, 0x3, 0x2, 
       0x2, 0x2, 0x58, 0x330, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x332, 0x3, 0x2, 
       0x2, 0x2, 0x5c, 0x336, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x33e, 0x3, 0x2, 
       0x2, 0x2, 0x60, 0x341, 0x3, 0x2, 0x2, 0x2, 0x62, 0x344, 0x3, 0x2, 
       0x2, 0x2, 0x64, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x66, 0x359, 0x3, 0x2, 
       0x2, 0x2, 0x68, 0x360, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x365, 0x3, 0x2, 
       0x2, 0x2, 0x6c, 0x374, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x376, 0x3, 0x2, 
       0x2, 0x2, 0x70, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x383, 0x3, 0x2, 
       0x2, 0x2, 0x74, 0x389, 0x3, 0x2, 0x2, 0x2, 0x76, 0x38d, 0x3, 0x2, 
       0x2, 0x2, 0x78, 0x391, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x396, 0x3, 0x2, 
       0x2, 0x2, 0x7c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x3b3, 0x3, 0x2, 
       0x2, 0x2, 0x80, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x82, 0x3c0, 0x3, 0x2, 
       0x2, 0x2, 0x84, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x86, 0x3c6, 0x3, 0x2, 
       0x2, 0x2, 0x88, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x3ca, 0x3, 0x2, 
       0x2, 0x2, 0x8c, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3da, 0x3, 0x2, 
       0x2, 0x2, 0x90, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3fd, 0x3, 0x2, 
       0x2, 0x2, 0x94, 0x401, 0x3, 0x2, 0x2, 0x2, 0x96, 0x403, 0x3, 0x2, 
       0x2, 0x2, 0x98, 0x412, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x424, 0x3, 0x2, 
       0x2, 0x2, 0x9c, 0x429, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x431, 0x3, 0x2, 
       0x2, 0x2, 0xa0, 0x444, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x449, 0x3, 0x2, 
       0x2, 0x2, 0xa4, 0x453, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x456, 0x3, 0x2, 
       0x2, 0x2, 0xa8, 0x460, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x464, 0x3, 0x2, 
       0x2, 0x2, 0xac, 0x466, 0x3, 0x2, 0x2, 0x2, 0xae, 0x468, 0x3, 0x2, 
       0x2, 0x2, 0xb0, 0x46e, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x47b, 0x3, 0x2, 
       0x2, 0x2, 0xb4, 0x47e, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x487, 0x3, 0x2, 
       0x2, 0x2, 0xb8, 0x489, 0x3, 0x2, 0x2, 0x2, 0xba, 0x4c0, 0x3, 0x2, 
       0x2, 0x2, 0xbc, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x4cf, 0x3, 0x2, 
       0x2, 0x2, 0xc0, 0x4db, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x4e6, 0x3, 0x2, 
       0x2, 0x2, 0xc4, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x4f6, 0x3, 0x2, 
       0x2, 0x2, 0xc8, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0xca, 0x504, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0x518, 0x3, 0x2, 0x2, 0x2, 0xce, 0x51a, 0x3, 0x2, 
       0x2, 0x2, 0xd0, 0x51d, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x52b, 0x3, 0x2, 
       0x2, 0x2, 0xd4, 0x530, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x53b, 0x3, 0x2, 
       0x2, 0x2, 0xd8, 0x540, 0x3, 0x2, 0x2, 0x2, 0xda, 0x54c, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0x551, 0x3, 0x2, 0x2, 0x2, 0xde, 0x559, 0x3, 0x2, 
       0x2, 0x2, 0xe0, 0x567, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x56c, 0x3, 0x2, 
       0x2, 0x2, 0xe4, 0x57e, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x580, 0x3, 0x2, 
       0x2, 0x2, 0xe8, 0x586, 0x3, 0x2, 0x2, 0x2, 0xea, 0x588, 0x3, 0x2, 
       0x2, 0x2, 0xec, 0x590, 0x3, 0x2, 0x2, 0x2, 0xee, 0x598, 0x3, 0x2, 
       0x2, 0x2, 0xf0, 0x59f, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x5a1, 0x3, 0x2, 
       0x2, 0x2, 0xf4, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x5b2, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x5bb, 0x3, 0x2, 
       0x2, 0x2, 0xfc, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x5cc, 0x3, 0x2, 
       0x2, 0x2, 0x100, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x102, 0x5da, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x106, 0x5e2, 0x3, 0x2, 
       0x2, 0x2, 0x108, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x5f5, 0x3, 0x2, 
       0x2, 0x2, 0x10c, 0x603, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x605, 0x3, 0x2, 
       0x2, 0x2, 0x110, 0x607, 0x3, 0x2, 0x2, 0x2, 0x112, 0x60b, 0x3, 0x2, 
       0x2, 0x2, 0x114, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x116, 0x619, 0x3, 0x2, 
       0x2, 0x2, 0x118, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x621, 0x3, 0x2, 
       0x2, 0x2, 0x11c, 0x629, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x63b, 0x3, 0x2, 
       0x2, 0x2, 0x120, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x122, 0x643, 0x3, 0x2, 
       0x2, 0x2, 0x124, 0x652, 0x3, 0x2, 0x2, 0x2, 0x126, 0x655, 0x3, 0x2, 
       0x2, 0x2, 0x128, 0x666, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x668, 0x3, 0x2, 
       0x2, 0x2, 0x12c, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x670, 0x3, 0x2, 
       0x2, 0x2, 0x130, 0x676, 0x3, 0x2, 0x2, 0x2, 0x132, 0x680, 0x3, 0x2, 
       0x2, 0x2, 0x134, 0x684, 0x3, 0x2, 0x2, 0x2, 0x136, 0x686, 0x3, 0x2, 
       0x2, 0x2, 0x138, 0x696, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x6a8, 0x3, 0x2, 
       0x2, 0x2, 0x13c, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x6ac, 0x3, 0x2, 
       0x2, 0x2, 0x140, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x142, 0x6c3, 0x3, 0x2, 
       0x2, 0x2, 0x144, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x146, 0x6d8, 0x3, 0x2, 
       0x2, 0x2, 0x148, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x6e4, 0x3, 0x2, 
       0x2, 0x2, 0x14c, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x6fa, 0x3, 0x2, 
       0x2, 0x2, 0x150, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x152, 0x703, 0x3, 0x2, 
       0x2, 0x2, 0x154, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x156, 0x712, 0x3, 0x2, 
       0x2, 0x2, 0x158, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x71d, 0x3, 0x2, 
       0x2, 0x2, 0x15c, 0x726, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x72d, 0x3, 0x2, 
       0x2, 0x2, 0x160, 0x738, 0x3, 0x2, 0x2, 0x2, 0x162, 0x742, 0x3, 0x2, 
       0x2, 0x2, 0x164, 0x767, 0x3, 0x2, 0x2, 0x2, 0x166, 0x769, 0x3, 0x2, 
       0x2, 0x2, 0x168, 0x787, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x78e, 0x3, 0x2, 
       0x2, 0x2, 0x16c, 0x790, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x796, 0x3, 0x2, 
       0x2, 0x2, 0x170, 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x172, 0x7c2, 0x3, 0x2, 
       0x2, 0x2, 0x174, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x176, 0x840, 0x3, 0x2, 
       0x2, 0x2, 0x178, 0x842, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x894, 0x3, 0x2, 
       0x2, 0x2, 0x17c, 0x899, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x8a8, 0x3, 0x2, 
       0x2, 0x2, 0x180, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x182, 0x8b6, 0x3, 0x2, 
       0x2, 0x2, 0x184, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x186, 0x8ce, 0x3, 0x2, 
       0x2, 0x2, 0x188, 0x8e7, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x937, 0x3, 0x2, 
       0x2, 0x2, 0x18c, 0x939, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x97c, 0x3, 0x2, 
       0x2, 0x2, 0x190, 0x97e, 0x3, 0x2, 0x2, 0x2, 0x192, 0x9b5, 0x3, 0x2, 
       0x2, 0x2, 0x194, 0x9b7, 0x3, 0x2, 0x2, 0x2, 0x196, 0x9e5, 0x3, 0x2, 
       0x2, 0x2, 0x198, 0x9fd, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x9ff, 0x3, 0x2, 
       0x2, 0x2, 0x19c, 0xa09, 0x3, 0x2, 0x2, 0x2, 0x19e, 0xa10, 0x3, 0x2, 
       0x2, 0x2, 0x1a0, 0xa14, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0xa16, 0x3, 0x2, 
       0x2, 0x2, 0x1a4, 0xa24, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0xa26, 0x3, 0x2, 
       0x2, 0x2, 0x1a8, 0xa30, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0xa34, 0x3, 0x2, 
       0x2, 0x2, 0x1ac, 0xa36, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0xa3d, 0x3, 0x2, 
       0x2, 0x2, 0x1b0, 0xa3f, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0xa48, 0x3, 0x2, 
       0x2, 0x2, 0x1b4, 0xa4a, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0xa55, 0x3, 0x2, 
       0x2, 0x2, 0x1b8, 0xa60, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0xa6b, 0x3, 0x2, 
       0x2, 0x2, 0x1bc, 0xa76, 0x3, 0x2, 0x2, 0x2, 0x1be, 0xa81, 0x3, 0x2, 
       0x2, 0x2, 0x1c0, 0xa8f, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0xaa6, 0x3, 0x2, 
       0x2, 0x2, 0x1c4, 0xabb, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0xac9, 0x3, 0x2, 
       0x2, 0x2, 0x1c8, 0xae1, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0xae3, 0x3, 0x2, 
       0x2, 0x2, 0x1cc, 0xae6, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0xaef, 0x3, 0x2, 
       0x2, 0x2, 0x1d0, 0xaf3, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0xafc, 0x3, 0x2, 
       0x2, 0x2, 0x1d4, 0xaff, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0xb01, 0x3, 0x2, 
       0x2, 0x2, 0x1d8, 0xb04, 0x3, 0x2, 0x2, 0x2, 0x1da, 0xb21, 0x3, 0x2, 
       0x2, 0x2, 0x1dc, 0x1dd, 0x9, 0x2, 0x2, 0x2, 0x1dd, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x1de, 0x1e1, 0x5, 0x6, 0x4, 0x2, 0x1df, 0x1e1, 0x5, 0xe, 
       0x8, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 
       0x2, 0x2, 0x1e1, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e4, 0x5, 0xe8, 
       0x75, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e7, 0x3, 0x2, 
       0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 
       0x2, 0x2, 0x1e6, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 
       0x2, 0x2, 0x1e8, 0x1f1, 0x5, 0x8, 0x5, 0x2, 0x1e9, 0x1eb, 0x5, 0xe8, 
       0x75, 0x2, 0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 
       0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 
       0x2, 0x2, 0x1ed, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 
       0x2, 0x2, 0x1ef, 0x1f1, 0x7, 0x5, 0x2, 0x2, 0x1f0, 0x1e5, 0x3, 0x2, 
       0x2, 0x2, 0x1f0, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x1f2, 0x1f5, 0x5, 0xa, 0x6, 0x2, 0x1f3, 0x1f5, 0x5, 0xc, 
       0x7, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f3, 0x3, 0x2, 
       0x2, 0x2, 0x1f5, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x9, 0x3, 
       0x2, 0x2, 0x1f7, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x9, 0x4, 
       0x2, 0x2, 0x1f9, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x5, 0x10, 
       0x9, 0x2, 0x1fb, 0x1fe, 0x5, 0x1e, 0x10, 0x2, 0x1fc, 0x1fe, 0x5, 
       0x20, 0x11, 0x2, 0x1fd, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x1ff, 0x202, 0x5, 0x16, 0xc, 0x2, 0x200, 0x202, 
       0x5, 0x1c, 0xf, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x202, 0x207, 0x3, 0x2, 0x2, 0x2, 0x203, 0x206, 
       0x5, 0x14, 0xb, 0x2, 0x204, 0x206, 0x5, 0x1a, 0xe, 0x2, 0x205, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 
       0x3, 0x2, 0x2, 0x2, 0x208, 0x11, 0x3, 0x2, 0x2, 0x2, 0x209, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x5, 0xe8, 0x75, 0x2, 0x20b, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x212, 
       0x7, 0x68, 0x2, 0x2, 0x211, 0x213, 0x5, 0x2c, 0x17, 0x2, 0x212, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x5, 0x10, 0x9, 0x2, 0x215, 0x219, 
       0x7, 0x43, 0x2, 0x2, 0x216, 0x218, 0x5, 0xe8, 0x75, 0x2, 0x217, 0x216, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 
       0x7, 0x68, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x2c, 0x17, 0x2, 0x21e, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x13, 0x3, 0x2, 0x2, 0x2, 0x222, 0x226, 
       0x7, 0x43, 0x2, 0x2, 0x223, 0x225, 0x5, 0xe8, 0x75, 0x2, 0x224, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x225, 0x228, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22b, 
       0x7, 0x68, 0x2, 0x2, 0x22a, 0x22c, 0x5, 0x2c, 0x17, 0x2, 0x22b, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x22f, 0x5, 0xe8, 0x75, 0x2, 0x22e, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x232, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 
       0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 
       0x7, 0x68, 0x2, 0x2, 0x234, 0x236, 0x5, 0x2c, 0x17, 0x2, 0x235, 0x234, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x5, 0x12, 0xa, 0x2, 0x238, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x14, 0xb, 0x2, 0x23a, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x16, 0xc, 0x2, 0x23c, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x5, 0xe8, 0x75, 0x2, 0x23e, 0x23d, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x243, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 
       0x7, 0x68, 0x2, 0x2, 0x244, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 
       0x5, 0x6, 0x4, 0x2, 0x246, 0x247, 0x5, 0x22, 0x12, 0x2, 0x247, 0x24f, 
       0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x5, 0x10, 0x9, 0x2, 0x249, 0x24a, 
       0x5, 0x22, 0x12, 0x2, 0x24a, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 
       0x5, 0x1e, 0x10, 0x2, 0x24c, 0x24d, 0x5, 0x22, 0x12, 0x2, 0x24d, 
       0x24f, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x245, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x248, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24f, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x250, 0x252, 0x5, 0xe8, 0x75, 0x2, 0x251, 
       0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x255, 0x3, 0x2, 0x2, 0x2, 0x253, 
       0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 
       0x256, 0x3, 0x2, 0x2, 0x2, 0x255, 0x253, 0x3, 0x2, 0x2, 0x2, 0x256, 
       0x257, 0x7, 0x3f, 0x2, 0x2, 0x257, 0x262, 0x7, 0x40, 0x2, 0x2, 0x258, 
       0x25a, 0x5, 0xe8, 0x75, 0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x25d, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 
       0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25d, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x3f, 0x2, 0x2, 0x25f, 
       0x261, 0x7, 0x40, 0x2, 0x2, 0x260, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x261, 
       0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 0x23, 0x3, 0x2, 0x2, 0x2, 0x264, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x5, 0x26, 0x14, 0x2, 0x266, 
       0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 
       0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 
       0x26b, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 
       0x26d, 0x7, 0x68, 0x2, 0x2, 0x26c, 0x26e, 0x5, 0x28, 0x15, 0x2, 0x26d, 
       0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 
       0x25, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x5, 0xe8, 0x75, 0x2, 0x270, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x7, 0x13, 0x2, 0x2, 0x272, 
       0x27c, 0x5, 0x1e, 0x10, 0x2, 0x273, 0x274, 0x7, 0x13, 0x2, 0x2, 0x274, 
       0x278, 0x5, 0x10, 0x9, 0x2, 0x275, 0x277, 0x5, 0x2a, 0x16, 0x2, 0x276, 
       0x275, 0x3, 0x2, 0x2, 0x2, 0x277, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x278, 
       0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x271, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x273, 0x3, 0x2, 0x2, 0x2, 0x27c, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x57, 0x2, 0x2, 0x27e, 
       0x27f, 0x5, 0x18, 0xd, 0x2, 0x27f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x281, 0x7, 0x46, 0x2, 0x2, 0x281, 0x282, 0x5, 0x2e, 0x18, 0x2, 0x282, 
       0x283, 0x7, 0x45, 0x2, 0x2, 0x283, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x289, 0x5, 0x30, 0x19, 0x2, 0x285, 0x286, 0x7, 0x42, 0x2, 0x2, 0x286, 
       0x288, 0x5, 0x30, 0x19, 0x2, 0x287, 0x285, 0x3, 0x2, 0x2, 0x2, 0x288, 
       0x28b, 0x3, 0x2, 0x2, 0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 
       0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x28b, 
       0x289, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28f, 0x5, 0xe, 0x8, 0x2, 0x28d, 
       0x28f, 0x5, 0x32, 0x1a, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 
       0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x290, 
       0x292, 0x5, 0xe8, 0x75, 0x2, 0x291, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 
       0x295, 0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 
       0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 0x296, 0x3, 0x2, 0x2, 0x2, 0x295, 
       0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x298, 0x7, 0x49, 0x2, 0x2, 0x297, 
       0x299, 0x5, 0x34, 0x1b, 0x2, 0x298, 0x297, 0x3, 0x2, 0x2, 0x2, 0x298, 
       0x299, 0x3, 0x2, 0x2, 0x2, 0x299, 0x33, 0x3, 0x2, 0x2, 0x2, 0x29a, 
       0x29b, 0x7, 0x13, 0x2, 0x2, 0x29b, 0x29f, 0x5, 0xe, 0x8, 0x2, 0x29c, 
       0x29d, 0x7, 0x2a, 0x2, 0x2, 0x29d, 0x29f, 0x5, 0xe, 0x8, 0x2, 0x29e, 
       0x29a, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29f, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x8, 0x1c, 0x1, 0x2, 0x2a1, 
       0x2a2, 0x7, 0x68, 0x2, 0x2, 0x2a2, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x2a4, 0xc, 0x3, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x43, 0x2, 0x2, 0x2a5, 
       0x2a7, 0x7, 0x68, 0x2, 0x2, 0x2a6, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
       0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
       0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
       0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2b1, 0x7, 0x68, 0x2, 0x2, 0x2ac, 
       0x2ad, 0x5, 0x3a, 0x1e, 0x2, 0x2ad, 0x2ae, 0x7, 0x43, 0x2, 0x2, 0x2ae, 
       0x2af, 0x7, 0x68, 0x2, 0x2, 0x2af, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b0, 
       0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x8, 0x1e, 0x1, 0x2, 0x2b3, 
       0x2b4, 0x7, 0x68, 0x2, 0x2, 0x2b4, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
       0x2b6, 0xc, 0x3, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x43, 0x2, 0x2, 0x2b7, 
       0x2b9, 0x7, 0x68, 0x2, 0x2, 0x2b8, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
       0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
       0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2c3, 0x7, 0x68, 0x2, 0x2, 0x2be, 
       0x2bf, 0x5, 0x40, 0x21, 0x2, 0x2bf, 0x2c0, 0x7, 0x43, 0x2, 0x2, 0x2c0, 
       0x2c1, 0x7, 0x68, 0x2, 0x2, 0x2c1, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
       0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x68, 0x2, 0x2, 0x2c5, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x8, 0x21, 0x1, 0x2, 0x2c7, 
       0x2c8, 0x7, 0x68, 0x2, 0x2, 0x2c8, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2c9, 
       0x2ca, 0xc, 0x3, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x43, 0x2, 0x2, 0x2cb, 
       0x2cd, 0x7, 0x68, 0x2, 0x2, 0x2cc, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cd, 
       0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d3, 0x5, 0x44, 0x23, 0x2, 0x2d2, 
       0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d6, 0x5, 0x48, 0x25, 0x2, 0x2d5, 
       0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
       0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 
       0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 
       0x2dc, 0x5, 0x52, 0x2a, 0x2, 0x2db, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x2df, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x2de, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2df, 
       0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x2, 0x2, 0x3, 0x2e1, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e4, 0x5, 0x46, 0x24, 0x2, 0x2e3, 
       0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
       0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
       0x2e9, 0x7, 0x22, 0x2, 0x2, 0x2e9, 0x2ea, 0x5, 0x36, 0x1c, 0x2, 0x2ea, 
       0x2eb, 0x7, 0x41, 0x2, 0x2, 0x2eb, 0x45, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2ed, 0x5, 0xe8, 0x75, 0x2, 0x2ed, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
       0x2f3, 0x5, 0x4a, 0x26, 0x2, 0x2ef, 0x2f3, 0x5, 0x4c, 0x27, 0x2, 
       0x2f0, 0x2f3, 0x5, 0x4e, 0x28, 0x2, 0x2f1, 0x2f3, 0x5, 0x50, 0x29, 
       0x2, 0x2f2, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2ef, 0x3, 0x2, 0x2, 
       0x2, 0x2f2, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f1, 0x3, 0x2, 0x2, 
       0x2, 0x2f3, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x1b, 0x2, 
       0x2, 0x2f5, 0x2f6, 0x5, 0x38, 0x1d, 0x2, 0x2f6, 0x2f7, 0x7, 0x41, 
       0x2, 0x2, 0x2f7, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x1b, 
       0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x3a, 0x1e, 0x2, 0x2fa, 0x2fb, 0x7, 
       0x43, 0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0x55, 0x2, 0x2, 0x2fc, 0x2fd, 
       0x7, 0x41, 0x2, 0x2, 0x2fd, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
       0x7, 0x1b, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x28, 0x2, 0x2, 0x300, 0x301, 
       0x5, 0x38, 0x1d, 0x2, 0x301, 0x302, 0x7, 0x43, 0x2, 0x2, 0x302, 0x303, 
       0x7, 0x68, 0x2, 0x2, 0x303, 0x304, 0x7, 0x41, 0x2, 0x2, 0x304, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x7, 0x1b, 0x2, 0x2, 0x306, 0x307, 
       0x7, 0x28, 0x2, 0x2, 0x307, 0x308, 0x5, 0x38, 0x1d, 0x2, 0x308, 0x309, 
       0x7, 0x43, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x55, 0x2, 0x2, 0x30a, 0x30b, 
       0x7, 0x41, 0x2, 0x2, 0x30b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x310, 
       0x5, 0x54, 0x2b, 0x2, 0x30d, 0x310, 0x5, 0xc8, 0x65, 0x2, 0x30e, 
       0x310, 0x7, 0x41, 0x2, 0x2, 0x30f, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30f, 
       0x30d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x311, 0x314, 0x5, 0x56, 0x2c, 0x2, 0x312, 
       0x314, 0x5, 0xbc, 0x5f, 0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 0x313, 
       0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x55, 0x3, 0x2, 0x2, 0x2, 0x315, 
       0x317, 0x5, 0x58, 0x2d, 0x2, 0x316, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 
       0x31a, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0xb, 0x2, 0x2, 0x31c, 
       0x31e, 0x7, 0x68, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0x5a, 0x2e, 0x2, 0x31e, 
       0x31d, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x321, 0x3, 0x2, 0x2, 0x2, 0x320, 0x322, 0x5, 0x5e, 0x30, 0x2, 0x321, 
       0x320, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x324, 0x3, 0x2, 0x2, 0x2, 0x323, 0x325, 0x5, 0x60, 0x31, 0x2, 0x324, 
       0x323, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x5, 0x64, 0x33, 0x2, 0x327, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x328, 0x331, 0x5, 0xe8, 0x75, 0x2, 0x329, 
       0x331, 0x7, 0x25, 0x2, 0x2, 0x32a, 0x331, 0x7, 0x24, 0x2, 0x2, 0x32b, 
       0x331, 0x7, 0x23, 0x2, 0x2, 0x32c, 0x331, 0x7, 0x3, 0x2, 0x2, 0x32d, 
       0x331, 0x7, 0x28, 0x2, 0x2, 0x32e, 0x331, 0x7, 0x14, 0x2, 0x2, 0x32f, 
       0x331, 0x7, 0x29, 0x2, 0x2, 0x330, 0x328, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x32b, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x331, 0x59, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x333, 0x7, 0x46, 0x2, 0x2, 0x333, 0x334, 0x5, 0x5c, 0x2f, 0x2, 0x334, 
       0x335, 0x7, 0x45, 0x2, 0x2, 0x335, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x336, 
       0x33b, 0x5, 0x24, 0x13, 0x2, 0x337, 0x338, 0x7, 0x42, 0x2, 0x2, 0x338, 
       0x33a, 0x5, 0x24, 0x13, 0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 0x2, 0x33a, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 
       0x33c, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x33d, 
       0x33b, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 0x7, 0x13, 0x2, 0x2, 0x33f, 
       0x340, 0x5, 0x12, 0xa, 0x2, 0x340, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x341, 
       0x342, 0x7, 0x1a, 0x2, 0x2, 0x342, 0x343, 0x5, 0x62, 0x32, 0x2, 0x343, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x344, 0x349, 0x5, 0x18, 0xd, 0x2, 0x345, 
       0x346, 0x7, 0x42, 0x2, 0x2, 0x346, 0x348, 0x5, 0x18, 0xd, 0x2, 0x347, 
       0x345, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x349, 
       0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34a, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34c, 
       0x350, 0x7, 0x3d, 0x2, 0x2, 0x34d, 0x34f, 0x5, 0x66, 0x34, 0x2, 0x34e, 
       0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x352, 0x3, 0x2, 0x2, 0x2, 0x350, 
       0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 
       0x353, 0x3, 0x2, 0x2, 0x2, 0x352, 0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 
       0x354, 0x7, 0x3e, 0x2, 0x2, 0x354, 0x65, 0x3, 0x2, 0x2, 0x2, 0x355, 
       0x35a, 0x5, 0x68, 0x35, 0x2, 0x356, 0x35a, 0x5, 0xac, 0x57, 0x2, 
       0x357, 0x35a, 0x5, 0xae, 0x58, 0x2, 0x358, 0x35a, 0x5, 0xb0, 0x59, 
       0x2, 0x359, 0x355, 0x3, 0x2, 0x2, 0x2, 0x359, 0x356, 0x3, 0x2, 0x2, 
       0x2, 0x359, 0x357, 0x3, 0x2, 0x2, 0x2, 0x359, 0x358, 0x3, 0x2, 0x2, 
       0x2, 0x35a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x361, 0x5, 0x6a, 0x36, 
       0x2, 0x35c, 0x361, 0x5, 0x8e, 0x48, 0x2, 0x35d, 0x361, 0x5, 0x54, 
       0x2b, 0x2, 0x35e, 0x361, 0x5, 0xc8, 0x65, 0x2, 0x35f, 0x361, 0x7, 
       0x41, 0x2, 0x2, 0x360, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35c, 0x3, 
       0x2, 0x2, 0x2, 0x360, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 0x3, 
       0x2, 0x2, 0x2, 0x360, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x361, 0x69, 0x3, 
       0x2, 0x2, 0x2, 0x362, 0x364, 0x5, 0x6c, 0x37, 0x2, 0x363, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x364, 0x367, 0x3, 0x2, 0x2, 0x2, 0x365, 0x363, 
       0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 0x2, 0x2, 0x2, 0x366, 0x368, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 
       0x5, 0x76, 0x3c, 0x2, 0x369, 0x36a, 0x5, 0x6e, 0x38, 0x2, 0x36a, 
       0x36b, 0x7, 0x41, 0x2, 0x2, 0x36b, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x375, 0x5, 0xe8, 0x75, 0x2, 0x36d, 0x375, 0x7, 0x25, 0x2, 0x2, 0x36e, 
       0x375, 0x7, 0x24, 0x2, 0x2, 0x36f, 0x375, 0x7, 0x23, 0x2, 0x2, 0x370, 
       0x375, 0x7, 0x28, 0x2, 0x2, 0x371, 0x375, 0x7, 0x14, 0x2, 0x2, 0x372, 
       0x375, 0x7, 0x30, 0x2, 0x2, 0x373, 0x375, 0x7, 0x33, 0x2, 0x2, 0x374, 
       0x36c, 0x3, 0x2, 0x2, 0x2, 0x374, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x374, 
       0x36e, 0x3, 0x2, 0x2, 0x2, 0x374, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x374, 
       0x370, 0x3, 0x2, 0x2, 0x2, 0x374, 0x371, 0x3, 0x2, 0x2, 0x2, 0x374, 
       0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x373, 0x3, 0x2, 0x2, 0x2, 0x375, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x376, 0x37b, 0x5, 0x70, 0x39, 0x2, 0x377, 
       0x378, 0x7, 0x42, 0x2, 0x2, 0x378, 0x37a, 0x5, 0x70, 0x39, 0x2, 0x379, 
       0x377, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37b, 
       0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37e, 
       0x381, 0x5, 0x72, 0x3a, 0x2, 0x37f, 0x380, 0x7, 0x44, 0x2, 0x2, 0x380, 
       0x382, 0x5, 0x74, 0x3b, 0x2, 0x381, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x381, 
       0x382, 0x3, 0x2, 0x2, 0x2, 0x382, 0x71, 0x3, 0x2, 0x2, 0x2, 0x383, 
       0x385, 0x7, 0x68, 0x2, 0x2, 0x384, 0x386, 0x5, 0x22, 0x12, 0x2, 0x385, 
       0x384, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x387, 0x38a, 0x5, 0x1a0, 0xd1, 0x2, 0x388, 
       0x38a, 0x5, 0xfa, 0x7e, 0x2, 0x389, 0x387, 0x3, 0x2, 0x2, 0x2, 0x389, 
       0x388, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x38b, 
       0x38e, 0x5, 0x78, 0x3d, 0x2, 0x38c, 0x38e, 0x5, 0x7a, 0x3e, 0x2, 
       0x38d, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38c, 0x3, 0x2, 0x2, 0x2, 
       0x38e, 0x77, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x392, 0x5, 0x8, 0x5, 0x2, 
       0x390, 0x392, 0x7, 0x5, 0x2, 0x2, 0x391, 0x38f, 0x3, 0x2, 0x2, 0x2, 
       0x391, 0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 0x79, 0x3, 0x2, 0x2, 0x2, 
       0x393, 0x397, 0x5, 0x7c, 0x3f, 0x2, 0x394, 0x397, 0x5, 0x8a, 0x46, 
       0x2, 0x395, 0x397, 0x5, 0x8c, 0x47, 0x2, 0x396, 0x393, 0x3, 0x2, 
       0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x395, 0x3, 0x2, 
       0x2, 0x2, 0x397, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x398, 0x39b, 0x5, 0x82, 
       0x42, 0x2, 0x399, 0x39b, 0x5, 0x88, 0x45, 0x2, 0x39a, 0x398, 0x3, 
       0x2, 0x2, 0x2, 0x39a, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x3a0, 0x3, 
       0x2, 0x2, 0x2, 0x39c, 0x39f, 0x5, 0x80, 0x41, 0x2, 0x39d, 0x39f, 
       0x5, 0x86, 0x44, 0x2, 0x39e, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39e, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a5, 
       0x7, 0x68, 0x2, 0x2, 0x3a4, 0x3a6, 0x5, 0x2c, 0x17, 0x2, 0x3a5, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 0x7c, 0x3f, 0x2, 0x3a8, 0x3ac, 
       0x7, 0x43, 0x2, 0x2, 0x3a9, 0x3ab, 0x5, 0xe8, 0x75, 0x2, 0x3aa, 0x3a9, 
       0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 
       0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3af, 
       0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b1, 
       0x7, 0x68, 0x2, 0x2, 0x3b0, 0x3b2, 0x5, 0x2c, 0x17, 0x2, 0x3b1, 0x3b0, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3a7, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b9, 
       0x7, 0x43, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0xe8, 0x75, 0x2, 0x3b7, 0x3b6, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3be, 
       0x7, 0x68, 0x2, 0x2, 0x3bd, 0x3bf, 0x5, 0x2c, 0x17, 0x2, 0x3be, 0x3bd, 
       0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c2, 0x7, 0x68, 0x2, 0x2, 0x3c1, 0x3c3, 
       0x5, 0x2c, 0x17, 0x2, 0x3c2, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 
       0x3, 0x2, 0x2, 0x2, 0x3c3, 0x83, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 
       0x5, 0x7e, 0x40, 0x2, 0x3c5, 0x85, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 
       0x5, 0x80, 0x41, 0x2, 0x3c7, 0x87, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 
       0x5, 0x82, 0x42, 0x2, 0x3c9, 0x89, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cb, 
       0x7, 0x68, 0x2, 0x2, 0x3cb, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 
       0x5, 0x78, 0x3d, 0x2, 0x3cd, 0x3ce, 0x5, 0x22, 0x12, 0x2, 0x3ce, 
       0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x5, 0x7c, 0x3f, 0x2, 0x3d0, 
       0x3d1, 0x5, 0x22, 0x12, 0x2, 0x3d1, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d2, 
       0x3d3, 0x5, 0x8a, 0x46, 0x2, 0x3d3, 0x3d4, 0x5, 0x22, 0x12, 0x2, 
       0x3d4, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3cc, 0x3, 0x2, 0x2, 0x2, 
       0x3d5, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d2, 0x3, 0x2, 0x2, 0x2, 
       0x3d6, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d9, 0x5, 0x90, 0x49, 0x2, 
       0x3d8, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3dc, 0x3, 0x2, 0x2, 0x2, 
       0x3da, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 0x3, 0x2, 0x2, 0x2, 
       0x3db, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3da, 0x3, 0x2, 0x2, 0x2, 
       0x3dd, 0x3de, 0x5, 0x92, 0x4a, 0x2, 0x3de, 0x3df, 0x5, 0xaa, 0x56, 
       0x2, 0x3df, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3eb, 0x5, 0xe8, 0x75, 
       0x2, 0x3e1, 0x3eb, 0x7, 0x25, 0x2, 0x2, 0x3e2, 0x3eb, 0x7, 0x24, 
       0x2, 0x2, 0x3e3, 0x3eb, 0x7, 0x23, 0x2, 0x2, 0x3e4, 0x3eb, 0x7, 0x3, 
       0x2, 0x2, 0x3e5, 0x3eb, 0x7, 0x28, 0x2, 0x2, 0x3e6, 0x3eb, 0x7, 0x14, 
       0x2, 0x2, 0x3e7, 0x3eb, 0x7, 0x2c, 0x2, 0x2, 0x3e8, 0x3eb, 0x7, 0x20, 
       0x2, 0x2, 0x3e9, 0x3eb, 0x7, 0x29, 0x2, 0x2, 0x3ea, 0x3e0, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e2, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e4, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e6, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e8, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x91, 0x3, 0x2, 
       0x2, 0x2, 0x3ec, 0x3ed, 0x5, 0x94, 0x4b, 0x2, 0x3ed, 0x3ef, 0x5, 
       0x96, 0x4c, 0x2, 0x3ee, 0x3f0, 0x5, 0xa4, 0x53, 0x2, 0x3ef, 0x3ee, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3fe, 
       0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f5, 0x5, 0x5a, 0x2e, 0x2, 0x3f2, 0x3f4, 
       0x5, 0xe8, 0x75, 0x2, 0x3f3, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f7, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0x94, 0x4b, 0x2, 0x3f9, 0x3fb, 
       0x5, 0x96, 0x4c, 0x2, 0x3fa, 0x3fc, 0x5, 0xa4, 0x53, 0x2, 0x3fb, 
       0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fc, 
       0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3fd, 
       0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3ff, 
       0x402, 0x5, 0x76, 0x3c, 0x2, 0x400, 0x402, 0x7, 0x32, 0x2, 0x2, 0x401, 
       0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 
       0x95, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x7, 0x68, 0x2, 0x2, 0x404, 
       0x406, 0x7, 0x3b, 0x2, 0x2, 0x405, 0x407, 0x5, 0x98, 0x4d, 0x2, 0x406, 
       0x405, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 
       0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x40a, 0x7, 0x3c, 0x2, 0x2, 0x409, 
       0x40b, 0x5, 0x22, 0x12, 0x2, 0x40a, 0x409, 0x3, 0x2, 0x2, 0x2, 0x40a, 
       0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x97, 0x3, 0x2, 0x2, 0x2, 0x40c, 
       0x413, 0x5, 0xa2, 0x52, 0x2, 0x40d, 0x40e, 0x5, 0x9a, 0x4e, 0x2, 
       0x40e, 0x40f, 0x7, 0x42, 0x2, 0x2, 0x40f, 0x410, 0x5, 0xa0, 0x51, 
       0x2, 0x410, 0x413, 0x3, 0x2, 0x2, 0x2, 0x411, 0x413, 0x5, 0xa0, 0x51, 
       0x2, 0x412, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x412, 0x40d, 0x3, 0x2, 0x2, 
       0x2, 0x412, 0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0x99, 0x3, 0x2, 0x2, 
       0x2, 0x414, 0x419, 0x5, 0x9c, 0x4f, 0x2, 0x415, 0x416, 0x7, 0x42, 
       0x2, 0x2, 0x416, 0x418, 0x5, 0x9c, 0x4f, 0x2, 0x417, 0x415, 0x3, 
       0x2, 0x2, 0x2, 0x418, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x419, 0x417, 0x3, 
       0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x425, 0x3, 
       0x2, 0x2, 0x2, 0x41b, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x421, 0x5, 
       0xa2, 0x52, 0x2, 0x41d, 0x41e, 0x7, 0x42, 0x2, 0x2, 0x41e, 0x420, 
       0x5, 0x9c, 0x4f, 0x2, 0x41f, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x420, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x421, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x425, 0x3, 0x2, 0x2, 0x2, 0x423, 0x421, 
       0x3, 0x2, 0x2, 0x2, 0x424, 0x414, 0x3, 0x2, 0x2, 0x2, 0x424, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x426, 0x428, 
       0x5, 0x9e, 0x50, 0x2, 0x427, 0x426, 0x3, 0x2, 0x2, 0x2, 0x428, 0x42b, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x427, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 
       0x3, 0x2, 0x2, 0x2, 0x42a, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x5, 0x76, 0x3c, 0x2, 0x42d, 0x42e, 
       0x5, 0x72, 0x3a, 0x2, 0x42e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x432, 
       0x5, 0xe8, 0x75, 0x2, 0x430, 0x432, 0x7, 0x14, 0x2, 0x2, 0x431, 0x42f, 
       0x3, 0x2, 0x2, 0x2, 0x431, 0x430, 0x3, 0x2, 0x2, 0x2, 0x432, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x433, 0x435, 0x5, 0x9e, 0x50, 0x2, 0x434, 0x433, 
       0x3, 0x2, 0x2, 0x2, 0x435, 0x438, 0x3, 0x2, 0x2, 0x2, 0x436, 0x434, 
       0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 0x3, 0x2, 0x2, 0x2, 0x437, 0x439, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x436, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43d, 
       0x5, 0x76, 0x3c, 0x2, 0x43a, 0x43c, 0x5, 0xe8, 0x75, 0x2, 0x43b, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43d, 
       0x43b, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43e, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x440, 
       0x441, 0x7, 0x6a, 0x2, 0x2, 0x441, 0x442, 0x5, 0x72, 0x3a, 0x2, 0x442, 
       0x445, 0x3, 0x2, 0x2, 0x2, 0x443, 0x445, 0x5, 0x9c, 0x4f, 0x2, 0x444, 
       0x436, 0x3, 0x2, 0x2, 0x2, 0x444, 0x443, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x446, 0x448, 0x5, 0xe8, 0x75, 0x2, 0x447, 
       0x446, 0x3, 0x2, 0x2, 0x2, 0x448, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x449, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 
       0x44c, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x449, 0x3, 0x2, 0x2, 0x2, 0x44c, 
       0x44f, 0x5, 0x76, 0x3c, 0x2, 0x44d, 0x44e, 0x7, 0x68, 0x2, 0x2, 0x44e, 
       0x450, 0x7, 0x43, 0x2, 0x2, 0x44f, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44f, 
       0x450, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 
       0x452, 0x7, 0x2d, 0x2, 0x2, 0x452, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x453, 
       0x454, 0x7, 0x2f, 0x2, 0x2, 0x454, 0x455, 0x5, 0xa6, 0x54, 0x2, 0x455, 
       0xa5, 0x3, 0x2, 0x2, 0x2, 0x456, 0x45b, 0x5, 0xa8, 0x55, 0x2, 0x457, 
       0x458, 0x7, 0x42, 0x2, 0x2, 0x458, 0x45a, 0x5, 0xa8, 0x55, 0x2, 0x459, 
       0x457, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45b, 
       0x459, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45e, 
       0x461, 0x5, 0x12, 0xa, 0x2, 0x45f, 0x461, 0x5, 0x1e, 0x10, 0x2, 0x460, 
       0x45e, 0x3, 0x2, 0x2, 0x2, 0x460, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x461, 
       0xa9, 0x3, 0x2, 0x2, 0x2, 0x462, 0x465, 0x5, 0xfe, 0x80, 0x2, 0x463, 
       0x465, 0x7, 0x41, 0x2, 0x2, 0x464, 0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 
       0x463, 0x3, 0x2, 0x2, 0x2, 0x465, 0xab, 0x3, 0x2, 0x2, 0x2, 0x466, 
       0x467, 0x5, 0xfe, 0x80, 0x2, 0x467, 0xad, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x469, 0x7, 0x28, 0x2, 0x2, 0x469, 0x46a, 0x5, 0xfe, 0x80, 0x2, 0x46a, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x46d, 0x5, 0xb2, 0x5a, 0x2, 0x46c, 
       0x46b, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x470, 0x3, 0x2, 0x2, 0x2, 0x46e, 
       0x46c, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46f, 
       0x471, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x471, 
       0x473, 0x5, 0xb4, 0x5b, 0x2, 0x472, 0x474, 0x5, 0xa4, 0x53, 0x2, 
       0x473, 0x472, 0x3, 0x2, 0x2, 0x2, 0x473, 0x474, 0x3, 0x2, 0x2, 0x2, 
       0x474, 0x475, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 0x5, 0xb8, 0x5d, 
       0x2, 0x476, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x477, 0x47c, 0x5, 0xe8, 0x75, 
       0x2, 0x478, 0x47c, 0x7, 0x25, 0x2, 0x2, 0x479, 0x47c, 0x7, 0x24, 
       0x2, 0x2, 0x47a, 0x47c, 0x7, 0x23, 0x2, 0x2, 0x47b, 0x477, 0x3, 0x2, 
       0x2, 0x2, 0x47b, 0x478, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 0x3, 0x2, 
       0x2, 0x2, 0x47b, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0x47d, 0x47f, 0x5, 0x5a, 0x2e, 0x2, 0x47e, 0x47d, 0x3, 
       0x2, 0x2, 0x2, 0x47e, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x3, 
       0x2, 0x2, 0x2, 0x480, 0x481, 0x5, 0xb6, 0x5c, 0x2, 0x481, 0x483, 
       0x7, 0x3b, 0x2, 0x2, 0x482, 0x484, 0x5, 0x98, 0x4d, 0x2, 0x483, 0x482, 
       0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 
       0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x7, 0x3c, 0x2, 0x2, 0x486, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 0x7, 0x68, 0x2, 0x2, 0x488, 0xb7, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x48b, 0x7, 0x3d, 0x2, 0x2, 0x48a, 0x48c, 
       0x5, 0xba, 0x5e, 0x2, 0x48b, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 
       0x3, 0x2, 0x2, 0x2, 0x48c, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48f, 
       0x5, 0x100, 0x81, 0x2, 0x48e, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48f, 
       0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 
       0x7, 0x3e, 0x2, 0x2, 0x491, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x492, 0x494, 
       0x5, 0x2c, 0x17, 0x2, 0x493, 0x492, 0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 
       0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 
       0x7, 0x2d, 0x2, 0x2, 0x496, 0x498, 0x7, 0x3b, 0x2, 0x2, 0x497, 0x499, 
       0x5, 0x190, 0xc9, 0x2, 0x498, 0x497, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 
       0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 
       0x7, 0x3c, 0x2, 0x2, 0x49b, 0x4c1, 0x7, 0x41, 0x2, 0x2, 0x49c, 0x49e, 
       0x5, 0x2c, 0x17, 0x2, 0x49d, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49e, 
       0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 
       0x7, 0x2a, 0x2, 0x2, 0x4a0, 0x4a2, 0x7, 0x3b, 0x2, 0x2, 0x4a1, 0x4a3, 
       0x5, 0x190, 0xc9, 0x2, 0x4a2, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 
       0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a5, 
       0x7, 0x3c, 0x2, 0x2, 0x4a5, 0x4c1, 0x7, 0x41, 0x2, 0x2, 0x4a6, 0x4a7, 
       0x5, 0x3c, 0x1f, 0x2, 0x4a7, 0x4a9, 0x7, 0x43, 0x2, 0x2, 0x4a8, 0x4aa, 
       0x5, 0x2c, 0x17, 0x2, 0x4a9, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 
       0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 
       0x7, 0x2a, 0x2, 0x2, 0x4ac, 0x4ae, 0x7, 0x3b, 0x2, 0x2, 0x4ad, 0x4af, 
       0x5, 0x190, 0xc9, 0x2, 0x4ae, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 
       0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 
       0x7, 0x3c, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x41, 0x2, 0x2, 0x4b2, 0x4c1, 
       0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x5, 0x162, 0xb2, 0x2, 0x4b4, 0x4b6, 
       0x7, 0x43, 0x2, 0x2, 0x4b5, 0x4b7, 0x5, 0x2c, 0x17, 0x2, 0x4b6, 0x4b5, 
       0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 
       0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 0x2a, 0x2, 0x2, 0x4b9, 0x4bb, 
       0x7, 0x3b, 0x2, 0x2, 0x4ba, 0x4bc, 0x5, 0x190, 0xc9, 0x2, 0x4bb, 
       0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 0x7, 0x3c, 0x2, 0x2, 0x4be, 
       0x4bf, 0x7, 0x41, 0x2, 0x2, 0x4bf, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x493, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4c1, 
       0xbb, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c4, 0x5, 0x58, 0x2d, 0x2, 0x4c3, 
       0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
       0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c6, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c8, 
       0x4c9, 0x7, 0x12, 0x2, 0x2, 0x4c9, 0x4cb, 0x7, 0x68, 0x2, 0x2, 0x4ca, 
       0x4cc, 0x5, 0x60, 0x31, 0x2, 0x4cb, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4cb, 
       0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cd, 
       0x4ce, 0x5, 0xbe, 0x60, 0x2, 0x4ce, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4d1, 0x7, 0x3d, 0x2, 0x2, 0x4d0, 0x4d2, 0x5, 0xc0, 0x61, 0x2, 0x4d1, 
       0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d5, 0x7, 0x42, 0x2, 0x2, 0x4d4, 
       0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d8, 0x5, 0xc6, 0x64, 0x2, 0x4d7, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d8, 
       0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4da, 0x7, 0x3e, 0x2, 0x2, 0x4da, 
       0xbf, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4e0, 0x5, 0xc2, 0x62, 0x2, 0x4dc, 
       0x4dd, 0x7, 0x42, 0x2, 0x2, 0x4dd, 0x4df, 0x5, 0xc2, 0x62, 0x2, 0x4de, 
       0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e0, 
       0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e1, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e3, 
       0x4e5, 0x5, 0xc4, 0x63, 0x2, 0x4e4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e5, 
       0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e6, 
       0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4e8, 
       0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ef, 0x7, 0x68, 0x2, 0x2, 0x4ea, 
       0x4ec, 0x7, 0x3b, 0x2, 0x2, 0x4eb, 0x4ed, 0x5, 0x190, 0xc9, 0x2, 
       0x4ec, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x3, 0x2, 0x2, 0x2, 
       0x4ed, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4f0, 0x7, 0x3c, 0x2, 0x2, 
       0x4ef, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f0, 0x3, 0x2, 0x2, 0x2, 
       0x4f0, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f3, 0x5, 0x64, 0x33, 
       0x2, 0x4f2, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 0x3, 0x2, 0x2, 
       0x2, 0x4f3, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 0x5, 0xe8, 0x75, 
       0x2, 0x4f5, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4fa, 0x7, 0x41, 0x2, 
       0x2, 0x4f7, 0x4f9, 0x5, 0x66, 0x34, 0x2, 0x4f8, 0x4f7, 0x3, 0x2, 
       0x2, 0x2, 0x4f9, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f8, 0x3, 0x2, 
       0x2, 0x2, 0x4fa, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0xc7, 0x3, 0x2, 
       0x2, 0x2, 0x4fc, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x500, 0x5, 0xca, 
       0x66, 0x2, 0x4fe, 0x500, 0x5, 0xdc, 0x6f, 0x2, 0x4ff, 0x4fd, 0x3, 
       0x2, 0x2, 0x2, 0x4ff, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x500, 0xc9, 0x3, 
       0x2, 0x2, 0x2, 0x501, 0x503, 0x5, 0xcc, 0x67, 0x2, 0x502, 0x501, 
       0x3, 0x2, 0x2, 0x2, 0x503, 0x506, 0x3, 0x2, 0x2, 0x2, 0x504, 0x502, 
       0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 0x505, 0x507, 
       0x3, 0x2, 0x2, 0x2, 0x506, 0x504, 0x3, 0x2, 0x2, 0x2, 0x507, 0x508, 
       0x7, 0x1e, 0x2, 0x2, 0x508, 0x50a, 0x7, 0x68, 0x2, 0x2, 0x509, 0x50b, 
       0x5, 0x5a, 0x2e, 0x2, 0x50a, 0x509, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50b, 
       0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50e, 
       0x5, 0xce, 0x68, 0x2, 0x50d, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x50e, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x510, 
       0x5, 0xd0, 0x69, 0x2, 0x510, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x511, 0x519, 
       0x5, 0xe8, 0x75, 0x2, 0x512, 0x519, 0x7, 0x25, 0x2, 0x2, 0x513, 0x519, 
       0x7, 0x24, 0x2, 0x2, 0x514, 0x519, 0x7, 0x23, 0x2, 0x2, 0x515, 0x519, 
       0x7, 0x3, 0x2, 0x2, 0x516, 0x519, 0x7, 0x28, 0x2, 0x2, 0x517, 0x519, 
       0x7, 0x29, 0x2, 0x2, 0x518, 0x511, 0x3, 0x2, 0x2, 0x2, 0x518, 0x512, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x513, 0x3, 0x2, 0x2, 0x2, 0x518, 0x514, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x515, 0x3, 0x2, 0x2, 0x2, 0x518, 0x516, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x517, 0x3, 0x2, 0x2, 0x2, 0x519, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51b, 0x7, 0x13, 0x2, 0x2, 0x51b, 0x51c, 
       0x5, 0x62, 0x32, 0x2, 0x51c, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x521, 
       0x7, 0x3d, 0x2, 0x2, 0x51e, 0x520, 0x5, 0xd2, 0x6a, 0x2, 0x51f, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x520, 0x523, 0x3, 0x2, 0x2, 0x2, 0x521, 0x51f, 
       0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x3, 0x2, 0x2, 0x2, 0x522, 0x524, 
       0x3, 0x2, 0x2, 0x2, 0x523, 0x521, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 
       0x7, 0x3e, 0x2, 0x2, 0x525, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x526, 0x52c, 
       0x5, 0xd4, 0x6b, 0x2, 0x527, 0x52c, 0x5, 0xd8, 0x6d, 0x2, 0x528, 
       0x52c, 0x5, 0x54, 0x2b, 0x2, 0x529, 0x52c, 0x5, 0xc8, 0x65, 0x2, 
       0x52a, 0x52c, 0x7, 0x41, 0x2, 0x2, 0x52b, 0x526, 0x3, 0x2, 0x2, 0x2, 
       0x52b, 0x527, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x528, 0x3, 0x2, 0x2, 0x2, 
       0x52b, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x52a, 0x3, 0x2, 0x2, 0x2, 
       0x52c, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52f, 0x5, 0xd6, 0x6c, 0x2, 
       0x52e, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x532, 0x3, 0x2, 0x2, 0x2, 
       0x530, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x3, 0x2, 0x2, 0x2, 
       0x531, 0x533, 0x3, 0x2, 0x2, 0x2, 0x532, 0x530, 0x3, 0x2, 0x2, 0x2, 
       0x533, 0x534, 0x5, 0x76, 0x3c, 0x2, 0x534, 0x535, 0x5, 0x6e, 0x38, 
       0x2, 0x535, 0x536, 0x7, 0x41, 0x2, 0x2, 0x536, 0xd5, 0x3, 0x2, 0x2, 
       0x2, 0x537, 0x53c, 0x5, 0xe8, 0x75, 0x2, 0x538, 0x53c, 0x7, 0x25, 
       0x2, 0x2, 0x539, 0x53c, 0x7, 0x28, 0x2, 0x2, 0x53a, 0x53c, 0x7, 0x14, 
       0x2, 0x2, 0x53b, 0x537, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x538, 0x3, 0x2, 
       0x2, 0x2, 0x53b, 0x539, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53a, 0x3, 0x2, 
       0x2, 0x2, 0x53c, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53f, 0x5, 0xda, 
       0x6e, 0x2, 0x53e, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x542, 0x3, 0x2, 
       0x2, 0x2, 0x540, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x540, 0x541, 0x3, 0x2, 
       0x2, 0x2, 0x541, 0x543, 0x3, 0x2, 0x2, 0x2, 0x542, 0x540, 0x3, 0x2, 
       0x2, 0x2, 0x543, 0x544, 0x5, 0x92, 0x4a, 0x2, 0x544, 0x545, 0x5, 
       0xaa, 0x56, 0x2, 0x545, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x546, 0x54d, 0x5, 
       0xe8, 0x75, 0x2, 0x547, 0x54d, 0x7, 0x25, 0x2, 0x2, 0x548, 0x54d, 
       0x7, 0x3, 0x2, 0x2, 0x549, 0x54d, 0x7, 0xe, 0x2, 0x2, 0x54a, 0x54d, 
       0x7, 0x28, 0x2, 0x2, 0x54b, 0x54d, 0x7, 0x29, 0x2, 0x2, 0x54c, 0x546, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x547, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x548, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54a, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54d, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0x54e, 0x550, 0x5, 0xcc, 0x67, 0x2, 0x54f, 0x54e, 
       0x3, 0x2, 0x2, 0x2, 0x550, 0x553, 0x3, 0x2, 0x2, 0x2, 0x551, 0x54f, 
       0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x3, 0x2, 0x2, 0x2, 0x552, 0x554, 
       0x3, 0x2, 0x2, 0x2, 0x553, 0x551, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 
       0x7, 0x69, 0x2, 0x2, 0x555, 0x556, 0x7, 0x1e, 0x2, 0x2, 0x556, 0x557, 
       0x7, 0x68, 0x2, 0x2, 0x557, 0x558, 0x5, 0xde, 0x70, 0x2, 0x558, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0x559, 0x55d, 0x7, 0x3d, 0x2, 0x2, 0x55a, 0x55c, 
       0x5, 0xe0, 0x71, 0x2, 0x55b, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x55d, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x55e, 
       0x3, 0x2, 0x2, 0x2, 0x55e, 0x560, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x55d, 
       0x3, 0x2, 0x2, 0x2, 0x560, 0x561, 0x7, 0x3e, 0x2, 0x2, 0x561, 0xdf, 
       0x3, 0x2, 0x2, 0x2, 0x562, 0x568, 0x5, 0xe2, 0x72, 0x2, 0x563, 0x568, 
       0x5, 0xd4, 0x6b, 0x2, 0x564, 0x568, 0x5, 0x54, 0x2b, 0x2, 0x565, 
       0x568, 0x5, 0xc8, 0x65, 0x2, 0x566, 0x568, 0x7, 0x41, 0x2, 0x2, 0x567, 
       0x562, 0x3, 0x2, 0x2, 0x2, 0x567, 0x563, 0x3, 0x2, 0x2, 0x2, 0x567, 
       0x564, 0x3, 0x2, 0x2, 0x2, 0x567, 0x565, 0x3, 0x2, 0x2, 0x2, 0x567, 
       0x566, 0x3, 0x2, 0x2, 0x2, 0x568, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x569, 
       0x56b, 0x5, 0xe4, 0x73, 0x2, 0x56a, 0x569, 0x3, 0x2, 0x2, 0x2, 0x56b, 
       0x56e, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x56c, 
       0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x56e, 
       0x56c, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x570, 0x5, 0x76, 0x3c, 0x2, 0x570, 
       0x571, 0x7, 0x68, 0x2, 0x2, 0x571, 0x572, 0x7, 0x3b, 0x2, 0x2, 0x572, 
       0x574, 0x7, 0x3c, 0x2, 0x2, 0x573, 0x575, 0x5, 0x22, 0x12, 0x2, 0x574, 
       0x573, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 0x3, 0x2, 0x2, 0x2, 0x575, 
       0x577, 0x3, 0x2, 0x2, 0x2, 0x576, 0x578, 0x5, 0xe6, 0x74, 0x2, 0x577, 
       0x576, 0x3, 0x2, 0x2, 0x2, 0x577, 0x578, 0x3, 0x2, 0x2, 0x2, 0x578, 
       0x579, 0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x41, 0x2, 0x2, 0x57a, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57f, 0x5, 0xe8, 0x75, 0x2, 0x57c, 
       0x57f, 0x7, 0x25, 0x2, 0x2, 0x57d, 0x57f, 0x7, 0x3, 0x2, 0x2, 0x57e, 
       0x57b, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57e, 
       0x57d, 0x3, 0x2, 0x2, 0x2, 0x57f, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x580, 
       0x581, 0x7, 0xe, 0x2, 0x2, 0x581, 0x582, 0x5, 0xf0, 0x79, 0x2, 0x582, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0x583, 0x587, 0x5, 0xea, 0x76, 0x2, 0x584, 
       0x587, 0x5, 0xf6, 0x7c, 0x2, 0x585, 0x587, 0x5, 0xf8, 0x7d, 0x2, 
       0x586, 0x583, 0x3, 0x2, 0x2, 0x2, 0x586, 0x584, 0x3, 0x2, 0x2, 0x2, 
       0x586, 0x585, 0x3, 0x2, 0x2, 0x2, 0x587, 0xe9, 0x3, 0x2, 0x2, 0x2, 
       0x588, 0x589, 0x7, 0x69, 0x2, 0x2, 0x589, 0x58a, 0x5, 0x38, 0x1d, 
       0x2, 0x58a, 0x58c, 0x7, 0x3b, 0x2, 0x2, 0x58b, 0x58d, 0x5, 0xec, 
       0x77, 0x2, 0x58c, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x3, 0x2, 
       0x2, 0x2, 0x58d, 0x58e, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58f, 0x7, 0x3c, 
       0x2, 0x2, 0x58f, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x590, 0x595, 0x5, 0xee, 
       0x78, 0x2, 0x591, 0x592, 0x7, 0x42, 0x2, 0x2, 0x592, 0x594, 0x5, 
       0xee, 0x78, 0x2, 0x593, 0x591, 0x3, 0x2, 0x2, 0x2, 0x594, 0x597, 
       0x3, 0x2, 0x2, 0x2, 0x595, 0x593, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 
       0x3, 0x2, 0x2, 0x2, 0x596, 0xed, 0x3, 0x2, 0x2, 0x2, 0x597, 0x595, 
       0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 0x7, 0x68, 0x2, 0x2, 0x599, 0x59a, 
       0x7, 0x44, 0x2, 0x2, 0x59a, 0x59b, 0x5, 0xf0, 0x79, 0x2, 0x59b, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x59c, 0x5a0, 0x5, 0x1b2, 0xda, 0x2, 0x59d, 0x5a0, 
       0x5, 0xf2, 0x7a, 0x2, 0x59e, 0x5a0, 0x5, 0xe8, 0x75, 0x2, 0x59f, 
       0x59c, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 
       0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x5a1, 
       0x5a3, 0x7, 0x3d, 0x2, 0x2, 0x5a2, 0x5a4, 0x5, 0xf4, 0x7b, 0x2, 0x5a3, 
       0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a4, 
       0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a7, 0x7, 0x42, 0x2, 0x2, 0x5a6, 
       0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a7, 
       0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x7, 0x3e, 0x2, 0x2, 0x5a9, 
       0xf3, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5af, 0x5, 0xf0, 0x79, 0x2, 0x5ab, 
       0x5ac, 0x7, 0x42, 0x2, 0x2, 0x5ac, 0x5ae, 0x5, 0xf0, 0x79, 0x2, 0x5ad, 
       0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5af, 
       0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5b0, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b2, 
       0x5b3, 0x7, 0x69, 0x2, 0x2, 0x5b3, 0x5b4, 0x5, 0x38, 0x1d, 0x2, 0x5b4, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 0x7, 0x69, 0x2, 0x2, 0x5b6, 
       0x5b7, 0x5, 0x38, 0x1d, 0x2, 0x5b7, 0x5b8, 0x7, 0x3b, 0x2, 0x2, 0x5b8, 
       0x5b9, 0x5, 0xf0, 0x79, 0x2, 0x5b9, 0x5ba, 0x7, 0x3c, 0x2, 0x2, 0x5ba, 
       0xf9, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5bd, 0x7, 0x3d, 0x2, 0x2, 0x5bc, 
       0x5be, 0x5, 0xfc, 0x7f, 0x2, 0x5bd, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5bd, 
       0x5be, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5bf, 
       0x5c1, 0x7, 0x42, 0x2, 0x2, 0x5c0, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c0, 
       0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 
       0x5c3, 0x7, 0x3e, 0x2, 0x2, 0x5c3, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x5c4, 
       0x5c9, 0x5, 0x74, 0x3b, 0x2, 0x5c5, 0x5c6, 0x7, 0x42, 0x2, 0x2, 0x5c6, 
       0x5c8, 0x5, 0x74, 0x3b, 0x2, 0x5c7, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c8, 
       0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c9, 
       0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x5cb, 
       0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5ce, 0x7, 0x3d, 0x2, 0x2, 0x5cd, 
       0x5cf, 0x5, 0x100, 0x81, 0x2, 0x5ce, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5ce, 
       0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d0, 
       0x5d1, 0x7, 0x3e, 0x2, 0x2, 0x5d1, 0xff, 0x3, 0x2, 0x2, 0x2, 0x5d2, 
       0x5d4, 0x5, 0x102, 0x82, 0x2, 0x5d3, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d4, 
       0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d5, 
       0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5d7, 
       0x5db, 0x5, 0x104, 0x83, 0x2, 0x5d8, 0x5db, 0x5, 0x54, 0x2b, 0x2, 
       0x5d9, 0x5db, 0x5, 0x108, 0x85, 0x2, 0x5da, 0x5d7, 0x3, 0x2, 0x2, 
       0x2, 0x5da, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5d9, 0x3, 0x2, 0x2, 
       0x2, 0x5db, 0x103, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5dd, 0x5, 0x106, 
       0x84, 0x2, 0x5dd, 0x5de, 0x7, 0x41, 0x2, 0x2, 0x5de, 0x105, 0x3, 
       0x2, 0x2, 0x2, 0x5df, 0x5e1, 0x5, 0x9e, 0x50, 0x2, 0x5e0, 0x5df, 
       0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e0, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e5, 
       0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 
       0x5, 0x76, 0x3c, 0x2, 0x5e6, 0x5e7, 0x5, 0x6e, 0x38, 0x2, 0x5e7, 
       0x107, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5ef, 0x5, 0x10c, 0x87, 0x2, 0x5e9, 
       0x5ef, 0x5, 0x110, 0x89, 0x2, 0x5ea, 0x5ef, 0x5, 0x118, 0x8d, 0x2, 
       0x5eb, 0x5ef, 0x5, 0x11a, 0x8e, 0x2, 0x5ec, 0x5ef, 0x5, 0x12c, 0x97, 
       0x2, 0x5ed, 0x5ef, 0x5, 0x132, 0x9a, 0x2, 0x5ee, 0x5e8, 0x3, 0x2, 
       0x2, 0x2, 0x5ee, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ea, 0x3, 0x2, 
       0x2, 0x2, 0x5ee, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ec, 0x3, 0x2, 
       0x2, 0x2, 0x5ee, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x109, 0x3, 0x2, 
       0x2, 0x2, 0x5f0, 0x5f6, 0x5, 0x10c, 0x87, 0x2, 0x5f1, 0x5f6, 0x5, 
       0x112, 0x8a, 0x2, 0x5f2, 0x5f6, 0x5, 0x11c, 0x8f, 0x2, 0x5f3, 0x5f6, 
       0x5, 0x12e, 0x98, 0x2, 0x5f4, 0x5f6, 0x5, 0x134, 0x9b, 0x2, 0x5f5, 
       0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f5, 
       0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5f5, 
       0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x5f7, 
       0x604, 0x5, 0xfe, 0x80, 0x2, 0x5f8, 0x604, 0x5, 0x10e, 0x88, 0x2, 
       0x5f9, 0x604, 0x5, 0x114, 0x8b, 0x2, 0x5fa, 0x604, 0x5, 0x11e, 0x90, 
       0x2, 0x5fb, 0x604, 0x5, 0x120, 0x91, 0x2, 0x5fc, 0x604, 0x5, 0x130, 
       0x99, 0x2, 0x5fd, 0x604, 0x5, 0x144, 0xa3, 0x2, 0x5fe, 0x604, 0x5, 
       0x146, 0xa4, 0x2, 0x5ff, 0x604, 0x5, 0x148, 0xa5, 0x2, 0x600, 0x604, 
       0x5, 0x14c, 0xa7, 0x2, 0x601, 0x604, 0x5, 0x14a, 0xa6, 0x2, 0x602, 
       0x604, 0x5, 0x14e, 0xa8, 0x2, 0x603, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x5f8, 0x3, 0x2, 0x2, 0x2, 0x603, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x5fa, 0x3, 0x2, 0x2, 0x2, 0x603, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x5fc, 0x3, 0x2, 0x2, 0x2, 0x603, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x5fe, 0x3, 0x2, 0x2, 0x2, 0x603, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x600, 0x3, 0x2, 0x2, 0x2, 0x603, 0x601, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0x602, 0x3, 0x2, 0x2, 0x2, 0x604, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x605, 
       0x606, 0x7, 0x41, 0x2, 0x2, 0x606, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x607, 
       0x608, 0x7, 0x68, 0x2, 0x2, 0x608, 0x609, 0x7, 0x4a, 0x2, 0x2, 0x609, 
       0x60a, 0x5, 0x108, 0x85, 0x2, 0x60a, 0x111, 0x3, 0x2, 0x2, 0x2, 0x60b, 
       0x60c, 0x7, 0x68, 0x2, 0x2, 0x60c, 0x60d, 0x7, 0x4a, 0x2, 0x2, 0x60d, 
       0x60e, 0x5, 0x10a, 0x86, 0x2, 0x60e, 0x113, 0x3, 0x2, 0x2, 0x2, 0x60f, 
       0x610, 0x5, 0x116, 0x8c, 0x2, 0x610, 0x611, 0x7, 0x41, 0x2, 0x2, 
       0x611, 0x115, 0x3, 0x2, 0x2, 0x2, 0x612, 0x61a, 0x5, 0x1ac, 0xd7, 
       0x2, 0x613, 0x61a, 0x5, 0x1ca, 0xe6, 0x2, 0x614, 0x61a, 0x5, 0x1cc, 
       0xe7, 0x2, 0x615, 0x61a, 0x5, 0x1d2, 0xea, 0x2, 0x616, 0x61a, 0x5, 
       0x1d6, 0xec, 0x2, 0x617, 0x61a, 0x5, 0x18a, 0xc6, 0x2, 0x618, 0x61a, 
       0x5, 0x176, 0xbc, 0x2, 0x619, 0x612, 0x3, 0x2, 0x2, 0x2, 0x619, 0x613, 
       0x3, 0x2, 0x2, 0x2, 0x619, 0x614, 0x3, 0x2, 0x2, 0x2, 0x619, 0x615, 
       0x3, 0x2, 0x2, 0x2, 0x619, 0x616, 0x3, 0x2, 0x2, 0x2, 0x619, 0x617, 
       0x3, 0x2, 0x2, 0x2, 0x619, 0x618, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x7, 0x18, 0x2, 0x2, 0x61c, 0x61d, 
       0x7, 0x3b, 0x2, 0x2, 0x61d, 0x61e, 0x5, 0x1a0, 0xd1, 0x2, 0x61e, 
       0x61f, 0x7, 0x3c, 0x2, 0x2, 0x61f, 0x620, 0x5, 0x108, 0x85, 0x2, 
       0x620, 0x119, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x7, 0x18, 0x2, 0x2, 
       0x622, 0x623, 0x7, 0x3b, 0x2, 0x2, 0x623, 0x624, 0x5, 0x1a0, 0xd1, 
       0x2, 0x624, 0x625, 0x7, 0x3c, 0x2, 0x2, 0x625, 0x626, 0x5, 0x10a, 
       0x86, 0x2, 0x626, 0x627, 0x7, 0x11, 0x2, 0x2, 0x627, 0x628, 0x5, 
       0x108, 0x85, 0x2, 0x628, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62a, 
       0x7, 0x18, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x3b, 0x2, 0x2, 0x62b, 0x62c, 
       0x5, 0x1a0, 0xd1, 0x2, 0x62c, 0x62d, 0x7, 0x3c, 0x2, 0x2, 0x62d, 
       0x62e, 0x5, 0x10a, 0x86, 0x2, 0x62e, 0x62f, 0x7, 0x11, 0x2, 0x2, 
       0x62f, 0x630, 0x5, 0x10a, 0x86, 0x2, 0x630, 0x11d, 0x3, 0x2, 0x2, 
       0x2, 0x631, 0x632, 0x7, 0x4, 0x2, 0x2, 0x632, 0x633, 0x5, 0x1a0, 
       0xd1, 0x2, 0x633, 0x634, 0x7, 0x41, 0x2, 0x2, 0x634, 0x63c, 0x3, 
       0x2, 0x2, 0x2, 0x635, 0x636, 0x7, 0x4, 0x2, 0x2, 0x636, 0x637, 0x5, 
       0x1a0, 0xd1, 0x2, 0x637, 0x638, 0x7, 0x4a, 0x2, 0x2, 0x638, 0x639, 
       0x5, 0x1a0, 0xd1, 0x2, 0x639, 0x63a, 0x7, 0x41, 0x2, 0x2, 0x63a, 
       0x63c, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x631, 0x3, 0x2, 0x2, 0x2, 0x63b, 
       0x635, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63e, 0x7, 0x2b, 0x2, 0x2, 0x63e, 0x63f, 0x7, 0x3b, 0x2, 0x2, 0x63f, 
       0x640, 0x5, 0x1a0, 0xd1, 0x2, 0x640, 0x641, 0x7, 0x3c, 0x2, 0x2, 
       0x641, 0x642, 0x5, 0x122, 0x92, 0x2, 0x642, 0x121, 0x3, 0x2, 0x2, 
       0x2, 0x643, 0x647, 0x7, 0x3d, 0x2, 0x2, 0x644, 0x646, 0x5, 0x124, 
       0x93, 0x2, 0x645, 0x644, 0x3, 0x2, 0x2, 0x2, 0x646, 0x649, 0x3, 0x2, 
       0x2, 0x2, 0x647, 0x645, 0x3, 0x2, 0x2, 0x2, 0x647, 0x648, 0x3, 0x2, 
       0x2, 0x2, 0x648, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x649, 0x647, 0x3, 0x2, 
       0x2, 0x2, 0x64a, 0x64c, 0x5, 0x128, 0x95, 0x2, 0x64b, 0x64a, 0x3, 
       0x2, 0x2, 0x2, 0x64c, 0x64f, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64b, 0x3, 
       0x2, 0x2, 0x2, 0x64d, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x64e, 0x650, 0x3, 
       0x2, 0x2, 0x2, 0x64f, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x650, 0x651, 0x7, 
       0x3e, 0x2, 0x2, 0x651, 0x123, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x5, 
       0x126, 0x94, 0x2, 0x653, 0x654, 0x5, 0x100, 0x81, 0x2, 0x654, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x655, 0x659, 0x5, 0x128, 0x95, 0x2, 0x656, 0x658, 
       0x5, 0x128, 0x95, 0x2, 0x657, 0x656, 0x3, 0x2, 0x2, 0x2, 0x658, 0x65b, 
       0x3, 0x2, 0x2, 0x2, 0x659, 0x657, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 
       0x3, 0x2, 0x2, 0x2, 0x65a, 0x127, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x659, 
       0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 0x7, 0x8, 0x2, 0x2, 0x65d, 0x65e, 
       0x5, 0x19e, 0xd0, 0x2, 0x65e, 0x65f, 0x7, 0x4a, 0x2, 0x2, 0x65f, 
       0x667, 0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 0x7, 0x8, 0x2, 0x2, 0x661, 
       0x662, 0x5, 0x12a, 0x96, 0x2, 0x662, 0x663, 0x7, 0x4a, 0x2, 0x2, 
       0x663, 0x667, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x7, 0xe, 0x2, 0x2, 
       0x665, 0x667, 0x7, 0x4a, 0x2, 0x2, 0x666, 0x65c, 0x3, 0x2, 0x2, 0x2, 
       0x666, 0x660, 0x3, 0x2, 0x2, 0x2, 0x666, 0x664, 0x3, 0x2, 0x2, 0x2, 
       0x667, 0x129, 0x3, 0x2, 0x2, 0x2, 0x668, 0x669, 0x7, 0x68, 0x2, 0x2, 
       0x669, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x7, 0x34, 0x2, 0x2, 
       0x66b, 0x66c, 0x7, 0x3b, 0x2, 0x2, 0x66c, 0x66d, 0x5, 0x1a0, 0xd1, 
       0x2, 0x66d, 0x66e, 0x7, 0x3c, 0x2, 0x2, 0x66e, 0x66f, 0x5, 0x108, 
       0x85, 0x2, 0x66f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 0x7, 0x34, 
       0x2, 0x2, 0x671, 0x672, 0x7, 0x3b, 0x2, 0x2, 0x672, 0x673, 0x5, 0x1a0, 
       0xd1, 0x2, 0x673, 0x674, 0x7, 0x3c, 0x2, 0x2, 0x674, 0x675, 0x5, 
       0x10a, 0x86, 0x2, 0x675, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 
       0x7, 0xf, 0x2, 0x2, 0x677, 0x678, 0x5, 0x108, 0x85, 0x2, 0x678, 0x679, 
       0x7, 0x34, 0x2, 0x2, 0x679, 0x67a, 0x7, 0x3b, 0x2, 0x2, 0x67a, 0x67b, 
       0x5, 0x1a0, 0xd1, 0x2, 0x67b, 0x67c, 0x7, 0x3c, 0x2, 0x2, 0x67c, 
       0x67d, 0x7, 0x41, 0x2, 0x2, 0x67d, 0x131, 0x3, 0x2, 0x2, 0x2, 0x67e, 
       0x681, 0x5, 0x136, 0x9c, 0x2, 0x67f, 0x681, 0x5, 0x140, 0xa1, 0x2, 
       0x680, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x680, 0x67f, 0x3, 0x2, 0x2, 0x2, 
       0x681, 0x133, 0x3, 0x2, 0x2, 0x2, 0x682, 0x685, 0x5, 0x138, 0x9d, 
       0x2, 0x683, 0x685, 0x5, 0x142, 0xa2, 0x2, 0x684, 0x682, 0x3, 0x2, 
       0x2, 0x2, 0x684, 0x683, 0x3, 0x2, 0x2, 0x2, 0x685, 0x135, 0x3, 0x2, 
       0x2, 0x2, 0x686, 0x687, 0x7, 0x17, 0x2, 0x2, 0x687, 0x689, 0x7, 0x3b, 
       0x2, 0x2, 0x688, 0x68a, 0x5, 0x13a, 0x9e, 0x2, 0x689, 0x688, 0x3, 
       0x2, 0x2, 0x2, 0x689, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 0x3, 
       0x2, 0x2, 0x2, 0x68b, 0x68d, 0x7, 0x41, 0x2, 0x2, 0x68c, 0x68e, 0x5, 
       0x1a0, 0xd1, 0x2, 0x68d, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 
       0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x691, 
       0x7, 0x41, 0x2, 0x2, 0x690, 0x692, 0x5, 0x13c, 0x9f, 0x2, 0x691, 
       0x690, 0x3, 0x2, 0x2, 0x2, 0x691, 0x692, 0x3, 0x2, 0x2, 0x2, 0x692, 
       0x693, 0x3, 0x2, 0x2, 0x2, 0x693, 0x694, 0x7, 0x3c, 0x2, 0x2, 0x694, 
       0x695, 0x5, 0x108, 0x85, 0x2, 0x695, 0x137, 0x3, 0x2, 0x2, 0x2, 0x696, 
       0x697, 0x7, 0x17, 0x2, 0x2, 0x697, 0x699, 0x7, 0x3b, 0x2, 0x2, 0x698, 
       0x69a, 0x5, 0x13a, 0x9e, 0x2, 0x699, 0x698, 0x3, 0x2, 0x2, 0x2, 0x699, 
       0x69a, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x69b, 
       0x69d, 0x7, 0x41, 0x2, 0x2, 0x69c, 0x69e, 0x5, 0x1a0, 0xd1, 0x2, 
       0x69d, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69e, 0x3, 0x2, 0x2, 0x2, 
       0x69e, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x6a1, 0x7, 0x41, 0x2, 0x2, 
       0x6a0, 0x6a2, 0x5, 0x13c, 0x9f, 0x2, 0x6a1, 0x6a0, 0x3, 0x2, 0x2, 
       0x2, 0x6a1, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x3, 0x2, 0x2, 
       0x2, 0x6a3, 0x6a4, 0x7, 0x3c, 0x2, 0x2, 0x6a4, 0x6a5, 0x5, 0x10a, 
       0x86, 0x2, 0x6a5, 0x139, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a9, 0x5, 0x13e, 
       0xa0, 0x2, 0x6a7, 0x6a9, 0x5, 0x106, 0x84, 0x2, 0x6a8, 0x6a6, 0x3, 
       0x2, 0x2, 0x2, 0x6a8, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x13b, 0x3, 
       0x2, 0x2, 0x2, 0x6aa, 0x6ab, 0x5, 0x13e, 0xa0, 0x2, 0x6ab, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6b1, 0x5, 0x116, 0x8c, 0x2, 0x6ad, 0x6ae, 
       0x7, 0x42, 0x2, 0x2, 0x6ae, 0x6b0, 0x5, 0x116, 0x8c, 0x2, 0x6af, 
       0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
       0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b2, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
       0x6b5, 0x7, 0x17, 0x2, 0x2, 0x6b5, 0x6b9, 0x7, 0x3b, 0x2, 0x2, 0x6b6, 
       0x6b8, 0x5, 0x9e, 0x50, 0x2, 0x6b7, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b8, 
       0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bb, 
       0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6bd, 0x5, 0x76, 0x3c, 0x2, 0x6bd, 
       0x6be, 0x5, 0x72, 0x3a, 0x2, 0x6be, 0x6bf, 0x7, 0x4a, 0x2, 0x2, 0x6bf, 
       0x6c0, 0x5, 0x1a0, 0xd1, 0x2, 0x6c0, 0x6c1, 0x7, 0x3c, 0x2, 0x2, 
       0x6c1, 0x6c2, 0x5, 0x108, 0x85, 0x2, 0x6c2, 0x141, 0x3, 0x2, 0x2, 
       0x2, 0x6c3, 0x6c4, 0x7, 0x17, 0x2, 0x2, 0x6c4, 0x6c8, 0x7, 0x3b, 
       0x2, 0x2, 0x6c5, 0x6c7, 0x5, 0x9e, 0x50, 0x2, 0x6c6, 0x6c5, 0x3, 
       0x2, 0x2, 0x2, 0x6c7, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c6, 0x3, 
       0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6cb, 0x3, 
       0x2, 0x2, 0x2, 0x6ca, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x5, 
       0x76, 0x3c, 0x2, 0x6cc, 0x6cd, 0x5, 0x72, 0x3a, 0x2, 0x6cd, 0x6ce, 
       0x7, 0x4a, 0x2, 0x2, 0x6ce, 0x6cf, 0x5, 0x1a0, 0xd1, 0x2, 0x6cf, 
       0x6d0, 0x7, 0x3c, 0x2, 0x2, 0x6d0, 0x6d1, 0x5, 0x10a, 0x86, 0x2, 
       0x6d1, 0x143, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d4, 0x7, 0x6, 0x2, 0x2, 
       0x6d3, 0x6d5, 0x7, 0x68, 0x2, 0x2, 0x6d4, 0x6d3, 0x3, 0x2, 0x2, 0x2, 
       0x6d4, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x6d6, 0x3, 0x2, 0x2, 0x2, 
       0x6d6, 0x6d7, 0x7, 0x41, 0x2, 0x2, 0x6d7, 0x145, 0x3, 0x2, 0x2, 0x2, 
       0x6d8, 0x6da, 0x7, 0xd, 0x2, 0x2, 0x6d9, 0x6db, 0x7, 0x68, 0x2, 0x2, 
       0x6da, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 
       0x6db, 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6dd, 0x7, 0x41, 0x2, 0x2, 
       0x6dd, 0x147, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6e0, 0x7, 0x26, 0x2, 0x2, 
       0x6df, 0x6e1, 0x5, 0x1a0, 0xd1, 0x2, 0x6e0, 0x6df, 0x3, 0x2, 0x2, 
       0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x3, 0x2, 0x2, 
       0x2, 0x6e2, 0x6e3, 0x7, 0x41, 0x2, 0x2, 0x6e3, 0x149, 0x3, 0x2, 0x2, 
       0x2, 0x6e4, 0x6e5, 0x7, 0x2e, 0x2, 0x2, 0x6e5, 0x6e6, 0x5, 0x1a0, 
       0xd1, 0x2, 0x6e6, 0x6e7, 0x7, 0x41, 0x2, 0x2, 0x6e7, 0x14b, 0x3, 
       0x2, 0x2, 0x2, 0x6e8, 0x6e9, 0x7, 0x2c, 0x2, 0x2, 0x6e9, 0x6ea, 0x7, 
       0x3b, 0x2, 0x2, 0x6ea, 0x6eb, 0x5, 0x1a0, 0xd1, 0x2, 0x6eb, 0x6ec, 
       0x7, 0x3c, 0x2, 0x2, 0x6ec, 0x6ed, 0x5, 0xfe, 0x80, 0x2, 0x6ed, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0x31, 0x2, 0x2, 0x6ef, 0x6f0, 
       0x5, 0xfe, 0x80, 0x2, 0x6f0, 0x6f1, 0x5, 0x150, 0xa9, 0x2, 0x6f1, 
       0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x31, 0x2, 0x2, 0x6f3, 
       0x6f5, 0x5, 0xfe, 0x80, 0x2, 0x6f4, 0x6f6, 0x5, 0x150, 0xa9, 0x2, 
       0x6f5, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f6, 0x3, 0x2, 0x2, 0x2, 
       0x6f6, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f8, 0x5, 0x158, 0xad, 
       0x2, 0x6f8, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fb, 0x5, 0x15a, 
       0xae, 0x2, 0x6fa, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6f2, 0x3, 0x2, 
       0x2, 0x2, 0x6fa, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x14f, 0x3, 0x2, 
       0x2, 0x2, 0x6fc, 0x700, 0x5, 0x152, 0xaa, 0x2, 0x6fd, 0x6ff, 0x5, 
       0x152, 0xaa, 0x2, 0x6fe, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x702, 
       0x3, 0x2, 0x2, 0x2, 0x700, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 
       0x3, 0x2, 0x2, 0x2, 0x701, 0x151, 0x3, 0x2, 0x2, 0x2, 0x702, 0x700, 
       0x3, 0x2, 0x2, 0x2, 0x703, 0x704, 0x7, 0x9, 0x2, 0x2, 0x704, 0x705, 
       0x7, 0x3b, 0x2, 0x2, 0x705, 0x706, 0x5, 0x154, 0xab, 0x2, 0x706, 
       0x707, 0x7, 0x3c, 0x2, 0x2, 0x707, 0x708, 0x5, 0xfe, 0x80, 0x2, 0x708, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70b, 0x5, 0x9e, 0x50, 0x2, 0x70a, 
       0x709, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70c, 
       0x70a, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70d, 0x3, 0x2, 0x2, 0x2, 0x70d, 
       0x70f, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70f, 
       0x710, 0x5, 0x156, 0xac, 0x2, 0x710, 0x711, 0x5, 0x72, 0x3a, 0x2, 
       0x711, 0x155, 0x3, 0x2, 0x2, 0x2, 0x712, 0x717, 0x5, 0x7e, 0x40, 
       0x2, 0x713, 0x714, 0x7, 0x58, 0x2, 0x2, 0x714, 0x716, 0x5, 0x12, 
       0xa, 0x2, 0x715, 0x713, 0x3, 0x2, 0x2, 0x2, 0x716, 0x719, 0x3, 0x2, 
       0x2, 0x2, 0x717, 0x715, 0x3, 0x2, 0x2, 0x2, 0x717, 0x718, 0x3, 0x2, 
       0x2, 0x2, 0x718, 0x157, 0x3, 0x2, 0x2, 0x2, 0x719, 0x717, 0x3, 0x2, 
       0x2, 0x2, 0x71a, 0x71b, 0x7, 0x15, 0x2, 0x2, 0x71b, 0x71c, 0x5, 0xfe, 
       0x80, 0x2, 0x71c, 0x159, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x7, 0x31, 
       0x2, 0x2, 0x71e, 0x71f, 0x5, 0x15c, 0xaf, 0x2, 0x71f, 0x721, 0x5, 
       0xfe, 0x80, 0x2, 0x720, 0x722, 0x5, 0x150, 0xa9, 0x2, 0x721, 0x720, 
       0x3, 0x2, 0x2, 0x2, 0x721, 0x722, 0x3, 0x2, 0x2, 0x2, 0x722, 0x724, 
       0x3, 0x2, 0x2, 0x2, 0x723, 0x725, 0x5, 0x158, 0xad, 0x2, 0x724, 0x723, 
       0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 0x3, 0x2, 0x2, 0x2, 0x725, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x7, 0x3b, 0x2, 0x2, 0x727, 0x729, 
       0x5, 0x15e, 0xb0, 0x2, 0x728, 0x72a, 0x7, 0x41, 0x2, 0x2, 0x729, 
       0x728, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72a, 
       0x72b, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72c, 0x7, 0x3c, 0x2, 0x2, 0x72c, 
       0x15d, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x732, 0x5, 0x160, 0xb1, 0x2, 0x72e, 
       0x72f, 0x7, 0x41, 0x2, 0x2, 0x72f, 0x731, 0x5, 0x160, 0xb1, 0x2, 
       0x730, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x731, 0x734, 0x3, 0x2, 0x2, 0x2, 
       0x732, 0x730, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 0x3, 0x2, 0x2, 0x2, 
       0x733, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x734, 0x732, 0x3, 0x2, 0x2, 0x2, 
       0x735, 0x737, 0x5, 0x9e, 0x50, 0x2, 0x736, 0x735, 0x3, 0x2, 0x2, 
       0x2, 0x737, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x738, 0x736, 0x3, 0x2, 0x2, 
       0x2, 0x738, 0x739, 0x3, 0x2, 0x2, 0x2, 0x739, 0x73b, 0x3, 0x2, 0x2, 
       0x2, 0x73a, 0x738, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x73c, 0x5, 0x76, 0x3c, 
       0x2, 0x73c, 0x73d, 0x5, 0x72, 0x3a, 0x2, 0x73d, 0x73e, 0x7, 0x44, 
       0x2, 0x2, 0x73e, 0x73f, 0x5, 0x1a0, 0xd1, 0x2, 0x73f, 0x161, 0x3, 
       0x2, 0x2, 0x2, 0x740, 0x743, 0x5, 0x170, 0xb9, 0x2, 0x741, 0x743, 
       0x5, 0x198, 0xcd, 0x2, 0x742, 0x740, 0x3, 0x2, 0x2, 0x2, 0x742, 0x741, 
       0x3, 0x2, 0x2, 0x2, 0x743, 0x747, 0x3, 0x2, 0x2, 0x2, 0x744, 0x746, 
       0x5, 0x16a, 0xb6, 0x2, 0x745, 0x744, 0x3, 0x2, 0x2, 0x2, 0x746, 0x749, 
       0x3, 0x2, 0x2, 0x2, 0x747, 0x745, 0x3, 0x2, 0x2, 0x2, 0x747, 0x748, 
       0x3, 0x2, 0x2, 0x2, 0x748, 0x163, 0x3, 0x2, 0x2, 0x2, 0x749, 0x747, 
       0x3, 0x2, 0x2, 0x2, 0x74a, 0x768, 0x5, 0x2, 0x2, 0x2, 0x74b, 0x750, 
       0x5, 0x38, 0x1d, 0x2, 0x74c, 0x74d, 0x7, 0x3f, 0x2, 0x2, 0x74d, 0x74f, 
       0x7, 0x40, 0x2, 0x2, 0x74e, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x752, 
       0x3, 0x2, 0x2, 0x2, 0x750, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x750, 0x751, 
       0x3, 0x2, 0x2, 0x2, 0x751, 0x753, 0x3, 0x2, 0x2, 0x2, 0x752, 0x750, 
       0x3, 0x2, 0x2, 0x2, 0x753, 0x754, 0x7, 0x43, 0x2, 0x2, 0x754, 0x755, 
       0x7, 0xb, 0x2, 0x2, 0x755, 0x768, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 
       0x7, 0x32, 0x2, 0x2, 0x757, 0x758, 0x7, 0x43, 0x2, 0x2, 0x758, 0x768, 
       0x7, 0xb, 0x2, 0x2, 0x759, 0x768, 0x7, 0x2d, 0x2, 0x2, 0x75a, 0x75b, 
       0x5, 0x38, 0x1d, 0x2, 0x75b, 0x75c, 0x7, 0x43, 0x2, 0x2, 0x75c, 0x75d, 
       0x7, 0x2d, 0x2, 0x2, 0x75d, 0x768, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 
       0x7, 0x3b, 0x2, 0x2, 0x75f, 0x760, 0x5, 0x1a0, 0xd1, 0x2, 0x760, 
       0x761, 0x7, 0x3c, 0x2, 0x2, 0x761, 0x768, 0x3, 0x2, 0x2, 0x2, 0x762, 
       0x768, 0x5, 0x176, 0xbc, 0x2, 0x763, 0x768, 0x5, 0x17e, 0xc0, 0x2, 
       0x764, 0x768, 0x5, 0x184, 0xc3, 0x2, 0x765, 0x768, 0x5, 0x18a, 0xc6, 
       0x2, 0x766, 0x768, 0x5, 0x192, 0xca, 0x2, 0x767, 0x74a, 0x3, 0x2, 
       0x2, 0x2, 0x767, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x767, 0x756, 0x3, 0x2, 
       0x2, 0x2, 0x767, 0x759, 0x3, 0x2, 0x2, 0x2, 0x767, 0x75a, 0x3, 0x2, 
       0x2, 0x2, 0x767, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x767, 0x762, 0x3, 0x2, 
       0x2, 0x2, 0x767, 0x763, 0x3, 0x2, 0x2, 0x2, 0x767, 0x764, 0x3, 0x2, 
       0x2, 0x2, 0x767, 0x765, 0x3, 0x2, 0x2, 0x2, 0x767, 0x766, 0x3, 0x2, 
       0x2, 0x2, 0x768, 0x165, 0x3, 0x2, 0x2, 0x2, 0x769, 0x76a, 0x3, 0x2, 
       0x2, 0x2, 0x76a, 0x167, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x788, 0x5, 0x2, 
       0x2, 0x2, 0x76c, 0x771, 0x5, 0x38, 0x1d, 0x2, 0x76d, 0x76e, 0x7, 
       0x3f, 0x2, 0x2, 0x76e, 0x770, 0x7, 0x40, 0x2, 0x2, 0x76f, 0x76d, 
       0x3, 0x2, 0x2, 0x2, 0x770, 0x773, 0x3, 0x2, 0x2, 0x2, 0x771, 0x76f, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x3, 0x2, 0x2, 0x2, 0x772, 0x774, 
       0x3, 0x2, 0x2, 0x2, 0x773, 0x771, 0x3, 0x2, 0x2, 0x2, 0x774, 0x775, 
       0x7, 0x43, 0x2, 0x2, 0x775, 0x776, 0x7, 0xb, 0x2, 0x2, 0x776, 0x788, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x778, 0x7, 0x32, 0x2, 0x2, 0x778, 0x779, 
       0x7, 0x43, 0x2, 0x2, 0x779, 0x788, 0x7, 0xb, 0x2, 0x2, 0x77a, 0x788, 
       0x7, 0x2d, 0x2, 0x2, 0x77b, 0x77c, 0x5, 0x38, 0x1d, 0x2, 0x77c, 0x77d, 
       0x7, 0x43, 0x2, 0x2, 0x77d, 0x77e, 0x7, 0x2d, 0x2, 0x2, 0x77e, 0x788, 
       0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 0x7, 0x3b, 0x2, 0x2, 0x780, 0x781, 
       0x5, 0x1a0, 0xd1, 0x2, 0x781, 0x782, 0x7, 0x3c, 0x2, 0x2, 0x782, 
       0x788, 0x3, 0x2, 0x2, 0x2, 0x783, 0x788, 0x5, 0x176, 0xbc, 0x2, 0x784, 
       0x788, 0x5, 0x17e, 0xc0, 0x2, 0x785, 0x788, 0x5, 0x18a, 0xc6, 0x2, 
       0x786, 0x788, 0x5, 0x192, 0xca, 0x2, 0x787, 0x76b, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x787, 0x777, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x787, 0x77b, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x787, 0x783, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x784, 0x3, 0x2, 0x2, 0x2, 0x787, 0x785, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x786, 0x3, 0x2, 0x2, 0x2, 0x788, 0x169, 0x3, 0x2, 0x2, 
       0x2, 0x789, 0x78f, 0x5, 0x178, 0xbd, 0x2, 0x78a, 0x78f, 0x5, 0x180, 
       0xc1, 0x2, 0x78b, 0x78f, 0x5, 0x186, 0xc4, 0x2, 0x78c, 0x78f, 0x5, 
       0x18c, 0xc7, 0x2, 0x78d, 0x78f, 0x5, 0x194, 0xcb, 0x2, 0x78e, 0x789, 
       0x3, 0x2, 0x2, 0x2, 0x78e, 0x78a, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78b, 
       0x3, 0x2, 0x2, 0x2, 0x78e, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78d, 
       0x3, 0x2, 0x2, 0x2, 0x78f, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x790, 0x791, 
       0x3, 0x2, 0x2, 0x2, 0x791, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x792, 0x797, 
       0x5, 0x178, 0xbd, 0x2, 0x793, 0x797, 0x5, 0x180, 0xc1, 0x2, 0x794, 
       0x797, 0x5, 0x18c, 0xc7, 0x2, 0x795, 0x797, 0x5, 0x194, 0xcb, 0x2, 
       0x796, 0x792, 0x3, 0x2, 0x2, 0x2, 0x796, 0x793, 0x3, 0x2, 0x2, 0x2, 
       0x796, 0x794, 0x3, 0x2, 0x2, 0x2, 0x796, 0x795, 0x3, 0x2, 0x2, 0x2, 
       0x797, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x798, 0x7c1, 0x5, 0x2, 0x2, 0x2, 
       0x799, 0x79e, 0x5, 0x38, 0x1d, 0x2, 0x79a, 0x79b, 0x7, 0x3f, 0x2, 
       0x2, 0x79b, 0x79d, 0x7, 0x40, 0x2, 0x2, 0x79c, 0x79a, 0x3, 0x2, 0x2, 
       0x2, 0x79d, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79c, 0x3, 0x2, 0x2, 
       0x2, 0x79e, 0x79f, 0x3, 0x2, 0x2, 0x2, 0x79f, 0x7a1, 0x3, 0x2, 0x2, 
       0x2, 0x7a0, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a2, 0x7, 0x43, 0x2, 
       0x2, 0x7a2, 0x7a3, 0x7, 0xb, 0x2, 0x2, 0x7a3, 0x7c1, 0x3, 0x2, 0x2, 
       0x2, 0x7a4, 0x7a9, 0x5, 0x78, 0x3d, 0x2, 0x7a5, 0x7a6, 0x7, 0x3f, 
       0x2, 0x2, 0x7a6, 0x7a8, 0x7, 0x40, 0x2, 0x2, 0x7a7, 0x7a5, 0x3, 0x2, 
       0x2, 0x2, 0x7a8, 0x7ab, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7a7, 0x3, 0x2, 
       0x2, 0x2, 0x7a9, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7aa, 0x7ac, 0x3, 0x2, 
       0x2, 0x2, 0x7ab, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7ad, 0x7, 0x43, 
       0x2, 0x2, 0x7ad, 0x7ae, 0x7, 0xb, 0x2, 0x2, 0x7ae, 0x7c1, 0x3, 0x2, 
       0x2, 0x2, 0x7af, 0x7b0, 0x7, 0x32, 0x2, 0x2, 0x7b0, 0x7b1, 0x7, 0x43, 
       0x2, 0x2, 0x7b1, 0x7c1, 0x7, 0xb, 0x2, 0x2, 0x7b2, 0x7c1, 0x7, 0x2d, 
       0x2, 0x2, 0x7b3, 0x7b4, 0x5, 0x38, 0x1d, 0x2, 0x7b4, 0x7b5, 0x7, 
       0x43, 0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0x2d, 0x2, 0x2, 0x7b6, 0x7c1, 
       0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7b8, 0x7, 0x3b, 0x2, 0x2, 0x7b8, 0x7b9, 
       0x5, 0x1a0, 0xd1, 0x2, 0x7b9, 0x7ba, 0x7, 0x3c, 0x2, 0x2, 0x7ba, 
       0x7c1, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7c1, 0x5, 0x17a, 0xbe, 0x2, 0x7bc, 
       0x7c1, 0x5, 0x182, 0xc2, 0x2, 0x7bd, 0x7c1, 0x5, 0x188, 0xc5, 0x2, 
       0x7be, 0x7c1, 0x5, 0x18e, 0xc8, 0x2, 0x7bf, 0x7c1, 0x5, 0x196, 0xcc, 
       0x2, 0x7c0, 0x798, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x799, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7af, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7b3, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7bb, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7bd, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7bf, 0x3, 0x2, 0x2, 
       0x2, 0x7c1, 0x171, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 0x3, 0x2, 0x2, 
       0x2, 0x7c3, 0x173, 0x3, 0x2, 0x2, 0x2, 0x7c4, 0x7ec, 0x5, 0x2, 0x2, 
       0x2, 0x7c5, 0x7ca, 0x5, 0x38, 0x1d, 0x2, 0x7c6, 0x7c7, 0x7, 0x3f, 
       0x2, 0x2, 0x7c7, 0x7c9, 0x7, 0x40, 0x2, 0x2, 0x7c8, 0x7c6, 0x3, 0x2, 
       0x2, 0x2, 0x7c9, 0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7c8, 0x3, 0x2, 
       0x2, 0x2, 0x7ca, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x7cd, 0x3, 0x2, 
       0x2, 0x2, 0x7cc, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7ce, 0x7, 0x43, 
       0x2, 0x2, 0x7ce, 0x7cf, 0x7, 0xb, 0x2, 0x2, 0x7cf, 0x7ec, 0x3, 0x2, 
       0x2, 0x2, 0x7d0, 0x7d5, 0x5, 0x78, 0x3d, 0x2, 0x7d1, 0x7d2, 0x7, 
       0x3f, 0x2, 0x2, 0x7d2, 0x7d4, 0x7, 0x40, 0x2, 0x2, 0x7d3, 0x7d1, 
       0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d3, 
       0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d6, 0x7d8, 
       0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 
       0x7, 0x43, 0x2, 0x2, 0x7d9, 0x7da, 0x7, 0xb, 0x2, 0x2, 0x7da, 0x7ec, 
       0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x7, 0x32, 0x2, 0x2, 0x7dc, 0x7dd, 
       0x7, 0x43, 0x2, 0x2, 0x7dd, 0x7ec, 0x7, 0xb, 0x2, 0x2, 0x7de, 0x7ec, 
       0x7, 0x2d, 0x2, 0x2, 0x7df, 0x7e0, 0x5, 0x38, 0x1d, 0x2, 0x7e0, 0x7e1, 
       0x7, 0x43, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x2d, 0x2, 0x2, 0x7e2, 0x7ec, 
       0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0x3b, 0x2, 0x2, 0x7e4, 0x7e5, 
       0x5, 0x1a0, 0xd1, 0x2, 0x7e5, 0x7e6, 0x7, 0x3c, 0x2, 0x2, 0x7e6, 
       0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7ec, 0x5, 0x17a, 0xbe, 0x2, 0x7e8, 
       0x7ec, 0x5, 0x182, 0xc2, 0x2, 0x7e9, 0x7ec, 0x5, 0x18e, 0xc8, 0x2, 
       0x7ea, 0x7ec, 0x5, 0x196, 0xcc, 0x2, 0x7eb, 0x7c4, 0x3, 0x2, 0x2, 
       0x2, 0x7eb, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7d0, 0x3, 0x2, 0x2, 
       0x2, 0x7eb, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7de, 0x3, 0x2, 0x2, 
       0x2, 0x7eb, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7e3, 0x3, 0x2, 0x2, 
       0x2, 0x7eb, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7e8, 0x3, 0x2, 0x2, 
       0x2, 0x7eb, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ea, 0x3, 0x2, 0x2, 
       0x2, 0x7ec, 0x175, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7ef, 0x7, 0x21, 0x2, 
       0x2, 0x7ee, 0x7f0, 0x5, 0x2c, 0x17, 0x2, 0x7ef, 0x7ee, 0x3, 0x2, 
       0x2, 0x2, 0x7ef, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f4, 0x3, 0x2, 
       0x2, 0x2, 0x7f1, 0x7f3, 0x5, 0xe8, 0x75, 0x2, 0x7f2, 0x7f1, 0x3, 
       0x2, 0x2, 0x2, 0x7f3, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f4, 0x7f2, 0x3, 
       0x2, 0x2, 0x2, 0x7f4, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f7, 0x3, 
       0x2, 0x2, 0x2, 0x7f6, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7f7, 0x802, 0x7, 
       0x68, 0x2, 0x2, 0x7f8, 0x7fc, 0x7, 0x43, 0x2, 0x2, 0x7f9, 0x7fb, 
       0x5, 0xe8, 0x75, 0x2, 0x7fa, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fe, 
       0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fd, 
       0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7fc, 
       0x3, 0x2, 0x2, 0x2, 0x7ff, 0x801, 0x7, 0x68, 0x2, 0x2, 0x800, 0x7f8, 
       0x3, 0x2, 0x2, 0x2, 0x801, 0x804, 0x3, 0x2, 0x2, 0x2, 0x802, 0x800, 
       0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 0x3, 0x2, 0x2, 0x2, 0x803, 0x806, 
       0x3, 0x2, 0x2, 0x2, 0x804, 0x802, 0x3, 0x2, 0x2, 0x2, 0x805, 0x807, 
       0x5, 0x17c, 0xbf, 0x2, 0x806, 0x805, 0x3, 0x2, 0x2, 0x2, 0x806, 0x807, 
       0x3, 0x2, 0x2, 0x2, 0x807, 0x808, 0x3, 0x2, 0x2, 0x2, 0x808, 0x80a, 
       0x7, 0x3b, 0x2, 0x2, 0x809, 0x80b, 0x5, 0x190, 0xc9, 0x2, 0x80a, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80b, 
       0x80c, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x80e, 0x7, 0x3c, 0x2, 0x2, 0x80d, 
       0x80f, 0x5, 0x64, 0x33, 0x2, 0x80e, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x80e, 
       0x80f, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x841, 0x3, 0x2, 0x2, 0x2, 0x810, 
       0x811, 0x5, 0x3c, 0x1f, 0x2, 0x811, 0x812, 0x7, 0x43, 0x2, 0x2, 0x812, 
       0x814, 0x7, 0x21, 0x2, 0x2, 0x813, 0x815, 0x5, 0x2c, 0x17, 0x2, 0x814, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x814, 0x815, 0x3, 0x2, 0x2, 0x2, 0x815, 
       0x819, 0x3, 0x2, 0x2, 0x2, 0x816, 0x818, 0x5, 0xe8, 0x75, 0x2, 0x817, 
       0x816, 0x3, 0x2, 0x2, 0x2, 0x818, 0x81b, 0x3, 0x2, 0x2, 0x2, 0x819, 
       0x817, 0x3, 0x2, 0x2, 0x2, 0x819, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x81a, 
       0x81c, 0x3, 0x2, 0x2, 0x2, 0x81b, 0x819, 0x3, 0x2, 0x2, 0x2, 0x81c, 
       0x81e, 0x7, 0x68, 0x2, 0x2, 0x81d, 0x81f, 0x5, 0x17c, 0xbf, 0x2, 
       0x81e, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x81e, 0x81f, 0x3, 0x2, 0x2, 0x2, 
       0x81f, 0x820, 0x3, 0x2, 0x2, 0x2, 0x820, 0x822, 0x7, 0x3b, 0x2, 0x2, 
       0x821, 0x823, 0x5, 0x190, 0xc9, 0x2, 0x822, 0x821, 0x3, 0x2, 0x2, 
       0x2, 0x822, 0x823, 0x3, 0x2, 0x2, 0x2, 0x823, 0x824, 0x3, 0x2, 0x2, 
       0x2, 0x824, 0x826, 0x7, 0x3c, 0x2, 0x2, 0x825, 0x827, 0x5, 0x64, 
       0x33, 0x2, 0x826, 0x825, 0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 
       0x2, 0x2, 0x827, 0x841, 0x3, 0x2, 0x2, 0x2, 0x828, 0x829, 0x5, 0x162, 
       0xb2, 0x2, 0x829, 0x82a, 0x7, 0x43, 0x2, 0x2, 0x82a, 0x82c, 0x7, 
       0x21, 0x2, 0x2, 0x82b, 0x82d, 0x5, 0x2c, 0x17, 0x2, 0x82c, 0x82b, 
       0x3, 0x2, 0x2, 0x2, 0x82c, 0x82d, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x831, 
       0x3, 0x2, 0x2, 0x2, 0x82e, 0x830, 0x5, 0xe8, 0x75, 0x2, 0x82f, 0x82e, 
       0x3, 0x2, 0x2, 0x2, 0x830, 0x833, 0x3, 0x2, 0x2, 0x2, 0x831, 0x82f, 
       0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 0x3, 0x2, 0x2, 0x2, 0x832, 0x834, 
       0x3, 0x2, 0x2, 0x2, 0x833, 0x831, 0x3, 0x2, 0x2, 0x2, 0x834, 0x836, 
       0x7, 0x68, 0x2, 0x2, 0x835, 0x837, 0x5, 0x17c, 0xbf, 0x2, 0x836, 
       0x835, 0x3, 0x2, 0x2, 0x2, 0x836, 0x837, 0x3, 0x2, 0x2, 0x2, 0x837, 
       0x838, 0x3, 0x2, 0x2, 0x2, 0x838, 0x83a, 0x7, 0x3b, 0x2, 0x2, 0x839, 
       0x83b, 0x5, 0x190, 0xc9, 0x2, 0x83a, 0x839, 0x3, 0x2, 0x2, 0x2, 0x83a, 
       0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83c, 
       0x83e, 0x7, 0x3c, 0x2, 0x2, 0x83d, 0x83f, 0x5, 0x64, 0x33, 0x2, 0x83e, 
       0x83d, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 
       0x841, 0x3, 0x2, 0x2, 0x2, 0x840, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0x840, 
       0x810, 0x3, 0x2, 0x2, 0x2, 0x840, 0x828, 0x3, 0x2, 0x2, 0x2, 0x841, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x842, 0x843, 0x7, 0x43, 0x2, 0x2, 0x843, 
       0x845, 0x7, 0x21, 0x2, 0x2, 0x844, 0x846, 0x5, 0x2c, 0x17, 0x2, 0x845, 
       0x844, 0x3, 0x2, 0x2, 0x2, 0x845, 0x846, 0x3, 0x2, 0x2, 0x2, 0x846, 
       0x84a, 0x3, 0x2, 0x2, 0x2, 0x847, 0x849, 0x5, 0xe8, 0x75, 0x2, 0x848, 
       0x847, 0x3, 0x2, 0x2, 0x2, 0x849, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84a, 
       0x848, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84b, 
       0x84d, 0x3, 0x2, 0x2, 0x2, 0x84c, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x84d, 
       0x84f, 0x7, 0x68, 0x2, 0x2, 0x84e, 0x850, 0x5, 0x17c, 0xbf, 0x2, 
       0x84f, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x850, 0x3, 0x2, 0x2, 0x2, 
       0x850, 0x851, 0x3, 0x2, 0x2, 0x2, 0x851, 0x853, 0x7, 0x3b, 0x2, 0x2, 
       0x852, 0x854, 0x5, 0x190, 0xc9, 0x2, 0x853, 0x852, 0x3, 0x2, 0x2, 
       0x2, 0x853, 0x854, 0x3, 0x2, 0x2, 0x2, 0x854, 0x855, 0x3, 0x2, 0x2, 
       0x2, 0x855, 0x857, 0x7, 0x3c, 0x2, 0x2, 0x856, 0x858, 0x5, 0x64, 
       0x33, 0x2, 0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 0x858, 0x3, 0x2, 
       0x2, 0x2, 0x858, 0x179, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85b, 0x7, 0x21, 
       0x2, 0x2, 0x85a, 0x85c, 0x5, 0x2c, 0x17, 0x2, 0x85b, 0x85a, 0x3, 
       0x2, 0x2, 0x2, 0x85b, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85c, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x85d, 0x85f, 0x5, 0xe8, 0x75, 0x2, 0x85e, 0x85d, 
       0x3, 0x2, 0x2, 0x2, 0x85f, 0x862, 0x3, 0x2, 0x2, 0x2, 0x860, 0x85e, 
       0x3, 0x2, 0x2, 0x2, 0x860, 0x861, 0x3, 0x2, 0x2, 0x2, 0x861, 0x863, 
       0x3, 0x2, 0x2, 0x2, 0x862, 0x860, 0x3, 0x2, 0x2, 0x2, 0x863, 0x86e, 
       0x7, 0x68, 0x2, 0x2, 0x864, 0x868, 0x7, 0x43, 0x2, 0x2, 0x865, 0x867, 
       0x5, 0xe8, 0x75, 0x2, 0x866, 0x865, 0x3, 0x2, 0x2, 0x2, 0x867, 0x86a, 
       0x3, 0x2, 0x2, 0x2, 0x868, 0x866, 0x3, 0x2, 0x2, 0x2, 0x868, 0x869, 
       0x3, 0x2, 0x2, 0x2, 0x869, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86a, 0x868, 
       0x3, 0x2, 0x2, 0x2, 0x86b, 0x86d, 0x7, 0x68, 0x2, 0x2, 0x86c, 0x864, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x870, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86c, 
       0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 0x3, 0x2, 0x2, 0x2, 0x86f, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x870, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x871, 0x873, 
       0x5, 0x17c, 0xbf, 0x2, 0x872, 0x871, 0x3, 0x2, 0x2, 0x2, 0x872, 0x873, 
       0x3, 0x2, 0x2, 0x2, 0x873, 0x874, 0x3, 0x2, 0x2, 0x2, 0x874, 0x876, 
       0x7, 0x3b, 0x2, 0x2, 0x875, 0x877, 0x5, 0x190, 0xc9, 0x2, 0x876, 
       0x875, 0x3, 0x2, 0x2, 0x2, 0x876, 0x877, 0x3, 0x2, 0x2, 0x2, 0x877, 
       0x878, 0x3, 0x2, 0x2, 0x2, 0x878, 0x87a, 0x7, 0x3c, 0x2, 0x2, 0x879, 
       0x87b, 0x5, 0x64, 0x33, 0x2, 0x87a, 0x879, 0x3, 0x2, 0x2, 0x2, 0x87a, 
       0x87b, 0x3, 0x2, 0x2, 0x2, 0x87b, 0x895, 0x3, 0x2, 0x2, 0x2, 0x87c, 
       0x87d, 0x5, 0x3c, 0x1f, 0x2, 0x87d, 0x87e, 0x7, 0x43, 0x2, 0x2, 0x87e, 
       0x880, 0x7, 0x21, 0x2, 0x2, 0x87f, 0x881, 0x5, 0x2c, 0x17, 0x2, 0x880, 
       0x87f, 0x3, 0x2, 0x2, 0x2, 0x880, 0x881, 0x3, 0x2, 0x2, 0x2, 0x881, 
       0x885, 0x3, 0x2, 0x2, 0x2, 0x882, 0x884, 0x5, 0xe8, 0x75, 0x2, 0x883, 
       0x882, 0x3, 0x2, 0x2, 0x2, 0x884, 0x887, 0x3, 0x2, 0x2, 0x2, 0x885, 
       0x883, 0x3, 0x2, 0x2, 0x2, 0x885, 0x886, 0x3, 0x2, 0x2, 0x2, 0x886, 
       0x888, 0x3, 0x2, 0x2, 0x2, 0x887, 0x885, 0x3, 0x2, 0x2, 0x2, 0x888, 
       0x88a, 0x7, 0x68, 0x2, 0x2, 0x889, 0x88b, 0x5, 0x17c, 0xbf, 0x2, 
       0x88a, 0x889, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88b, 0x3, 0x2, 0x2, 0x2, 
       0x88b, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88e, 0x7, 0x3b, 0x2, 0x2, 
       0x88d, 0x88f, 0x5, 0x190, 0xc9, 0x2, 0x88e, 0x88d, 0x3, 0x2, 0x2, 
       0x2, 0x88e, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x890, 0x3, 0x2, 0x2, 
       0x2, 0x890, 0x892, 0x7, 0x3c, 0x2, 0x2, 0x891, 0x893, 0x5, 0x64, 
       0x33, 0x2, 0x892, 0x891, 0x3, 0x2, 0x2, 0x2, 0x892, 0x893, 0x3, 0x2, 
       0x2, 0x2, 0x893, 0x895, 0x3, 0x2, 0x2, 0x2, 0x894, 0x859, 0x3, 0x2, 
       0x2, 0x2, 0x894, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x895, 0x17b, 0x3, 0x2, 
       0x2, 0x2, 0x896, 0x89a, 0x5, 0x2c, 0x17, 0x2, 0x897, 0x898, 0x7, 
       0x46, 0x2, 0x2, 0x898, 0x89a, 0x7, 0x45, 0x2, 0x2, 0x899, 0x896, 
       0x3, 0x2, 0x2, 0x2, 0x899, 0x897, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x17d, 
       0x3, 0x2, 0x2, 0x2, 0x89b, 0x89c, 0x5, 0x162, 0xb2, 0x2, 0x89c, 0x89d, 
       0x7, 0x43, 0x2, 0x2, 0x89d, 0x89e, 0x7, 0x68, 0x2, 0x2, 0x89e, 0x8a9, 
       0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a0, 0x7, 0x2a, 0x2, 0x2, 0x8a0, 0x8a1, 
       0x7, 0x43, 0x2, 0x2, 0x8a1, 0x8a9, 0x7, 0x68, 0x2, 0x2, 0x8a2, 0x8a3, 
       0x5, 0x38, 0x1d, 0x2, 0x8a3, 0x8a4, 0x7, 0x43, 0x2, 0x2, 0x8a4, 0x8a5, 
       0x7, 0x2a, 0x2, 0x2, 0x8a5, 0x8a6, 0x7, 0x43, 0x2, 0x2, 0x8a6, 0x8a7, 
       0x7, 0x68, 0x2, 0x2, 0x8a7, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x89b, 
       0x3, 0x2, 0x2, 0x2, 0x8a8, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a2, 
       0x3, 0x2, 0x2, 0x2, 0x8a9, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ab, 
       0x7, 0x43, 0x2, 0x2, 0x8ab, 0x8ac, 0x7, 0x68, 0x2, 0x2, 0x8ac, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x8ad, 0x8ae, 0x7, 0x2a, 0x2, 0x2, 0x8ae, 0x8af, 
       0x7, 0x43, 0x2, 0x2, 0x8af, 0x8b7, 0x7, 0x68, 0x2, 0x2, 0x8b0, 0x8b1, 
       0x5, 0x38, 0x1d, 0x2, 0x8b1, 0x8b2, 0x7, 0x43, 0x2, 0x2, 0x8b2, 0x8b3, 
       0x7, 0x2a, 0x2, 0x2, 0x8b3, 0x8b4, 0x7, 0x43, 0x2, 0x2, 0x8b4, 0x8b5, 
       0x7, 0x68, 0x2, 0x2, 0x8b5, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8b6, 0x8ad, 
       0x3, 0x2, 0x2, 0x2, 0x8b6, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b7, 0x183, 
       0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8b9, 0x5, 0x3c, 0x1f, 0x2, 0x8b9, 0x8ba, 
       0x7, 0x3f, 0x2, 0x2, 0x8ba, 0x8bb, 0x5, 0x1a0, 0xd1, 0x2, 0x8bb, 
       0x8bc, 0x7, 0x40, 0x2, 0x2, 0x8bc, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x8bd, 
       0x8be, 0x5, 0x168, 0xb5, 0x2, 0x8be, 0x8bf, 0x7, 0x3f, 0x2, 0x2, 
       0x8bf, 0x8c0, 0x5, 0x1a0, 0xd1, 0x2, 0x8c0, 0x8c1, 0x7, 0x40, 0x2, 
       0x2, 0x8c1, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x8c2, 0x8b8, 0x3, 0x2, 0x2, 
       0x2, 0x8c2, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8c3, 0x8cb, 0x3, 0x2, 0x2, 
       0x2, 0x8c4, 0x8c5, 0x5, 0x166, 0xb4, 0x2, 0x8c5, 0x8c6, 0x7, 0x3f, 
       0x2, 0x2, 0x8c6, 0x8c7, 0x5, 0x1a0, 0xd1, 0x2, 0x8c7, 0x8c8, 0x7, 
       0x40, 0x2, 0x2, 0x8c8, 0x8ca, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8c4, 0x3, 
       0x2, 0x2, 0x2, 0x8ca, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8c9, 0x3, 
       0x2, 0x2, 0x2, 0x8cb, 0x8cc, 0x3, 0x2, 0x2, 0x2, 0x8cc, 0x185, 0x3, 
       0x2, 0x2, 0x2, 0x8cd, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8cf, 0x5, 
       0x16e, 0xb8, 0x2, 0x8cf, 0x8d0, 0x7, 0x3f, 0x2, 0x2, 0x8d0, 0x8d1, 
       0x5, 0x1a0, 0xd1, 0x2, 0x8d1, 0x8d2, 0x7, 0x40, 0x2, 0x2, 0x8d2, 
       0x8da, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d4, 0x5, 0x16c, 0xb7, 0x2, 0x8d4, 
       0x8d5, 0x7, 0x3f, 0x2, 0x2, 0x8d5, 0x8d6, 0x5, 0x1a0, 0xd1, 0x2, 
       0x8d6, 0x8d7, 0x7, 0x40, 0x2, 0x2, 0x8d7, 0x8d9, 0x3, 0x2, 0x2, 0x2, 
       0x8d8, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8dc, 0x3, 0x2, 0x2, 0x2, 
       0x8da, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x8db, 0x3, 0x2, 0x2, 0x2, 
       0x8db, 0x187, 0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8da, 0x3, 0x2, 0x2, 0x2, 
       0x8dd, 0x8de, 0x5, 0x3c, 0x1f, 0x2, 0x8de, 0x8df, 0x7, 0x3f, 0x2, 
       0x2, 0x8df, 0x8e0, 0x5, 0x1a0, 0xd1, 0x2, 0x8e0, 0x8e1, 0x7, 0x40, 
       0x2, 0x2, 0x8e1, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e3, 0x5, 0x174, 
       0xbb, 0x2, 0x8e3, 0x8e4, 0x7, 0x3f, 0x2, 0x2, 0x8e4, 0x8e5, 0x5, 
       0x1a0, 0xd1, 0x2, 0x8e5, 0x8e6, 0x7, 0x40, 0x2, 0x2, 0x8e6, 0x8e8, 
       0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8e2, 
       0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8e9, 0x8ea, 
       0x5, 0x172, 0xba, 0x2, 0x8ea, 0x8eb, 0x7, 0x3f, 0x2, 0x2, 0x8eb, 
       0x8ec, 0x5, 0x1a0, 0xd1, 0x2, 0x8ec, 0x8ed, 0x7, 0x40, 0x2, 0x2, 
       0x8ed, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8e9, 0x3, 0x2, 0x2, 0x2, 
       0x8ef, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8ee, 0x3, 0x2, 0x2, 0x2, 
       0x8f0, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x189, 0x3, 0x2, 0x2, 0x2, 
       0x8f2, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f4, 0x5, 0x3e, 0x20, 
       0x2, 0x8f4, 0x8f6, 0x7, 0x3b, 0x2, 0x2, 0x8f5, 0x8f7, 0x5, 0x190, 
       0xc9, 0x2, 0x8f6, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f7, 0x3, 0x2, 
       0x2, 0x2, 0x8f7, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f9, 0x7, 0x3c, 
       0x2, 0x2, 0x8f9, 0x938, 0x3, 0x2, 0x2, 0x2, 0x8fa, 0x8fb, 0x5, 0x38, 
       0x1d, 0x2, 0x8fb, 0x8fd, 0x7, 0x43, 0x2, 0x2, 0x8fc, 0x8fe, 0x5, 
       0x2c, 0x17, 0x2, 0x8fd, 0x8fc, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8fe, 
       0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x3, 0x2, 0x2, 0x2, 0x8ff, 0x900, 
       0x7, 0x68, 0x2, 0x2, 0x900, 0x902, 0x7, 0x3b, 0x2, 0x2, 0x901, 0x903, 
       0x5, 0x190, 0xc9, 0x2, 0x902, 0x901, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 
       0x3, 0x2, 0x2, 0x2, 0x903, 0x904, 0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 
       0x7, 0x3c, 0x2, 0x2, 0x905, 0x938, 0x3, 0x2, 0x2, 0x2, 0x906, 0x907, 
       0x5, 0x3c, 0x1f, 0x2, 0x907, 0x909, 0x7, 0x43, 0x2, 0x2, 0x908, 0x90a, 
       0x5, 0x2c, 0x17, 0x2, 0x909, 0x908, 0x3, 0x2, 0x2, 0x2, 0x909, 0x90a, 
       0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x90c, 
       0x7, 0x68, 0x2, 0x2, 0x90c, 0x90e, 0x7, 0x3b, 0x2, 0x2, 0x90d, 0x90f, 
       0x5, 0x190, 0xc9, 0x2, 0x90e, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x90e, 0x90f, 
       0x3, 0x2, 0x2, 0x2, 0x90f, 0x910, 0x3, 0x2, 0x2, 0x2, 0x910, 0x911, 
       0x7, 0x3c, 0x2, 0x2, 0x911, 0x938, 0x3, 0x2, 0x2, 0x2, 0x912, 0x913, 
       0x5, 0x162, 0xb2, 0x2, 0x913, 0x915, 0x7, 0x43, 0x2, 0x2, 0x914, 
       0x916, 0x5, 0x2c, 0x17, 0x2, 0x915, 0x914, 0x3, 0x2, 0x2, 0x2, 0x915, 
       0x916, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 0x3, 0x2, 0x2, 0x2, 0x917, 
       0x918, 0x7, 0x68, 0x2, 0x2, 0x918, 0x91a, 0x7, 0x3b, 0x2, 0x2, 0x919, 
       0x91b, 0x5, 0x190, 0xc9, 0x2, 0x91a, 0x919, 0x3, 0x2, 0x2, 0x2, 0x91a, 
       0x91b, 0x3, 0x2, 0x2, 0x2, 0x91b, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91c, 
       0x91d, 0x7, 0x3c, 0x2, 0x2, 0x91d, 0x938, 0x3, 0x2, 0x2, 0x2, 0x91e, 
       0x91f, 0x7, 0x2a, 0x2, 0x2, 0x91f, 0x921, 0x7, 0x43, 0x2, 0x2, 0x920, 
       0x922, 0x5, 0x2c, 0x17, 0x2, 0x921, 0x920, 0x3, 0x2, 0x2, 0x2, 0x921, 
       0x922, 0x3, 0x2, 0x2, 0x2, 0x922, 0x923, 0x3, 0x2, 0x2, 0x2, 0x923, 
       0x924, 0x7, 0x68, 0x2, 0x2, 0x924, 0x926, 0x7, 0x3b, 0x2, 0x2, 0x925, 
       0x927, 0x5, 0x190, 0xc9, 0x2, 0x926, 0x925, 0x3, 0x2, 0x2, 0x2, 0x926, 
       0x927, 0x3, 0x2, 0x2, 0x2, 0x927, 0x928, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x938, 0x7, 0x3c, 0x2, 0x2, 0x929, 0x92a, 0x5, 0x38, 0x1d, 0x2, 0x92a, 
       0x92b, 0x7, 0x43, 0x2, 0x2, 0x92b, 0x92c, 0x7, 0x2a, 0x2, 0x2, 0x92c, 
       0x92e, 0x7, 0x43, 0x2, 0x2, 0x92d, 0x92f, 0x5, 0x2c, 0x17, 0x2, 0x92e, 
       0x92d, 0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x92f, 
       0x930, 0x3, 0x2, 0x2, 0x2, 0x930, 0x931, 0x7, 0x68, 0x2, 0x2, 0x931, 
       0x933, 0x7, 0x3b, 0x2, 0x2, 0x932, 0x934, 0x5, 0x190, 0xc9, 0x2, 
       0x933, 0x932, 0x3, 0x2, 0x2, 0x2, 0x933, 0x934, 0x3, 0x2, 0x2, 0x2, 
       0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 0x936, 0x7, 0x3c, 0x2, 0x2, 
       0x936, 0x938, 0x3, 0x2, 0x2, 0x2, 0x937, 0x8f3, 0x3, 0x2, 0x2, 0x2, 
       0x937, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x937, 0x906, 0x3, 0x2, 0x2, 0x2, 
       0x937, 0x912, 0x3, 0x2, 0x2, 0x2, 0x937, 0x91e, 0x3, 0x2, 0x2, 0x2, 
       0x937, 0x929, 0x3, 0x2, 0x2, 0x2, 0x938, 0x18b, 0x3, 0x2, 0x2, 0x2, 
       0x939, 0x93b, 0x7, 0x43, 0x2, 0x2, 0x93a, 0x93c, 0x5, 0x2c, 0x17, 
       0x2, 0x93b, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93b, 0x93c, 0x3, 0x2, 0x2, 
       0x2, 0x93c, 0x93d, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x93e, 0x7, 0x68, 0x2, 
       0x2, 0x93e, 0x940, 0x7, 0x3b, 0x2, 0x2, 0x93f, 0x941, 0x5, 0x190, 
       0xc9, 0x2, 0x940, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x940, 0x941, 0x3, 0x2, 
       0x2, 0x2, 0x941, 0x942, 0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 0x7, 0x3c, 
       0x2, 0x2, 0x943, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x944, 0x945, 0x5, 0x3e, 
       0x20, 0x2, 0x945, 0x947, 0x7, 0x3b, 0x2, 0x2, 0x946, 0x948, 0x5, 
       0x190, 0xc9, 0x2, 0x947, 0x946, 0x3, 0x2, 0x2, 0x2, 0x947, 0x948, 
       0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 0x3, 0x2, 0x2, 0x2, 0x949, 0x94a, 
       0x7, 0x3c, 0x2, 0x2, 0x94a, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x94b, 0x94c, 
       0x5, 0x38, 0x1d, 0x2, 0x94c, 0x94e, 0x7, 0x43, 0x2, 0x2, 0x94d, 0x94f, 
       0x5, 0x2c, 0x17, 0x2, 0x94e, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 
       0x3, 0x2, 0x2, 0x2, 0x94f, 0x950, 0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 
       0x7, 0x68, 0x2, 0x2, 0x951, 0x953, 0x7, 0x3b, 0x2, 0x2, 0x952, 0x954, 
       0x5, 0x190, 0xc9, 0x2, 0x953, 0x952, 0x3, 0x2, 0x2, 0x2, 0x953, 0x954, 
       0x3, 0x2, 0x2, 0x2, 0x954, 0x955, 0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 
       0x7, 0x3c, 0x2, 0x2, 0x956, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x957, 0x958, 
       0x5, 0x3c, 0x1f, 0x2, 0x958, 0x95a, 0x7, 0x43, 0x2, 0x2, 0x959, 0x95b, 
       0x5, 0x2c, 0x17, 0x2, 0x95a, 0x959, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 
       0x3, 0x2, 0x2, 0x2, 0x95b, 0x95c, 0x3, 0x2, 0x2, 0x2, 0x95c, 0x95d, 
       0x7, 0x68, 0x2, 0x2, 0x95d, 0x95f, 0x7, 0x3b, 0x2, 0x2, 0x95e, 0x960, 
       0x5, 0x190, 0xc9, 0x2, 0x95f, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x960, 
       0x3, 0x2, 0x2, 0x2, 0x960, 0x961, 0x3, 0x2, 0x2, 0x2, 0x961, 0x962, 
       0x7, 0x3c, 0x2, 0x2, 0x962, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x963, 0x964, 
       0x7, 0x2a, 0x2, 0x2, 0x964, 0x966, 0x7, 0x43, 0x2, 0x2, 0x965, 0x967, 
       0x5, 0x2c, 0x17, 0x2, 0x966, 0x965, 0x3, 0x2, 0x2, 0x2, 0x966, 0x967, 
       0x3, 0x2, 0x2, 0x2, 0x967, 0x968, 0x3, 0x2, 0x2, 0x2, 0x968, 0x969, 
       0x7, 0x68, 0x2, 0x2, 0x969, 0x96b, 0x7, 0x3b, 0x2, 0x2, 0x96a, 0x96c, 
       0x5, 0x190, 0xc9, 0x2, 0x96b, 0x96a, 0x3, 0x2, 0x2, 0x2, 0x96b, 0x96c, 
       0x3, 0x2, 0x2, 0x2, 0x96c, 0x96d, 0x3, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x2, 0x96d, 0x97d, 0x7, 0x3c, 0x2, 0x2, 0x96e, 0x96f, 0x5, 
       0x38, 0x1d, 0x2, 0x96f, 0x970, 0x7, 0x43, 0x2, 0x2, 0x970, 0x971, 
       0x7, 0x2a, 0x2, 0x2, 0x971, 0x973, 0x7, 0x43, 0x2, 0x2, 0x972, 0x974, 
       0x5, 0x2c, 0x17, 0x2, 0x973, 0x972, 0x3, 0x2, 0x2, 0x2, 0x973, 0x974, 
       0x3, 0x2, 0x2, 0x2, 0x974, 0x975, 0x3, 0x2, 0x2, 0x2, 0x975, 0x976, 
       0x7, 0x68, 0x2, 0x2, 0x976, 0x978, 0x7, 0x3b, 0x2, 0x2, 0x977, 0x979, 
       0x5, 0x190, 0xc9, 0x2, 0x978, 0x977, 0x3, 0x2, 0x2, 0x2, 0x978, 0x979, 
       0x3, 0x2, 0x2, 0x2, 0x979, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x97b, 
       0x7, 0x3c, 0x2, 0x2, 0x97b, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x944, 
       0x3, 0x2, 0x2, 0x2, 0x97c, 0x94b, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x957, 
       0x3, 0x2, 0x2, 0x2, 0x97c, 0x963, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x96e, 
       0x3, 0x2, 0x2, 0x2, 0x97d, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x97e, 0x983, 
       0x5, 0x1a0, 0xd1, 0x2, 0x97f, 0x980, 0x7, 0x42, 0x2, 0x2, 0x980, 
       0x982, 0x5, 0x1a0, 0xd1, 0x2, 0x981, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x982, 
       0x985, 0x3, 0x2, 0x2, 0x2, 0x983, 0x981, 0x3, 0x2, 0x2, 0x2, 0x983, 
       0x984, 0x3, 0x2, 0x2, 0x2, 0x984, 0x191, 0x3, 0x2, 0x2, 0x2, 0x985, 
       0x983, 0x3, 0x2, 0x2, 0x2, 0x986, 0x987, 0x5, 0x3c, 0x1f, 0x2, 0x987, 
       0x989, 0x7, 0x5c, 0x2, 0x2, 0x988, 0x98a, 0x5, 0x2c, 0x17, 0x2, 0x989, 
       0x988, 0x3, 0x2, 0x2, 0x2, 0x989, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x98a, 
       0x98b, 0x3, 0x2, 0x2, 0x2, 0x98b, 0x98c, 0x7, 0x68, 0x2, 0x2, 0x98c, 
       0x9b6, 0x3, 0x2, 0x2, 0x2, 0x98d, 0x98e, 0x5, 0xe, 0x8, 0x2, 0x98e, 
       0x990, 0x7, 0x5c, 0x2, 0x2, 0x98f, 0x991, 0x5, 0x2c, 0x17, 0x2, 0x990, 
       0x98f, 0x3, 0x2, 0x2, 0x2, 0x990, 0x991, 0x3, 0x2, 0x2, 0x2, 0x991, 
       0x992, 0x3, 0x2, 0x2, 0x2, 0x992, 0x993, 0x7, 0x68, 0x2, 0x2, 0x993, 
       0x9b6, 0x3, 0x2, 0x2, 0x2, 0x994, 0x995, 0x5, 0x162, 0xb2, 0x2, 0x995, 
       0x997, 0x7, 0x5c, 0x2, 0x2, 0x996, 0x998, 0x5, 0x2c, 0x17, 0x2, 0x997, 
       0x996, 0x3, 0x2, 0x2, 0x2, 0x997, 0x998, 0x3, 0x2, 0x2, 0x2, 0x998, 
       0x999, 0x3, 0x2, 0x2, 0x2, 0x999, 0x99a, 0x7, 0x68, 0x2, 0x2, 0x99a, 
       0x9b6, 0x3, 0x2, 0x2, 0x2, 0x99b, 0x99c, 0x7, 0x2a, 0x2, 0x2, 0x99c, 
       0x99e, 0x7, 0x5c, 0x2, 0x2, 0x99d, 0x99f, 0x5, 0x2c, 0x17, 0x2, 0x99e, 
       0x99d, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x99f, 
       0x9a0, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9b6, 0x7, 0x68, 0x2, 0x2, 0x9a1, 
       0x9a2, 0x5, 0x38, 0x1d, 0x2, 0x9a2, 0x9a3, 0x7, 0x43, 0x2, 0x2, 0x9a3, 
       0x9a4, 0x7, 0x2a, 0x2, 0x2, 0x9a4, 0x9a6, 0x7, 0x5c, 0x2, 0x2, 0x9a5, 
       0x9a7, 0x5, 0x2c, 0x17, 0x2, 0x9a6, 0x9a5, 0x3, 0x2, 0x2, 0x2, 0x9a6, 
       0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a7, 0x9a8, 0x3, 0x2, 0x2, 0x2, 0x9a8, 
       0x9a9, 0x7, 0x68, 0x2, 0x2, 0x9a9, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9aa, 
       0x9ab, 0x5, 0x12, 0xa, 0x2, 0x9ab, 0x9ad, 0x7, 0x5c, 0x2, 0x2, 0x9ac, 
       0x9ae, 0x5, 0x2c, 0x17, 0x2, 0x9ad, 0x9ac, 0x3, 0x2, 0x2, 0x2, 0x9ad, 
       0x9ae, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x9af, 
       0x9b0, 0x7, 0x21, 0x2, 0x2, 0x9b0, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9b1, 
       0x9b2, 0x5, 0x20, 0x11, 0x2, 0x9b2, 0x9b3, 0x7, 0x5c, 0x2, 0x2, 0x9b3, 
       0x9b4, 0x7, 0x21, 0x2, 0x2, 0x9b4, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9b5, 
       0x986, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x98d, 0x3, 0x2, 0x2, 0x2, 0x9b5, 
       0x994, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x9b5, 
       0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9aa, 0x3, 0x2, 0x2, 0x2, 0x9b5, 
       0x9b1, 0x3, 0x2, 0x2, 0x2, 0x9b6, 0x193, 0x3, 0x2, 0x2, 0x2, 0x9b7, 
       0x9b9, 0x7, 0x5c, 0x2, 0x2, 0x9b8, 0x9ba, 0x5, 0x2c, 0x17, 0x2, 0x9b9, 
       0x9b8, 0x3, 0x2, 0x2, 0x2, 0x9b9, 0x9ba, 0x3, 0x2, 0x2, 0x2, 0x9ba, 
       0x9bb, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9bc, 0x7, 0x68, 0x2, 0x2, 0x9bc, 
       0x195, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9be, 0x5, 0x3c, 0x1f, 0x2, 0x9be, 
       0x9c0, 0x7, 0x5c, 0x2, 0x2, 0x9bf, 0x9c1, 0x5, 0x2c, 0x17, 0x2, 0x9c0, 
       0x9bf, 0x3, 0x2, 0x2, 0x2, 0x9c0, 0x9c1, 0x3, 0x2, 0x2, 0x2, 0x9c1, 
       0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9c2, 0x9c3, 0x7, 0x68, 0x2, 0x2, 0x9c3, 
       0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9c4, 0x9c5, 0x5, 0xe, 0x8, 0x2, 0x9c5, 
       0x9c7, 0x7, 0x5c, 0x2, 0x2, 0x9c6, 0x9c8, 0x5, 0x2c, 0x17, 0x2, 0x9c7, 
       0x9c6, 0x3, 0x2, 0x2, 0x2, 0x9c7, 0x9c8, 0x3, 0x2, 0x2, 0x2, 0x9c8, 
       0x9c9, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9ca, 0x7, 0x68, 0x2, 0x2, 0x9ca, 
       0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9cb, 0x9cc, 0x7, 0x2a, 0x2, 0x2, 0x9cc, 
       0x9ce, 0x7, 0x5c, 0x2, 0x2, 0x9cd, 0x9cf, 0x5, 0x2c, 0x17, 0x2, 0x9ce, 
       0x9cd, 0x3, 0x2, 0x2, 0x2, 0x9ce, 0x9cf, 0x3, 0x2, 0x2, 0x2, 0x9cf, 
       0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9d0, 0x9e6, 0x7, 0x68, 0x2, 0x2, 0x9d1, 
       0x9d2, 0x5, 0x38, 0x1d, 0x2, 0x9d2, 0x9d3, 0x7, 0x43, 0x2, 0x2, 0x9d3, 
       0x9d4, 0x7, 0x2a, 0x2, 0x2, 0x9d4, 0x9d6, 0x7, 0x5c, 0x2, 0x2, 0x9d5, 
       0x9d7, 0x5, 0x2c, 0x17, 0x2, 0x9d6, 0x9d5, 0x3, 0x2, 0x2, 0x2, 0x9d6, 
       0x9d7, 0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9d8, 0x3, 0x2, 0x2, 0x2, 0x9d8, 
       0x9d9, 0x7, 0x68, 0x2, 0x2, 0x9d9, 0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9da, 
       0x9db, 0x5, 0x12, 0xa, 0x2, 0x9db, 0x9dd, 0x7, 0x5c, 0x2, 0x2, 0x9dc, 
       0x9de, 0x5, 0x2c, 0x17, 0x2, 0x9dd, 0x9dc, 0x3, 0x2, 0x2, 0x2, 0x9dd, 
       0x9de, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9df, 0x3, 0x2, 0x2, 0x2, 0x9df, 
       0x9e0, 0x7, 0x21, 0x2, 0x2, 0x9e0, 0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9e1, 
       0x9e2, 0x5, 0x20, 0x11, 0x2, 0x9e2, 0x9e3, 0x7, 0x5c, 0x2, 0x2, 0x9e3, 
       0x9e4, 0x7, 0x21, 0x2, 0x2, 0x9e4, 0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9e5, 
       0x9bd, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9c4, 0x3, 0x2, 0x2, 0x2, 0x9e5, 
       0x9cb, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9d1, 0x3, 0x2, 0x2, 0x2, 0x9e5, 
       0x9da, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e1, 0x3, 0x2, 0x2, 0x2, 0x9e6, 
       0x197, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9e8, 0x7, 0x21, 0x2, 0x2, 0x9e8, 
       0x9e9, 0x5, 0x6, 0x4, 0x2, 0x9e9, 0x9eb, 0x5, 0x19a, 0xce, 0x2, 0x9ea, 
       0x9ec, 0x5, 0x22, 0x12, 0x2, 0x9eb, 0x9ea, 0x3, 0x2, 0x2, 0x2, 0x9eb, 
       0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9ec, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0x9ed, 
       0x9ee, 0x7, 0x21, 0x2, 0x2, 0x9ee, 0x9ef, 0x5, 0x10, 0x9, 0x2, 0x9ef, 
       0x9f1, 0x5, 0x19a, 0xce, 0x2, 0x9f0, 0x9f2, 0x5, 0x22, 0x12, 0x2, 
       0x9f1, 0x9f0, 0x3, 0x2, 0x2, 0x2, 0x9f1, 0x9f2, 0x3, 0x2, 0x2, 0x2, 
       0x9f2, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0x9f3, 0x9f4, 0x7, 0x21, 0x2, 0x2, 
       0x9f4, 0x9f5, 0x5, 0x6, 0x4, 0x2, 0x9f5, 0x9f6, 0x5, 0x22, 0x12, 
       0x2, 0x9f6, 0x9f7, 0x5, 0xfa, 0x7e, 0x2, 0x9f7, 0x9fe, 0x3, 0x2, 
       0x2, 0x2, 0x9f8, 0x9f9, 0x7, 0x21, 0x2, 0x2, 0x9f9, 0x9fa, 0x5, 0x10, 
       0x9, 0x2, 0x9fa, 0x9fb, 0x5, 0x22, 0x12, 0x2, 0x9fb, 0x9fc, 0x5, 
       0xfa, 0x7e, 0x2, 0x9fc, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9e7, 
       0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9ed, 0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9f3, 
       0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9fe, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x9ff, 0xa03, 0x5, 0x19c, 0xcf, 0x2, 0xa00, 0xa02, 
       0x5, 0x19c, 0xcf, 0x2, 0xa01, 0xa00, 0x3, 0x2, 0x2, 0x2, 0xa02, 0xa05, 
       0x3, 0x2, 0x2, 0x2, 0xa03, 0xa01, 0x3, 0x2, 0x2, 0x2, 0xa03, 0xa04, 
       0x3, 0x2, 0x2, 0x2, 0xa04, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xa05, 0xa03, 
       0x3, 0x2, 0x2, 0x2, 0xa06, 0xa08, 0x5, 0xe8, 0x75, 0x2, 0xa07, 0xa06, 
       0x3, 0x2, 0x2, 0x2, 0xa08, 0xa0b, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa07, 
       0x3, 0x2, 0x2, 0x2, 0xa09, 0xa0a, 0x3, 0x2, 0x2, 0x2, 0xa0a, 0xa0c, 
       0x3, 0x2, 0x2, 0x2, 0xa0b, 0xa09, 0x3, 0x2, 0x2, 0x2, 0xa0c, 0xa0d, 
       0x7, 0x3f, 0x2, 0x2, 0xa0d, 0xa0e, 0x5, 0x1a0, 0xd1, 0x2, 0xa0e, 
       0xa0f, 0x7, 0x40, 0x2, 0x2, 0xa0f, 0x19d, 0x3, 0x2, 0x2, 0x2, 0xa10, 
       0xa11, 0x5, 0x1a0, 0xd1, 0x2, 0xa11, 0x19f, 0x3, 0x2, 0x2, 0x2, 0xa12, 
       0xa15, 0x5, 0x1a2, 0xd2, 0x2, 0xa13, 0xa15, 0x5, 0x1aa, 0xd6, 0x2, 
       0xa14, 0xa12, 0x3, 0x2, 0x2, 0x2, 0xa14, 0xa13, 0x3, 0x2, 0x2, 0x2, 
       0xa15, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0xa16, 0xa17, 0x5, 0x1a4, 0xd3, 
       0x2, 0xa17, 0xa18, 0x7, 0x5b, 0x2, 0x2, 0xa18, 0xa19, 0x5, 0x1a8, 
       0xd5, 0x2, 0xa19, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0xa1a, 0xa25, 0x7, 0x68, 
       0x2, 0x2, 0xa1b, 0xa1d, 0x7, 0x3b, 0x2, 0x2, 0xa1c, 0xa1e, 0x5, 0x98, 
       0x4d, 0x2, 0xa1d, 0xa1c, 0x3, 0x2, 0x2, 0x2, 0xa1d, 0xa1e, 0x3, 0x2, 
       0x2, 0x2, 0xa1e, 0xa1f, 0x3, 0x2, 0x2, 0x2, 0xa1f, 0xa25, 0x7, 0x3c, 
       0x2, 0x2, 0xa20, 0xa21, 0x7, 0x3b, 0x2, 0x2, 0xa21, 0xa22, 0x5, 0x1a6, 
       0xd4, 0x2, 0xa22, 0xa23, 0x7, 0x3c, 0x2, 0x2, 0xa23, 0xa25, 0x3, 
       0x2, 0x2, 0x2, 0xa24, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0xa24, 0xa1b, 0x3, 
       0x2, 0x2, 0x2, 0xa24, 0xa20, 0x3, 0x2, 0x2, 0x2, 0xa25, 0x1a5, 0x3, 
       0x2, 0x2, 0x2, 0xa26, 0xa2b, 0x7, 0x68, 0x2, 0x2, 0xa27, 0xa28, 0x7, 
       0x42, 0x2, 0x2, 0xa28, 0xa2a, 0x7, 0x68, 0x2, 0x2, 0xa29, 0xa27, 
       0x3, 0x2, 0x2, 0x2, 0xa2a, 0xa2d, 0x3, 0x2, 0x2, 0x2, 0xa2b, 0xa29, 
       0x3, 0x2, 0x2, 0x2, 0xa2b, 0xa2c, 0x3, 0x2, 0x2, 0x2, 0xa2c, 0x1a7, 
       0x3, 0x2, 0x2, 0x2, 0xa2d, 0xa2b, 0x3, 0x2, 0x2, 0x2, 0xa2e, 0xa31, 
       0x5, 0x1a0, 0xd1, 0x2, 0xa2f, 0xa31, 0x5, 0xfe, 0x80, 0x2, 0xa30, 
       0xa2e, 0x3, 0x2, 0x2, 0x2, 0xa30, 0xa2f, 0x3, 0x2, 0x2, 0x2, 0xa31, 
       0x1a9, 0x3, 0x2, 0x2, 0x2, 0xa32, 0xa35, 0x5, 0x1b2, 0xda, 0x2, 0xa33, 
       0xa35, 0x5, 0x1ac, 0xd7, 0x2, 0xa34, 0xa32, 0x3, 0x2, 0x2, 0x2, 0xa34, 
       0xa33, 0x3, 0x2, 0x2, 0x2, 0xa35, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0xa36, 
       0xa37, 0x5, 0x1ae, 0xd8, 0x2, 0xa37, 0xa38, 0x5, 0x1b0, 0xd9, 0x2, 
       0xa38, 0xa39, 0x5, 0x1a0, 0xd1, 0x2, 0xa39, 0x1ad, 0x3, 0x2, 0x2, 
       0x2, 0xa3a, 0xa3e, 0x5, 0x3c, 0x1f, 0x2, 0xa3b, 0xa3e, 0x5, 0x17e, 
       0xc0, 0x2, 0xa3c, 0xa3e, 0x5, 0x184, 0xc3, 0x2, 0xa3d, 0xa3a, 0x3, 
       0x2, 0x2, 0x2, 0xa3d, 0xa3b, 0x3, 0x2, 0x2, 0x2, 0xa3d, 0xa3c, 0x3, 
       0x2, 0x2, 0x2, 0xa3e, 0x1af, 0x3, 0x2, 0x2, 0x2, 0xa3f, 0xa40, 0x9, 
       0x5, 0x2, 0x2, 0xa40, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0xa41, 0xa49, 0x5, 
       0x1b4, 0xdb, 0x2, 0xa42, 0xa43, 0x5, 0x1b4, 0xdb, 0x2, 0xa43, 0xa44, 
       0x7, 0x49, 0x2, 0x2, 0xa44, 0xa45, 0x5, 0x1a0, 0xd1, 0x2, 0xa45, 
       0xa46, 0x7, 0x4a, 0x2, 0x2, 0xa46, 0xa47, 0x5, 0x1b2, 0xda, 0x2, 
       0xa47, 0xa49, 0x3, 0x2, 0x2, 0x2, 0xa48, 0xa41, 0x3, 0x2, 0x2, 0x2, 
       0xa48, 0xa42, 0x3, 0x2, 0x2, 0x2, 0xa49, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
       0xa4a, 0xa4b, 0x8, 0xdb, 0x1, 0x2, 0xa4b, 0xa4c, 0x5, 0x1b6, 0xdc, 
       0x2, 0xa4c, 0xa52, 0x3, 0x2, 0x2, 0x2, 0xa4d, 0xa4e, 0xc, 0x3, 0x2, 
       0x2, 0xa4e, 0xa4f, 0x7, 0x50, 0x2, 0x2, 0xa4f, 0xa51, 0x5, 0x1b6, 
       0xdc, 0x2, 0xa50, 0xa4d, 0x3, 0x2, 0x2, 0x2, 0xa51, 0xa54, 0x3, 0x2, 
       0x2, 0x2, 0xa52, 0xa50, 0x3, 0x2, 0x2, 0x2, 0xa52, 0xa53, 0x3, 0x2, 
       0x2, 0x2, 0xa53, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0xa54, 0xa52, 0x3, 0x2, 
       0x2, 0x2, 0xa55, 0xa56, 0x8, 0xdc, 0x1, 0x2, 0xa56, 0xa57, 0x5, 0x1b8, 
       0xdd, 0x2, 0xa57, 0xa5d, 0x3, 0x2, 0x2, 0x2, 0xa58, 0xa59, 0xc, 0x3, 
       0x2, 0x2, 0xa59, 0xa5a, 0x7, 0x4f, 0x2, 0x2, 0xa5a, 0xa5c, 0x5, 0x1b8, 
       0xdd, 0x2, 0xa5b, 0xa58, 0x3, 0x2, 0x2, 0x2, 0xa5c, 0xa5f, 0x3, 0x2, 
       0x2, 0x2, 0xa5d, 0xa5b, 0x3, 0x2, 0x2, 0x2, 0xa5d, 0xa5e, 0x3, 0x2, 
       0x2, 0x2, 0xa5e, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0xa5f, 0xa5d, 0x3, 0x2, 
       0x2, 0x2, 0xa60, 0xa61, 0x8, 0xdd, 0x1, 0x2, 0xa61, 0xa62, 0x5, 0x1ba, 
       0xde, 0x2, 0xa62, 0xa68, 0x3, 0x2, 0x2, 0x2, 0xa63, 0xa64, 0xc, 0x3, 
       0x2, 0x2, 0xa64, 0xa65, 0x7, 0x58, 0x2, 0x2, 0xa65, 0xa67, 0x5, 0x1ba, 
       0xde, 0x2, 0xa66, 0xa63, 0x3, 0x2, 0x2, 0x2, 0xa67, 0xa6a, 0x3, 0x2, 
       0x2, 0x2, 0xa68, 0xa66, 0x3, 0x2, 0x2, 0x2, 0xa68, 0xa69, 0x3, 0x2, 
       0x2, 0x2, 0xa69, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa68, 0x3, 0x2, 
       0x2, 0x2, 0xa6b, 0xa6c, 0x8, 0xde, 0x1, 0x2, 0xa6c, 0xa6d, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa6d, 0xa73, 0x3, 0x2, 0x2, 0x2, 0xa6e, 0xa6f, 0xc, 0x3, 
       0x2, 0x2, 0xa6f, 0xa70, 0x7, 0x59, 0x2, 0x2, 0xa70, 0xa72, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa71, 0xa6e, 0x3, 0x2, 0x2, 0x2, 0xa72, 0xa75, 0x3, 0x2, 
       0x2, 0x2, 0xa73, 0xa71, 0x3, 0x2, 0x2, 0x2, 0xa73, 0xa74, 0x3, 0x2, 
       0x2, 0x2, 0xa74, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0xa75, 0xa73, 0x3, 0x2, 
       0x2, 0x2, 0xa76, 0xa77, 0x8, 0xdf, 0x1, 0x2, 0xa77, 0xa78, 0x5, 0x1be, 
       0xe0, 0x2, 0xa78, 0xa7e, 0x3, 0x2, 0x2, 0x2, 0xa79, 0xa7a, 0xc, 0x3, 
       0x2, 0x2, 0xa7a, 0xa7b, 0x7, 0x57, 0x2, 0x2, 0xa7b, 0xa7d, 0x5, 0x1be, 
       0xe0, 0x2, 0xa7c, 0xa79, 0x3, 0x2, 0x2, 0x2, 0xa7d, 0xa80, 0x3, 0x2, 
       0x2, 0x2, 0xa7e, 0xa7c, 0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa7f, 0x3, 0x2, 
       0x2, 0x2, 0xa7f, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0xa80, 0xa7e, 0x3, 0x2, 
       0x2, 0x2, 0xa81, 0xa82, 0x8, 0xe0, 0x1, 0x2, 0xa82, 0xa83, 0x5, 0x1c0, 
       0xe1, 0x2, 0xa83, 0xa8c, 0x3, 0x2, 0x2, 0x2, 0xa84, 0xa85, 0xc, 0x4, 
       0x2, 0x2, 0xa85, 0xa86, 0x7, 0x4b, 0x2, 0x2, 0xa86, 0xa8b, 0x5, 0x1c0, 
       0xe1, 0x2, 0xa87, 0xa88, 0xc, 0x3, 0x2, 0x2, 0xa88, 0xa89, 0x7, 0x4e, 
       0x2, 0x2, 0xa89, 0xa8b, 0x5, 0x1c0, 0xe1, 0x2, 0xa8a, 0xa84, 0x3, 
       0x2, 0x2, 0x2, 0xa8a, 0xa87, 0x3, 0x2, 0x2, 0x2, 0xa8b, 0xa8e, 0x3, 
       0x2, 0x2, 0x2, 0xa8c, 0xa8a, 0x3, 0x2, 0x2, 0x2, 0xa8c, 0xa8d, 0x3, 
       0x2, 0x2, 0x2, 0xa8d, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0xa8e, 0xa8c, 0x3, 
       0x2, 0x2, 0x2, 0xa8f, 0xa90, 0x8, 0xe1, 0x1, 0x2, 0xa90, 0xa91, 0x5, 
       0x1c2, 0xe2, 0x2, 0xa91, 0xaa3, 0x3, 0x2, 0x2, 0x2, 0xa92, 0xa93, 
       0xc, 0x7, 0x2, 0x2, 0xa93, 0xa94, 0x7, 0x46, 0x2, 0x2, 0xa94, 0xaa2, 
       0x5, 0x1c2, 0xe2, 0x2, 0xa95, 0xa96, 0xc, 0x6, 0x2, 0x2, 0xa96, 0xa97, 
       0x7, 0x45, 0x2, 0x2, 0xa97, 0xaa2, 0x5, 0x1c2, 0xe2, 0x2, 0xa98, 
       0xa99, 0xc, 0x5, 0x2, 0x2, 0xa99, 0xa9a, 0x7, 0x4c, 0x2, 0x2, 0xa9a, 
       0xaa2, 0x5, 0x1c2, 0xe2, 0x2, 0xa9b, 0xa9c, 0xc, 0x4, 0x2, 0x2, 0xa9c, 
       0xa9d, 0x7, 0x4d, 0x2, 0x2, 0xa9d, 0xaa2, 0x5, 0x1c2, 0xe2, 0x2, 
       0xa9e, 0xa9f, 0xc, 0x3, 0x2, 0x2, 0xa9f, 0xaa0, 0x7, 0x1c, 0x2, 0x2, 
       0xaa0, 0xaa2, 0x5, 0xe, 0x8, 0x2, 0xaa1, 0xa92, 0x3, 0x2, 0x2, 0x2, 
       0xaa1, 0xa95, 0x3, 0x2, 0x2, 0x2, 0xaa1, 0xa98, 0x3, 0x2, 0x2, 0x2, 
       0xaa1, 0xa9b, 0x3, 0x2, 0x2, 0x2, 0xaa1, 0xa9e, 0x3, 0x2, 0x2, 0x2, 
       0xaa2, 0xaa5, 0x3, 0x2, 0x2, 0x2, 0xaa3, 0xaa1, 0x3, 0x2, 0x2, 0x2, 
       0xaa3, 0xaa4, 0x3, 0x2, 0x2, 0x2, 0xaa4, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
       0xaa5, 0xaa3, 0x3, 0x2, 0x2, 0x2, 0xaa6, 0xaa7, 0x8, 0xe2, 0x1, 0x2, 
       0xaa7, 0xaa8, 0x5, 0x1c4, 0xe3, 0x2, 0xaa8, 0xab8, 0x3, 0x2, 0x2, 
       0x2, 0xaa9, 0xaaa, 0xc, 0x5, 0x2, 0x2, 0xaaa, 0xaab, 0x7, 0x46, 0x2, 
       0x2, 0xaab, 0xaac, 0x7, 0x46, 0x2, 0x2, 0xaac, 0xab7, 0x5, 0x1c4, 
       0xe3, 0x2, 0xaad, 0xaae, 0xc, 0x4, 0x2, 0x2, 0xaae, 0xaaf, 0x7, 0x45, 
       0x2, 0x2, 0xaaf, 0xab0, 0x7, 0x45, 0x2, 0x2, 0xab0, 0xab7, 0x5, 0x1c4, 
       0xe3, 0x2, 0xab1, 0xab2, 0xc, 0x3, 0x2, 0x2, 0xab2, 0xab3, 0x7, 0x45, 
       0x2, 0x2, 0xab3, 0xab4, 0x7, 0x45, 0x2, 0x2, 0xab4, 0xab5, 0x7, 0x45, 
       0x2, 0x2, 0xab5, 0xab7, 0x5, 0x1c4, 0xe3, 0x2, 0xab6, 0xaa9, 0x3, 
       0x2, 0x2, 0x2, 0xab6, 0xaad, 0x3, 0x2, 0x2, 0x2, 0xab6, 0xab1, 0x3, 
       0x2, 0x2, 0x2, 0xab7, 0xaba, 0x3, 0x2, 0x2, 0x2, 0xab8, 0xab6, 0x3, 
       0x2, 0x2, 0x2, 0xab8, 0xab9, 0x3, 0x2, 0x2, 0x2, 0xab9, 0x1c3, 0x3, 
       0x2, 0x2, 0x2, 0xaba, 0xab8, 0x3, 0x2, 0x2, 0x2, 0xabb, 0xabc, 0x8, 
       0xe3, 0x1, 0x2, 0xabc, 0xabd, 0x5, 0x1c6, 0xe4, 0x2, 0xabd, 0xac6, 
       0x3, 0x2, 0x2, 0x2, 0xabe, 0xabf, 0xc, 0x4, 0x2, 0x2, 0xabf, 0xac0, 
       0x7, 0x53, 0x2, 0x2, 0xac0, 0xac5, 0x5, 0x1c6, 0xe4, 0x2, 0xac1, 
       0xac2, 0xc, 0x3, 0x2, 0x2, 0xac2, 0xac3, 0x7, 0x54, 0x2, 0x2, 0xac3, 
       0xac5, 0x5, 0x1c6, 0xe4, 0x2, 0xac4, 0xabe, 0x3, 0x2, 0x2, 0x2, 0xac4, 
       0xac1, 0x3, 0x2, 0x2, 0x2, 0xac5, 0xac8, 0x3, 0x2, 0x2, 0x2, 0xac6, 
       0xac4, 0x3, 0x2, 0x2, 0x2, 0xac6, 0xac7, 0x3, 0x2, 0x2, 0x2, 0xac7, 
       0x1c5, 0x3, 0x2, 0x2, 0x2, 0xac8, 0xac6, 0x3, 0x2, 0x2, 0x2, 0xac9, 
       0xaca, 0x8, 0xe4, 0x1, 0x2, 0xaca, 0xacb, 0x5, 0x1c8, 0xe5, 0x2, 
       0xacb, 0xad7, 0x3, 0x2, 0x2, 0x2, 0xacc, 0xacd, 0xc, 0x5, 0x2, 0x2, 
       0xacd, 0xace, 0x7, 0x55, 0x2, 0x2, 0xace, 0xad6, 0x5, 0x1c8, 0xe5, 
       0x2, 0xacf, 0xad0, 0xc, 0x4, 0x2, 0x2, 0xad0, 0xad1, 0x7, 0x56, 0x2, 
       0x2, 0xad1, 0xad6, 0x5, 0x1c8, 0xe5, 0x2, 0xad2, 0xad3, 0xc, 0x3, 
       0x2, 0x2, 0xad3, 0xad4, 0x7, 0x5a, 0x2, 0x2, 0xad4, 0xad6, 0x5, 0x1c8, 
       0xe5, 0x2, 0xad5, 0xacc, 0x3, 0x2, 0x2, 0x2, 0xad5, 0xacf, 0x3, 0x2, 
       0x2, 0x2, 0xad5, 0xad2, 0x3, 0x2, 0x2, 0x2, 0xad6, 0xad9, 0x3, 0x2, 
       0x2, 0x2, 0xad7, 0xad5, 0x3, 0x2, 0x2, 0x2, 0xad7, 0xad8, 0x3, 0x2, 
       0x2, 0x2, 0xad8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0xad9, 0xad7, 0x3, 0x2, 
       0x2, 0x2, 0xada, 0xae2, 0x5, 0x1ca, 0xe6, 0x2, 0xadb, 0xae2, 0x5, 
       0x1cc, 0xe7, 0x2, 0xadc, 0xadd, 0x7, 0x53, 0x2, 0x2, 0xadd, 0xae2, 
       0x5, 0x1c8, 0xe5, 0x2, 0xade, 0xadf, 0x7, 0x54, 0x2, 0x2, 0xadf, 
       0xae2, 0x5, 0x1c8, 0xe5, 0x2, 0xae0, 0xae2, 0x5, 0x1ce, 0xe8, 0x2, 
       0xae1, 0xada, 0x3, 0x2, 0x2, 0x2, 0xae1, 0xadb, 0x3, 0x2, 0x2, 0x2, 
       0xae1, 0xadc, 0x3, 0x2, 0x2, 0x2, 0xae1, 0xade, 0x3, 0x2, 0x2, 0x2, 
       0xae1, 0xae0, 0x3, 0x2, 0x2, 0x2, 0xae2, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
       0xae3, 0xae4, 0x7, 0x51, 0x2, 0x2, 0xae4, 0xae5, 0x5, 0x1c8, 0xe5, 
       0x2, 0xae5, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0xae6, 0xae7, 0x7, 0x52, 0x2, 
       0x2, 0xae7, 0xae8, 0x5, 0x1c8, 0xe5, 0x2, 0xae8, 0x1cd, 0x3, 0x2, 
       0x2, 0x2, 0xae9, 0xaf0, 0x5, 0x1d0, 0xe9, 0x2, 0xaea, 0xaeb, 0x7, 
       0x48, 0x2, 0x2, 0xaeb, 0xaf0, 0x5, 0x1c8, 0xe5, 0x2, 0xaec, 0xaed, 
       0x7, 0x47, 0x2, 0x2, 0xaed, 0xaf0, 0x5, 0x1c8, 0xe5, 0x2, 0xaee, 
       0xaf0, 0x5, 0x1da, 0xee, 0x2, 0xaef, 0xae9, 0x3, 0x2, 0x2, 0x2, 0xaef, 
       0xaea, 0x3, 0x2, 0x2, 0x2, 0xaef, 0xaec, 0x3, 0x2, 0x2, 0x2, 0xaef, 
       0xaee, 0x3, 0x2, 0x2, 0x2, 0xaf0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0xaf1, 
       0xaf4, 0x5, 0x162, 0xb2, 0x2, 0xaf2, 0xaf4, 0x5, 0x3c, 0x1f, 0x2, 
       0xaf3, 0xaf1, 0x3, 0x2, 0x2, 0x2, 0xaf3, 0xaf2, 0x3, 0x2, 0x2, 0x2, 
       0xaf4, 0xaf9, 0x3, 0x2, 0x2, 0x2, 0xaf5, 0xaf8, 0x5, 0x1d4, 0xeb, 
       0x2, 0xaf6, 0xaf8, 0x5, 0x1d8, 0xed, 0x2, 0xaf7, 0xaf5, 0x3, 0x2, 
       0x2, 0x2, 0xaf7, 0xaf6, 0x3, 0x2, 0x2, 0x2, 0xaf8, 0xafb, 0x3, 0x2, 
       0x2, 0x2, 0xaf9, 0xaf7, 0x3, 0x2, 0x2, 0x2, 0xaf9, 0xafa, 0x3, 0x2, 
       0x2, 0x2, 0xafa, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0xafb, 0xaf9, 0x3, 0x2, 
       0x2, 0x2, 0xafc, 0xafd, 0x5, 0x1d0, 0xe9, 0x2, 0xafd, 0xafe, 0x7, 
       0x51, 0x2, 0x2, 0xafe, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0xaff, 0xb00, 0x7, 
       0x51, 0x2, 0x2, 0xb00, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0xb01, 0xb02, 0x5, 
       0x1d0, 0xe9, 0x2, 0xb02, 0xb03, 0x7, 0x52, 0x2, 0x2, 0xb03, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0xb04, 0xb05, 0x7, 0x52, 0x2, 0x2, 0xb05, 0x1d9, 
       0x3, 0x2, 0x2, 0x2, 0xb06, 0xb07, 0x7, 0x3b, 0x2, 0x2, 0xb07, 0xb08, 
       0x5, 0x6, 0x4, 0x2, 0xb08, 0xb09, 0x7, 0x3c, 0x2, 0x2, 0xb09, 0xb0a, 
       0x5, 0x1c8, 0xe5, 0x2, 0xb0a, 0xb22, 0x3, 0x2, 0x2, 0x2, 0xb0b, 0xb0c, 
       0x7, 0x3b, 0x2, 0x2, 0xb0c, 0xb10, 0x5, 0xe, 0x8, 0x2, 0xb0d, 0xb0f, 
       0x5, 0x2a, 0x16, 0x2, 0xb0e, 0xb0d, 0x3, 0x2, 0x2, 0x2, 0xb0f, 0xb12, 
       0x3, 0x2, 0x2, 0x2, 0xb10, 0xb0e, 0x3, 0x2, 0x2, 0x2, 0xb10, 0xb11, 
       0x3, 0x2, 0x2, 0x2, 0xb11, 0xb13, 0x3, 0x2, 0x2, 0x2, 0xb12, 0xb10, 
       0x3, 0x2, 0x2, 0x2, 0xb13, 0xb14, 0x7, 0x3c, 0x2, 0x2, 0xb14, 0xb15, 
       0x5, 0x1ce, 0xe8, 0x2, 0xb15, 0xb22, 0x3, 0x2, 0x2, 0x2, 0xb16, 0xb17, 
       0x7, 0x3b, 0x2, 0x2, 0xb17, 0xb1b, 0x5, 0xe, 0x8, 0x2, 0xb18, 0xb1a, 
       0x5, 0x2a, 0x16, 0x2, 0xb19, 0xb18, 0x3, 0x2, 0x2, 0x2, 0xb1a, 0xb1d, 
       0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb19, 0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb1c, 
       0x3, 0x2, 0x2, 0x2, 0xb1c, 0xb1e, 0x3, 0x2, 0x2, 0x2, 0xb1d, 0xb1b, 
       0x3, 0x2, 0x2, 0x2, 0xb1e, 0xb1f, 0x7, 0x3c, 0x2, 0x2, 0xb1f, 0xb20, 
       0x5, 0x1a2, 0xd2, 0x2, 0xb20, 0xb22, 0x3, 0x2, 0x2, 0x2, 0xb21, 0xb06, 
       0x3, 0x2, 0x2, 0x2, 0xb21, 0xb0b, 0x3, 0x2, 0x2, 0x2, 0xb21, 0xb16, 
       0x3, 0x2, 0x2, 0x2, 0xb22, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x145, 0x1e0, 
       0x1e5, 0x1ec, 0x1f0, 0x1f4, 0x1fd, 0x201, 0x205, 0x207, 0x20d, 0x212, 
       0x219, 0x21e, 0x220, 0x226, 0x22b, 0x230, 0x235, 0x240, 0x24e, 0x253, 
       0x25b, 0x262, 0x268, 0x26d, 0x278, 0x27b, 0x289, 0x28e, 0x293, 0x298, 
       0x29e, 0x2a8, 0x2b0, 0x2ba, 0x2c2, 0x2ce, 0x2d2, 0x2d7, 0x2dd, 0x2e5, 
       0x2f2, 0x30f, 0x313, 0x318, 0x31e, 0x321, 0x324, 0x330, 0x33b, 0x349, 
       0x350, 0x359, 0x360, 0x365, 0x374, 0x37b, 0x381, 0x385, 0x389, 0x38d, 
       0x391, 0x396, 0x39a, 0x39e, 0x3a0, 0x3a5, 0x3ac, 0x3b1, 0x3b3, 0x3b9, 
       0x3be, 0x3c2, 0x3d5, 0x3da, 0x3ea, 0x3ef, 0x3f5, 0x3fb, 0x3fd, 0x401, 
       0x406, 0x40a, 0x412, 0x419, 0x421, 0x424, 0x429, 0x431, 0x436, 0x43d, 
       0x444, 0x449, 0x44f, 0x45b, 0x460, 0x464, 0x46e, 0x473, 0x47b, 0x47e, 
       0x483, 0x48b, 0x48e, 0x493, 0x498, 0x49d, 0x4a2, 0x4a9, 0x4ae, 0x4b6, 
       0x4bb, 0x4c0, 0x4c5, 0x4cb, 0x4d1, 0x4d4, 0x4d7, 0x4e0, 0x4e6, 0x4ec, 
       0x4ef, 0x4f2, 0x4fa, 0x4ff, 0x504, 0x50a, 0x50d, 0x518, 0x521, 0x52b, 
       0x530, 0x53b, 0x540, 0x54c, 0x551, 0x55d, 0x567, 0x56c, 0x574, 0x577, 
       0x57e, 0x586, 0x58c, 0x595, 0x59f, 0x5a3, 0x5a6, 0x5af, 0x5bd, 0x5c0, 
       0x5c9, 0x5ce, 0x5d5, 0x5da, 0x5e2, 0x5ee, 0x5f5, 0x603, 0x619, 0x63b, 
       0x647, 0x64d, 0x659, 0x666, 0x680, 0x684, 0x689, 0x68d, 0x691, 0x699, 
       0x69d, 0x6a1, 0x6a8, 0x6b1, 0x6b9, 0x6c8, 0x6d4, 0x6da, 0x6e0, 0x6f5, 
       0x6fa, 0x700, 0x70c, 0x717, 0x721, 0x724, 0x729, 0x732, 0x738, 0x742, 
       0x747, 0x750, 0x767, 0x771, 0x787, 0x78e, 0x796, 0x79e, 0x7a9, 0x7c0, 
       0x7ca, 0x7d5, 0x7eb, 0x7ef, 0x7f4, 0x7fc, 0x802, 0x806, 0x80a, 0x80e, 
       0x814, 0x819, 0x81e, 0x822, 0x826, 0x82c, 0x831, 0x836, 0x83a, 0x83e, 
       0x840, 0x845, 0x84a, 0x84f, 0x853, 0x857, 0x85b, 0x860, 0x868, 0x86e, 
       0x872, 0x876, 0x87a, 0x880, 0x885, 0x88a, 0x88e, 0x892, 0x894, 0x899, 
       0x8a8, 0x8b6, 0x8c2, 0x8cb, 0x8da, 0x8e7, 0x8f0, 0x8f6, 0x8fd, 0x902, 
       0x909, 0x90e, 0x915, 0x91a, 0x921, 0x926, 0x92e, 0x933, 0x937, 0x93b, 
       0x940, 0x947, 0x94e, 0x953, 0x95a, 0x95f, 0x966, 0x96b, 0x973, 0x978, 
       0x97c, 0x983, 0x989, 0x990, 0x997, 0x99e, 0x9a6, 0x9ad, 0x9b5, 0x9b9, 
       0x9c0, 0x9c7, 0x9ce, 0x9d6, 0x9dd, 0x9e5, 0x9eb, 0x9f1, 0x9fd, 0xa03, 
       0xa09, 0xa14, 0xa1d, 0xa24, 0xa2b, 0xa30, 0xa34, 0xa3d, 0xa48, 0xa52, 
       0xa5d, 0xa68, 0xa73, 0xa7e, 0xa8a, 0xa8c, 0xaa1, 0xaa3, 0xab6, 0xab8, 
       0xac4, 0xac6, 0xad5, 0xad7, 0xae1, 0xaef, 0xaf3, 0xaf7, 0xaf9, 0xb10, 
       0xb1b, 0xb21, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Java8Parser::Initializer Java8Parser::_init;
