#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004330F8
// Address: 0x4330f8 - 0x434270
void sub_004330F8_0x4330f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004330F8_0x4330f8");
#endif

    switch (ctx->pc) {
        case 0x4333e0u: goto label_4333e0;
        case 0x4333e8u: goto label_4333e8;
        case 0x4333f0u: goto label_4333f0;
        case 0x4334ecu: goto label_4334ec;
        case 0x433550u: goto label_433550;
        case 0x433574u: goto label_433574;
        case 0x43358cu: goto label_43358c;
        case 0x433594u: goto label_433594;
        case 0x4335acu: goto label_4335ac;
        case 0x4335b0u: goto label_4335b0;
        case 0x4335b8u: goto label_4335b8;
        case 0x433604u: goto label_433604;
        case 0x433634u: goto label_433634;
        case 0x43366cu: goto label_43366c;
        case 0x4336a0u: goto label_4336a0;
        case 0x4336d4u: goto label_4336d4;
        case 0x433708u: goto label_433708;
        case 0x433b64u: goto label_433b64;
        case 0x433b74u: goto label_433b74;
        case 0x433b8cu: goto label_433b8c;
        case 0x433b9cu: goto label_433b9c;
        case 0x433ba0u: goto label_433ba0;
        case 0x433ba8u: goto label_433ba8;
        case 0x433cd8u: goto label_433cd8;
        case 0x433cecu: goto label_433cec;
        case 0x433cf0u: goto label_433cf0;
        case 0x433cf8u: goto label_433cf8;
        case 0x433d28u: goto label_433d28;
        case 0x433d3cu: goto label_433d3c;
        case 0x433d9cu: goto label_433d9c;
        case 0x433dccu: goto label_433dcc;
        case 0x433e4cu: goto label_433e4c;
        case 0x433f08u: goto label_433f08;
        case 0x433f8cu: goto label_433f8c;
        case 0x433f9cu: goto label_433f9c;
        case 0x433facu: goto label_433fac;
        case 0x433fc8u: goto label_433fc8;
        case 0x433fe4u: goto label_433fe4;
        case 0x433ff4u: goto label_433ff4;
        case 0x433ffcu: goto label_433ffc;
        case 0x434004u: goto label_434004;
        case 0x4340a8u: goto label_4340a8;
        case 0x4340d0u: goto label_4340d0;
        case 0x434158u: goto label_434158;
        case 0x4341a8u: goto label_4341a8;
        case 0x4341ccu: goto label_4341cc;
        case 0x4341e4u: goto label_4341e4;
        case 0x434200u: goto label_434200;
        case 0x434208u: goto label_434208;
        case 0x43421cu: goto label_43421c;
        case 0x434220u: goto label_434220;
        case 0x434228u: goto label_434228;
        case 0x434248u: goto label_434248;
        case 0x434250u: goto label_434250;
        case 0x434258u: goto label_434258;
        default: break;
    }

    ctx->pc = 0x4330f8u;

label_4330f8:
    // 0x4330f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4330f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4330fc: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x4330fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
    // 0x433100: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x433100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x433104: 0x25663ac0  addiu       $a2, $t3, 0x3AC0
    ctx->pc = 0x433104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 15040));
    // 0x433108: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x433108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x43310c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x43310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x433110: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x433110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x433114: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x433114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x433118: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x433118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x43311c: 0x2404ff0f  addiu       $a0, $zero, -0xF1
    ctx->pc = 0x43311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x433120: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x433120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x433124: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x433124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x433128: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x433128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x43312c: 0x2408f0ff  addiu       $t0, $zero, -0xF01
    ctx->pc = 0x43312cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x433130: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x433130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x433134: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x433134u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x433138: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x433138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x43313c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x43313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x433140: 0x3c0afff0  lui         $t2, 0xFFF0
    ctx->pc = 0x433140u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65520 << 16));
    // 0x433144: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x433144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x433148: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x433148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x43314c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x43314cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433154: 0x3c0c03ff  lui         $t4, 0x3FF
    ctx->pc = 0x433154u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1023 << 16));
    // 0x433158: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x433158u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x43315c: 0x358c03ff  ori         $t4, $t4, 0x3FF
    ctx->pc = 0x43315cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1023);
    // 0x433160: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x433160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x433164: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x433164u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x433168: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x433168u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x43316c: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x43316cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x433170: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x433170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x433174: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x433174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x433178: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x433178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x43317c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x43317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x433180: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x433180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433184: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x433184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x433188: 0x36310a00  ori         $s1, $s1, 0xA00
    ctx->pc = 0x433188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2560);
    // 0x43318c: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x43318cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x433190: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x433190u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x433194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x433194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x433198: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x433198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x43319c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x43319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4331a0: 0xdd633ac0  ld          $v1, 0x3AC0($t3)
    ctx->pc = 0x4331a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 15040)));
    // 0x4331a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4331a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4331a8: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x4331a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x4331ac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4331acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4331b0: 0x3c07000e  lui         $a3, 0xE
    ctx->pc = 0x4331b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14 << 16));
    // 0x4331b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4331b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4331b8: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x4331b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x4331bc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4331bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4331c0: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x4331c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4331c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4331c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4331c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4331cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4331ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4331d0: 0x3c04ff0f  lui         $a0, 0xFF0F
    ctx->pc = 0x4331d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65295 << 16));
    // 0x4331d4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4331d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4331d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4331d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4331dc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4331dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4331e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4331e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4331e4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4331e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4331e8: 0x3c0400e0  lui         $a0, 0xE0
    ctx->pc = 0x4331e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)224 << 16));
    // 0x4331ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4331ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4331f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4331f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4331f4: 0x3c050e00  lui         $a1, 0xE00
    ctx->pc = 0x4331f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3584 << 16));
    // 0x4331f8: 0x3c04f0ff  lui         $a0, 0xF0FF
    ctx->pc = 0x4331f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61695 << 16));
    // 0x4331fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4331fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x433200: 0xfd633ac0  sd          $v1, 0x3AC0($t3)
    ctx->pc = 0x433200u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 15040), GPR_U64(ctx, 3));
    // 0x433204: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x433204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x433208: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x433208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x43320c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43320cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x433210: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x433210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x433214: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x433214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x433218: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x43321c: 0x34840fff  ori         $a0, $a0, 0xFFF
    ctx->pc = 0x43321cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4095);
    // 0x433220: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x433224: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x433224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x433228: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x433228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x43322c: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x43322cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x433230: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x433230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x433234: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x433234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x433238: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x43323c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x43323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x433240: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x433244: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x433244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x433248: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x433248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x43324c: 0xdd633ac0  ld          $v1, 0x3AC0($t3)
    ctx->pc = 0x43324cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 15040)));
    // 0x433250: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x433250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x433254: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x433254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x433258: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x433258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x43325c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43325cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x433260: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x433260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x433264: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x433264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x433268: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x433268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x43326c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x433270: 0x2407c000  addiu       $a3, $zero, -0x4000
    ctx->pc = 0x433270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x433274: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x433274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x433278: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x433278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x43327c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x43327cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x433280: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x433280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x433284: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x433284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x433288: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x433288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x43328c: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x43328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x433290: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x433294: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x433294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x433298: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x433298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x43329c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x43329cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332a0: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x4332a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x4332a4: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x4332a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x4332a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4332a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4332ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4332acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4332b0: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x4332b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x4332b4: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x4332b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x4332b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4332b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4332bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4332bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4332c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4332c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4332c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332c8: 0x2405f0ff  addiu       $a1, $zero, -0xF01
    ctx->pc = 0x4332c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x4332cc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4332ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4332d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4332d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4332d4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4332d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4332d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4332d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4332dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4332dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4332e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4332e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4332e4: 0x3c04f3ff  lui         $a0, 0xF3FF
    ctx->pc = 0x4332e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62463 << 16));
    // 0x4332e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4332e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4332ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4332f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4332f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332f4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4332f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4332f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4332f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4332fc: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x4332fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x433300: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x433300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x433304: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x433304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x433308: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x433308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43330c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x433310: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x433310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x433314: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x433314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x433318: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x433318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x43331c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43331cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x433320: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x433320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x433324: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x433324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x433328: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x433328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x43332c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x43332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x433330: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x433330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x433334: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x433334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x433338: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x433338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x43333c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x43333cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x433340: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x433340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x433344: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x433344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x433348: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x433348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43334c: 0xfd633ac0  sd          $v1, 0x3AC0($t3)
    ctx->pc = 0x43334cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 15040), GPR_U64(ctx, 3));
    // 0x433350: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x433350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x433354: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x433354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x433358: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x433358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x43335c: 0x2412004e  addiu       $s2, $zero, 0x4E
    ctx->pc = 0x43335cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x433360: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x433360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x433364: 0x3c153fff  lui         $s5, 0x3FFF
    ctx->pc = 0x433364u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16383 << 16));
    // 0x433368: 0x36b53fff  ori         $s5, $s5, 0x3FFF
    ctx->pc = 0x433368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16383);
    // 0x43336c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x43336cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x433370: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x433370u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x433374: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x433374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433378: 0xfcc80020  sd          $t0, 0x20($a2)
    ctx->pc = 0x433378u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 8));
    // 0x43337c: 0x2485014f  addiu       $a1, $a0, 0x14F
    ctx->pc = 0x43337cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 335));
    // 0x433380: 0xfcc90028  sd          $t1, 0x28($a2)
    ctx->pc = 0x433380u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 9));
    // 0x433384: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x433384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433388: 0xfcca0038  sd          $t2, 0x38($a2)
    ctx->pc = 0x433388u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 10));
    // 0x43338c: 0xfccc0040  sd          $t4, 0x40($a2)
    ctx->pc = 0x43338cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 12));
    // 0x433390: 0xfccd0048  sd          $t5, 0x48($a2)
    ctx->pc = 0x433390u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 13));
    // 0x433394: 0xfcce0050  sd          $t6, 0x50($a2)
    ctx->pc = 0x433394u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 14));
    // 0x433398: 0xfccf0058  sd          $t7, 0x58($a2)
    ctx->pc = 0x433398u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 15));
    // 0x43339c: 0xfcd00068  sd          $s0, 0x68($a2)
    ctx->pc = 0x43339cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 16));
    // 0x4333a0: 0xfcd10070  sd          $s1, 0x70($a2)
    ctx->pc = 0x4333a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 17));
    // 0x4333a4: 0xfcd20078  sd          $s2, 0x78($a2)
    ctx->pc = 0x4333a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 18));
    // 0x4333a8: 0xfcd30080  sd          $s3, 0x80($a2)
    ctx->pc = 0x4333a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 19));
    // 0x4333ac: 0xfcd400b8  sd          $s4, 0xB8($a2)
    ctx->pc = 0x4333acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 184), GPR_U64(ctx, 20));
    // 0x4333b0: 0xfcd500c0  sd          $s5, 0xC0($a2)
    ctx->pc = 0x4333b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 21));
    // 0x4333b4: 0xfcd600c8  sd          $s6, 0xC8($a2)
    ctx->pc = 0x4333b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 200), GPR_U64(ctx, 22));
    // 0x4333b8: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x4333b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x4333bc: 0xfcd40030  sd          $s4, 0x30($a2)
    ctx->pc = 0x4333bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 20));
    // 0x4333c0: 0xfcc00060  sd          $zero, 0x60($a2)
    ctx->pc = 0x4333c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 0));
    // 0x4333c4: 0xfcc00088  sd          $zero, 0x88($a2)
    ctx->pc = 0x4333c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 136), GPR_U64(ctx, 0));
    // 0x4333c8: 0xfcc00090  sd          $zero, 0x90($a2)
    ctx->pc = 0x4333c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 0));
    // 0x4333cc: 0xfcd40098  sd          $s4, 0x98($a2)
    ctx->pc = 0x4333ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 152), GPR_U64(ctx, 20));
    // 0x4333d0: 0xfcc000a0  sd          $zero, 0xA0($a2)
    ctx->pc = 0x4333d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 160), GPR_U64(ctx, 0));
    // 0x4333d4: 0xfcd600a8  sd          $s6, 0xA8($a2)
    ctx->pc = 0x4333d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 168), GPR_U64(ctx, 22));
    // 0x4333d8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4333D8u;
    SET_GPR_U32(ctx, 31, 0x4333E0u);
    ctx->pc = 0x4333DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4333D8u;
    // 0x4333dc: 0xfcc000b0  sd          $zero, 0xB0($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 176), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4333D8u, 0x4333E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4333E0u;
