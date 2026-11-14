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

// Function: sub_003E8D30
// Address: 0x3e8d30 - 0x3e92f8
void sub_003E8D30_0x3e8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8D30_0x3e8d30");
#endif

    switch (ctx->pc) {
        case 0x3e8e68u: goto label_3e8e68;
        case 0x3e8fe0u: goto label_3e8fe0;
        case 0x3e9198u: goto label_3e9198;
        case 0x3e9278u: goto label_3e9278;
        default: break;
    }

    ctx->pc = 0x3e8d30u;

    // 0x3e8d30: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3e8d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3e8d34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8d38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3e8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e8d3c: 0x146200e1  bne         $v1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x3E8D3Cu;
    {
        const bool branch_taken_0x3e8d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D3Cu;
        // 0x3e8d40: 0xdc8b0000  ld          $t3, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d3c) {
            ctx->pc = 0x3E90C4u;
            goto label_3e90c4;
        }
    }
    ctx->pc = 0x3E8D44u;
    // 0x3e8d44: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3e8d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3e8d48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e8d4c: 0x14620073  bne         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x3E8D4Cu;
    {
        const bool branch_taken_0x3e8d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D4Cu;
        // 0x3e8d50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d4c) {
            ctx->pc = 0x3E8F1Cu;
            goto label_3e8f1c;
        }
    }
    ctx->pc = 0x3E8D54u;
    // 0x3e8d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e8d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d58: 0x11600164  beqz        $t3, . + 4 + (0x164 << 2)
    ctx->pc = 0x3E8D58u;
    {
        const bool branch_taken_0x3e8d58 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D58u;
        // 0x3e8d5c: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d58) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E8D60u;
    // 0x3e8d60: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e8d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8d68: 0x19600029  blez        $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E8D68u;
    {
        const bool branch_taken_0x3e8d68 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D68u;
        // 0x3e8d6c: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d68) {
            ctx->pc = 0x3E8E10u;
            goto label_3e8e10;
        }
    }
    ctx->pc = 0x3E8D70u;
    // 0x3e8d70: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3E8D70u;
    {
        const bool branch_taken_0x3e8d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D70u;
        // 0x3e8d74: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d70) {
            ctx->pc = 0x3E8E5Cu;
            goto label_3e8e5c;
        }
    }
    ctx->pc = 0x3E8D78u;
    // 0x3e8d78: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E8D78u;
    {
        const bool branch_taken_0x3e8d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D78u;
        // 0x3e8d7c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d78) {
            ctx->pc = 0x3E8E14u;
            goto label_3e8e14;
        }
    }
    ctx->pc = 0x3E8D80u;
    // 0x3e8d80: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8d84: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E8D84u;
    {
        const bool branch_taken_0x3e8d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D84u;
        // 0x3e8d88: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d84) {
            ctx->pc = 0x3E8DD4u;
            goto label_3e8dd4;
        }
    }
    ctx->pc = 0x3E8D8Cu;
    // 0x3e8d8c: 0x90c5ffff  lbu         $a1, -0x1($a2)
    ctx->pc = 0x3e8d8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8d90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3e8d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8d94: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8d98: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3e8d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8d9c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e8d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8da0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8da4: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3e8da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8da8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e8da8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8dac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8db0: 0x90c4ffff  lbu         $a0, -0x1($a2)
    ctx->pc = 0x3e8db0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8db4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x3e8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8db8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3e8db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8dbc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8dc0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3e8dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8dc4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8dc8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3e8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e8dcc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8dd0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e8dd4:
    // 0x3e8dd4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e8dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8dd8: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3e8dd8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3e8ddc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8de0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8de4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8de8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8de8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8dec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8df0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8df4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8df8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8dfc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e00: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8e04: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8e08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e8e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e8e10:
    // 0x3e8e10: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3e8e14:
    // 0x3e8e14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e8e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8e1c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3e8e1cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3e8e20: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8e24: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3e8e24u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e8e28: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8e2c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8e30: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8e34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e38: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8e3c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8e40: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8e44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e48: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e8e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e8e4c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8e50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e8e54: 0x11400125  beqz        $t2, . + 4 + (0x125 << 2)
    ctx->pc = 0x3E8E54u;
    {
        const bool branch_taken_0x3e8e54 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E54u;
        // 0x3e8e58: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e54) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E8E5Cu;
label_3e8e5c:
    // 0x3e8e5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e8e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e60: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3e8e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e64: 0x0  nop
    ctx->pc = 0x3e8e64u;
    // NOP
label_3e8e68:
    // 0x3e8e68: 0x90c3fffe  lbu         $v1, -0x2($a2)
    ctx->pc = 0x3e8e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3e8e6c: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3e8e6cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3e8e70: 0x90c4ffff  lbu         $a0, -0x1($a2)
    ctx->pc = 0x3e8e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8e74: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3e8e74u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e8e78: 0xa0e3ffff  sb          $v1, -0x1($a3)
    ctx->pc = 0x3e8e78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8e7c: 0x90c2fffd  lbu         $v0, -0x3($a2)
    ctx->pc = 0x3e8e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967293)));
    // 0x3e8e80: 0xa0e2fffe  sb          $v0, -0x2($a3)
    ctx->pc = 0x3e8e80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8e84: 0x90c3fffc  lbu         $v1, -0x4($a2)
    ctx->pc = 0x3e8e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3e8e88: 0xa0e4fffc  sb          $a0, -0x4($a3)
    ctx->pc = 0x3e8e88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967292), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8e8c: 0xa0e3fffd  sb          $v1, -0x3($a3)
    ctx->pc = 0x3e8e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8e90: 0x90c4fffa  lbu         $a0, -0x6($a2)
    ctx->pc = 0x3e8e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967290)));
    // 0x3e8e94: 0x90c5fffb  lbu         $a1, -0x5($a2)
    ctx->pc = 0x3e8e94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967291)));
    // 0x3e8e98: 0xa0e4fffb  sb          $a0, -0x5($a3)
    ctx->pc = 0x3e8e98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967291), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8e9c: 0x90c2fff9  lbu         $v0, -0x7($a2)
    ctx->pc = 0x3e8e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967289)));
    // 0x3e8ea0: 0xa0e2fffa  sb          $v0, -0x6($a3)
    ctx->pc = 0x3e8ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8ea4: 0x90c3fff8  lbu         $v1, -0x8($a2)
    ctx->pc = 0x3e8ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x3e8ea8: 0xa0e5fff8  sb          $a1, -0x8($a3)
    ctx->pc = 0x3e8ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967288), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e8eac: 0xa0e3fff9  sb          $v1, -0x7($a3)
    ctx->pc = 0x3e8eacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8eb0: 0x90c4fff6  lbu         $a0, -0xA($a2)
    ctx->pc = 0x3e8eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967286)));
    // 0x3e8eb4: 0x90c5fff7  lbu         $a1, -0x9($a2)
    ctx->pc = 0x3e8eb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967287)));
    // 0x3e8eb8: 0xa0e4fff7  sb          $a0, -0x9($a3)
    ctx->pc = 0x3e8eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967287), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8ebc: 0x90c2fff5  lbu         $v0, -0xB($a2)
    ctx->pc = 0x3e8ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967285)));
    // 0x3e8ec0: 0xa0e2fff6  sb          $v0, -0xA($a3)
    ctx->pc = 0x3e8ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967286), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8ec4: 0x90c3fff4  lbu         $v1, -0xC($a2)
    ctx->pc = 0x3e8ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x3e8ec8: 0xa0e5fff4  sb          $a1, -0xC($a3)
    ctx->pc = 0x3e8ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967284), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e8ecc: 0x24c6fff3  addiu       $a2, $a2, -0xD
    ctx->pc = 0x3e8eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967283));
    // 0x3e8ed0: 0xa0e3fff5  sb          $v1, -0xB($a3)
    ctx->pc = 0x3e8ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8ed4: 0x24e7fff3  addiu       $a3, $a3, -0xD
    ctx->pc = 0x3e8ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967283));
    // 0x3e8ed8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e8ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8edc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8ee0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8ee4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8ee8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e8ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8eec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e8eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e8ef0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8ef4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8ef8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e8ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8efc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e8efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e8f00: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8f04: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e8f04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8f08: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e8f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e8f0c: 0x1540ffd6  bnez        $t2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3E8F0Cu;
    {
        const bool branch_taken_0x3e8f0c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F0Cu;
        // 0x3e8f10: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f0c) {
            ctx->pc = 0x3E8E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8e68;
        }
    }
    ctx->pc = 0x3E8F14u;
    // 0x3e8f14: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3E8F14u;
    {
        const bool branch_taken_0x3e8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f14) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E8F1Cu;
