<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: faro/proto/image.proto

namespace Image;

use UnexpectedValueException;

/**
 * Protobuf type <code>Image.DataType</code>
 */
class DataType
{
    /**
     * Generated from protobuf enum <code>UINT8 = 0;</code>
     */
    const UINT8 = 0;
    /**
     * Generated from protobuf enum <code>UINT16 = 1;</code>
     */
    const UINT16 = 1;
    /**
     * Generated from protobuf enum <code>FLOAT32 = 2;</code>
     */
    const FLOAT32 = 2;

    private static $valueToName = [
        self::UINT8 => 'UINT8',
        self::UINT16 => 'UINT16',
        self::FLOAT32 => 'FLOAT32',
    ];

    public static function name($value)
    {
        if (!isset(self::$valueToName[$value])) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no name defined for value %s', __CLASS__, $value));
        }
        return self::$valueToName[$value];
    }


    public static function value($name)
    {
        $const = __CLASS__ . '::' . strtoupper($name);
        if (!defined($const)) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no value defined for name %s', __CLASS__, $name));
        }
        return constant($const);
    }
}

// Adding a class alias for backwards compatibility with the previous class name.
class_alias(DataType::class, \Image_DataType::class);