label_4333e0:
    // 0x4333e0: 0xc10a844  jal         func_42A110
    ctx->pc = 0x4333E0u;
    SET_GPR_U32(ctx, 31, 0x4333E8u);
    ctx->pc = 0x42A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A110u, 0x4333E0u, 0x4333E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4333E8u;
label_4333e8:
    // 0x4333e8: 0xc0bf22c  jal         func_2FC8B0
    ctx->pc = 0x4333E8u;
    SET_GPR_U32(ctx, 31, 0x4333F0u);
    ctx->pc = 0x4333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4333E8u;
    // 0x4333ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8B0u, 0x4333E8u, 0x4333F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4333F0u;
label_4333f0:
    // 0x4333f0: 0x8f85bed8  lw          $a1, -0x4128($gp)
    ctx->pc = 0x4333f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950616)));
    // 0x4333f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4333f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4333f8: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x4333F8u;
    {
        const bool branch_taken_0x4333f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4333FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333F8u;
        // 0x4333fc: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333f8) {
            ctx->pc = 0x4334E4u;
            goto label_4334e4;
        }
    }
    ctx->pc = 0x433400u;
    // 0x433400: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x433400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x433404: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x433404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x433408: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x433408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    // 0x43340c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x43340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x433410: 0x24453b90  addiu       $a1, $v0, 0x3B90
    ctx->pc = 0x433410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x433414: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x433414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x433418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43341c: 0x24483b90  addiu       $t0, $v0, 0x3B90
    ctx->pc = 0x43341cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x433420: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x433420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x433424: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x433424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433428: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x433428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x43342c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x43342cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433430: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x433430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x433434: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x433434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x433438: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x433438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43343c: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x43343cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433440: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x433440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433444: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x433444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433448: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x433448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43344c: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x43344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433450: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x433450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x433454: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x433454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x433458: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x433458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x43345c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x43345cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433460: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x433460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433464: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x433464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433468: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x433468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43346c: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x43346cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433470: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x433470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433474: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x433474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433478: 0xb0a6002f  sdl         $a2, 0x2F($a1)
    ctx->pc = 0x433478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43347c: 0xb4a60028  sdr         $a2, 0x28($a1)
    ctx->pc = 0x43347cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433480: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x433480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x623BB4u));
    // 0x433484: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x433484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x433488: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x433488u;
    {
        const bool branch_taken_0x433488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433488u;
        // 0x43348c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433488) {
            ctx->pc = 0x4334C8u;
            goto label_4334c8;
        }
    }
    ctx->pc = 0x433490u;
    // 0x433490: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x433490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x433494: 0x8f84aeb0  lw          $a0, -0x5150($gp)
    ctx->pc = 0x433494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946480)));
    // 0x433498: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x433498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x43349c: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x43349cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x4334a0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x4334a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x4334a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4334A4u;
    {
        const bool branch_taken_0x4334a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334A4u;
        // 0x4334a8: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334a4) {
            ctx->pc = 0x4334B4u;
            goto label_4334b4;
        }
    }
    ctx->pc = 0x4334ACu;
    // 0x4334ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4334ACu;
    {
        const bool branch_taken_0x4334ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334ACu;
        // 0x4334b0: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334ac) {
            ctx->pc = 0x4334BCu;
            goto label_4334bc;
        }
    }
    ctx->pc = 0x4334B4u;
label_4334b4:
    // 0x4334b4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4334b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4334b8: 0xaf82aeb0  sw          $v0, -0x5150($gp)
    ctx->pc = 0x4334b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946480), GPR_U32(ctx, 2));
label_4334bc:
    // 0x4334bc: 0x26c23b90  addiu       $v0, $s6, 0x3B90
    ctx->pc = 0x4334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x4334c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4334C0u;
    {
        const bool branch_taken_0x4334c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334C0u;
        // 0x4334c4: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334c0) {
            ctx->pc = 0x4334E0u;
            goto label_4334e0;
        }
    }
    ctx->pc = 0x4334C8u;
label_4334c8:
    // 0x4334c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4334c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4334cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4334ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4334d0: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x4334d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x4334d4: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x4334d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x4334d8: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x4334d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x4334dc: 0x26c23b90  addiu       $v0, $s6, 0x3B90
    ctx->pc = 0x4334dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
label_4334e0:
    // 0x4334e0: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x4334e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_4334e4:
    // 0x4334e4: 0xc10cb68  jal         func_432DA0
    ctx->pc = 0x4334E4u;
    SET_GPR_U32(ctx, 31, 0x4334ECu);
    ctx->pc = 0x432DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432DA0u, 0x4334E4u, 0x4334ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4334ECu;
label_4334ec:
    // 0x4334ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4334ECu;
    {
        const bool branch_taken_0x4334ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4334F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334ECu;
        // 0x4334f0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334ec) {
            ctx->pc = 0x4334FCu;
            goto label_4334fc;
        }
    }
    ctx->pc = 0x4334F4u;
    // 0x4334f4: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x4334F4u;
    {
        const bool branch_taken_0x4334f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334F4u;
        // 0x4334f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334f4) {
            ctx->pc = 0x433DD8u;
            goto label_433dd8;
        }
    }
    ctx->pc = 0x4334FCu;
label_4334fc:
    // 0x4334fc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x4334fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x433500: 0x24453b90  addiu       $a1, $v0, 0x3B90
    ctx->pc = 0x433500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x433504: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x433504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433508: 0x90a30032  lbu         $v1, 0x32($a1)
    ctx->pc = 0x433508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x43350c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43350Cu;
    {
        const bool branch_taken_0x43350c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x433510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43350Cu;
        // 0x433510: 0xaf85ae10  sw          $a1, -0x51F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946320), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43350c) {
            ctx->pc = 0x433524u;
            goto label_433524;
        }
    }
    ctx->pc = 0x433514u;
    // 0x433514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x433514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43351c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43351Cu;
    {
        const bool branch_taken_0x43351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43351Cu;
        // 0x433520: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43351c) {
            ctx->pc = 0x43356Cu;
            goto label_43356c;
        }
    }
    ctx->pc = 0x433524u;
label_433524:
    // 0x433524: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x433524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x433528: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x433528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x43352c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x43352Cu;
    {
        const bool branch_taken_0x43352c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43352c) {
            ctx->pc = 0x433530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43352Cu;
            // 0x433530: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433564u;
            goto label_433564;
        }
    }
    ctx->pc = 0x433534u;
    // 0x433534: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x433534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x433538: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x433538u;
    {
        const bool branch_taken_0x433538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433538u;
        // 0x43353c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433538) {
            ctx->pc = 0x433558u;
            goto label_433558;
        }
    }
    ctx->pc = 0x433540u;
    // 0x433540: 0x90a60032  lbu         $a2, 0x32($a1)
    ctx->pc = 0x433540u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x433544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x433544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433548: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x433548u;
    SET_GPR_U32(ctx, 31, 0x433550u);
    ctx->pc = 0x43354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433548u;
    // 0x43354c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x433548u, 0x433550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433550u;
label_433550:
    // 0x433550: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x433550u;
    {
        const bool branch_taken_0x433550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x433550) {
            ctx->pc = 0x43358Cu;
            goto label_43358c;
        }
    }
    ctx->pc = 0x433558u;
label_433558:
    // 0x433558: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x433558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x43355c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43355Cu;
    {
        const bool branch_taken_0x43355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43355Cu;
        // 0x433560: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43355c) {
            ctx->pc = 0x43357Cu;
            goto label_43357c;
        }
    }
    ctx->pc = 0x433564u;
label_433564:
    // 0x433564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x433564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x433568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43356c:
    // 0x43356c: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x43356Cu;
    SET_GPR_U32(ctx, 31, 0x433574u);
    ctx->pc = 0x433570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43356Cu;
    // 0x433570: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x43356Cu, 0x433574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433574u;
label_433574:
    // 0x433574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433574u;
    {
        const bool branch_taken_0x433574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x433574) {
            ctx->pc = 0x43358Cu;
            goto label_43358c;
        }
    }
    ctx->pc = 0x43357Cu;
label_43357c:
    // 0x43357c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433584: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x433584u;
    SET_GPR_U32(ctx, 31, 0x43358Cu);
    ctx->pc = 0x433588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433584u;
    // 0x433588: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x433584u, 0x43358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43358Cu;
label_43358c:
    // 0x43358c: 0xc0be2fc  jal         func_2F8BF0
    ctx->pc = 0x43358Cu;
    SET_GPR_U32(ctx, 31, 0x433594u);
    ctx->pc = 0x433590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43358Cu;
    // 0x433590: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x43358Cu, 0x433594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433594u;
label_433594:
    // 0x433594: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x433594u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
    // 0x433598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x433598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43359c: 0x26e53ac0  addiu       $a1, $s7, 0x3AC0
    ctx->pc = 0x43359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 15040));
    // 0x4335a0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x4335a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4335a4: 0xc0be3e2  jal         func_2F8F88
    ctx->pc = 0x4335A4u;
    SET_GPR_U32(ctx, 31, 0x4335ACu);
    ctx->pc = 0x4335A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4335A4u;
    // 0x4335a8: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F88u, 0x4335A4u, 0x4335ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4335ACu;
