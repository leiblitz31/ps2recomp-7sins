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

// Function: sub_003EA4D8
// Address: 0x3ea4d8 - 0x3eab50
void sub_003EA4D8_0x3ea4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA4D8_0x3ea4d8");
#endif

    switch (ctx->pc) {
        case 0x3ea5f8u: goto label_3ea5f8;
        case 0x3ea720u: goto label_3ea720;
        case 0x3ea8d0u: goto label_3ea8d0;
        case 0x3eaa38u: goto label_3eaa38;
        case 0x3eab34u: goto label_3eab34;
        default: break;
    }

    ctx->pc = 0x3ea4d8u;

    // 0x3ea4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ea4dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ea4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ea4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ea4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ea4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea4e8: 0x92040011  lbu         $a0, 0x11($s0)
    ctx->pc = 0x3ea4e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ea4ec: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x3ea4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3ea4f0: 0x14400193  bnez        $v0, . + 4 + (0x193 << 2)
    ctx->pc = 0x3EA4F0u;
    {
        const bool branch_taken_0x3ea4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4F0u;
        // 0x3ea4f4: 0xde0a0000  ld          $t2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4f0) {
            ctx->pc = 0x3EAB40u;
            goto label_3eab40;
        }
    }
    ctx->pc = 0x3EA4F8u;
    // 0x3ea4f8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3ea4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ea4fc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3ea4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3ea500: 0x54400190  bnel        $v0, $zero, . + 4 + (0x190 << 2)
    ctx->pc = 0x3EA500u;
    {
        const bool branch_taken_0x3ea500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea500) {
            ctx->pc = 0x3EA504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA500u;
            // 0x3ea504: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAB44u;
            goto label_3eab44;
        }
    }
    ctx->pc = 0x3EA508u;
    // 0x3ea508: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ea50c: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x3EA50Cu;
    {
        const bool branch_taken_0x3ea50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA50Cu;
        // 0x3ea510: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea50c) {
            ctx->pc = 0x3EA7BCu;
            goto label_3ea7bc;
        }
    }
    ctx->pc = 0x3EA514u;
    // 0x3ea514: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ea518: 0x14820058  bne         $a0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3EA518u;
    {
        const bool branch_taken_0x3ea518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA518u;
        // 0x3ea51c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea518) {
            ctx->pc = 0x3EA67Cu;
            goto label_3ea67c;
        }
    }
    ctx->pc = 0x3EA520u;
    // 0x3ea520: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3ea520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ea524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ea528: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ea528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ea52c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ea52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ea530: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea534: 0x11400173  beqz        $t2, . + 4 + (0x173 << 2)
    ctx->pc = 0x3EA534u;
    {
        const bool branch_taken_0x3ea534 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA534u;
        // 0x3ea538: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea534) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA53Cu;
    // 0x3ea53c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3ea53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea540: 0x1940001e  blez        $t2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3EA540u;
    {
        const bool branch_taken_0x3ea540 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA540u;
        // 0x3ea544: 0x31470003  andi        $a3, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea540) {
            ctx->pc = 0x3EA5BCu;
            goto label_3ea5bc;
        }
    }
    ctx->pc = 0x3EA548u;
    // 0x3ea548: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x3EA548u;
    {
        const bool branch_taken_0x3ea548 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA548u;
        // 0x3ea54c: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea548) {
            ctx->pc = 0x3EA5F0u;
            goto label_3ea5f0;
        }
    }
    ctx->pc = 0x3EA550u;
    // 0x3ea550: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3EA550u;
    {
        const bool branch_taken_0x3ea550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea550) {
            ctx->pc = 0x3EA554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA550u;
            // 0x3ea554: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA5C0u;
            goto label_3ea5c0;
        }
    }
    ctx->pc = 0x3EA558u;
    // 0x3ea558: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3ea558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ea55c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3EA55Cu;
    {
        const bool branch_taken_0x3ea55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea55c) {
            ctx->pc = 0x3EA560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA55Cu;
            // 0x3ea560: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA594u;
            goto label_3ea594;
        }
    }
    ctx->pc = 0x3EA564u;
    // 0x3ea564: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea568: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x3ea568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3ea56c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ea56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea570: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea570u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ea574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea578: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea57c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea57cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea580: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ea580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea584: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea588: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x3ea588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea58c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea58cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea590: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea594:
    // 0x3ea594: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3ea594u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3ea598: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea59c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea5a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea5a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea5a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea5ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea5b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea5b4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea5b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ea5bc:
    // 0x3ea5bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea5c0:
    // 0x3ea5c0: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3ea5c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3ea5c4: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x3ea5c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea5c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea5cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea5d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea5d4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea5d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea5dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea5e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea5e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea5e8: 0x10c00146  beqz        $a2, . + 4 + (0x146 << 2)
    ctx->pc = 0x3EA5E8u;
    {
        const bool branch_taken_0x3ea5e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5E8u;
        // 0x3ea5ec: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5e8) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA5F0u;
label_3ea5f0:
    // 0x3ea5f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ea5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea5f4: 0x0  nop
    ctx->pc = 0x3ea5f4u;
    // NOP
label_3ea5f8:
    // 0x3ea5f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea5f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea5fc: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3ea5fcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3ea600: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x3ea600u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea604: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ea604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea608: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea60c: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3ea60cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea610: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea614: 0xa083fffe  sb          $v1, -0x2($a0)
    ctx->pc = 0x3ea614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea618: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea61c: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3ea61cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea620: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ea620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea624: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3ea624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea628: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea62c: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3ea62cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea630: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3ea630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea634: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3ea634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea638: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea63c: 0xa082fff9  sb          $v0, -0x7($a0)
    ctx->pc = 0x3ea63cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea640: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3ea640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea644: 0xa083fff8  sb          $v1, -0x8($a0)
    ctx->pc = 0x3ea644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea648: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea64c: 0xa082fff7  sb          $v0, -0x9($a0)
    ctx->pc = 0x3ea64cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea650: 0x2484fff6  addiu       $a0, $a0, -0xA
    ctx->pc = 0x3ea650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x3ea654: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea658: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea65c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea660: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea664: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3ea664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3ea668: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea66c: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3EA66Cu;
    {
        const bool branch_taken_0x3ea66c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA66Cu;
        // 0x3ea670: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea66c) {
            ctx->pc = 0x3EA5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea5f8;
        }
    }
    ctx->pc = 0x3EA674u;
    // 0x3ea674: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x3EA674u;
    {
        const bool branch_taken_0x3ea674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA674u;
        // 0x3ea678: 0x92030012  lbu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea674) {
            ctx->pc = 0x3EAB08u;
            goto label_3eab08;
        }
    }
    ctx->pc = 0x3EA67Cu;
