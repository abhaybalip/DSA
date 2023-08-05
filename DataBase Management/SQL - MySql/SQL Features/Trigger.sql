-- sql - Trigger

CREATE TRIGGER trigger_name  
    (AFTER | BEFORE) (INSERT | UPDATE | DELETE)
         ON table_name FOR EACH ROW  
         BEGIN  
        --variable declarations  
        --trigger code  
        END;   