label_4335ac:
    // 0x4335ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4335acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4335b0:
    // 0x4335b0: 0xc0bf252  jal         func_2FC948
    ctx->pc = 0x4335B0u;
    SET_GPR_U32(ctx, 31, 0x4335B8u);
    ctx->pc = 0x4335B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4335B0u;
    // 0x4335b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x4335B0u, 0x4335B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4335B8u;
label_4335b8:
    // 0x4335b8: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x4335B8u;
    {
        const bool branch_taken_0x4335b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4335BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335B8u;
        // 0x4335bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4335b8) {
            ctx->pc = 0x4335B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4335b0;
        }
    }
    ctx->pc = 0x4335C0u;
    // 0x4335c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4335c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4335c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4335c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4335c8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x4335c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x4335cc: 0x26d43b90  addiu       $s4, $s6, 0x3B90
    ctx->pc = 0x4335ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x4335d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4335d0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x4335d4: 0x26b03170  addiu       $s0, $s5, 0x3170
    ctx->pc = 0x4335d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x4335d8: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x4335d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4335dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4335dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4335e0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4335e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x4335e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4335e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4335e8: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x4335e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4335ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4335ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4335f0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x4335f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x4335f4: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x4335f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x4335f8: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x4335f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x4335fc: 0xc0bf038  jal         func_2FC0E0
    ctx->pc = 0x4335FCu;
    SET_GPR_U32(ctx, 31, 0x433604u);
    ctx->pc = 0x433600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4335FCu;
    // 0x433600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC0E0u, 0x4335FCu, 0x433604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433604u;
label_433604:
    // 0x433604: 0x2412003a  addiu       $s2, $zero, 0x3A
    ctx->pc = 0x433604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x433608: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x433608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x43360c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43360cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433610: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x433610u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x433614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x433614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433618: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x43361c: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x43361cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x433620: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x433620u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x433624: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x433624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x433628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x433628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43362c: 0xc0bf038  jal         func_2FC0E0
    ctx->pc = 0x43362Cu;
    SET_GPR_U32(ctx, 31, 0x433634u);
    ctx->pc = 0x433630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43362Cu;
    // 0x433630: 0x24130031  addiu       $s3, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC0E0u, 0x43362Cu, 0x433634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433634u;
label_433634:
    // 0x433634: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x433634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x433638: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x433638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x43363c: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x43363cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x433640: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x433640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x433644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433648: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x433648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x43364c: 0x86c63b90  lh          $a2, 0x3B90($s6)
    ctx->pc = 0x43364cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x433650: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x433654: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x433654u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x433658: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x433658u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x43365c: 0x242480a  movz        $t1, $s2, $v0
    ctx->pc = 0x43365cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 18));
    // 0x433660: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x433660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x433664: 0xc0bf178  jal         func_2FC5E0
    ctx->pc = 0x433664u;
    SET_GPR_U32(ctx, 31, 0x43366Cu);
    ctx->pc = 0x433668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433664u;
    // 0x433668: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC5E0u, 0x433664u, 0x43366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43366Cu;
label_43366c:
    // 0x43366c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x43366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x433670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433674: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x433674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x433678: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x433678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43367c: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x43367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x433680: 0x86c63b90  lh          $a2, 0x3B90($s6)
    ctx->pc = 0x433680u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x433684: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x433688: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x433688u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x43368c: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x43368cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x433690: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x433690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    // 0x433694: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x433694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x433698: 0xc0bf534  jal         func_2FD4D0
    ctx->pc = 0x433698u;
    SET_GPR_U32(ctx, 31, 0x4336A0u);
    ctx->pc = 0x43369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433698u;
    // 0x43369c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD4D0u, 0x433698u, 0x4336A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4336A0u;
label_4336a0:
    // 0x4336a0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4336a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4336a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4336a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336a8: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x4336a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x4336ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4336acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336b0: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x4336b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x4336b4: 0x86c63b90  lh          $a2, 0x3B90($s6)
    ctx->pc = 0x4336b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x4336b8: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x4336b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x4336bc: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x4336bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4336c0: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x4336c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x4336c4: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x4336c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    // 0x4336c8: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x4336c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x4336cc: 0xc0bf178  jal         func_2FC5E0
    ctx->pc = 0x4336CCu;
    SET_GPR_U32(ctx, 31, 0x4336D4u);
    ctx->pc = 0x4336D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4336CCu;
    // 0x4336d0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC5E0u, 0x4336CCu, 0x4336D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4336D4u;
label_4336d4:
    // 0x4336d4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4336d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4336d8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4336d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336dc: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x4336dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x4336e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4336e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336e4: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x4336e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x4336e8: 0x86c63b90  lh          $a2, 0x3B90($s6)
    ctx->pc = 0x4336e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x4336ec: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x4336ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x4336f0: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x4336f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4336f4: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x4336f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x4336f8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x4336f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x4336fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4336fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x433700: 0xc0bf534  jal         func_2FD4D0
    ctx->pc = 0x433700u;
    SET_GPR_U32(ctx, 31, 0x433708u);
    ctx->pc = 0x433704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433700u;
    // 0x433704: 0x262480b  movn        $t1, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD4D0u, 0x433700u, 0x433708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433708u;
label_433708:
    // 0x433708: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x433708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43370c: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x43370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x433710: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x433710u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x433714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x433714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x433718: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x433718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x43371c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x43371cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x433720: 0x7e0301c0  sq          $v1, 0x1C0($s0)
    ctx->pc = 0x433720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), GPR_VEC(ctx, 3));
    // 0x433724: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x433724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x433728: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x433728u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x43372c: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x43372cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x433730: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x433730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x433734: 0xde0301c0  ld          $v1, 0x1C0($s0)
    ctx->pc = 0x433734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x433738: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x433738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x43373c: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x43373cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x433740: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x433740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x433744: 0xde060058  ld          $a2, 0x58($s0)
    ctx->pc = 0x433744u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x433748: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x433748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x43374c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x433750: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x433750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x433754: 0xde0401c8  ld          $a0, 0x1C8($s0)
    ctx->pc = 0x433754u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x433758: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x433758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x43375c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x43375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x433760: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x433760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x433764: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x433764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x433768: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x433768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x43376c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x43376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x433770: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x433770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x433774: 0x92870033  lbu         $a3, 0x33($s4)
    ctx->pc = 0x433774u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 51)));
    // 0x433778: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x433778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x43377c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x433780: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x433780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x433784: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x433784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x433788: 0xfe0401c8  sd          $a0, 0x1C8($s0)
    ctx->pc = 0x433788u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 456), GPR_U64(ctx, 4));
    // 0x43378c: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x43378cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x433790: 0xfe060058  sd          $a2, 0x58($s0)
    ctx->pc = 0x433790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 6));
    // 0x433794: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x433794u;
    {
        const bool branch_taken_0x433794 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x433798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433794u;
        // 0x433798: 0xfe0301c0  sd          $v1, 0x1C0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 448), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433794) {
            ctx->pc = 0x433834u;
            goto label_433834;
        }
    }
    ctx->pc = 0x43379Cu;
    // 0x43379c: 0x8ec23b90  lw          $v0, 0x3B90($s6)
    ctx->pc = 0x43379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x4337a0: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x4337a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x4337a4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4337a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4337a8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4337a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4337ac: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x4337ACu;
    {
        const bool branch_taken_0x4337ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x4337B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337ACu;
        // 0x4337b0: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4337ac) {
            ctx->pc = 0x4337C4u;
            goto label_4337c4;
        }
    }
    ctx->pc = 0x4337B4u;
    // 0x4337b4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4337b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4337b8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4337b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4337bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4337BCu;
    {
        const bool branch_taken_0x4337bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4337C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337BCu;
        // 0x4337c0: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4337bc) {
            ctx->pc = 0x4337D4u;
            goto label_4337d4;
        }
    }
    ctx->pc = 0x4337C4u;
label_4337c4:
    // 0x4337c4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4337c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4337c8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x4337c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x4337cc: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x4337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x4337d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4337d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4337d4:
    // 0x4337d4: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x4337d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4337d8: 0x26c33b90  addiu       $v1, $s6, 0x3B90
    ctx->pc = 0x4337d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x4337dc: 0x26a73170  addiu       $a3, $s5, 0x3170
    ctx->pc = 0x4337dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x4337e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4337e4: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x4337e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x4337e8: 0xdce60038  ld          $a2, 0x38($a3)
    ctx->pc = 0x4337e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x4337ec: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x4337ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x4337f0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x4337f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x4337f4: 0xdce50060  ld          $a1, 0x60($a3)
    ctx->pc = 0x4337f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x4337f8: 0x102500a  movz        $t2, $t0, $v0
    ctx->pc = 0x4337f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
    // 0x4337fc: 0xdce300e0  ld          $v1, 0xE0($a3)
    ctx->pc = 0x4337fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x433800: 0xa52c2  srl         $t2, $t2, 11
    ctx->pc = 0x433800u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
    // 0x433804: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x433804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x433808: 0x314201ff  andi        $v0, $t2, 0x1FF
    ctx->pc = 0x433808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x43380c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x43380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x433810: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x433810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x433814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x433814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x433818: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x433818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x43381c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43381cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x433820: 0xfce300e0  sd          $v1, 0xE0($a3)
    ctx->pc = 0x433820u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 3));
    // 0x433824: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x433824u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x433828: 0xfce60038  sd          $a2, 0x38($a3)
    ctx->pc = 0x433828u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 6));
    // 0x43382c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x43382Cu;
    {
        const bool branch_taken_0x43382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43382Cu;
        // 0x433830: 0xfce50060  sd          $a1, 0x60($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43382c) {
            ctx->pc = 0x433978u;
            goto label_433978;
        }
    }
    ctx->pc = 0x433834u;
label_433834:
    // 0x433834: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x433834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x433838: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x433838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x43383c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x43383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x433840: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x433840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x433844: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x433844u;
    {
        const bool branch_taken_0x433844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x433848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433844u;
        // 0x433848: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433844) {
            ctx->pc = 0x43385Cu;
            goto label_43385c;
        }
    }
    ctx->pc = 0x43384Cu;
    // 0x43384c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x43384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x433850: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x433850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x433854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433854u;
    {
        const bool branch_taken_0x433854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433854u;
        // 0x433858: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433854) {
            ctx->pc = 0x43386Cu;
            goto label_43386c;
        }
    }
    ctx->pc = 0x43385Cu;