label_3e8f1c:
    // 0x3e8f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e8f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8f20: 0x116000f2  beqz        $t3, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3E8F20u;
    {
        const bool branch_taken_0x3e8f20 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F20u;
        // 0x3e8f24: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f20) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E8F28u;
    // 0x3e8f28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3e8f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8f2c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3e8f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8f30: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8F30u;
    {
        const bool branch_taken_0x3e8f30 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F30u;
        // 0x3e8f34: 0x31640001  andi        $a0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f30) {
            ctx->pc = 0x3E8F40u;
            goto label_3e8f40;
        }
    }
    ctx->pc = 0x3E8F38u;
    // 0x3e8f38: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E8F38u;
    {
        const bool branch_taken_0x3e8f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F38u;
        // 0x3e8f3c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f38) {
            ctx->pc = 0x3E8FD8u;
            goto label_3e8fd8;
        }
    }
    ctx->pc = 0x3E8F40u;
label_3e8f40:
    // 0x3e8f40: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x3e8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x3e8f44: 0x90c4ffff  lbu         $a0, -0x1($a2)
    ctx->pc = 0x3e8f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8f4c: 0x90c5fffe  lbu         $a1, -0x2($a2)
    ctx->pc = 0x3e8f4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3e8f50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e8f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8f54: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8f58: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x3e8f58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8f5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8f60: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e8f60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8f64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e8f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8f68: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x3e8f68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e8f6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8f70: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3e8f70u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e8f74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e8f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8f7c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8f80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8f84: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e8f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8f8c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e8f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8f90: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8f94: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e8f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8f98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8f9c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e8f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8fa0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8fa4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e8fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e8fac: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e8facu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8fb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e8fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8fb4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8fb8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e8fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8fbc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e8fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8fc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8fc4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x3e8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e8fc8: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e8fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8fcc: 0x112000c7  beqz        $t1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x3E8FCCu;
    {
        const bool branch_taken_0x3e8fcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FCCu;
        // 0x3e8fd0: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8fcc) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E8FD4u;
    // 0x3e8fd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3e8fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8fd8:
    // 0x3e8fd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3e8fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8fdc: 0x0  nop
    ctx->pc = 0x3e8fdcu;
    // NOP
label_3e8fe0:
    // 0x3e8fe0: 0x90c5ffff  lbu         $a1, -0x1($a2)
    ctx->pc = 0x3e8fe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e8fe4: 0x65080002  daddiu      $t0, $t0, 0x2
    ctx->pc = 0x3e8fe4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)2);
    // 0x3e8fe8: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3e8fe8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e8fec: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x3e8fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e8ff0: 0x90c4fffe  lbu         $a0, -0x2($a2)
    ctx->pc = 0x3e8ff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3e8ff4: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x3e8ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8ff8: 0x90c2fffd  lbu         $v0, -0x3($a2)
    ctx->pc = 0x3e8ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967293)));
    // 0x3e8ffc: 0xa0e2ffff  sb          $v0, -0x1($a3)
    ctx->pc = 0x3e8ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9000: 0x90c3fffc  lbu         $v1, -0x4($a2)
    ctx->pc = 0x3e9000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3e9004: 0xa0e3fffe  sb          $v1, -0x2($a3)
    ctx->pc = 0x3e9004u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9008: 0x90c2fffb  lbu         $v0, -0x5($a2)
    ctx->pc = 0x3e9008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967291)));
    // 0x3e900c: 0xa0e2fffd  sb          $v0, -0x3($a3)
    ctx->pc = 0x3e900cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9010: 0x90c3fffa  lbu         $v1, -0x6($a2)
    ctx->pc = 0x3e9010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967290)));
    // 0x3e9014: 0xa0e3fffc  sb          $v1, -0x4($a3)
    ctx->pc = 0x3e9014u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9018: 0x90c2fff9  lbu         $v0, -0x7($a2)
    ctx->pc = 0x3e9018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967289)));
    // 0x3e901c: 0xa0e2fffb  sb          $v0, -0x5($a3)
    ctx->pc = 0x3e901cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9020: 0x90c3fff8  lbu         $v1, -0x8($a2)
    ctx->pc = 0x3e9020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x3e9024: 0xa0e5fff9  sb          $a1, -0x7($a3)
    ctx->pc = 0x3e9024u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967289), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e9028: 0x24c6fff7  addiu       $a2, $a2, -0x9
    ctx->pc = 0x3e9028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967287));
    // 0x3e902c: 0xa0e3fffa  sb          $v1, -0x6($a3)
    ctx->pc = 0x3e902cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9030: 0xa0e4fff8  sb          $a0, -0x8($a3)
    ctx->pc = 0x3e9030u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967288), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9034: 0x24e7fff7  addiu       $a3, $a3, -0x9
    ctx->pc = 0x3e9034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967287));
    // 0x3e9038: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3e9038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e903c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e903cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9040: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x3e9040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9044: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e9044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9048: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e904c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3e904cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9050: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9054: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9058: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e9058u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e905c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e905cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9060: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9064: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9068: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e9068u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e906c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e906cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9070: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9074: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9078: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e9078u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e907c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e907cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9080: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9084: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9088: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e9088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e908c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9090: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9094: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9098: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e9098u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e909c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e909cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e90a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e90a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e90a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e90a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e90a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e90a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e90ac: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3e90acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e90b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e90b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e90b4: 0x1520ffca  bnez        $t1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3E90B4u;
    {
        const bool branch_taken_0x3e90b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90B4u;
        // 0x3e90b8: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90b4) {
            ctx->pc = 0x3E8FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8fe0;
        }
    }
    ctx->pc = 0x3E90BCu;
    // 0x3e90bc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3E90BCu;
    {
        const bool branch_taken_0x3e90bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e90bc) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E90C4u;
