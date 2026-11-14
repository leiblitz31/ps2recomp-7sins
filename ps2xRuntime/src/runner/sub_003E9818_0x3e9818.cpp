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

// Function: sub_003E9818
// Address: 0x3e9818 - 0x3ea4d8
void sub_003E9818_0x3e9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9818_0x3e9818");
#endif

    switch (ctx->pc) {
        case 0x3e9918u: goto label_3e9918;
        case 0x3e9a28u: goto label_3e9a28;
        case 0x3e9ba0u: goto label_3e9ba0;
        case 0x3e9c3cu: goto label_3e9c3c;
        case 0x3e9d48u: goto label_3e9d48;
        case 0x3e9f28u: goto label_3e9f28;
        case 0x3ea0f0u: goto label_3ea0f0;
        case 0x3ea278u: goto label_3ea278;
        case 0x3ea408u: goto label_3ea408;
        default: break;
    }

    ctx->pc = 0x3e9818u;

    // 0x3e9818: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3e9818u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e981c: 0x6123a  dsrl        $v0, $a2, 8
    ctx->pc = 0x3e981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 8);
    // 0x3e9820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e9820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e9824: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3e9824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3e9828: 0x91a30010  lbu         $v1, 0x10($t5)
    ctx->pc = 0x3e9828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x3e982c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x3e982cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e9830: 0xddaa0000  ld          $t2, 0x0($t5)
    ctx->pc = 0x3e9830u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3e9834: 0x14600168  bnez        $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x3E9834u;
    {
        const bool branch_taken_0x3e9834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9834u;
        // 0x3e9838: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9834) {
            ctx->pc = 0x3E9DD8u;
            goto label_3e9dd8;
        }
    }
    ctx->pc = 0x3E983Cu;
    // 0x3e983c: 0x91a30011  lbu         $v1, 0x11($t5)
    ctx->pc = 0x3e983cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 17)));
    // 0x3e9840: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e9844: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x3E9844u;
    {
        const bool branch_taken_0x3e9844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9844u;
        // 0x3e9848: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9844) {
            ctx->pc = 0x3E9A80u;
            goto label_3e9a80;
        }
    }
    ctx->pc = 0x3E984Cu;
    // 0x3e984c: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x3e984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x3e9850: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3E9850u;
    {
        const bool branch_taken_0x3e9850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9850u;
        // 0x3e9854: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9850) {
            ctx->pc = 0x3E9978u;
            goto label_3e9978;
        }
    }
    ctx->pc = 0x3E9858u;
    // 0x3e9858: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3e9858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e985c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e985cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e9860: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x3e9860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9864: 0x16a182b  sltu        $v1, $t3, $t2
    ctx->pc = 0x3e9864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9868: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x3e9868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3e986c: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3E986Cu;
    {
        const bool branch_taken_0x3e986c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E986Cu;
        // 0x3e9870: 0xa4878  dsll        $t1, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e986c) {
            ctx->pc = 0x3E9964u;
            goto label_3e9964;
        }
    }
    ctx->pc = 0x3E9874u;
    // 0x3e9874: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3e9874u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3e9878: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e9878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e987c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3e987cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e9880: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3e9880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e9884: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E9884u;
    {
        const bool branch_taken_0x3e9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9884u;
        // 0x3e9888: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9884) {
            ctx->pc = 0x3E98ECu;
            goto label_3e98ec;
        }
    }
    ctx->pc = 0x3E988Cu;
    // 0x3e988c: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3E988Cu;
    {
        const bool branch_taken_0x3e988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E988Cu;
        // 0x3e9890: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e988c) {
            ctx->pc = 0x3E9914u;
            goto label_3e9914;
        }
    }
    ctx->pc = 0x3E9894u;
    // 0x3e9894: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E9894u;
    {
        const bool branch_taken_0x3e9894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9894u;
        // 0x3e9898: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9894) {
            ctx->pc = 0x3E98F0u;
            goto label_3e98f0;
        }
    }
    ctx->pc = 0x3E989Cu;
    // 0x3e989c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e989cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e98a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E98A0u;
    {
        const bool branch_taken_0x3e98a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98A0u;
        // 0x3e98a4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98a0) {
            ctx->pc = 0x3E98D4u;
            goto label_3e98d4;
        }
    }
    ctx->pc = 0x3E98A8u;
    // 0x3e98a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e98a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e98ac: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e98acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e98b0: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3e98b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e98b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e98b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e98b8: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x3e98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e98bc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3e98bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e98c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e98c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e98c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e98c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e98c8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e98c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e98cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e98d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e98d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e98d4:
    // 0x3e98d4: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e98d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e98d8: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3e98d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3e98dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e98e0: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e98e0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e98e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e98e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e98e8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e98e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e98ec:
    // 0x3e98ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e98f0:
    // 0x3e98f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e98f4: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e98f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e98f8: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e98f8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e98fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9900: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3e9900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3e9904: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9908: 0x16a402b  sltu        $t0, $t3, $t2
    ctx->pc = 0x3e9908u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e990c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E990Cu;
    {
        const bool branch_taken_0x3e990c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E990Cu;
        // 0x3e9910: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e990c) {
            ctx->pc = 0x3E9964u;
            goto label_3e9964;
        }
    }
    ctx->pc = 0x3E9914u;
label_3e9914:
    // 0x3e9914: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e9914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e9918:
    // 0x3e9918: 0xa086ffff  sb          $a2, -0x1($a0)
    ctx->pc = 0x3e9918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e991c: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3e991cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3e9920: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x3e9920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x3e9924: 0x16a402b  sltu        $t0, $t3, $t2
    ctx->pc = 0x3e9924u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9928: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3e9928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3e992c: 0xa086fffd  sb          $a2, -0x3($a0)
    ctx->pc = 0x3e992cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9930: 0xa082fffe  sb          $v0, -0x2($a0)
    ctx->pc = 0x3e9930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9934: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3e9934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3e9938: 0xa086fffb  sb          $a2, -0x5($a0)
    ctx->pc = 0x3e9938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e993c: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3e993cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9940: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3e9940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3e9944: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3e9944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3e9948: 0xa082fffa  sb          $v0, -0x6($a0)
    ctx->pc = 0x3e9948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e994c: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3e9950: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3e9950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9954: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9958: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e995c: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3E995Cu;
    {
        const bool branch_taken_0x3e995c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E995Cu;
        // 0x3e9960: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e995c) {
            ctx->pc = 0x3E9918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9918;
        }
    }
    ctx->pc = 0x3E9964u;