label_43385c:
    // 0x43385c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x43385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x433860: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x433860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x433864: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x433864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x433868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x433868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_43386c:
    // 0x43386c: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x43386cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x433870: 0x26c93b90  addiu       $t1, $s6, 0x3B90
    ctx->pc = 0x433870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x433874: 0xa2842  srl         $a1, $t2, 1
    ctx->pc = 0x433874u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x433878: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x433878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x43387c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x43387cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x433880: 0x91240031  lbu         $a0, 0x31($t1)
    ctx->pc = 0x433880u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 49)));
    // 0x433884: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x433884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x433888: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x43388c: 0xa2500a  movz        $t2, $a1, $v0
    ctx->pc = 0x43388cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x433890: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x433890u;
    {
        const bool branch_taken_0x433890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x433894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433890u;
        // 0x433894: 0xa52c2  srl         $t2, $t2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433890) {
            ctx->pc = 0x4338B8u;
            goto label_4338b8;
        }
    }
    ctx->pc = 0x433898u;
    // 0x433898: 0x26a53170  addiu       $a1, $s5, 0x3170
    ctx->pc = 0x433898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x43389c: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x43389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x4338a0: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x4338a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x4338a4: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x4338a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x4338a8: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x4338a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x4338ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4338acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4338b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4338b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4338b4: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x4338b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
label_4338b8:
    // 0x4338b8: 0x26a53170  addiu       $a1, $s5, 0x3170
    ctx->pc = 0x4338b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x4338bc: 0x2406fe00  addiu       $a2, $zero, -0x200
    ctx->pc = 0x4338bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x4338c0: 0xdca401d0  ld          $a0, 0x1D0($a1)
    ctx->pc = 0x4338c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x4338c4: 0x314701ff  andi        $a3, $t2, 0x1FF
    ctx->pc = 0x4338c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x4338c8: 0xdca30250  ld          $v1, 0x250($a1)
    ctx->pc = 0x4338c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x4338cc: 0x240bffc0  addiu       $t3, $zero, -0x40
    ctx->pc = 0x4338ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x4338d0: 0x8ec23b90  lw          $v0, 0x3B90($s6)
    ctx->pc = 0x4338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x4338d4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4338d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4338d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4338d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4338dc: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4338dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4338e0: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x4338e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4338e4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4338e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4338e8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4338e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4338ec: 0xfca30250  sd          $v1, 0x250($a1)
    ctx->pc = 0x4338ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 592), GPR_U64(ctx, 3));
    // 0x4338f0: 0x4b4024  and         $t0, $v0, $t3
    ctx->pc = 0x4338f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4338f4: 0x14cc0005  bne         $a2, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x4338F4u;
    {
        const bool branch_taken_0x4338f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x4338F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4338F4u;
        // 0x4338f8: 0xfca401d0  sd          $a0, 0x1D0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 464), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4338f4) {
            ctx->pc = 0x43390Cu;
            goto label_43390c;
        }
    }
    ctx->pc = 0x4338FCu;
    // 0x4338fc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x433900: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x433900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x433904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433904u;
    {
        const bool branch_taken_0x433904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433904u;
        // 0x433908: 0x4b1024  and         $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433904) {
            ctx->pc = 0x43391Cu;
            goto label_43391c;
        }
    }
    ctx->pc = 0x43390Cu;
label_43390c:
    // 0x43390c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x43390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x433910: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x433910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x433914: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x433914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x433918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x433918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_43391c:
    // 0x43391c: 0x1024818  mult        $t1, $t0, $v0
    ctx->pc = 0x43391cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x433920: 0x26c33b90  addiu       $v1, $s6, 0x3B90
    ctx->pc = 0x433920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x433924: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x433924u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x433928: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x433928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x43392c: 0x26a63170  addiu       $a2, $s5, 0x3170
    ctx->pc = 0x43392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x433930: 0x90650030  lbu         $a1, 0x30($v1)
    ctx->pc = 0x433930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x433934: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x433934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x433938: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x43393c: 0xdcc40060  ld          $a0, 0x60($a2)
    ctx->pc = 0x43393cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x433940: 0x102480a  movz        $t1, $t0, $v0
    ctx->pc = 0x433940u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x433944: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x433944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x433948: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x433948u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x43394c: 0xdcc200e0  ld          $v0, 0xE0($a2)
    ctx->pc = 0x43394cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x433950: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x433950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x433954: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x433954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x433958: 0x65500a  movz        $t2, $v1, $a1
    ctx->pc = 0x433958u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x43395c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x43395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x433960: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x433960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x433964: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x433964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x433968: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x433968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43396c: 0xfcc200e0  sd          $v0, 0xE0($a2)
    ctx->pc = 0x43396cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 2));
    // 0x433970: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x433970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x433974: 0xfcc40060  sd          $a0, 0x60($a2)
    ctx->pc = 0x433974u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 4));
label_433978:
    // 0x433978: 0x26a33170  addiu       $v1, $s5, 0x3170
    ctx->pc = 0x433978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x43397c: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x43397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x433980: 0xdc680070  ld          $t0, 0x70($v1)
    ctx->pc = 0x433980u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x433984: 0x314601ff  andi        $a2, $t2, 0x1FF
    ctx->pc = 0x433984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x433988: 0xdc6900f0  ld          $t1, 0xF0($v1)
    ctx->pc = 0x433988u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x43398c: 0x240cffc0  addiu       $t4, $zero, -0x40
    ctx->pc = 0x43398cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x433990: 0xdc6701e0  ld          $a3, 0x1E0($v1)
    ctx->pc = 0x433990u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x433994: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x433994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x433998: 0xdc640260  ld          $a0, 0x260($v1)
    ctx->pc = 0x433998u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x43399c: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x43399cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4339a0: 0x8ec23b90  lw          $v0, 0x3B90($s6)
    ctx->pc = 0x4339a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15248)));
    // 0x4339a4: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4339a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4339a8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4339a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4339ac: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x4339acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x4339b0: 0x8f85aeac  lw          $a1, -0x5154($gp)
    ctx->pc = 0x4339b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x4339b4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4339b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4339b8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4339b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4339bc: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x4339bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x4339c0: 0x4c5824  and         $t3, $v0, $t4
    ctx->pc = 0x4339c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x4339c4: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4339c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4339c8: 0xfc640260  sd          $a0, 0x260($v1)
    ctx->pc = 0x4339c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 608), GPR_U64(ctx, 4));
    // 0x4339cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4339d0: 0x26c43b90  addiu       $a0, $s6, 0x3B90
    ctx->pc = 0x4339d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x4339d4: 0xfc680070  sd          $t0, 0x70($v1)
    ctx->pc = 0x4339d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 8));
    // 0x4339d8: 0xfc6900f0  sd          $t1, 0xF0($v1)
    ctx->pc = 0x4339d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 9));
    // 0x4339dc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4339DCu;
    {
        const bool branch_taken_0x4339dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4339E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4339DCu;
        // 0x4339e0: 0xfc6701e0  sd          $a3, 0x1E0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 480), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339dc) {
            ctx->pc = 0x4339F4u;
            goto label_4339f4;
        }
    }
    ctx->pc = 0x4339E4u;
    // 0x4339e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4339e8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4339ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4339ECu;
    {
        const bool branch_taken_0x4339ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4339F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4339ECu;
        // 0x4339f0: 0x4c1024  and         $v0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339ec) {
            ctx->pc = 0x433A04u;
            goto label_433a04;
        }
    }
    ctx->pc = 0x4339F4u;
label_4339f4:
    // 0x4339f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4339f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4339f8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x4339f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x4339fc: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x4339fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x433a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x433a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_433a04:
    // 0x433a04: 0x1624818  mult        $t1, $t3, $v0
    ctx->pc = 0x433a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x433a08: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x433a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x433a0c: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x433a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x433a10: 0x26c33b90  addiu       $v1, $s6, 0x3B90
    ctx->pc = 0x433a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x433a14: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x433a18: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x433a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x433a1c: 0x82480a  movz        $t1, $a0, $v0
    ctx->pc = 0x433a1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x433a20: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x433a20u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x433a24: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x433a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x433a28: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x433a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x433a2c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x433a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x433a30: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x433A30u;
    {
        const bool branch_taken_0x433a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x433A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433A30u;
        // 0x433a34: 0xaf82beec  sw          $v0, -0x4114($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433a30) {
            ctx->pc = 0x433B64u;
            goto label_433b64;
        }
    }
    ctx->pc = 0x433A38u;
    // 0x433a38: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x433a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x433a3c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x433A3Cu;
    {
        const bool branch_taken_0x433a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433A3Cu;
        // 0x433a40: 0x26a23170  addiu       $v0, $s5, 0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433a3c) {
            ctx->pc = 0x433B58u;
            goto label_433b58;
        }
    }
    ctx->pc = 0x433A44u;
    // 0x433a44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x433a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x433a48: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x433a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x433a4c: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x433a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x433a50: 0xb048033f  sdl         $t0, 0x33F($v0)
    ctx->pc = 0x433a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433a54: 0xb4480338  sdr         $t0, 0x338($v0)
    ctx->pc = 0x433a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433a58: 0x3c0bffc0  lui         $t3, 0xFFC0
    ctx->pc = 0x433a58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65472 << 16));
    // 0x433a5c: 0x356b07ff  ori         $t3, $t3, 0x7FF
    ctx->pc = 0x433a5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2047);
    // 0x433a60: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x433a60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x433a64: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x433a64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x433a68: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x433a68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x433a6c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x433a6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x433a70: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x433a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x433a74: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x433a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x433a78: 0xb0470337  sdl         $a3, 0x337($v0)
    ctx->pc = 0x433a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433a7c: 0xb4470330  sdr         $a3, 0x330($v0)
    ctx->pc = 0x433a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433a80: 0x3c0eff80  lui         $t6, 0xFF80
    ctx->pc = 0x433a80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65408 << 16));
    // 0x433a84: 0x35ce0fff  ori         $t6, $t6, 0xFFF
    ctx->pc = 0x433a84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4095);
    // 0x433a88: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x433a88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x433a8c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x433a8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x433a90: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x433a90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x433a94: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x433a94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x433a98: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x433a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433a9c: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x433a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433aa0: 0xb046034f  sdl         $a2, 0x34F($v0)
    ctx->pc = 0x433aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433aa4: 0xb4460348  sdr         $a2, 0x348($v0)
    ctx->pc = 0x433aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433aa8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x433aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433aac: 0x6845003f  ldl         $a1, 0x3F($v0)
    ctx->pc = 0x433aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x433ab0: 0x6c450038  ldr         $a1, 0x38($v0)
    ctx->pc = 0x433ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x433ab4: 0xb0450347  sdl         $a1, 0x347($v0)
    ctx->pc = 0x433ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ab8: 0xb4450340  sdr         $a1, 0x340($v0)
    ctx->pc = 0x433ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433abc: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x433abcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x433ac0: 0xf7f38  dsll        $t7, $t7, 28
    ctx->pc = 0x433ac0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 28);
    // 0x433ac4: 0xa0440029  sb          $a0, 0x29($v0)
    ctx->pc = 0x433ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x433ac8: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x433ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x433acc: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x433accu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x433ad0: 0xdc4a0040  ld          $t2, 0x40($v0)
    ctx->pc = 0x433ad0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x433ad4: 0x91b3e  dsrl32      $v1, $t1, 12
    ctx->pc = 0x433ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 12));
    // 0x433ad8: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x433ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x433adc: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x433adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x433ae0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x433ae0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x433ae4: 0xdc450028  ld          $a1, 0x28($v0)
    ctx->pc = 0x433ae4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x433ae8: 0xa233e  dsrl32      $a0, $t2, 12
    ctx->pc = 0x433ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) >> (32 + 12));
    // 0x433aec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x433aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x433af0: 0xdea83170  ld          $t0, 0x3170($s5)
    ctx->pc = 0x433af0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 12656)));
    // 0x433af4: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x433af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x433af8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x433af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x433afc: 0xdc470038  ld          $a3, 0x38($v0)
    ctx->pc = 0x433afcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x433b00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x433b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x433b04: 0xcb3024  and         $a2, $a2, $t3
    ctx->pc = 0x433b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
    // 0x433b08: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x433b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x433b0c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x433b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x433b10: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x433b10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x433b14: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x433b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x433b18: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x433b18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x433b1c: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x433b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x433b20: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x433b20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x433b24: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x433b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x433b28: 0x14e5024  and         $t2, $t2, $t6
    ctx->pc = 0x433b28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x433b2c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x433b2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x433b30: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x433b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x433b34: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x433b34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x433b38: 0xfc450028  sd          $a1, 0x28($v0)
    ctx->pc = 0x433b38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 5));
    // 0x433b3c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x433b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x433b40: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x433b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x433b44: 0xfc490018  sd          $t1, 0x18($v0)
    ctx->pc = 0x433b44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 9));
    // 0x433b48: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x433b48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x433b4c: 0xfea83170  sd          $t0, 0x3170($s5)
    ctx->pc = 0x433b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 12656), GPR_U64(ctx, 8));
    // 0x433b50: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x433b50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x433b54: 0xfc4a0040  sd          $t2, 0x40($v0)
    ctx->pc = 0x433b54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 10));
