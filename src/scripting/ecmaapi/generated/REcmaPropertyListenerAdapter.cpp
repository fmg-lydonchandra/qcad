// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPropertyListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaPropertyListener.h"
                 void REcmaPropertyListenerAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPropertyListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaPropertyListener::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RPropertyListener
        REcmaHelper::registerFunction(&engine, proto, getRPropertyListener, "getRPropertyListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RPropertyListener:
        

        // methods of secondary base class RPropertyListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateFromDocument, "updateFromDocument");
            
            REcmaHelper::registerFunction(&engine, proto, updateFromObject, "updateFromObject");
            
            REcmaHelper::registerFunction(&engine, proto, clearEditor, "clearEditor");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPropertyListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RPropertyListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPropertyListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPropertyListenerAdapter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyListenerAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPropertyListenerAdapter
                    * cppResult =
                    new
                    RPropertyListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaPropertyListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RPropertyListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaPropertyListenerAdapter::getRPropertyListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPropertyListener* cppResult =
                    qscriptvalue_cast<RPropertyListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaPropertyListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPropertyListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPropertyListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RPropertyListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RPropertyListener:
        

        // methods of secondary base class RPropertyListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPropertyListenerAdapter::updateFromDocument
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListenerAdapter::updateFromDocument", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListenerAdapter::updateFromDocument";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListenerAdapter* self = 
                        getSelf("updateFromDocument", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1);
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: RS::EntityType */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1
        ,
    a2);
    } else


        
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: RS::EntityType */
     && (
            context->argument(3).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a3 =
                    (bool)
                    
                    context->argument( 3 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1
        ,
    a2
        ,
    a3);
    } else


        
    
    if( context->argumentCount() ==
    5 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: RS::EntityType */
     && (
            context->argument(3).isBool()
        ) /* type: bool */
     && (
            context->argument(4).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a3 =
                    (bool)
                    
                    context->argument( 3 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a4 =
                    (bool)
                    
                    context->argument( 4 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListenerAdapter.updateFromDocument().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListenerAdapter::updateFromDocument", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyListenerAdapter::updateFromObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListenerAdapter::updateFromObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListenerAdapter::updateFromObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListenerAdapter* self = 
                        getSelf("updateFromObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RObject * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RObject * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RObject >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RObject *RObject *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromObject(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RObject * */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RDocument * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RObject * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RObject >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 0 is not of type RObject *RObject *.", context);                    
                    }
                
                    // argument is pointer
                    RDocument * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RPropertyListenerAdapter: Argument 1 is not of type RDocument *RDocument *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromObject(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListenerAdapter.updateFromObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListenerAdapter::updateFromObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyListenerAdapter::clearEditor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListenerAdapter::clearEditor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListenerAdapter::clearEditor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListenerAdapter* self = 
                        getSelf("clearEditor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clearEditor();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListenerAdapter.clearEditor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListenerAdapter::clearEditor", context, engine);
            return result;
        }
         QScriptValue REcmaPropertyListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPropertyListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPropertyListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPropertyListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPropertyListenerAdapter* self = getSelf("RPropertyListenerAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPropertyListenerAdapter* REcmaPropertyListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPropertyListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPropertyListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPropertyListenerAdapter.%1(): "
                        "This object is not a RPropertyListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPropertyListenerAdapter* REcmaPropertyListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPropertyListenerAdapter* selfBase = getSelf(fName, context);
                RPropertyListenerAdapter* self = dynamic_cast<RPropertyListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPropertyListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPropertyListenerAdapter.%1(): "
                    "This object is not a RPropertyListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RPropertyListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RPropertyListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RPropertyListenerAdapter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    