label_3ea67c:
    // 0x3ea67c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3ea67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea680: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ea680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ea684: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3ea684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ea688: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ea688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ea68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ea68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ea690: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3ea690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea694: 0x1140011b  beqz        $t2, . + 4 + (0x11B << 2)
    ctx->pc = 0x3EA694u;
    {
        const bool branch_taken_0x3ea694 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA694u;
        // 0x3ea698: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea694) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA69Cu;
    // 0x3ea69c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3ea69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea6a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ea6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea6a4: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA6A4u;
    {
        const bool branch_taken_0x3ea6a4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6A4u;
        // 0x3ea6a8: 0x31420001  andi        $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea6a4) {
            ctx->pc = 0x3EA6B4u;
            goto label_3ea6b4;
        }
    }
    ctx->pc = 0x3EA6ACu;
    // 0x3ea6ac: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3EA6ACu;
    {
        const bool branch_taken_0x3ea6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea6ac) {
            ctx->pc = 0x3EA6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA6ACu;
            // 0x3ea6b0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA710u;
            goto label_3ea710;
        }
    }
    ctx->pc = 0x3EA6B4u;
label_3ea6b4:
    // 0x3ea6b4: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea6b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ea6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea6bc: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x3ea6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3ea6c0: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3ea6c0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea6c4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea6c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea6cc: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3ea6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3ea6d0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea6d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea6d8: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea6dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea6e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea6e4: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3ea6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3ea6e8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea6ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea6f0: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea6f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea6f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea6fc: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea700: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3ea700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea704: 0x110000ff  beqz        $t0, . + 4 + (0xFF << 2)
    ctx->pc = 0x3EA704u;
    {
        const bool branch_taken_0x3ea704 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA704u;
        // 0x3ea708: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea704) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA70Cu;
    // 0x3ea70c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ea70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ea710:
    // 0x3ea710: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3ea710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea714: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ea714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea718: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ea718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea71c: 0x0  nop
    ctx->pc = 0x3ea71cu;
    // NOP
label_3ea720:
    // 0x3ea720: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea724: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3ea724u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3ea728: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3ea728u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea72c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ea72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea730: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3ea730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3ea734: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3ea734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea738: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea73c: 0xa083fffe  sb          $v1, -0x2($a0)
    ctx->pc = 0x3ea73cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea740: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x3ea740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ea744: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3ea744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea748: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea74c: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3ea74cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea750: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea754: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3ea754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea758: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3ea758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea75c: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3ea75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea760: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3ea760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3ea764: 0x90c2fffd  lbu         $v0, -0x3($a2)
    ctx->pc = 0x3ea764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967293)));
    // 0x3ea768: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3ea768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3ea76c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea76cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea770: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea774: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea778: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea778u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea77c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea780: 0x90e2fffd  lbu         $v0, -0x3($a3)
    ctx->pc = 0x3ea780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967293)));
    // 0x3ea784: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ea784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3ea788: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea78c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea790: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea794: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3ea794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3ea798: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea79c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea7a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea7a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea7a8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea7ac: 0x1500ffdc  bnez        $t0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3EA7ACu;
    {
        const bool branch_taken_0x3ea7ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7ACu;
        // 0x3ea7b0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7ac) {
            ctx->pc = 0x3EA720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea720;
        }
    }
    ctx->pc = 0x3EA7B4u;
    // 0x3ea7b4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3EA7B4u;
    {
        const bool branch_taken_0x3ea7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7B4u;
        // 0x3ea7b8: 0x92030012  lbu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7b4) {
            ctx->pc = 0x3EAB08u;
            goto label_3eab08;
        }
    }
    ctx->pc = 0x3EA7BCu;