label_433b58:
    // 0x433b58: 0x26a43170  addiu       $a0, $s5, 0x3170
    ctx->pc = 0x433b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x433b5c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x433B5Cu;
    SET_GPR_U32(ctx, 31, 0x433B64u);
    ctx->pc = 0x433B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B5Cu;
    // 0x433b60: 0x2485044f  addiu       $a1, $a0, 0x44F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x433B5Cu, 0x433B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B64u;
label_433b64:
    // 0x433b64: 0x8f84beec  lw          $a0, -0x4114($gp)
    ctx->pc = 0x433b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950636)));
    // 0x433b68: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x433b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x433b6c: 0xc110a06  jal         func_442818
    ctx->pc = 0x433B6Cu;
    SET_GPR_U32(ctx, 31, 0x433B74u);
    ctx->pc = 0x433B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B6Cu;
    // 0x433b70: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442818u, 0x433B6Cu, 0x433B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B74u;
label_433b74:
    // 0x433b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x433b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433b7c: 0xaf83ae14  sw          $v1, -0x51EC($gp)
    ctx->pc = 0x433b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946324), GPR_U32(ctx, 3));
    // 0x433b80: 0xaf80aeb4  sw          $zero, -0x514C($gp)
    ctx->pc = 0x433b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 0));
    // 0x433b84: 0xc0be2fc  jal         func_2F8BF0
    ctx->pc = 0x433B84u;
    SET_GPR_U32(ctx, 31, 0x433B8Cu);
    ctx->pc = 0x433B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B84u;
    // 0x433b88: 0xaf80ae34  sw          $zero, -0x51CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946356), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x433B84u, 0x433B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B8Cu;
label_433b8c:
    // 0x433b8c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x433b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x433b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x433b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433b94: 0xc0be3c8  jal         func_2F8F20
    ctx->pc = 0x433B94u;
    SET_GPR_U32(ctx, 31, 0x433B9Cu);
    ctx->pc = 0x433B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433B94u;
    // 0x433b98: 0x24a57d00  addiu       $a1, $a1, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F20u, 0x433B94u, 0x433B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433B9Cu;
label_433b9c:
    // 0x433b9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x433b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433ba0:
    // 0x433ba0: 0xc0bf252  jal         func_2FC948
    ctx->pc = 0x433BA0u;
    SET_GPR_U32(ctx, 31, 0x433BA8u);
    ctx->pc = 0x433BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433BA0u;
    // 0x433ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x433BA0u, 0x433BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433BA8u;
label_433ba8:
    // 0x433ba8: 0x5440fffd  bnel        $v0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x433BA8u;
    {
        const bool branch_taken_0x433ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433ba8) {
            ctx->pc = 0x433BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433BA8u;
            // 0x433bac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433ba0;
        }
    }
    ctx->pc = 0x433BB0u;
    // 0x433bb0: 0x27c23360  addiu       $v0, $fp, 0x3360
    ctx->pc = 0x433bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13152));
    // 0x433bb4: 0x2405140b  addiu       $a1, $zero, 0x140B
    ctx->pc = 0x433bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5131));
    // 0x433bb8: 0xdc46fee0  ld          $a2, -0x120($v0)
    ctx->pc = 0x433bb8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294967008)));
    // 0x433bbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x433bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x433bc0: 0xdc470050  ld          $a3, 0x50($v0)
    ctx->pc = 0x433bc0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x433bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x433bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x433bc8: 0xdc48fe90  ld          $t0, -0x170($v0)
    ctx->pc = 0x433bc8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 4294966928)));
    // 0x433bcc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x433bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x433bd0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x433bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x433bd4: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x433bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
    // 0x433bd8: 0xffc83360  sd          $t0, 0x3360($fp)
    ctx->pc = 0x433bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 13152), GPR_U64(ctx, 8));
    // 0x433bdc: 0x2450fe10  addiu       $s0, $v0, -0x1F0
    ctx->pc = 0x433bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x433be0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x433be0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x433be4: 0x2445025f  addiu       $a1, $v0, 0x25F
    ctx->pc = 0x433be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 607));
    // 0x433be8: 0xfc46fee0  sd          $a2, -0x120($v0)
    ctx->pc = 0x433be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294967008), GPR_U64(ctx, 6));
    // 0x433bec: 0xfc470050  sd          $a3, 0x50($v0)
    ctx->pc = 0x433becu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 7));
    // 0x433bf0: 0x6843fe17  ldl         $v1, -0x1E9($v0)
    ctx->pc = 0x433bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433bf4: 0x6c43fe10  ldr         $v1, -0x1F0($v0)
    ctx->pc = 0x433bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433bf8: 0x6846fe1f  ldl         $a2, -0x1E1($v0)
    ctx->pc = 0x433bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433bfc: 0x6c46fe18  ldr         $a2, -0x1E8($v0)
    ctx->pc = 0x433bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433c00: 0x6847fe27  ldl         $a3, -0x1D9($v0)
    ctx->pc = 0x433c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x433c04: 0x6c47fe20  ldr         $a3, -0x1E0($v0)
    ctx->pc = 0x433c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x433c08: 0x6848fe2f  ldl         $t0, -0x1D1($v0)
    ctx->pc = 0x433c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x433c0c: 0x6c48fe28  ldr         $t0, -0x1D8($v0)
    ctx->pc = 0x433c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x433c10: 0xb0430167  sdl         $v1, 0x167($v0)
    ctx->pc = 0x433c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c14: 0xb4430160  sdr         $v1, 0x160($v0)
    ctx->pc = 0x433c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c18: 0xb046016f  sdl         $a2, 0x16F($v0)
    ctx->pc = 0x433c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c1c: 0xb4460168  sdr         $a2, 0x168($v0)
    ctx->pc = 0x433c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c20: 0xb0470177  sdl         $a3, 0x177($v0)
    ctx->pc = 0x433c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c24: 0xb4470170  sdr         $a3, 0x170($v0)
    ctx->pc = 0x433c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c28: 0xb048017f  sdl         $t0, 0x17F($v0)
    ctx->pc = 0x433c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c2c: 0xb4480178  sdr         $t0, 0x178($v0)
    ctx->pc = 0x433c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c30: 0x6843fe37  ldl         $v1, -0x1C9($v0)
    ctx->pc = 0x433c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433c34: 0x6c43fe30  ldr         $v1, -0x1D0($v0)
    ctx->pc = 0x433c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433c38: 0xb0430187  sdl         $v1, 0x187($v0)
    ctx->pc = 0x433c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c3c: 0xb4430180  sdr         $v1, 0x180($v0)
    ctx->pc = 0x433c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c40: 0x6843fe3f  ldl         $v1, -0x1C1($v0)
    ctx->pc = 0x433c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433c44: 0x6c43fe38  ldr         $v1, -0x1C8($v0)
    ctx->pc = 0x433c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433c48: 0x6846fe47  ldl         $a2, -0x1B9($v0)
    ctx->pc = 0x433c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433c4c: 0x6c46fe40  ldr         $a2, -0x1C0($v0)
    ctx->pc = 0x433c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433c50: 0x6847fe4f  ldl         $a3, -0x1B1($v0)
    ctx->pc = 0x433c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x433c54: 0x6c47fe48  ldr         $a3, -0x1B8($v0)
    ctx->pc = 0x433c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x433c58: 0x6848fe57  ldl         $t0, -0x1A9($v0)
    ctx->pc = 0x433c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x433c5c: 0x6c48fe50  ldr         $t0, -0x1B0($v0)
    ctx->pc = 0x433c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x433c60: 0xb043018f  sdl         $v1, 0x18F($v0)
    ctx->pc = 0x433c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c64: 0xb4430188  sdr         $v1, 0x188($v0)
    ctx->pc = 0x433c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c68: 0xb0460197  sdl         $a2, 0x197($v0)
    ctx->pc = 0x433c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c6c: 0xb4460190  sdr         $a2, 0x190($v0)
    ctx->pc = 0x433c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c70: 0xb047019f  sdl         $a3, 0x19F($v0)
    ctx->pc = 0x433c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c74: 0xb4470198  sdr         $a3, 0x198($v0)
    ctx->pc = 0x433c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c78: 0xb04801a7  sdl         $t0, 0x1A7($v0)
    ctx->pc = 0x433c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c7c: 0xb44801a0  sdr         $t0, 0x1A0($v0)
    ctx->pc = 0x433c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c80: 0x6843fe5f  ldl         $v1, -0x1A1($v0)
    ctx->pc = 0x433c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433c84: 0x6c43fe58  ldr         $v1, -0x1A8($v0)
    ctx->pc = 0x433c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433c88: 0xb04301af  sdl         $v1, 0x1AF($v0)
    ctx->pc = 0x433c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c8c: 0xb44301a8  sdr         $v1, 0x1A8($v0)
    ctx->pc = 0x433c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433c90: 0x68430147  ldl         $v1, 0x147($v0)
    ctx->pc = 0x433c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433c94: 0x6c430140  ldr         $v1, 0x140($v0)
    ctx->pc = 0x433c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433c98: 0x6846014f  ldl         $a2, 0x14F($v0)
    ctx->pc = 0x433c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433c9c: 0x6c460148  ldr         $a2, 0x148($v0)
    ctx->pc = 0x433c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433ca0: 0x68470157  ldl         $a3, 0x157($v0)
    ctx->pc = 0x433ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x433ca4: 0x6c470150  ldr         $a3, 0x150($v0)
    ctx->pc = 0x433ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x433ca8: 0x6848015f  ldl         $t0, 0x15F($v0)
    ctx->pc = 0x433ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x433cac: 0x6c480158  ldr         $t0, 0x158($v0)
    ctx->pc = 0x433cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x433cb0: 0xb04301b7  sdl         $v1, 0x1B7($v0)
    ctx->pc = 0x433cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cb4: 0xb44301b0  sdr         $v1, 0x1B0($v0)
    ctx->pc = 0x433cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cb8: 0xb04601bf  sdl         $a2, 0x1BF($v0)
    ctx->pc = 0x433cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cbc: 0xb44601b8  sdr         $a2, 0x1B8($v0)
    ctx->pc = 0x433cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cc0: 0xb04701c7  sdl         $a3, 0x1C7($v0)
    ctx->pc = 0x433cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cc4: 0xb44701c0  sdr         $a3, 0x1C0($v0)
    ctx->pc = 0x433cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cc8: 0xb04801cf  sdl         $t0, 0x1CF($v0)
    ctx->pc = 0x433cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ccc: 0xb44801c8  sdr         $t0, 0x1C8($v0)
    ctx->pc = 0x433cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433cd0: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x433CD0u;
    SET_GPR_U32(ctx, 31, 0x433CD8u);
    ctx->pc = 0x433CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433CD0u;
    // 0x433cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x433CD0u, 0x433CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433CD8u;
