// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPaletteListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaPaletteListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPaletteListener*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updatePalette, "updatePalette");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPaletteListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPaletteListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPaletteListener::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RPaletteListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPaletteListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPaletteListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPaletteListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPaletteListener::updatePalette
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPaletteListener::updatePalette", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPaletteListener::updatePalette";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPaletteListener* self = 
                        getSelf("updatePalette", context);
                  

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
    
               self->updatePalette();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPaletteListener.updatePalette().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPaletteListener::updatePalette", context, engine);
            return result;
        }
         QScriptValue REcmaPaletteListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPaletteListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPaletteListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPaletteListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPaletteListener* self = getSelf("RPaletteListener", context);
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
    RPaletteListener* REcmaPaletteListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPaletteListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPaletteListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPaletteListener.%1(): "
                        "This object is not a RPaletteListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPaletteListener* REcmaPaletteListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPaletteListener* selfBase = getSelf(fName, context);
                RPaletteListener* self = dynamic_cast<RPaletteListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPaletteListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPaletteListener.%1(): "
                    "This object is not a RPaletteListener").arg(fName),
                    context);
            }

            return self;
            


        }
        