label_3ea7bc:
    // 0x3ea7bc: 0x546200d2  bnel        $v1, $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3EA7BCu;
    {
        const bool branch_taken_0x3ea7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea7bc) {
            ctx->pc = 0x3EA7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA7BCu;
            // 0x3ea7c0: 0x92030012  lbu         $v1, 0x12($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAB08u;
            goto label_3eab08;
        }
    }
    ctx->pc = 0x3EA7C4u;
    // 0x3ea7c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ea7c8: 0x1482006c  bne         $a0, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3EA7C8u;
    {
        const bool branch_taken_0x3ea7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7C8u;
        // 0x3ea7cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7c8) {
            ctx->pc = 0x3EA97Cu;
            goto label_3ea97c;
        }
    }
    ctx->pc = 0x3EA7D0u;
    // 0x3ea7d0: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3ea7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea7d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ea7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ea7d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ea7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ea7dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ea7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ea7e0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3ea7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea7e4: 0x114000c7  beqz        $t2, . + 4 + (0xC7 << 2)
    ctx->pc = 0x3EA7E4u;
    {
        const bool branch_taken_0x3ea7e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7E4u;
        // 0x3ea7e8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7e4) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA7ECu;
    // 0x3ea7ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3ea7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea7f0: 0x19400025  blez        $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3EA7F0u;
    {
        const bool branch_taken_0x3ea7f0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7F0u;
        // 0x3ea7f4: 0x31470003  andi        $a3, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7f0) {
            ctx->pc = 0x3EA888u;
            goto label_3ea888;
        }
    }
    ctx->pc = 0x3EA7F8u;
    // 0x3ea7f8: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x3EA7F8u;
    {
        const bool branch_taken_0x3ea7f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7F8u;
        // 0x3ea7fc: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7f8) {
            ctx->pc = 0x3EA8CCu;
            goto label_3ea8cc;
        }
    }
    ctx->pc = 0x3EA800u;
    // 0x3ea800: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x3EA800u;
    {
        const bool branch_taken_0x3ea800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea800) {
            ctx->pc = 0x3EA804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA800u;
            // 0x3ea804: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA88Cu;
            goto label_3ea88c;
        }
    }
    ctx->pc = 0x3EA808u;
    // 0x3ea808: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3ea808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ea80c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EA80Cu;
    {
        const bool branch_taken_0x3ea80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea80c) {
            ctx->pc = 0x3EA810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA80Cu;
            // 0x3ea810: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA850u;
            goto label_3ea850;
        }
    }
    ctx->pc = 0x3EA814u;
    // 0x3ea814: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea818: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x3ea818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3ea81c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ea81cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea820: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea820u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea824: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ea824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea828: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea82c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea82cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea830: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ea830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea834: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea838: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea838u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea83c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ea83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea840: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea844: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x3ea844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ea848: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ea848u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea84c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea850:
    // 0x3ea850: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3ea850u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3ea854: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea858: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea85c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea860: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea864: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea868: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea86c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea870: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea874: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea878: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea87c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea880: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea884: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ea888:
    // 0x3ea888: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea88c:
    // 0x3ea88c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3ea88cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3ea890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea894: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x3ea894u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea898: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea89c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea8a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea8a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea8a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea8ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea8acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea8b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea8b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea8b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ea8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ea8bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea8c0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea8c4: 0x10c0008f  beqz        $a2, . + 4 + (0x8F << 2)
    ctx->pc = 0x3EA8C4u;
    {
        const bool branch_taken_0x3ea8c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8C4u;
        // 0x3ea8c8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea8c4) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA8CCu;
label_3ea8cc:
    // 0x3ea8cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ea8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8d0:
    // 0x3ea8d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ea8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea8d4: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3ea8d4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3ea8d8: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x3ea8d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea8dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ea8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea8e0: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea8e4: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3ea8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea8e8: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ea8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea8ec: 0xa083fffe  sb          $v1, -0x2($a0)
    ctx->pc = 0x3ea8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea8f0: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea8f4: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3ea8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea8f8: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3ea8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea8fc: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3ea8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea900: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea904: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3ea904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea908: 0x90a3fffd  lbu         $v1, -0x3($a1)
    ctx->pc = 0x3ea908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea90c: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3ea90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea910: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea914: 0xa082fff9  sb          $v0, -0x7($a0)
    ctx->pc = 0x3ea914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea918: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3ea918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3ea91c: 0xa083fff8  sb          $v1, -0x8($a0)
    ctx->pc = 0x3ea91cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967288), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea920: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3ea920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3ea924: 0xa082fff7  sb          $v0, -0x9($a0)
    ctx->pc = 0x3ea924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea928: 0x90a3fffb  lbu         $v1, -0x5($a1)
    ctx->pc = 0x3ea928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3ea92c: 0xa083fff6  sb          $v1, -0xA($a0)
    ctx->pc = 0x3ea92cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea930: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3ea930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3ea934: 0xa082fff5  sb          $v0, -0xB($a0)
    ctx->pc = 0x3ea934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967285), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea938: 0x90a3fffa  lbu         $v1, -0x6($a1)
    ctx->pc = 0x3ea938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3ea93c: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3ea93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3ea940: 0xa083fff4  sb          $v1, -0xC($a0)
    ctx->pc = 0x3ea940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967284), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea944: 0x2484fff3  addiu       $a0, $a0, -0xD
    ctx->pc = 0x3ea944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x3ea948: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea94c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea94cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea950: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea954: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea958: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea95c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea960: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ea960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ea964: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ea964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea968: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea96c: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3EA96Cu;
    {
        const bool branch_taken_0x3ea96c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA96Cu;
        // 0x3ea970: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea96c) {
            ctx->pc = 0x3EA8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea8d0;
        }
    }
    ctx->pc = 0x3EA974u;
    // 0x3ea974: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3EA974u;
    {
        const bool branch_taken_0x3ea974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA974u;
        // 0x3ea978: 0x92030012  lbu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea974) {
            ctx->pc = 0x3EAB08u;
            goto label_3eab08;
        }
    }
    ctx->pc = 0x3EA97Cu;