label_3e9964:
    // 0x3e9964: 0xa0e6ffff  sb          $a2, -0x1($a3)
    ctx->pc = 0x3e9964u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e996c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9970: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x3E9970u;
    {
        const bool branch_taken_0x3e9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9970u;
        // 0x3e9974: 0xfda90008  sd          $t1, 0x8($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9970) {
            ctx->pc = 0x3EA4C8u;
            goto label_3ea4c8;
        }
    }
    ctx->pc = 0x3E9978u;
label_3e9978:
    // 0x3e9978: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3e9978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e997c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e997cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e9980: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e9980u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9984: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x3e9984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9988: 0xa4878  dsll        $t1, $t2, 1
    ctx->pc = 0x3e9988u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << 1);
    // 0x3e998c: 0x11400038  beqz        $t2, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E998Cu;
    {
        const bool branch_taken_0x3e998c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E998Cu;
        // 0x3e9990: 0x1023821  addu        $a3, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e998c) {
            ctx->pc = 0x3E9A70u;
            goto label_3e9a70;
        }
    }
    ctx->pc = 0x3E9994u;
    // 0x3e9994: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9998: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3e9998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e999c: 0x19400017  blez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E999Cu;
    {
        const bool branch_taken_0x3e999c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E999Cu;
        // 0x3e99a0: 0x31440003  andi        $a0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e999c) {
            ctx->pc = 0x3E99FCu;
            goto label_3e99fc;
        }
    }
    ctx->pc = 0x3E99A4u;
    // 0x3e99a4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E99A4u;
    {
        const bool branch_taken_0x3e99a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99A4u;
        // 0x3e99a8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99a4) {
            ctx->pc = 0x3E9A20u;
            goto label_3e9a20;
        }
    }
    ctx->pc = 0x3E99ACu;
    // 0x3e99ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E99ACu;
    {
        const bool branch_taken_0x3e99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99ACu;
        // 0x3e99b0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99ac) {
            ctx->pc = 0x3E9A00u;
            goto label_3e9a00;
        }
    }
    ctx->pc = 0x3E99B4u;
    // 0x3e99b4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e99b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e99b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E99B8u;
    {
        const bool branch_taken_0x3e99b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99B8u;
        // 0x3e99bc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99b8) {
            ctx->pc = 0x3E99E8u;
            goto label_3e99e8;
        }
    }
    ctx->pc = 0x3E99C0u;
    // 0x3e99c0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e99c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e99c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e99c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e99c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e99cc: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x3e99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e99d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e99d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e99d4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e99d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e99d8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e99d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e99dc: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e99dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e99e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e99e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e99e8:
    // 0x3e99e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e99e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e99ec: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e99ecu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e99f0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e99f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e99f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e99f8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_3e99fc:
    // 0x3e99fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e99fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e9a00:
    // 0x3e9a00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9a04: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9a08: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9a08u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9a0c: 0x16a382b  sltu        $a3, $t3, $t2
    ctx->pc = 0x3e9a0cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9a10: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9a14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9a18: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E9A18u;
    {
        const bool branch_taken_0x3e9a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A18u;
        // 0x3e9a1c: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a18) {
            ctx->pc = 0x3E9A70u;
            goto label_3e9a70;
        }
    }
    ctx->pc = 0x3E9A20u;
label_3e9a20:
    // 0x3e9a20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e9a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9a24: 0x0  nop
    ctx->pc = 0x3e9a24u;
    // NOP
label_3e9a28:
    // 0x3e9a28: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3e9a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3e9a2c: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3e9a2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3e9a30: 0xa086fffe  sb          $a2, -0x2($a0)
    ctx->pc = 0x3e9a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9a34: 0x16a382b  sltu        $a3, $t3, $t2
    ctx->pc = 0x3e9a34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9a38: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e9a38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9a3c: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3e9a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3e9a40: 0xa086fffc  sb          $a2, -0x4($a0)
    ctx->pc = 0x3e9a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9a44: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3e9a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9a48: 0x90a3fffd  lbu         $v1, -0x3($a1)
    ctx->pc = 0x3e9a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3e9a4c: 0xa086fffa  sb          $a2, -0x6($a0)
    ctx->pc = 0x3e9a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9a50: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3e9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3e9a54: 0xa083fffb  sb          $v1, -0x5($a0)
    ctx->pc = 0x3e9a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9a58: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3e9a5c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9a60: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9a64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9a68: 0x14e0ffef  bnez        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3E9A68u;
    {
        const bool branch_taken_0x3e9a68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A68u;
        // 0x3e9a6c: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a68) {
            ctx->pc = 0x3E9A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9a28;
        }
    }
    ctx->pc = 0x3E9A70u;
label_3e9a70:
    // 0x3e9a70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9a74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9a78: 0x10000293  b           . + 4 + (0x293 << 2)
    ctx->pc = 0x3E9A78u;
    {
        const bool branch_taken_0x3e9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A78u;
        // 0x3e9a7c: 0xfda90008  sd          $t1, 0x8($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a78) {
            ctx->pc = 0x3EA4C8u;
            goto label_3ea4c8;
        }
    }
    ctx->pc = 0x3E9A80u;
