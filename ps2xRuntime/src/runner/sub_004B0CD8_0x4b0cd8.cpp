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

// Function: sub_004B0CD8
// Address: 0x4b0cd8 - 0x4b0e28
void sub_004B0CD8_0x4b0cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0CD8_0x4b0cd8");
#endif

    switch (ctx->pc) {
        case 0x4b0cfcu: goto label_4b0cfc;
        case 0x4b0d2cu: goto label_4b0d2c;
        case 0x4b0d60u: goto label_4b0d60;
        case 0x4b0d84u: goto label_4b0d84;
        case 0x4b0da8u: goto label_4b0da8;
        default: break;
    }

    ctx->pc = 0x4b0cd8u;

    // 0x4b0cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b0cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b0cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b0cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b0ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b0ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b0ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0ce8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b0cec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4b0cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0cf4: 0xc1270ee  jal         func_49C3B8
    ctx->pc = 0x4B0CF4u;
    SET_GPR_U32(ctx, 31, 0x4B0CFCu);
    ctx->pc = 0x4B0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0CF4u;
    // 0x4b0cf8: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C3B8u, 0x4B0CF4u, 0x4B0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0CFCu;
label_4b0cfc:
    // 0x4b0cfc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4b0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4b0d00: 0x262313b0  addiu       $v1, $s1, 0x13B0
    ctx->pc = 0x4b0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5040));
    // 0x4b0d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b0d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b0d08: 0x8f84c254  lw          $a0, -0x3DAC($gp)
    ctx->pc = 0x4b0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951508)));
    // 0x4b0d0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0d10: 0x1444003f  bne         $v0, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4B0D10u;
    {
        const bool branch_taken_0x4b0d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D10u;
        // 0x4b0d14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d10) {
            ctx->pc = 0x4B0E10u;
            goto label_4b0e10;
        }
    }
    ctx->pc = 0x4B0D18u;
    // 0x4b0d18: 0x262306c0  addiu       $v1, $s1, 0x6C0
    ctx->pc = 0x4b0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x4b0d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d24: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x4b0d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d28: 0x26250d3f  addiu       $a1, $s1, 0xD3F
    ctx->pc = 0x4b0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3391));
label_4b0d2c:
    // 0x4b0d2c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x4b0d2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b0d30: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x4b0d30u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4b0d34: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x4b0d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x4b0d38: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x4b0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x4b0d3c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4b0d40: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B0D40u;
    {
        const bool branch_taken_0x4b0d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D40u;
        // 0x4b0d44: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d40) {
            ctx->pc = 0x4B0D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0d2c;
        }
    }
    ctx->pc = 0x4B0D48u;
    // 0x4b0d48: 0x8f82c254  lw          $v0, -0x3DAC($gp)
    ctx->pc = 0x4b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951508)));
    // 0x4b0d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b0d54: 0xaf82c254  sw          $v0, -0x3DAC($gp)
    ctx->pc = 0x4b0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951508), GPR_U32(ctx, 2));
    // 0x4b0d58: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4B0D58u;
    SET_GPR_U32(ctx, 31, 0x4B0D60u);
    ctx->pc = 0x4B0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D58u;
    // 0x4b0d5c: 0xae020cf0  sw          $v0, 0xCF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B0D58u, 0x4B0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0D60u;
label_4b0d60:
    // 0x4b0d60: 0x8e0413a4  lw          $a0, 0x13A4($s0)
    ctx->pc = 0x4b0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5028)));
    // 0x4b0d64: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x4b0d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4b0d68: 0x8f8ac254  lw          $t2, -0x3DAC($gp)
    ctx->pc = 0x4b0d68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951508)));
    // 0x4b0d6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b0d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d70: 0x24060680  addiu       $a2, $zero, 0x680
    ctx->pc = 0x4b0d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x4b0d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0d7c: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0D7Cu;
    SET_GPR_U32(ctx, 31, 0x4B0D84u);
    ctx->pc = 0x4B0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D7Cu;
    // 0x4b0d80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0D7Cu, 0x4B0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0D84u;