label_3e90c4:
    // 0x3e90c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e90c8: 0x14620088  bne         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x3E90C8u;
    {
        const bool branch_taken_0x3e90c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90C8u;
        // 0x3e90cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90c8) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E90D0u;
    // 0x3e90d0: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3e90d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3e90d4: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3E90D4u;
    {
        const bool branch_taken_0x3e90d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90D4u;
        // 0x3e90d8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90d4) {
            ctx->pc = 0x3E91FCu;
            goto label_3e91fc;
        }
    }
    ctx->pc = 0x3E90DCu;
    // 0x3e90dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e90dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90e0: 0x11600082  beqz        $t3, . + 4 + (0x82 << 2)
    ctx->pc = 0x3E90E0u;
    {
        const bool branch_taken_0x3e90e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90E0u;
        // 0x3e90e4: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90e0) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E90E8u;
    // 0x3e90e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3e90e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3e90ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90f0: 0x1960001b  blez        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E90F0u;
    {
        const bool branch_taken_0x3e90f0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90F0u;
        // 0x3e90f4: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90f0) {
            ctx->pc = 0x3E9160u;
            goto label_3e9160;
        }
    }
    ctx->pc = 0x3E90F8u;
    // 0x3e90f8: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E90F8u;
    {
        const bool branch_taken_0x3e90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90F8u;
        // 0x3e90fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90f8) {
            ctx->pc = 0x3E918Cu;
            goto label_3e918c;
        }
    }
    ctx->pc = 0x3E9100u;
    // 0x3e9100: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E9100u;
    {
        const bool branch_taken_0x3e9100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9100u;
        // 0x3e9104: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9100) {
            ctx->pc = 0x3E9164u;
            goto label_3e9164;
        }
    }
    ctx->pc = 0x3E9108u;
    // 0x3e9108: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e9108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e910c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3E910Cu;
    {
        const bool branch_taken_0x3e910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E910Cu;
        // 0x3e9110: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e910c) {
            ctx->pc = 0x3E9144u;
            goto label_3e9144;
        }
    }
    ctx->pc = 0x3E9114u;
    // 0x3e9114: 0x90e5ffff  lbu         $a1, -0x1($a3)
    ctx->pc = 0x3e9114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3e9118: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e9118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e911c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3e911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9120: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x3e9120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3e9124: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3e9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e9128: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e9128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e912c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3e912cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9130: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3e9130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9134: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e9134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9138: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3e9138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e913c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9140: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e9144:
    // 0x3e9144: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e9144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9148: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e9148u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e914c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9150: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9154: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9158: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e915c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e915cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e9160:
    // 0x3e9160: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3e9164:
    // 0x3e9164: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9168: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e9168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e916c: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e916cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e9170: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9174: 0x10b382b  sltu        $a3, $t0, $t3
    ctx->pc = 0x3e9174u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e9178: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e917c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e917cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9180: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9184: 0x10e00059  beqz        $a3, . + 4 + (0x59 << 2)
    ctx->pc = 0x3E9184u;
    {
        const bool branch_taken_0x3e9184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9184u;
        // 0x3e9188: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9184) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E918Cu;
label_3e918c:
    // 0x3e918c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9190: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e9190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9194: 0x0  nop
    ctx->pc = 0x3e9194u;
    // NOP
label_3e9198:
    // 0x3e9198: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x3e9198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3e919c: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3e919cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3e91a0: 0x9083fffe  lbu         $v1, -0x2($a0)
    ctx->pc = 0x3e91a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x3e91a4: 0x10b382b  sltu        $a3, $t0, $t3
    ctx->pc = 0x3e91a4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e91a8: 0xa0a2fffe  sb          $v0, -0x2($a1)
    ctx->pc = 0x3e91a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e91ac: 0xa0a3ffff  sb          $v1, -0x1($a1)
    ctx->pc = 0x3e91acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e91b0: 0x9082fffd  lbu         $v0, -0x3($a0)
    ctx->pc = 0x3e91b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x3e91b4: 0x9083fffc  lbu         $v1, -0x4($a0)
    ctx->pc = 0x3e91b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x3e91b8: 0xa0a2fffc  sb          $v0, -0x4($a1)
    ctx->pc = 0x3e91b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967292), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e91bc: 0xa0a3fffd  sb          $v1, -0x3($a1)
    ctx->pc = 0x3e91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e91c0: 0x9082fffb  lbu         $v0, -0x5($a0)
    ctx->pc = 0x3e91c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967291)));
    // 0x3e91c4: 0x9083fffa  lbu         $v1, -0x6($a0)
    ctx->pc = 0x3e91c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967290)));
    // 0x3e91c8: 0xa0a2fffa  sb          $v0, -0x6($a1)
    ctx->pc = 0x3e91c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e91cc: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3e91d0: 0xa0a3fffb  sb          $v1, -0x5($a1)
    ctx->pc = 0x3e91d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967291), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e91d4: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3e91d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3e91d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e91d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e91dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e91e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e91e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e91e4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e91e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e91e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e91ec: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3E91ECu;
    {
        const bool branch_taken_0x3e91ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91ECu;
        // 0x3e91f0: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91ec) {
            ctx->pc = 0x3E9198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9198;
        }
    }
    ctx->pc = 0x3E91F4u;
    // 0x3e91f4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3E91F4u;
    {
        const bool branch_taken_0x3e91f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e91f4) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E91FCu;