label_3e9a80:
    // 0x3e9a80: 0x14620293  bne         $v1, $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x3E9A80u;
    {
        const bool branch_taken_0x3e9a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A80u;
        // 0x3e9a84: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a80) {
            ctx->pc = 0x3EA4D0u;
            goto label_3ea4d0;
        }
    }
    ctx->pc = 0x3E9A88u;
    // 0x3e9a88: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3E9A88u;
    {
        const bool branch_taken_0x3e9a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A88u;
        // 0x3e9a8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a88) {
            ctx->pc = 0x3E9C4Cu;
            goto label_3e9c4c;
        }
    }
    ctx->pc = 0x3E9A90u;
    // 0x3e9a90: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3e9a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e9a94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e9a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e9a98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3e9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9a9c: 0x16a182b  sltu        $v1, $t3, $t2
    ctx->pc = 0x3e9a9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9aa0: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x3e9aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9aa4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3E9AA4u;
    {
        const bool branch_taken_0x3e9aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AA4u;
        // 0x3e9aa8: 0xa70b8  dsll        $t6, $t2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9aa4) {
            ctx->pc = 0x3E9C28u;
            goto label_3e9c28;
        }
    }
    ctx->pc = 0x3E9AACu;
    // 0x3e9aac: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3e9aacu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3e9ab0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3e9ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9ab4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e9ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e9ab8: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3e9ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e9abc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E9ABCu;
    {
        const bool branch_taken_0x3e9abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ABCu;
        // 0x3e9ac0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9abc) {
            ctx->pc = 0x3E9B58u;
            goto label_3e9b58;
        }
    }
    ctx->pc = 0x3E9AC4u;
    // 0x3e9ac4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3E9AC4u;
    {
        const bool branch_taken_0x3e9ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AC4u;
        // 0x3e9ac8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ac4) {
            ctx->pc = 0x3E9B98u;
            goto label_3e9b98;
        }
    }
    ctx->pc = 0x3E9ACCu;
    // 0x3e9acc: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E9ACCu;
    {
        const bool branch_taken_0x3e9acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ACCu;
        // 0x3e9ad0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9acc) {
            ctx->pc = 0x3E9B5Cu;
            goto label_3e9b5c;
        }
    }
    ctx->pc = 0x3E9AD4u;
    // 0x3e9ad4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e9ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e9ad8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E9AD8u;
    {
        const bool branch_taken_0x3e9ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AD8u;
        // 0x3e9adc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ad8) {
            ctx->pc = 0x3E9B28u;
            goto label_3e9b28;
        }
    }
    ctx->pc = 0x3E9AE0u;
    // 0x3e9ae0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9ae4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9ae8: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x3e9ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9aec: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3e9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9af0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9af4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3e9af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9af8: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3e9af8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9afc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3e9afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9b00: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9b04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e9b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9b08: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9b10: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3e9b10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9b14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3e9b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9b18: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9b1c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9b20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3e9b28:
    // 0x3e9b28: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3e9b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9b2c: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x3e9b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3e9b30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b34: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9b34u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9b38: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3e9b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9b3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b40: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9b44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9b48: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9b4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b50: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9b54: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9b54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9b58:
    // 0x3e9b58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e9b5c:
    // 0x3e9b5c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9b60: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3e9b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9b64: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9b64u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9b68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b6c: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x3e9b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3e9b70: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3e9b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9b74: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3e9b74u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9b78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b7c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9b80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9b84: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9b88: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9b8c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9b90: 0x11800025  beqz        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3E9B90u;
    {
        const bool branch_taken_0x3e9b90 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B90u;
        // 0x3e9b94: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b90) {
            ctx->pc = 0x3E9C28u;
            goto label_3e9c28;
        }
    }
    ctx->pc = 0x3E9B98u;
label_3e9b98:
    // 0x3e9b98: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3e9b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9b9c: 0x0  nop
    ctx->pc = 0x3e9b9cu;
    // NOP
label_3e9ba0:
    // 0x3e9ba0: 0xa089ffff  sb          $t1, -0x1($a0)
    ctx->pc = 0x3e9ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9ba4: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3e9ba4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3e9ba8: 0xa086fffe  sb          $a2, -0x2($a0)
    ctx->pc = 0x3e9ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9bac: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x3e9bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x3e9bb0: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3e9bb0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9bb4: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3e9bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3e9bb8: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3e9bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9bbc: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3e9bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3e9bc0: 0xa089fffb  sb          $t1, -0x5($a0)
    ctx->pc = 0x3e9bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9bc4: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3e9bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9bc8: 0xa086fffa  sb          $a2, -0x6($a0)
    ctx->pc = 0x3e9bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9bcc: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3e9bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3e9bd0: 0xa082fff9  sb          $v0, -0x7($a0)
    ctx->pc = 0x3e9bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9bd4: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3e9bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3e9bd8: 0xa089fff7  sb          $t1, -0x9($a0)
    ctx->pc = 0x3e9bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9bdc: 0xa083fff8  sb          $v1, -0x8($a0)
    ctx->pc = 0x3e9bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9be0: 0xa086fff6  sb          $a2, -0xA($a0)
    ctx->pc = 0x3e9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967286), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9be4: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3e9be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3e9be8: 0xa082fff5  sb          $v0, -0xB($a0)
    ctx->pc = 0x3e9be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967285), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9bec: 0x90a3fffa  lbu         $v1, -0x6($a1)
    ctx->pc = 0x3e9becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3e9bf0: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3e9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3e9bf4: 0xa083fff4  sb          $v1, -0xC($a0)
    ctx->pc = 0x3e9bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967284), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9bf8: 0x2484fff3  addiu       $a0, $a0, -0xD
    ctx->pc = 0x3e9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x3e9bfc: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3e9bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9c00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9c04: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3e9c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9c08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9c0c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9c10: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9c14: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9c18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9c1c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9c20: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3E9C20u;
    {
        const bool branch_taken_0x3e9c20 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C20u;
        // 0x3e9c24: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c20) {
            ctx->pc = 0x3E9BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9ba0;
        }
    }
    ctx->pc = 0x3E9C28u;
label_3e9c28:
    // 0x3e9c28: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9c30: 0xa106ffff  sb          $a2, -0x1($t0)
    ctx->pc = 0x3e9c30u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9c34: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3e9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3e9c38: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x3e9c38u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_3e9c3c:
    // 0x3e9c3c: 0xfdae0008  sd          $t6, 0x8($t5)
    ctx->pc = 0x3e9c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 14));
    // 0x3e9c40: 0xa1a30012  sb          $v1, 0x12($t5)
    ctx->pc = 0x3e9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9c44: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C44u;
        // 0x3e9c48: 0xa1a20013  sb          $v0, 0x13($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9C4Cu;