label_4b0d84:
    // 0x4b0d84: 0x8e0213a0  lw          $v0, 0x13A0($s0)
    ctx->pc = 0x4b0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5024)));
    // 0x4b0d88: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B0D88u;
    {
        const bool branch_taken_0x4b0d88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4B0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D88u;
        // 0x4b0d8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d88) {
            ctx->pc = 0x4B0E0Cu;
            goto label_4b0e0c;
        }
    }
    ctx->pc = 0x4B0D90u;
    // 0x4b0d90: 0x3c0b2000  lui         $t3, 0x2000
    ctx->pc = 0x4b0d90u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8192 << 16));
    // 0x4b0d94: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4b0d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0d98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4b0d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b0d9c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x4b0d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b0da0: 0x26060d00  addiu       $a2, $s0, 0xD00
    ctx->pc = 0x4b0da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x4b0da4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4b0da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0da8:
    // 0x4b0da8: 0xcb2025  or          $a0, $a2, $t3
    ctx->pc = 0x4b0da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x4b0dac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0db0: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0DB0u;
    {
        const bool branch_taken_0x4b0db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x4B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DB0u;
        // 0x4b0db4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0db0) {
            ctx->pc = 0x4B0DC4u;
            goto label_4b0dc4;
        }
    }
    ctx->pc = 0x4B0DB8u;
    // 0x4b0db8: 0x54480001  bnel        $v0, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B0DB8u;
    {
        const bool branch_taken_0x4b0db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x4b0db8) {
            ctx->pc = 0x4B0DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0DB8u;
            // 0x4b0dbc: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DC0u;
            goto label_4b0dc0;
        }
    }
    ctx->pc = 0x4B0DC0u;
label_4b0dc0:
    // 0x4b0dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b0dc4:
    // 0x4b0dc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4b0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b0dc8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0DC8u;
    {
        const bool branch_taken_0x4b0dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4b0dc8) {
            ctx->pc = 0x4B0DD8u;
            goto label_4b0dd8;
        }
    }
    ctx->pc = 0x4B0DD0u;
    // 0x4b0dd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0DD0u;
    {
        const bool branch_taken_0x4b0dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DD0u;
        // 0x4b0dd4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0dd0) {
            ctx->pc = 0x4B0DF0u;
            goto label_4b0df0;
        }
    }
    ctx->pc = 0x4B0DD8u;
label_4b0dd8:
    // 0x4b0dd8: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0DD8u;
    {
        const bool branch_taken_0x4b0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x4B0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DD8u;
        // 0x4b0ddc: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0dd8) {
            ctx->pc = 0x4B0DF0u;
            goto label_4b0df0;
        }
    }
    ctx->pc = 0x4B0DE0u;
    // 0x4b0de0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4b0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x4b0de4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4b0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x4b0de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B0DE8u;
    {
        const bool branch_taken_0x4b0de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DE8u;
        // 0x4b0dec: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0de8) {
            ctx->pc = 0x4B0DF4u;
            goto label_4b0df4;
        }
    }
    ctx->pc = 0x4B0DF0u;
label_4b0df0:
    // 0x4b0df0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4b0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_4b0df4:
    // 0x4b0df4: 0x8e0213a0  lw          $v0, 0x13A0($s0)
    ctx->pc = 0x4b0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5024)));
    // 0x4b0df8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4b0df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4b0dfc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x4b0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x4b0e00: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x4b0e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4b0e04: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4B0E04u;
    {
        const bool branch_taken_0x4b0e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E04u;
        // 0x4b0e08: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e04) {
            ctx->pc = 0x4B0DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0da8;
        }
    }
    ctx->pc = 0x4B0E0Cu;
label_4b0e0c:
    // 0x4b0e0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b0e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e10:
    // 0x4b0e10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b0e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0e14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b0e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0e18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b0e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0e20: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E20u;
        // 0x4b0e24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0E28u;
}