label_433cd8:
    // 0x433cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x433cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433ce0: 0xaf82ae94  sw          $v0, -0x516C($gp)
    ctx->pc = 0x433ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946452), GPR_U32(ctx, 2));
    // 0x433ce4: 0xc0bf5ac  jal         func_2FD6B0
    ctx->pc = 0x433CE4u;
    SET_GPR_U32(ctx, 31, 0x433CECu);
    ctx->pc = 0x433CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433CE4u;
    // 0x433ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD6B0u, 0x433CE4u, 0x433CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433CECu;
label_433cec:
    // 0x433cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x433cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433cf0:
    // 0x433cf0: 0xc0bf252  jal         func_2FC948
    ctx->pc = 0x433CF0u;
    SET_GPR_U32(ctx, 31, 0x433CF8u);
    ctx->pc = 0x433CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433CF0u;
    // 0x433cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x433CF0u, 0x433CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433CF8u;
label_433cf8:
    // 0x433cf8: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x433CF8u;
    {
        const bool branch_taken_0x433cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CF8u;
        // 0x433cfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433cf8) {
            ctx->pc = 0x433CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433cf0;
        }
    }
    ctx->pc = 0x433D00u;
    // 0x433d00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x433d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x433d04: 0x26b03170  addiu       $s0, $s5, 0x3170
    ctx->pc = 0x433d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    // 0x433d08: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x433d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x433d0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x433d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x433d10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x433d10u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x433d14: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x433d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x433d18: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x433d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x433d1c: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x433d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x433d20: 0xc10a684  jal         func_429A10
    ctx->pc = 0x433D20u;
    SET_GPR_U32(ctx, 31, 0x433D28u);
    ctx->pc = 0x433D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433D20u;
    // 0x433d24: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429A10u, 0x433D20u, 0x433D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433D28u;
label_433d28:
    // 0x433d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x433d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433d2c: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x433D2Cu;
    {
        const bool branch_taken_0x433d2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x433d2c) {
            ctx->pc = 0x433D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433D2Cu;
            // 0x433d30: 0xde040080  ld          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433D44u;
            goto label_433d44;
        }
    }
    ctx->pc = 0x433D34u;
    // 0x433d34: 0xc110a46  jal         func_442918
    ctx->pc = 0x433D34u;
    SET_GPR_U32(ctx, 31, 0x433D3Cu);
    ctx->pc = 0x442918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442918u, 0x433D34u, 0x433D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433D3Cu;
label_433d3c:
    // 0x433d3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x433D3Cu;
    {
        const bool branch_taken_0x433d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D3Cu;
        // 0x433d40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d3c) {
            ctx->pc = 0x433DD8u;
            goto label_433dd8;
        }
    }
    ctx->pc = 0x433D44u;
label_433d44:
    // 0x433d44: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x433d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x433d48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x433d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x433d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x433d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x433d50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x433d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x433d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x433d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x433d58: 0xde070060  ld          $a3, 0x60($s0)
    ctx->pc = 0x433d58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x433d5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x433d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433d60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x433d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x433d64: 0xde060070  ld          $a2, 0x70($s0)
    ctx->pc = 0x433d64u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x433d68: 0xde0500d0  ld          $a1, 0xD0($s0)
    ctx->pc = 0x433d68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x433d6c: 0x4193f  dsra32      $v1, $a0, 4
    ctx->pc = 0x433d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 4) >> (32 + 4));
    // 0x433d70: 0x4113b  dsra        $v0, $a0, 4
    ctx->pc = 0x433d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 4);
    // 0x433d74: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x433d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x433d78: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x433d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x433d7c: 0xff83aea0  sd          $v1, -0x5160($gp)
    ctx->pc = 0x433d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946464), GPR_U64(ctx, 3));
    // 0x433d80: 0xff82ae98  sd          $v0, -0x5168($gp)
    ctx->pc = 0x433d80u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946456), GPR_U64(ctx, 2));
    // 0x433d84: 0xff87ae40  sd          $a3, -0x51C0($gp)
    ctx->pc = 0x433d84u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 7));
    // 0x433d88: 0xff86ae38  sd          $a2, -0x51C8($gp)
    ctx->pc = 0x433d88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946360), GPR_U64(ctx, 6));
    // 0x433d8c: 0xff85ae48  sd          $a1, -0x51B8($gp)
    ctx->pc = 0x433d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 5));
    // 0x433d90: 0xff84ae50  sd          $a0, -0x51B0($gp)
    ctx->pc = 0x433d90u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946384), GPR_U64(ctx, 4));
    // 0x433d94: 0xc10c7fc  jal         func_431FF0
    ctx->pc = 0x433D94u;
    SET_GPR_U32(ctx, 31, 0x433D9Cu);
    ctx->pc = 0x433D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433D94u;
    // 0x433d98: 0xaf92bf10  sw          $s2, -0x40F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950672), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431FF0u, 0x433D94u, 0x433D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433D9Cu;
label_433d9c:
    // 0x433d9c: 0x26c33b90  addiu       $v1, $s6, 0x3B90
    ctx->pc = 0x433d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15248));
    // 0x433da0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x433da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x433da4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x433da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x433da8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x433DA8u;
    {
        const bool branch_taken_0x433da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x433da8) {
            ctx->pc = 0x433DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433DA8u;
            // 0x433dac: 0xa380be2c  sb          $zero, -0x41D4($gp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 28), 4294950444), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433DB4u;
            goto label_433db4;
        }
    }
    ctx->pc = 0x433DB0u;
    // 0x433db0: 0xa392be2c  sb          $s2, -0x41D4($gp)
    ctx->pc = 0x433db0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950444), (uint8_t)GPR_U32(ctx, 18));
label_433db4:
    // 0x433db4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x433db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x433db8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x433db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x433dbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x433DBCu;
    {
        const bool branch_taken_0x433dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DBCu;
        // 0x433dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dbc) {
            ctx->pc = 0x433DD0u;
            goto label_433dd0;
        }
    }
    ctx->pc = 0x433DC4u;
    // 0x433dc4: 0xc10c9a0  jal         func_432680
    ctx->pc = 0x433DC4u;
    SET_GPR_U32(ctx, 31, 0x433DCCu);
    ctx->pc = 0x433DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433DC4u;
    // 0x433dc8: 0x26a43170  addiu       $a0, $s5, 0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432680u, 0x433DC4u, 0x433DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433DCCu;
label_433dcc:
    // 0x433dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x433dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433dd0:
    // 0x433dd0: 0xaf82bee0  sw          $v0, -0x4120($gp)
    ctx->pc = 0x433dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950624), GPR_U32(ctx, 2));
    // 0x433dd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x433dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_433dd8:
    // 0x433dd8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x433dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x433ddc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x433ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x433de0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x433de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x433de4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x433de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x433de8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x433de8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x433dec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x433decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x433df0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x433df0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x433df4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x433df4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433df8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x433df8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433e00: 0x3e00008  jr          $ra
    ctx->pc = 0x433E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E00u;
        // 0x433e04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433E08u;
    // 0x433e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x433e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x433e0c: 0x2c820017  sltiu       $v0, $a0, 0x17
    ctx->pc = 0x433e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x433e10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x433e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x433e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x433e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x433e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433e20: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x433E20u;
    {
        const bool branch_taken_0x433e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E20u;
        // 0x433e24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e20) {
            ctx->pc = 0x43411Cu;
            goto label_43411c;
        }
    }
    ctx->pc = 0x433E28u;
    // 0x433e28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x433e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x433e2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x433e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x433e30: 0x24421170  addiu       $v0, $v0, 0x1170
    ctx->pc = 0x433e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4464));
    // 0x433e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x433e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x433e38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x433e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x433e3c: 0x800008  jr          $a0
    ctx->pc = 0x433E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x433E44u: goto label_433e44;
            case 0x433E54u: goto label_433e54;
            case 0x433E5Cu: goto label_433e5c;
            case 0x433EF8u: goto label_433ef8;
            case 0x433F00u: goto label_433f00;
            case 0x433F84u: goto label_433f84;
            case 0x433F94u: goto label_433f94;
            case 0x433FA4u: goto label_433fa4;
            case 0x433FDCu: goto label_433fdc;
            case 0x433FECu: goto label_433fec;
            case 0x434004u: goto label_434004;
            case 0x43400Cu: goto label_43400c;
            case 0x43401Cu: goto label_43401c;
            case 0x434040u: goto label_434040;
            case 0x43410Cu: goto label_43410c;
            case 0x43411Cu: goto label_43411c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433E3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x433E44u;
label_433e44:
    // 0x433e44: 0xc10c85a  jal         func_432168
    ctx->pc = 0x433E44u;
    SET_GPR_U32(ctx, 31, 0x433E4Cu);
    ctx->pc = 0x433E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433E44u;
    // 0x433e48: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432168u, 0x433E44u, 0x433E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433E4Cu;