label_3e9c4c:
    // 0x3e9c4c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3e9c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e9c50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e9c50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e9c54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e9c54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9c58: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x3e9c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9c5c: 0xa70b8  dsll        $t6, $t2, 2
    ctx->pc = 0x3e9c5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 2);
    // 0x3e9c60: 0x1140005a  beqz        $t2, . + 4 + (0x5A << 2)
    ctx->pc = 0x3E9C60u;
    {
        const bool branch_taken_0x3e9c60 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C60u;
        // 0x3e9c64: 0x1022021  addu        $a0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c60) {
            ctx->pc = 0x3E9DCCu;
            goto label_3e9dcc;
        }
    }
    ctx->pc = 0x3E9C68u;
    // 0x3e9c68: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e9c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9c6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e9c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9c70: 0x19400024  blez        $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E9C70u;
    {
        const bool branch_taken_0x3e9c70 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C70u;
        // 0x3e9c74: 0x31470003  andi        $a3, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c70) {
            ctx->pc = 0x3E9D04u;
            goto label_3e9d04;
        }
    }
    ctx->pc = 0x3E9C78u;
    // 0x3e9c78: 0x10e00031  beqz        $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x3E9C78u;
    {
        const bool branch_taken_0x3e9c78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C78u;
        // 0x3e9c7c: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c78) {
            ctx->pc = 0x3E9D40u;
            goto label_3e9d40;
        }
    }
    ctx->pc = 0x3E9C80u;
    // 0x3e9c80: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3E9C80u;
    {
        const bool branch_taken_0x3e9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C80u;
        // 0x3e9c84: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c80) {
            ctx->pc = 0x3E9D08u;
            goto label_3e9d08;
        }
    }
    ctx->pc = 0x3E9C88u;
    // 0x3e9c88: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3e9c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e9c8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E9C8Cu;
    {
        const bool branch_taken_0x3e9c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C8Cu;
        // 0x3e9c90: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c8c) {
            ctx->pc = 0x3E9CD8u;
            goto label_3e9cd8;
        }
    }
    ctx->pc = 0x3E9C94u;
    // 0x3e9c94: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9c98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9c9c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e9c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e9ca0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9ca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e9ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9ca8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e9ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9cac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e9cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9cb0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9cb4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9cb8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9cbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9cc0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9cc4: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3e9cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9cc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e9cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9ccc: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e9cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9cd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9cd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e9cd8:
    // 0x3e9cd8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9cdc: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9cdcu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9ce0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9ce4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9ce8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9cec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9cf0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9cf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9cf8: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x3e9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9cfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9d00: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x3e9d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_3e9d04:
    // 0x3e9d04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e9d08:
    // 0x3e9d08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9d0c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9d10: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9d10u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9d14: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9d18: 0x16a382b  sltu        $a3, $t3, $t2
    ctx->pc = 0x3e9d18u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9d1c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9d20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9d24: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9d28: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9d2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9d30: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x3e9d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9d34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9d38: 0x10e00024  beqz        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E9D38u;
    {
        const bool branch_taken_0x3e9d38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D38u;
        // 0x3e9d3c: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d38) {
            ctx->pc = 0x3E9DCCu;
            goto label_3e9dcc;
        }
    }
    ctx->pc = 0x3E9D40u;
label_3e9d40:
    // 0x3e9d40: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9d44: 0x0  nop
    ctx->pc = 0x3e9d44u;
    // NOP
label_3e9d48:
    // 0x3e9d48: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3e9d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3e9d4c: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3e9d4cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3e9d50: 0x16a382b  sltu        $a3, $t3, $t2
    ctx->pc = 0x3e9d50u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9d54: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e9d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9d58: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3e9d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3e9d5c: 0xa089fffd  sb          $t1, -0x3($a0)
    ctx->pc = 0x3e9d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9d60: 0xa082fffe  sb          $v0, -0x2($a0)
    ctx->pc = 0x3e9d60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9d64: 0xa086fffc  sb          $a2, -0x4($a0)
    ctx->pc = 0x3e9d64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9d68: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3e9d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3e9d6c: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3e9d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9d70: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3e9d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3e9d74: 0xa089fff9  sb          $t1, -0x7($a0)
    ctx->pc = 0x3e9d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9d78: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3e9d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9d7c: 0xa086fff8  sb          $a2, -0x8($a0)
    ctx->pc = 0x3e9d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9d80: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3e9d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3e9d84: 0xa082fff7  sb          $v0, -0x9($a0)
    ctx->pc = 0x3e9d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9d88: 0x90a3fffa  lbu         $v1, -0x6($a1)
    ctx->pc = 0x3e9d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3e9d8c: 0xa089fff5  sb          $t1, -0xB($a0)
    ctx->pc = 0x3e9d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967285), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9d90: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3e9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3e9d94: 0xa083fff6  sb          $v1, -0xA($a0)
    ctx->pc = 0x3e9d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9d98: 0xa086fff4  sb          $a2, -0xC($a0)
    ctx->pc = 0x3e9d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967284), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9d9c: 0x2484fff3  addiu       $a0, $a0, -0xD
    ctx->pc = 0x3e9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x3e9da0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9da4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9da8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9dac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9db0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9db4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9db4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9db8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9dbc: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3e9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3e9dc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9dc4: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3E9DC4u;
    {
        const bool branch_taken_0x3e9dc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DC4u;
        // 0x3e9dc8: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9dc4) {
            ctx->pc = 0x3E9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9d48;
        }
    }
    ctx->pc = 0x3E9DCCu;
label_3e9dcc:
    // 0x3e9dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9dd0: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x3E9DD0u;
    {
        const bool branch_taken_0x3e9dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DD0u;
        // 0x3e9dd4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9dd0) {
            ctx->pc = 0x3EA4C4u;
            goto label_3ea4c4;
        }
    }
    ctx->pc = 0x3E9DD8u;