label_3e91fc:
    // 0x3e91fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e91fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9200: 0x1160003a  beqz        $t3, . + 4 + (0x3A << 2)
    ctx->pc = 0x3E9200u;
    {
        const bool branch_taken_0x3e9200 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9200u;
        // 0x3e9204: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9200) {
            ctx->pc = 0x3E92ECu;
            goto label_3e92ec;
        }
    }
    ctx->pc = 0x3E9208u;
    // 0x3e9208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e9208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e920c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3e920cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9210: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9210u;
    {
        const bool branch_taken_0x3e9210 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9210u;
        // 0x3e9214: 0x31630001  andi        $v1, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9210) {
            ctx->pc = 0x3E9220u;
            goto label_3e9220;
        }
    }
    ctx->pc = 0x3E9218u;
    // 0x3e9218: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E9218u;
    {
        const bool branch_taken_0x3e9218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9218) {
            ctx->pc = 0x3E921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9218u;
            // 0x3e921c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9270u;
            goto label_3e9270;
        }
    }
    ctx->pc = 0x3E9220u;
label_3e9220:
    // 0x3e9220: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x3e9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3e9224: 0x9087ffff  lbu         $a3, -0x1($a0)
    ctx->pc = 0x3e9224u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3e9228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e922c: 0x9086fffe  lbu         $a2, -0x2($a0)
    ctx->pc = 0x3e922cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x3e9230: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e9230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9234: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e923c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e923cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9240: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e9240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9244: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3e9244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9248: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e924c: 0x10b502b  sltu        $t2, $t0, $t3
    ctx->pc = 0x3e924cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e9250: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e9250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e9254: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9258: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e9258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e925c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9260: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3e9260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e9264: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E9264u;
    {
        const bool branch_taken_0x3e9264 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9264u;
        // 0x3e9268: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9264) {
            ctx->pc = 0x3E92E4u;
            goto label_3e92e4;
        }
    }
    ctx->pc = 0x3E926Cu;
    // 0x3e926c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e926cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9270:
    // 0x3e9270: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3e9270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9274: 0x0  nop
    ctx->pc = 0x3e9274u;
    // NOP