label_433e4c:
    // 0x433e4c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x433E4Cu;
    {
        const bool branch_taken_0x433e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E4Cu;
        // 0x433e50: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e4c) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433E54u;
label_433e54:
    // 0x433e54: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x433E54u;
    {
        const bool branch_taken_0x433e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E54u;
        // 0x433e58: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e54) {
            ctx->pc = 0x434010u;
            goto label_434010;
        }
    }
    ctx->pc = 0x433E5Cu;
label_433e5c:
    // 0x433e5c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x433e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x433e60: 0x2ca5005b  sltiu       $a1, $a1, 0x5B
    ctx->pc = 0x433e60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x433e64: 0x10a000ae  beqz        $a1, . + 4 + (0xAE << 2)
    ctx->pc = 0x433E64u;
    {
        const bool branch_taken_0x433e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E64u;
        // 0x433e68: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e64) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433E6Cu;
    // 0x433e6c: 0x4e00012  bltz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x433E6Cu;
    {
        const bool branch_taken_0x433e6c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x433E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E6Cu;
        // 0x433e70: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e6c) {
            ctx->pc = 0x433EB8u;
            goto label_433eb8;
        }
    }
    ctx->pc = 0x433E74u;
    // 0x433e74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x433e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x433e78: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x433e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x433e7c: 0x2442cac0  addiu       $v0, $v0, -0x3540
    ctx->pc = 0x433e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x433e80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x433e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x433e84: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x433e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x433e88: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x433e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x433e8c: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x433e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x433e90: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x433e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433e94: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x433e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433e98: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x433e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433e9c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x433e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ea0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x433ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ea4: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x433ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ea8: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x433ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433eac: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x433eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433eb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x433EB0u;
    {
        const bool branch_taken_0x433eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EB0u;
        // 0x433eb4: 0xb6060010  sdr         $a2, 0x10($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x433eb0) {
            ctx->pc = 0x433EF0u;
            goto label_433ef0;
        }
    }
    ctx->pc = 0x433EB8u;
label_433eb8:
    // 0x433eb8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x433eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x433ebc: 0x24473b90  addiu       $a3, $v0, 0x3B90
    ctx->pc = 0x433ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x433ec0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x433ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433ec4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x433ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433ec8: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x433ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x433ecc: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x433eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433ed0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x433ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433ed4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x433ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433ed8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x433ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433edc: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x433edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ee0: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x433ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ee4: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x433ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433ee8: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x433ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433eec: 0xb6060010  sdr         $a2, 0x10($s0)
    ctx->pc = 0x433eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_433ef0:
    // 0x433ef0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x433EF0u;
    {
        const bool branch_taken_0x433ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EF0u;
        // 0x433ef4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ef0) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433EF8u;
label_433ef8:
    // 0x433ef8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x433EF8u;
    {
        const bool branch_taken_0x433ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EF8u;
        // 0x433efc: 0x8f82bed8  lw          $v0, -0x4128($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ef8) {
            ctx->pc = 0x434010u;
            goto label_434010;
        }
    }
    ctx->pc = 0x433F00u;
label_433f00:
    // 0x433f00: 0xc10d3d6  jal         func_434F58
    ctx->pc = 0x433F00u;
    SET_GPR_U32(ctx, 31, 0x433F08u);
    ctx->pc = 0x434F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434F58u, 0x433F00u, 0x433F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433F08u;
label_433f08:
    // 0x433f08: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x433f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433f0c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x433f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433f10: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x433f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x433f14: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x433f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433f18: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x433f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x433f1c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x433f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x433f20: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x433f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x433f24: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x433f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x433f28: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x433f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f2c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x433f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f30: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x433f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f34: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x433f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f38: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x433f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f3c: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x433f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f40: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x433f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f44: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x433f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f48: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x433f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x433f4c: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x433f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x433f50: 0x6844002f  ldl         $a0, 0x2F($v0)
    ctx->pc = 0x433f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x433f54: 0x6c440028  ldr         $a0, 0x28($v0)
    ctx->pc = 0x433f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x433f58: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x433f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x433f5c: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x433f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x433f60: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x433f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f64: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x433f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f68: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x433f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f6c: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x433f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f70: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x433f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f74: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x433f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x433f78: 0xaf91beb4  sw          $s1, -0x414C($gp)
    ctx->pc = 0x433f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950580), GPR_U32(ctx, 17));
    // 0x433f7c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x433F7Cu;
    {
        const bool branch_taken_0x433f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F7Cu;
        // 0x433f80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433f7c) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433F84u;
label_433f84:
    // 0x433f84: 0xc10c8a8  jal         func_4322A0
    ctx->pc = 0x433F84u;
    SET_GPR_U32(ctx, 31, 0x433F8Cu);
    ctx->pc = 0x4322A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4322A0u, 0x433F84u, 0x433F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433F8Cu;
label_433f8c:
    // 0x433f8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x433F8Cu;
    {
        const bool branch_taken_0x433f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F8Cu;
        // 0x433f90: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433f8c) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433F94u;
label_433f94:
    // 0x433f94: 0xc10cc3e  jal         func_4330F8
    ctx->pc = 0x433F94u;
    SET_GPR_U32(ctx, 31, 0x433F9Cu);
    ctx->pc = 0x4330F8u;
    goto label_4330f8;
    ctx->pc = 0x433F9Cu;
label_433f9c:
    // 0x433f9c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x433F9Cu;
    {
        const bool branch_taken_0x433f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F9Cu;
        // 0x433fa0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433f9c) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433FA4u;
label_433fa4:
    // 0x433fa4: 0xc10a822  jal         func_42A088
    ctx->pc = 0x433FA4u;
    SET_GPR_U32(ctx, 31, 0x433FACu);
    ctx->pc = 0x42A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A088u, 0x433FA4u, 0x433FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FACu;
label_433fac:
    // 0x433fac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x433facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x433fb0: 0x24423170  addiu       $v0, $v0, 0x3170
    ctx->pc = 0x433fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12656));
    // 0x433fb4: 0xac4003c0  sw          $zero, 0x3C0($v0)
    ctx->pc = 0x433fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x623530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623530u, _value); } while (0);
    // 0x433fb8: 0xac4003cc  sw          $zero, 0x3CC($v0)
    ctx->pc = 0x433fb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x62353Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62353Cu, _value); } while (0);
    // 0x433fbc: 0xac4003c8  sw          $zero, 0x3C8($v0)
    ctx->pc = 0x433fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x623538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623538u, _value); } while (0);
    // 0x433fc0: 0xc110a46  jal         func_442918
    ctx->pc = 0x433FC0u;
    SET_GPR_U32(ctx, 31, 0x433FC8u);
    ctx->pc = 0x433FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433FC0u;
    // 0x433fc4: 0xac4003c4  sw          $zero, 0x3C4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 964), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442918u, 0x433FC0u, 0x433FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FC8u;
label_433fc8:
    // 0x433fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433fcc: 0xaf80bee0  sw          $zero, -0x4120($gp)
    ctx->pc = 0x433fccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950624), GPR_U32(ctx, 0));
    // 0x433fd0: 0xaf83ae18  sw          $v1, -0x51E8($gp)
    ctx->pc = 0x433fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946328), GPR_U32(ctx, 3));
    // 0x433fd4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x433FD4u;
    {
        const bool branch_taken_0x433fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433FD4u;
        // 0x433fd8: 0xaf80ae14  sw          $zero, -0x51EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433fd4) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433FDCu;
label_433fdc:
    // 0x433fdc: 0xc10c964  jal         func_432590
    ctx->pc = 0x433FDCu;
    SET_GPR_U32(ctx, 31, 0x433FE4u);
    ctx->pc = 0x432590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432590u, 0x433FDCu, 0x433FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FE4u;
label_433fe4:
    // 0x433fe4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x433FE4u;
    {
        const bool branch_taken_0x433fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433FE4u;
        // 0x433fe8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433fe4) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x433FECu;
label_433fec:
    // 0x433fec: 0xc10ee68  jal         func_43B9A0
    ctx->pc = 0x433FECu;
    SET_GPR_U32(ctx, 31, 0x433FF4u);
    ctx->pc = 0x43B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B9A0u, 0x433FECu, 0x433FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FF4u;
label_433ff4:
    // 0x433ff4: 0xc10d3da  jal         func_434F68
    ctx->pc = 0x433FF4u;
    SET_GPR_U32(ctx, 31, 0x433FFCu);
    ctx->pc = 0x434F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434F68u, 0x433FF4u, 0x433FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FFCu;
label_433ffc:
    // 0x433ffc: 0xc110392  jal         func_440E48
    ctx->pc = 0x433FFCu;
    SET_GPR_U32(ctx, 31, 0x434004u);
    ctx->pc = 0x440E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440E48u, 0x433FFCu, 0x434004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434004u;
label_434004:
    // 0x434004: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x434004u;
    {
        const bool branch_taken_0x434004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434004u;
        // 0x434008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434004) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x43400Cu;
label_43400c:
    // 0x43400c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x43400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_434010:
    // 0x434010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x434010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434014: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x434014u;
    {
        const bool branch_taken_0x434014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434014u;
        // 0x434018: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434014) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x43401Cu;
label_43401c:
    // 0x43401c: 0x8f84bee0  lw          $a0, -0x4120($gp)
    ctx->pc = 0x43401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x434020: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434020u;
    {
        const bool branch_taken_0x434020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x434024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434020u;
        // 0x434024: 0x8f83beec  lw          $v1, -0x4114($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434020) {
            ctx->pc = 0x434038u;
            goto label_434038;
        }
    }
    ctx->pc = 0x434028u;
    // 0x434028: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x434028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x43402c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x43402cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x434030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x434030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x434034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x434034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_434038:
    // 0x434038: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x434038u;
    {
        const bool branch_taken_0x434038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434038u;
        // 0x43403c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434038) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x434040u;
label_434040:
    // 0x434040: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x434040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x434044: 0x18e0001f  blez        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x434044u;
    {
        const bool branch_taken_0x434044 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x434048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434044u;
        // 0x434048: 0x2448d3c0  addiu       $t0, $v0, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434044) {
            ctx->pc = 0x4340C4u;
            goto label_4340c4;
        }
    }
    ctx->pc = 0x43404Cu;
    // 0x43404c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x43404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x434050: 0x71823  negu        $v1, $a3
    ctx->pc = 0x434050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x434054: 0x24465a08  addiu       $a2, $v0, 0x5A08
    ctx->pc = 0x434054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23048));
    // 0x434058: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x434058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x43405c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x43405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434060: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x434060u;
    {
        const bool branch_taken_0x434060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x434064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434060u;
        // 0x434064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434060) {
            ctx->pc = 0x4340A4u;
            goto label_4340a4;
        }
    }
    ctx->pc = 0x434068u;
    // 0x434068: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x434068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x43406c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43406Cu;
    {
        const bool branch_taken_0x43406c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43406Cu;
        // 0x434070: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43406c) {
            ctx->pc = 0x434094u;
            goto label_434094;
        }
    }
    ctx->pc = 0x434074u;
    // 0x434074: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x434074u;
    {
        const bool branch_taken_0x434074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x434074) {
            ctx->pc = 0x434078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434074u;
            // 0x434078: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43408Cu;
            goto label_43408c;
        }
    }
    ctx->pc = 0x43407Cu;
    // 0x43407c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x43407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x434080: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x434080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x434084: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x434084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x434088: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x434088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_43408c:
    // 0x43408c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x43408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x434090: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x434090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_434094:
    // 0x434094: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x434094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x434098: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x434098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x43409c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43409Cu;
    {
        const bool branch_taken_0x43409c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4340A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43409Cu;
        // 0x4340a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43409c) {
            ctx->pc = 0x4340C4u;
            goto label_4340c4;
        }
    }
    ctx->pc = 0x4340A4u;