label_3e9dd8:
    // 0x3e9dd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9ddc: 0x146201bc  bne         $v1, $v0, . + 4 + (0x1BC << 2)
    ctx->pc = 0x3E9DDCu;
    {
        const bool branch_taken_0x3e9ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DDCu;
        // 0x3e9de0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ddc) {
            ctx->pc = 0x3EA4D0u;
            goto label_3ea4d0;
        }
    }
    ctx->pc = 0x3E9DE4u;
    // 0x3e9de4: 0x91a30011  lbu         $v1, 0x11($t5)
    ctx->pc = 0x3e9de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 17)));
    // 0x3e9de8: 0x146200ea  bne         $v1, $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x3E9DE8u;
    {
        const bool branch_taken_0x3e9de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DE8u;
        // 0x3e9dec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9de8) {
            ctx->pc = 0x3EA194u;
            goto label_3ea194;
        }
    }
    ctx->pc = 0x3E9DF0u;
    // 0x3e9df0: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x3e9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x3e9df4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3E9DF4u;
    {
        const bool branch_taken_0x3e9df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DF4u;
        // 0x3e9df8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9df4) {
            ctx->pc = 0x3E9FD4u;
            goto label_3e9fd4;
        }
    }
    ctx->pc = 0x3E9DFCu;
    // 0x3e9dfc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3e9dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e9e00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e9e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e9e04: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3e9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e9e08: 0x16a202b  sltu        $a0, $t3, $t2
    ctx->pc = 0x3e9e08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9e0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e9e10: 0xa70b8  dsll        $t6, $t2, 2
    ctx->pc = 0x3e9e10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 2);
    // 0x3e9e14: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3e9e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3e9e18: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3E9E18u;
    {
        const bool branch_taken_0x3e9e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E18u;
        // 0x3e9e1c: 0xa24821  addu        $t1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e18) {
            ctx->pc = 0x3E9FC4u;
            goto label_3e9fc4;
        }
    }
    ctx->pc = 0x3E9E20u;
    // 0x3e9e20: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3e9e20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3e9e24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3e9e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9e28: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3e9e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e9e2c: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3e9e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e9e30: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E9E30u;
    {
        const bool branch_taken_0x3e9e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E30u;
        // 0x3e9e34: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e30) {
            ctx->pc = 0x3E9ED8u;
            goto label_3e9ed8;
        }
    }
    ctx->pc = 0x3E9E38u;
    // 0x3e9e38: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E9E38u;
    {
        const bool branch_taken_0x3e9e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E38u;
        // 0x3e9e3c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e38) {
            ctx->pc = 0x3E9F20u;
            goto label_3e9f20;
        }
    }
    ctx->pc = 0x3E9E40u;
    // 0x3e9e40: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E9E40u;
    {
        const bool branch_taken_0x3e9e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E40u;
        // 0x3e9e44: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e40) {
            ctx->pc = 0x3E9EDCu;
            goto label_3e9edc;
        }
    }
    ctx->pc = 0x3E9E48u;
    // 0x3e9e48: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e9e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e9e4c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E9E4Cu;
    {
        const bool branch_taken_0x3e9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E4Cu;
        // 0x3e9e50: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e4c) {
            ctx->pc = 0x3E9EA0u;
            goto label_3e9ea0;
        }
    }
    ctx->pc = 0x3E9E54u;
    // 0x3e9e54: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3e9e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3e9e58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9e5c: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x3e9e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9e60: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3e9e60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9e64: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3e9e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3e9e68: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9e6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9e70: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3e9e70u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9e74: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3e9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9e78: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3e9e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3e9e7c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3e9e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9e80: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x3e9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3e9e84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3e9e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9e88: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x3e9e88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9e8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3e9e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9e90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9e94: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3e9e94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9e98: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9e9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e9ea0:
    // 0x3e9ea0: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3e9ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9ea4: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3e9ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3e9ea8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9eac: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9eacu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9eb0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9eb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9eb8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9ebc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9ec0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9ec4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9ec8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9ecc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9ed0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9ed4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9ed8:
    // 0x3e9ed8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3e9edc:
    // 0x3e9edc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9ee0: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3e9ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9ee4: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3e9ee4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3e9ee8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9eec: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3e9eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3e9ef0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9ef4: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3e9ef4u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9ef8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9efc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9efcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f00: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9f04: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9f0c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3e9f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f10: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e9f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e9f14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e9f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9f18: 0x1180002a  beqz        $t4, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E9F18u;
    {
        const bool branch_taken_0x3e9f18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F18u;
        // 0x3e9f1c: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f18) {
            ctx->pc = 0x3E9FC4u;
            goto label_3e9fc4;
        }
    }
    ctx->pc = 0x3E9F20u;
label_3e9f20:
    // 0x3e9f20: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e9f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9f24: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e9f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f28:
    // 0x3e9f28: 0xa0a6ffff  sb          $a2, -0x1($a1)
    ctx->pc = 0x3e9f28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9f2c: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3e9f2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3e9f30: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x3e9f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x3e9f34: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3e9f34u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9f38: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x3e9f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3e9f3c: 0xa0a2fffe  sb          $v0, -0x2($a1)
    ctx->pc = 0x3e9f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f40: 0x90e3fffe  lbu         $v1, -0x2($a3)
    ctx->pc = 0x3e9f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x3e9f44: 0xa0a3fffd  sb          $v1, -0x3($a1)
    ctx->pc = 0x3e9f44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9f48: 0x90e4fffd  lbu         $a0, -0x3($a3)
    ctx->pc = 0x3e9f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967293)));
    // 0x3e9f4c: 0xa0a6fffb  sb          $a2, -0x5($a1)
    ctx->pc = 0x3e9f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967291), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9f50: 0xa0a4fffc  sb          $a0, -0x4($a1)
    ctx->pc = 0x3e9f50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967292), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9f54: 0x90e2fffc  lbu         $v0, -0x4($a3)
    ctx->pc = 0x3e9f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x3e9f58: 0xa0a2fffa  sb          $v0, -0x6($a1)
    ctx->pc = 0x3e9f58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f5c: 0x90e3fffb  lbu         $v1, -0x5($a3)
    ctx->pc = 0x3e9f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967291)));
    // 0x3e9f60: 0xa0a3fff9  sb          $v1, -0x7($a1)
    ctx->pc = 0x3e9f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9f64: 0x90e4fffa  lbu         $a0, -0x6($a3)
    ctx->pc = 0x3e9f64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967290)));
    // 0x3e9f68: 0xa0a6fff7  sb          $a2, -0x9($a1)
    ctx->pc = 0x3e9f68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967287), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9f6c: 0xa0a4fff8  sb          $a0, -0x8($a1)
    ctx->pc = 0x3e9f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967288), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9f70: 0x90e2fff9  lbu         $v0, -0x7($a3)
    ctx->pc = 0x3e9f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967289)));
    // 0x3e9f74: 0xa0a2fff6  sb          $v0, -0xA($a1)
    ctx->pc = 0x3e9f74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967286), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f78: 0x90e3fff8  lbu         $v1, -0x8($a3)
    ctx->pc = 0x3e9f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967288)));
    // 0x3e9f7c: 0xa0a3fff5  sb          $v1, -0xB($a1)
    ctx->pc = 0x3e9f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9f80: 0x90e2fff7  lbu         $v0, -0x9($a3)
    ctx->pc = 0x3e9f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967287)));
    // 0x3e9f84: 0x24e7fff6  addiu       $a3, $a3, -0xA
    ctx->pc = 0x3e9f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967286));
    // 0x3e9f88: 0xa0a2fff4  sb          $v0, -0xC($a1)
    ctx->pc = 0x3e9f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967284), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9f8c: 0x24a5fff3  addiu       $a1, $a1, -0xD
    ctx->pc = 0x3e9f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967283));
    // 0x3e9f90: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x3e9f90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9f94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9f98: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9f9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9fa0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e9fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9fa4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9fa8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9fac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e9facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9fb0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e9fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9fb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9fb8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3e9fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9fbc: 0x1580ffda  bnez        $t4, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3E9FBCu;
    {
        const bool branch_taken_0x3e9fbc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FBCu;
        // 0x3e9fc0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9fbc) {
            ctx->pc = 0x3E9F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9f28;
        }
    }
    ctx->pc = 0x3E9FC4u;