label_3ea97c:
    // 0x3ea97c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3ea97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3ea980: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ea980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ea984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ea984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ea988: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ea988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ea98c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3ea98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ea990: 0x1140005c  beqz        $t2, . + 4 + (0x5C << 2)
    ctx->pc = 0x3EA990u;
    {
        const bool branch_taken_0x3ea990 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA990u;
        // 0x3ea994: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea990) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EA998u;
    // 0x3ea998: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3ea998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea99c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ea99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea9a0: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA9A0u;
    {
        const bool branch_taken_0x3ea9a0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3EA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9A0u;
        // 0x3ea9a4: 0x31420001  andi        $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9a0) {
            ctx->pc = 0x3EA9B0u;
            goto label_3ea9b0;
        }
    }
    ctx->pc = 0x3EA9A8u;
    // 0x3ea9a8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3EA9A8u;
    {
        const bool branch_taken_0x3ea9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9A8u;
        // 0x3ea9ac: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9a8) {
            ctx->pc = 0x3EAA28u;
            goto label_3eaa28;
        }
    }
    ctx->pc = 0x3EA9B0u;
label_3ea9b0:
    // 0x3ea9b0: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3ea9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ea9b4: 0x24a6fffd  addiu       $a2, $a1, -0x3
    ctx->pc = 0x3ea9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3ea9b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ea9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea9bc: 0x24a3fffb  addiu       $v1, $a1, -0x5
    ctx->pc = 0x3ea9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x3ea9c0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9c4: 0x12a582b  sltu        $t3, $t1, $t2
    ctx->pc = 0x3ea9c4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ea9c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea9cc: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3ea9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3ea9d0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea9d8: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea9dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea9e4: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3ea9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3ea9e8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea9f0: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3ea9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3ea9f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ea9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ea9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ea9fc: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3ea9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3eaa00: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3eaa00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3eaa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3eaa08: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3eaa08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3eaa0c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3eaa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3eaa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3eaa14: 0x90a2fffc  lbu         $v0, -0x4($a1)
    ctx->pc = 0x3eaa14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3eaa18: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3eaa18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3eaa1c: 0x11600039  beqz        $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x3EAA1Cu;
    {
        const bool branch_taken_0x3eaa1c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA1Cu;
        // 0x3eaa20: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa1c) {
            ctx->pc = 0x3EAB04u;
            goto label_3eab04;
        }
    }
    ctx->pc = 0x3EAA24u;
    // 0x3eaa24: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3eaa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3eaa28:
    // 0x3eaa28: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3eaa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaa2c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3eaa2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaa30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3eaa30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaa34: 0x0  nop
    ctx->pc = 0x3eaa34u;
    // NOP