label_4340a4:
    // 0x4340a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4340a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4340a8:
    // 0x4340a8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4340a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4340ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x4340acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x4340b0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x4340b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x4340b4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x4340b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x4340b8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x4340b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x4340bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4340BCu;
    {
        const bool branch_taken_0x4340bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4340C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340BCu;
        // 0x4340c0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340bc) {
            ctx->pc = 0x4340A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4340a8;
        }
    }
    ctx->pc = 0x4340C4u;
label_4340c4:
    // 0x4340c4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4340c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4340c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x4340c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x4340cc: 0x0  nop
    ctx->pc = 0x4340ccu;
    // NOP
label_4340d0:
    // 0x4340d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4340d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4340d4: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x4340d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4340d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4340D8u;
    {
        const bool branch_taken_0x4340d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4340DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340D8u;
        // 0x4340dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340d8) {
            ctx->pc = 0x4340F8u;
            goto label_4340f8;
        }
    }
    ctx->pc = 0x4340E0u;
    // 0x4340e0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4340E0u;
    {
        const bool branch_taken_0x4340e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4340E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340E0u;
        // 0x4340e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340e0) {
            ctx->pc = 0x4340F4u;
            goto label_4340f4;
        }
    }
    ctx->pc = 0x4340E8u;
    // 0x4340e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4340e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4340ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4340ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4340f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4340f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4340f4:
    // 0x4340f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4340f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4340f8:
    // 0x4340f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4340f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4340fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4340FCu;
    {
        const bool branch_taken_0x4340fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340FCu;
        // 0x434100: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340fc) {
            ctx->pc = 0x4340D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4340d0;
        }
    }
    ctx->pc = 0x434104u;
    // 0x434104: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x434104u;
    {
        const bool branch_taken_0x434104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434104u;
        // 0x434108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434104) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x43410Cu;
label_43410c:
    // 0x43410c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x43410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x434110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x434110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x434114u;
    {
        const bool branch_taken_0x434114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434114u;
        // 0x434118: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434114) {
            ctx->pc = 0x434120u;
            goto label_434120;
        }
    }
    ctx->pc = 0x43411Cu;
label_43411c:
    // 0x43411c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43411cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434120:
    // 0x434120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x434120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x434124: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x434124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x434128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43412c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x434130: 0x3e00008  jr          $ra
    ctx->pc = 0x434130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434130u;
        // 0x434134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434138u;
    // 0x434138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x434138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43413c: 0x8f82ae34  lw          $v0, -0x51CC($gp)
    ctx->pc = 0x43413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946356)));
    // 0x434140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x434140u;
    {
        const bool branch_taken_0x434140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434140u;
        // 0x434144: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434140) {
            ctx->pc = 0x434150u;
            goto label_434150;
        }
    }
    ctx->pc = 0x434148u;
    // 0x434148: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x434148u;
    {
        const bool branch_taken_0x434148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434148u;
        // 0x43414c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434148) {
            ctx->pc = 0x434260u;
            goto label_434260;
        }
    }
    ctx->pc = 0x434150u;
label_434150:
    // 0x434150: 0xc0bf22c  jal         func_2FC8B0
    ctx->pc = 0x434150u;
    SET_GPR_U32(ctx, 31, 0x434158u);
    ctx->pc = 0x434154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434150u;
    // 0x434154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8B0u, 0x434150u, 0x434158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434158u;
label_434158:
    // 0x434158: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x434158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x43415c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x43415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x434160: 0x24633b90  addiu       $v1, $v1, 0x3B90
    ctx->pc = 0x434160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15248));
    // 0x434164: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x434164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x623BC2u));
    // 0x434168: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434168u;
    {
        const bool branch_taken_0x434168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x434168) {
            ctx->pc = 0x43416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434168u;
            // 0x43416c: 0x8c640024  lw          $a0, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434180u;
            goto label_434180;
        }
    }
    ctx->pc = 0x434170u;
    // 0x434170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x434170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x434174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434178: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x434178u;
    {
        const bool branch_taken_0x434178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434178u;
        // 0x43417c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434178) {
            ctx->pc = 0x4341C4u;
            goto label_4341c4;
        }
    }
    ctx->pc = 0x434180u;
label_434180:
    // 0x434180: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x434180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x434184: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x434184u;
    {
        const bool branch_taken_0x434184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434184) {
            ctx->pc = 0x434188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434184u;
            // 0x434188: 0x90660032  lbu         $a2, 0x32($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4341BCu;
            goto label_4341bc;
        }
    }
    ctx->pc = 0x43418Cu;
    // 0x43418c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x43418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x434190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x434190u;
    {
        const bool branch_taken_0x434190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434190u;
        // 0x434194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434190) {
            ctx->pc = 0x4341B0u;
            goto label_4341b0;
        }
    }
    ctx->pc = 0x434198u;
    // 0x434198: 0x90660032  lbu         $a2, 0x32($v1)
    ctx->pc = 0x434198u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x43419c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4341a0: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x4341A0u;
    SET_GPR_U32(ctx, 31, 0x4341A8u);
    ctx->pc = 0x4341A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4341A0u;
    // 0x4341a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x4341A0u, 0x4341A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4341A8u;
label_4341a8:
    // 0x4341a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4341A8u;
    {
        const bool branch_taken_0x4341a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4341ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341A8u;
        // 0x4341ac: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341a8) {
            ctx->pc = 0x4341E8u;
            goto label_4341e8;
        }
    }
    ctx->pc = 0x4341B0u;
label_4341b0:
    // 0x4341b0: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x4341b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x4341b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4341B4u;
    {
        const bool branch_taken_0x4341b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4341B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341B4u;
        // 0x4341b8: 0x90660032  lbu         $a2, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341b4) {
            ctx->pc = 0x4341D4u;
            goto label_4341d4;
        }
    }
    ctx->pc = 0x4341BCu;
label_4341bc:
    // 0x4341bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4341bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4341c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4341c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4341c4:
    // 0x4341c4: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x4341C4u;
    SET_GPR_U32(ctx, 31, 0x4341CCu);
    ctx->pc = 0x4341C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4341C4u;
    // 0x4341c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x4341C4u, 0x4341CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4341CCu;
label_4341cc:
    // 0x4341cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4341CCu;
    {
        const bool branch_taken_0x4341cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4341D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341CCu;
        // 0x4341d0: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341cc) {
            ctx->pc = 0x4341E8u;
            goto label_4341e8;
        }
    }
    ctx->pc = 0x4341D4u;
label_4341d4:
    // 0x4341d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4341d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4341d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4341d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4341dc: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x4341DCu;
    SET_GPR_U32(ctx, 31, 0x4341E4u);
    ctx->pc = 0x4341E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4341DCu;
    // 0x4341e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x4341DCu, 0x4341E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4341E4u;
label_4341e4:
    // 0x4341e4: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x4341e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
label_4341e8:
    // 0x4341e8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4341e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x4341ec: 0x24843170  addiu       $a0, $a0, 0x3170
    ctx->pc = 0x4341ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12656));
    // 0x4341f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4341f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4341f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4341f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4341f8: 0xc0bf5ac  jal         func_2FD6B0
    ctx->pc = 0x4341F8u;
    SET_GPR_U32(ctx, 31, 0x434200u);
    ctx->pc = 0x4341FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4341F8u;
    // 0x4341fc: 0xaf82ae94  sw          $v0, -0x516C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD6B0u, 0x4341F8u, 0x434200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434200u;
label_434200:
    // 0x434200: 0xc0be2fc  jal         func_2F8BF0
    ctx->pc = 0x434200u;
    SET_GPR_U32(ctx, 31, 0x434208u);
    ctx->pc = 0x434204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434200u;
    // 0x434204: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x434200u, 0x434208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434208u;
label_434208:
    // 0x434208: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x434208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x43420c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434210: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x434210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x434214: 0xc0be3e2  jal         func_2F8F88
    ctx->pc = 0x434214u;
    SET_GPR_U32(ctx, 31, 0x43421Cu);
    ctx->pc = 0x434218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434214u;
    // 0x434218: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F88u, 0x434214u, 0x43421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43421Cu;
label_43421c:
    // 0x43421c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434220:
    // 0x434220: 0xc0bf252  jal         func_2FC948
    ctx->pc = 0x434220u;
    SET_GPR_U32(ctx, 31, 0x434228u);
    ctx->pc = 0x434224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434220u;
    // 0x434224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x434220u, 0x434228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434228u;
label_434228:
    // 0x434228: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x434228u;
    {
        const bool branch_taken_0x434228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434228u;
        // 0x43422c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434228) {
            ctx->pc = 0x434220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434220;
        }
    }
    ctx->pc = 0x434230u;
    // 0x434230: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x434230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x434234: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x434234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x434238: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x434238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x43423c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x43423cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x434240: 0xc110ef4  jal         func_443BD0
    ctx->pc = 0x434240u;
    SET_GPR_U32(ctx, 31, 0x434248u);
    ctx->pc = 0x443BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443BD0u, 0x434240u, 0x434248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434248u;
label_434248:
    // 0x434248: 0xc10c7fc  jal         func_431FF0
    ctx->pc = 0x434248u;
    SET_GPR_U32(ctx, 31, 0x434250u);
    ctx->pc = 0x431FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431FF0u, 0x434248u, 0x434250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434250u;
label_434250:
    // 0x434250: 0xc10a5c0  jal         func_429700
    ctx->pc = 0x434250u;
    SET_GPR_U32(ctx, 31, 0x434258u);
    ctx->pc = 0x429700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429700u, 0x434250u, 0x434258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434258u;
label_434258:
    // 0x434258: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x434258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x43425c: 0xaf82ae34  sw          $v0, -0x51CC($gp)
    ctx->pc = 0x43425cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946356), GPR_U32(ctx, 2));
label_434260:
    // 0x434260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x434264: 0x3e00008  jr          $ra
    ctx->pc = 0x434264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434264u;
        // 0x434268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43426Cu;
    // 0x43426c: 0x0  nop
    ctx->pc = 0x43426cu;
    // NOP
    ctx->pc = 0x434270u;
}