label_3e9fc4:
    // 0x3e9fc4: 0xa126ffff  sb          $a2, -0x1($t1)
    ctx->pc = 0x3e9fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9fc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e9fcc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x3E9FCCu;
    {
        const bool branch_taken_0x3e9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FCCu;
        // 0x3e9fd0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9fcc) {
            ctx->pc = 0x3EA4C4u;
            goto label_3ea4c4;
        }
    }
    ctx->pc = 0x3E9FD4u;
label_3e9fd4:
    // 0x3e9fd4: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3e9fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3e9fd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e9fd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e9fdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e9fdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9fe0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e9fe4: 0xa70b8  dsll        $t6, $t2, 2
    ctx->pc = 0x3e9fe4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 2);
    // 0x3e9fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e9fec: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3e9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e9ff0: 0x11400065  beqz        $t2, . + 4 + (0x65 << 2)
    ctx->pc = 0x3E9FF0u;
    {
        const bool branch_taken_0x3e9ff0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FF0u;
        // 0x3e9ff4: 0x834821  addu        $t1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ff0) {
            ctx->pc = 0x3EA188u;
            goto label_3ea188;
        }
    }
    ctx->pc = 0x3E9FF8u;
    // 0x3e9ff8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e9ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9ffc: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3e9ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea000: 0x19400028  blez        $t2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3EA000u;
    {
        const bool branch_taken_0x3ea000 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA000u;
        // 0x3ea004: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea000) {
            ctx->pc = 0x3EA0A4u;
            goto label_3ea0a4;
        }
    }
    ctx->pc = 0x3EA008u;
    // 0x3ea008: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3EA008u;
    {
        const bool branch_taken_0x3ea008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA008u;
        // 0x3ea00c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea008) {
            ctx->pc = 0x3EA0E8u;
            goto label_3ea0e8;
        }
    }
    ctx->pc = 0x3EA010u;
    // 0x3ea010: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3EA010u;
    {
        const bool branch_taken_0x3ea010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA010u;
        // 0x3ea014: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea010) {
            ctx->pc = 0x3EA0A8u;
            goto label_3ea0a8;
        }
    }
    ctx->pc = 0x3EA018u;
    // 0x3ea018: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ea018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ea01c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EA01Cu;
    {
        const bool branch_taken_0x3ea01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA01Cu;
        // 0x3ea020: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea01c) {
            ctx->pc = 0x3EA070u;
            goto label_3ea070;
        }
    }
    ctx->pc = 0x3EA024u;
    // 0x3ea024: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea028: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ea028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3ea02c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea030: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3ea030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea034: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea038: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3ea038u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea03c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3ea03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea040: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ea040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3ea044: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3ea044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea048: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea04c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3ea04cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea050: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ea050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3ea054: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3ea054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea058: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x3ea058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3ea05c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3ea05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea060: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3ea060u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea064: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3ea064u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea068: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea06c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3ea070:
    // 0x3ea070: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea074: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3ea074u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3ea078: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea07c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea07cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea080: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea084: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea088: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea08c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea08cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea090: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea094: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea098: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea098u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea09c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea0a0: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x3ea0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
label_3ea0a4:
    // 0x3ea0a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3ea0a8:
    // 0x3ea0a8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea0ac: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea0acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea0b0: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3ea0b0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3ea0b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea0b8: 0x16a482b  sltu        $t1, $t3, $t2
    ctx->pc = 0x3ea0b8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea0bc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea0c0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea0c4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea0c8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea0cc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea0d0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea0d4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea0d8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3ea0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea0dc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ea0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ea0e0: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3EA0E0u;
    {
        const bool branch_taken_0x3ea0e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0E0u;
        // 0x3ea0e4: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea0e0) {
            ctx->pc = 0x3EA188u;
            goto label_3ea188;
        }
    }
    ctx->pc = 0x3EA0E8u;
label_3ea0e8:
    // 0x3ea0e8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3ea0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea0ec: 0x0  nop
    ctx->pc = 0x3ea0ecu;
    // NOP
label_3ea0f0:
    // 0x3ea0f0: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x3ea0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ea0f4: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3ea0f4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3ea0f8: 0x16a482b  sltu        $t1, $t3, $t2
    ctx->pc = 0x3ea0f8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea0fc: 0xa0a3ffff  sb          $v1, -0x1($a1)
    ctx->pc = 0x3ea0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea100: 0x90e2fffe  lbu         $v0, -0x2($a3)
    ctx->pc = 0x3ea100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x3ea104: 0xa0a2fffe  sb          $v0, -0x2($a1)
    ctx->pc = 0x3ea104u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea108: 0x90e3fffd  lbu         $v1, -0x3($a3)
    ctx->pc = 0x3ea108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967293)));
    // 0x3ea10c: 0xa0a6fffc  sb          $a2, -0x4($a1)
    ctx->pc = 0x3ea10cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967292), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea110: 0xa0a3fffd  sb          $v1, -0x3($a1)
    ctx->pc = 0x3ea110u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea114: 0x90e2fffc  lbu         $v0, -0x4($a3)
    ctx->pc = 0x3ea114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x3ea118: 0xa0a2fffb  sb          $v0, -0x5($a1)
    ctx->pc = 0x3ea118u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea11c: 0x90e3fffb  lbu         $v1, -0x5($a3)
    ctx->pc = 0x3ea11cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967291)));
    // 0x3ea120: 0xa0a3fffa  sb          $v1, -0x6($a1)
    ctx->pc = 0x3ea120u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea124: 0x90e4fffa  lbu         $a0, -0x6($a3)
    ctx->pc = 0x3ea124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967290)));
    // 0x3ea128: 0xa0a6fff8  sb          $a2, -0x8($a1)
    ctx->pc = 0x3ea128u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967288), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea12c: 0xa0a4fff9  sb          $a0, -0x7($a1)
    ctx->pc = 0x3ea12cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967289), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea130: 0x90e2fff9  lbu         $v0, -0x7($a3)
    ctx->pc = 0x3ea130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967289)));
    // 0x3ea134: 0xa0a2fff7  sb          $v0, -0x9($a1)
    ctx->pc = 0x3ea134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967287), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea138: 0x90e3fff8  lbu         $v1, -0x8($a3)
    ctx->pc = 0x3ea138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967288)));
    // 0x3ea13c: 0xa0a3fff6  sb          $v1, -0xA($a1)
    ctx->pc = 0x3ea13cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea140: 0x90e2fff7  lbu         $v0, -0x9($a3)
    ctx->pc = 0x3ea140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967287)));
    // 0x3ea144: 0xa0a6fff4  sb          $a2, -0xC($a1)
    ctx->pc = 0x3ea144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967284), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea148: 0x24e7fff6  addiu       $a3, $a3, -0xA
    ctx->pc = 0x3ea148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967286));
    // 0x3ea14c: 0xa0a2fff5  sb          $v0, -0xB($a1)
    ctx->pc = 0x3ea14cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967285), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea150: 0x24a5fff3  addiu       $a1, $a1, -0xD
    ctx->pc = 0x3ea150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967283));
    // 0x3ea154: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea158: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea15c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ea15cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea160: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea164: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea168: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea16c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ea16cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea170: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea174: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ea174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ea178: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ea178u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea17c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea180: 0x1520ffdb  bnez        $t1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3EA180u;
    {
        const bool branch_taken_0x3ea180 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA180u;
        // 0x3ea184: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea180) {
            ctx->pc = 0x3EA0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea0f0;
        }
    }
    ctx->pc = 0x3EA188u;