label_3eaa38:
    // 0x3eaa38: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3eaa38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaa3c: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3eaa3cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3eaa40: 0x12a582b  sltu        $t3, $t1, $t2
    ctx->pc = 0x3eaa40u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3eaa44: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3eaa44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eaa48: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3eaa48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3eaa4c: 0xa0a2ffff  sb          $v0, -0x1($a1)
    ctx->pc = 0x3eaa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa50: 0x90c3fffe  lbu         $v1, -0x2($a2)
    ctx->pc = 0x3eaa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3eaa54: 0xa0a3fffe  sb          $v1, -0x2($a1)
    ctx->pc = 0x3eaa54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eaa58: 0x90e4fffd  lbu         $a0, -0x3($a3)
    ctx->pc = 0x3eaa58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967293)));
    // 0x3eaa5c: 0x24e7fffa  addiu       $a3, $a3, -0x6
    ctx->pc = 0x3eaa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x3eaa60: 0xa0a4fffd  sb          $a0, -0x3($a1)
    ctx->pc = 0x3eaa60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eaa64: 0x90c2fffe  lbu         $v0, -0x2($a2)
    ctx->pc = 0x3eaa64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3eaa68: 0xa0a2fffc  sb          $v0, -0x4($a1)
    ctx->pc = 0x3eaa68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967292), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa6c: 0x9103fffd  lbu         $v1, -0x3($t0)
    ctx->pc = 0x3eaa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967293)));
    // 0x3eaa70: 0x2508fffa  addiu       $t0, $t0, -0x6
    ctx->pc = 0x3eaa70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967290));
    // 0x3eaa74: 0xa0a3fffb  sb          $v1, -0x5($a1)
    ctx->pc = 0x3eaa74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967291), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eaa78: 0x90c2fffe  lbu         $v0, -0x2($a2)
    ctx->pc = 0x3eaa78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3eaa7c: 0xa0a2fffa  sb          $v0, -0x6($a1)
    ctx->pc = 0x3eaa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa80: 0x90c3fffd  lbu         $v1, -0x3($a2)
    ctx->pc = 0x3eaa80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967293)));
    // 0x3eaa84: 0xa0a3fff9  sb          $v1, -0x7($a1)
    ctx->pc = 0x3eaa84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eaa88: 0x90c2fffc  lbu         $v0, -0x4($a2)
    ctx->pc = 0x3eaa88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3eaa8c: 0x24c6fffb  addiu       $a2, $a2, -0x5
    ctx->pc = 0x3eaa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
    // 0x3eaa90: 0xa0a2fff8  sb          $v0, -0x8($a1)
    ctx->pc = 0x3eaa90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967288), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaa94: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x3eaa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x3eaa98: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eaa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaa9c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3eaa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3eaaa0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaaa4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaaa8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eaaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaaac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaaacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaab0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaab4: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x3eaab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3eaab8: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3eaab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3eaabc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaabcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaac0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaac4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eaac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaac8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaac8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaacc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaad0: 0x9102ffff  lbu         $v0, -0x1($t0)
    ctx->pc = 0x3eaad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967295)));
    // 0x3eaad4: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x3eaad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x3eaad8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaad8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaadc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaae0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eaae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaae4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3eaae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3eaae8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaaec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3eaaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3eaaf0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eaaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eaaf4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3eaaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3eaaf8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3eaaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaafc: 0x1560ffce  bnez        $t3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3EAAFCu;
    {
        const bool branch_taken_0x3eaafc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAFCu;
        // 0x3eab00: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaafc) {
            ctx->pc = 0x3EAA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaa38;
        }
    }
    ctx->pc = 0x3EAB04u;
label_3eab04:
    // 0x3eab04: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x3eab04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_3eab08:
    // 0x3eab08: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3eab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eab0c: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x3eab0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3eab10: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3eab14: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x3eab14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3eab18: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x3eab18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3eab1c: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x3eab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eab20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3eab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3eab24: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x3eab24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eab28: 0xa2050013  sb          $a1, 0x13($s0)
    ctx->pc = 0x3eab28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eab2c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EAB2Cu;
    SET_GPR_U32(ctx, 31, 0x3EAB34u);
    ctx->pc = 0x3EAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAB2Cu;
    // 0x3eab30: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EAB2Cu, 0x3EAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAB34u;
label_3eab34:
    // 0x3eab34: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3eab34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3eab38: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3eab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3eab3c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3eab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_3eab40:
    // 0x3eab40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eab40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eab44:
    // 0x3eab44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eab48: 0x3e00008  jr          $ra
    ctx->pc = 0x3EAB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB48u;
        // 0x3eab4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAB50u;
}