label_3e9278:
    // 0x3e9278: 0x9083fffd  lbu         $v1, -0x3($a0)
    ctx->pc = 0x3e9278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x3e927c: 0x65080002  daddiu      $t0, $t0, 0x2
    ctx->pc = 0x3e927cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)2);
    // 0x3e9280: 0x9087ffff  lbu         $a3, -0x1($a0)
    ctx->pc = 0x3e9280u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3e9284: 0x10b502b  sltu        $t2, $t0, $t3
    ctx->pc = 0x3e9284u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e9288: 0x9086fffe  lbu         $a2, -0x2($a0)
    ctx->pc = 0x3e9288u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x3e928c: 0xa0a3ffff  sb          $v1, -0x1($a1)
    ctx->pc = 0x3e928cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9290: 0x9082fffc  lbu         $v0, -0x4($a0)
    ctx->pc = 0x3e9290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x3e9294: 0xa0a6fffc  sb          $a2, -0x4($a1)
    ctx->pc = 0x3e9294u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967292), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9298: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x3e9298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x3e929c: 0xa0a2fffe  sb          $v0, -0x2($a1)
    ctx->pc = 0x3e929cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e92a0: 0xa0a7fffd  sb          $a3, -0x3($a1)
    ctx->pc = 0x3e92a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e92a4: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x3e92a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e92a8: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x3e92a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x3e92ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e92acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e92b0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e92b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e92b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e92b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e92b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e92bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e92bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e92c0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e92c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e92c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e92c8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e92c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e92cc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e92ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e92d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e92d4: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x3e92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e92d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e92dc: 0x1540ffe6  bnez        $t2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E92DCu;
    {
        const bool branch_taken_0x3e92dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92DCu;
        // 0x3e92e0: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e92dc) {
            ctx->pc = 0x3E9278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9278;
        }
    }
    ctx->pc = 0x3E92E4u;
label_3e92e4:
    // 0x3e92e4: 0xa3a60011  sb          $a2, 0x11($sp)
    ctx->pc = 0x3e92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e92e8: 0xa3a70010  sb          $a3, 0x10($sp)
    ctx->pc = 0x3e92e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 7));
label_3e92ec:
    // 0x3e92ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3E92ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92ECu;
        // 0x3e92f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E92ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E92F4u;
    // 0x3e92f4: 0x0  nop
    ctx->pc = 0x3e92f4u;
    // NOP
    ctx->pc = 0x3e92f8u;
}