label_3ea188:
    // 0x3ea188: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ea188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ea18c: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x3EA18Cu;
    {
        const bool branch_taken_0x3ea18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA18Cu;
        // 0x3ea190: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea18c) {
            ctx->pc = 0x3EA4C4u;
            goto label_3ea4c4;
        }
    }
    ctx->pc = 0x3EA194u;
label_3ea194:
    // 0x3ea194: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x3EA194u;
    {
        const bool branch_taken_0x3ea194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA194u;
        // 0x3ea198: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea194) {
            ctx->pc = 0x3EA4D0u;
            goto label_3ea4d0;
        }
    }
    ctx->pc = 0x3EA19Cu;
    // 0x3ea19c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3EA19Cu;
    {
        const bool branch_taken_0x3ea19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA19Cu;
        // 0x3ea1a0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea19c) {
            ctx->pc = 0x3EA348u;
            goto label_3ea348;
        }
    }
    ctx->pc = 0x3EA1A4u;
    // 0x3ea1a4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3ea1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea1a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ea1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ea1ac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3ea1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ea1b0: 0x16a202b  sltu        $a0, $t3, $t2
    ctx->pc = 0x3ea1b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ea1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ea1b8: 0xa70f8  dsll        $t6, $t2, 3
    ctx->pc = 0x3ea1b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 3);
    // 0x3ea1bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ea1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ea1c0: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3EA1C0u;
    {
        const bool branch_taken_0x3ea1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1C0u;
        // 0x3ea1c4: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1c0) {
            ctx->pc = 0x3EA330u;
            goto label_3ea330;
        }
    }
    ctx->pc = 0x3EA1C8u;
    // 0x3ea1c8: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3ea1c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3ea1cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ea1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea1d0: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x3ea1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ea1d4: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3ea1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ea1d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA1D8u;
    {
        const bool branch_taken_0x3ea1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1D8u;
        // 0x3ea1dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1d8) {
            ctx->pc = 0x3EA1E8u;
            goto label_3ea1e8;
        }
    }
    ctx->pc = 0x3EA1E0u;
    // 0x3ea1e0: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3EA1E0u;
    {
        const bool branch_taken_0x3ea1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea1e0) {
            ctx->pc = 0x3EA1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA1E0u;
            // 0x3ea1e4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA270u;
            goto label_3ea270;
        }
    }
    ctx->pc = 0x3EA1E8u;
label_3ea1e8:
    // 0x3ea1e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea1ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea1f0: 0xa0e90000  sb          $t1, 0x0($a3)
    ctx->pc = 0x3ea1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea1f4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3ea1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea1f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea1fc: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3ea1fcu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea200: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3ea200u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea204: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea208: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea20c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea210: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea210u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea214: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea218: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea21c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea220: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea220u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea224: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea228: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea22c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea230: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea230u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea234: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea238: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea23c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea240: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea240u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea244: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3ea244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea248: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea24c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ea24cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea250: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3ea250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea254: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3ea254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea258: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3ea258u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea25c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3ea25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea260: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea264: 0x11800032  beqz        $t4, . + 4 + (0x32 << 2)
    ctx->pc = 0x3EA264u;
    {
        const bool branch_taken_0x3ea264 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA264u;
        // 0x3ea268: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea264) {
            ctx->pc = 0x3EA330u;
            goto label_3ea330;
        }
    }
    ctx->pc = 0x3EA26Cu;
    // 0x3ea26c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ea26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ea270:
    // 0x3ea270: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3ea270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea274: 0x0  nop
    ctx->pc = 0x3ea274u;
    // NOP
label_3ea278:
    // 0x3ea278: 0xa089ffff  sb          $t1, -0x1($a0)
    ctx->pc = 0x3ea278u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea27c: 0x656b0002  daddiu      $t3, $t3, 0x2
    ctx->pc = 0x3ea27cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)2);
    // 0x3ea280: 0xa086fffe  sb          $a2, -0x2($a0)
    ctx->pc = 0x3ea280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea284: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x3ea284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x3ea288: 0x16a602b  sltu        $t4, $t3, $t2
    ctx->pc = 0x3ea288u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea28c: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea290: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3ea290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea294: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3ea294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea298: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3ea298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea29c: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea2a0: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3ea2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea2a4: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3ea2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3ea2a8: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3ea2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea2ac: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3ea2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3ea2b0: 0xa082fff9  sb          $v0, -0x7($a0)
    ctx->pc = 0x3ea2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea2b4: 0x90a3fffa  lbu         $v1, -0x6($a1)
    ctx->pc = 0x3ea2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3ea2b8: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3ea2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3ea2bc: 0xa083fff8  sb          $v1, -0x8($a0)
    ctx->pc = 0x3ea2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea2c0: 0x2484fff7  addiu       $a0, $a0, -0x9
    ctx->pc = 0x3ea2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x3ea2c4: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3ea2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea2c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea2cc: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3ea2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea2d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea2d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea2d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea2dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea2e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea2e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea2e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea2ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea2f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea2f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea2f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea2f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea2fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea300: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea304: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea308: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea30c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea30cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea310: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea314: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea318: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea31c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea31cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea324: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea328: 0x1580ffd3  bnez        $t4, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3EA328u;
    {
        const bool branch_taken_0x3ea328 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA328u;
        // 0x3ea32c: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea328) {
            ctx->pc = 0x3EA278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea278;
        }
    }
    ctx->pc = 0x3EA330u;
label_3ea330:
    // 0x3ea330: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea334: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ea334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ea338: 0xa0e6ffff  sb          $a2, -0x1($a3)
    ctx->pc = 0x3ea338u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea33c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3ea33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ea340: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x3EA340u;
    {
        const bool branch_taken_0x3ea340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA340u;
        // 0x3ea344: 0xa0e90000  sb          $t1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea340) {
            ctx->pc = 0x3E9C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9c3c;
        }
    }
    ctx->pc = 0x3EA348u;
label_3ea348:
    // 0x3ea348: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3ea348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea34c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ea34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ea350: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ea350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea354: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ea354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ea358: 0xa70f8  dsll        $t6, $t2, 3
    ctx->pc = 0x3ea358u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 3);
    // 0x3ea35c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ea35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ea360: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3ea360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ea364: 0x11400055  beqz        $t2, . + 4 + (0x55 << 2)
    ctx->pc = 0x3EA364u;
    {
        const bool branch_taken_0x3ea364 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA364u;
        // 0x3ea368: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea364) {
            ctx->pc = 0x3EA4BCu;
            goto label_3ea4bc;
        }
    }
    ctx->pc = 0x3EA36Cu;
    // 0x3ea36c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3ea36cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea370: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3ea370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea374: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA374u;
    {
        const bool branch_taken_0x3ea374 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA374u;
        // 0x3ea378: 0x31450001  andi        $a1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea374) {
            ctx->pc = 0x3EA384u;
            goto label_3ea384;
        }
    }
    ctx->pc = 0x3EA37Cu;
    // 0x3ea37c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3EA37Cu;
    {
        const bool branch_taken_0x3ea37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA37Cu;
        // 0x3ea380: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea37c) {
            ctx->pc = 0x3EA404u;
            goto label_3ea404;
        }
    }
    ctx->pc = 0x3EA384u;
label_3ea384:
    // 0x3ea384: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea388: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea38c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea390: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3ea390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea394: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea398: 0x16a402b  sltu        $t0, $t3, $t2
    ctx->pc = 0x3ea398u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea39c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea39cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea3a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea3ac: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea3acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea3b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea3bc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3c0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea3c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea3cc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3d0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3ea3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea3d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ea3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ea3dc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea3e8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ea3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea3ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ea3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3f0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ea3f4: 0xa0e90000  sb          $t1, 0x0($a3)
    ctx->pc = 0x3ea3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea3f8: 0x11000030  beqz        $t0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3EA3F8u;
    {
        const bool branch_taken_0x3ea3f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3F8u;
        // 0x3ea3fc: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea3f8) {
            ctx->pc = 0x3EA4BCu;
            goto label_3ea4bc;
        }
    }
    ctx->pc = 0x3EA400u;
    // 0x3ea400: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ea400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ea404:
    // 0x3ea404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ea404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea408:
    // 0x3ea408: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ea408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea40c: 0x656b0002  daddiu      $t3, $t3, 0x2
    ctx->pc = 0x3ea40cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)2);
    // 0x3ea410: 0x16a402b  sltu        $t0, $t3, $t2
    ctx->pc = 0x3ea410u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea414: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3ea414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea418: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea41c: 0xa082fffe  sb          $v0, -0x2($a0)
    ctx->pc = 0x3ea41cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea420: 0x90a3fffd  lbu         $v1, -0x3($a1)
    ctx->pc = 0x3ea420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea424: 0xa083fffd  sb          $v1, -0x3($a0)
    ctx->pc = 0x3ea424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea428: 0x90a2fffc  lbu         $v0, -0x4($a1)
    ctx->pc = 0x3ea428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3ea42c: 0xa082fffc  sb          $v0, -0x4($a0)
    ctx->pc = 0x3ea42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea430: 0x90a3fffb  lbu         $v1, -0x5($a1)
    ctx->pc = 0x3ea430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3ea434: 0xa083fffb  sb          $v1, -0x5($a0)
    ctx->pc = 0x3ea434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea438: 0x90a2fffa  lbu         $v0, -0x6($a1)
    ctx->pc = 0x3ea438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3ea43c: 0xa089fff9  sb          $t1, -0x7($a0)
    ctx->pc = 0x3ea43cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea440: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3ea440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3ea444: 0xa082fffa  sb          $v0, -0x6($a0)
    ctx->pc = 0x3ea444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea448: 0xa086fff8  sb          $a2, -0x8($a0)
    ctx->pc = 0x3ea448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ea44c: 0x2484fff7  addiu       $a0, $a0, -0x9
    ctx->pc = 0x3ea44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x3ea450: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea454: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea458: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea45c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea460: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea464: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea468: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea46c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea470: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea474: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea478: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea478u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea47c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea480: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea484: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea488: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea48c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea490: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea494: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea498: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea49c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea4a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea4a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea4a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea4ac: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x3ea4acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ea4b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea4b4: 0x1500ffd4  bnez        $t0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3EA4B4u;
    {
        const bool branch_taken_0x3ea4b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4B4u;
        // 0x3ea4b8: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4b4) {
            ctx->pc = 0x3EA408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea408;
        }
    }
    ctx->pc = 0x3EA4BCu;
label_3ea4bc:
    // 0x3ea4bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ea4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ea4c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3ea4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3ea4c4:
    // 0x3ea4c4: 0xfdae0008  sd          $t6, 0x8($t5)
    ctx->pc = 0x3ea4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 14));
label_3ea4c8:
    // 0x3ea4c8: 0xa1a20012  sb          $v0, 0x12($t5)
    ctx->pc = 0x3ea4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea4cc: 0xa1a30013  sb          $v1, 0x13($t5)
    ctx->pc = 0x3ea4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 19), (uint8_t)GPR_U32(ctx, 3));
label_3ea4d0:
    // 0x3ea4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EA4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA4D8u;
}
