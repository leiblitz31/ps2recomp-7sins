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

// Function: sub_00354C48
// Address: 0x354c48 - 0x354e90
void sub_00354C48_0x354c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C48_0x354c48");
#endif

    switch (ctx->pc) {
        case 0x354cdcu: goto label_354cdc;
        case 0x354d44u: goto label_354d44;
        case 0x354d84u: goto label_354d84;
        case 0x354dd0u: goto label_354dd0;
        default: break;
    }

    ctx->pc = 0x354c48u;

    // 0x354c48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x354c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x354c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354c50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x354c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x354c54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x354c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x354c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x354c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x354c60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x354c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c64: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x354c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x354c68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x354c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x354c6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x354c6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354c74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x354c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x354c78: 0x8eb1004c  lw          $s1, 0x4C($s5)
    ctx->pc = 0x354c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x354c7c: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x354c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x354c80: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x354C80u;
    {
        const bool branch_taken_0x354c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x354C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C80u;
        // 0x354c84: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c80) {
            ctx->pc = 0x354D2Cu;
            goto label_354d2c;
        }
    }
    ctx->pc = 0x354C88u;
    // 0x354c88: 0x8e3400e4  lw          $s4, 0xE4($s1)
    ctx->pc = 0x354c88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x354c8c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x354c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x354c90: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x354c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x354c94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x354c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x354c98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x354C98u;
    {
        const bool branch_taken_0x354c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C98u;
        // 0x354c9c: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c98) {
            ctx->pc = 0x354CA4u;
            goto label_354ca4;
        }
    }
    ctx->pc = 0x354CA0u;
    // 0x354ca0: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x354ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_354ca4:
    // 0x354ca4: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x354ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x354ca8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x354ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x354cac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354cb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x354cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354cb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x354CB4u;
    {
        const bool branch_taken_0x354cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354cb4) {
            ctx->pc = 0x354CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354CB4u;
            // 0x354cb8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354CCCu;
            goto label_354ccc;
        }
    }
    ctx->pc = 0x354CBCu;
    // 0x354cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354cc0: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x354CC0u;
    {
        const bool branch_taken_0x354cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x354cc0) {
            ctx->pc = 0x354CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354CC0u;
            // 0x354cc4: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354CE4u;
            goto label_354ce4;
        }
    }
    ctx->pc = 0x354CC8u;
    // 0x354cc8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x354cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_354ccc:
    // 0x354ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x354cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354cd0: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x354cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x354cd4: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x354CD4u;
    SET_GPR_U32(ctx, 31, 0x354CDCu);
    ctx->pc = 0x354CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354CD4u;
    // 0x354cd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x354CD4u, 0x354CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CDCu;
label_354cdc:
    // 0x354cdc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x354cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ce0: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x354ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_354ce4:
    // 0x354ce4: 0x26270138  addiu       $a3, $s1, 0x138
    ctx->pc = 0x354ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x354ce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x354ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354cec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354cf0: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x354cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x354cf4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x354cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x354cf8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x354cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x354cfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354CFCu;
    {
        const bool branch_taken_0x354cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354CFCu;
        // 0x354d00: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354cfc) {
            ctx->pc = 0x354D10u;
            goto label_354d10;
        }
    }
    ctx->pc = 0x354D04u;
    // 0x354d04: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x354d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x354d08: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x354d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x354d0c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x354d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_354d10:
    // 0x354d10: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x354d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x354d14: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x354d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x354d18: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D18u;
    {
        const bool branch_taken_0x354d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D18u;
        // 0x354d1c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d18) {
            ctx->pc = 0x354D2Cu;
            goto label_354d2c;
        }
    }
    ctx->pc = 0x354D20u;
    // 0x354d20: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x354d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x354d24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x354d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x354d28: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x354d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_354d2c:
    // 0x354d2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x354d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x354d30: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x354d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x354d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354D34u;
    {
        const bool branch_taken_0x354d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D34u;
        // 0x354d38: 0x8e3400e4  lw          $s4, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d34) {
            ctx->pc = 0x354D44u;
            goto label_354d44;
        }
    }
    ctx->pc = 0x354D3Cu;
    // 0x354d3c: 0xc0d4426  jal         func_351098
    ctx->pc = 0x354D3Cu;
    SET_GPR_U32(ctx, 31, 0x354D44u);
    ctx->pc = 0x354D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354D3Cu;
    // 0x354d40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351098u, 0x354D3Cu, 0x354D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D44u;
label_354d44:
    // 0x354d44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x354d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x354d48: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x354d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x354d4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x354d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d50: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x354d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354d54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x354d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x354d58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354D58u;
    {
        const bool branch_taken_0x354d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D58u;
        // 0x354d5c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d58) {
            ctx->pc = 0x354D78u;
            goto label_354d78;
        }
    }
    ctx->pc = 0x354D60u;
    // 0x354d60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x354d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354d68: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D68u;
    {
        const bool branch_taken_0x354d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x354D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D68u;
        // 0x354d6c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d68) {
            ctx->pc = 0x354D7Cu;
            goto label_354d7c;
        }
    }
    ctx->pc = 0x354D70u;
    // 0x354d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354D70u;
    {
        const bool branch_taken_0x354d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D70u;
        // 0x354d74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d70) {
            ctx->pc = 0x354D84u;
            goto label_354d84;
        }
    }
    ctx->pc = 0x354D78u;
label_354d78:
    // 0x354d78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x354d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_354d7c:
    // 0x354d7c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x354D7Cu;
    SET_GPR_U32(ctx, 31, 0x354D84u);
    ctx->pc = 0x354D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354D7Cu;
    // 0x354d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x354D7Cu, 0x354D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D84u;
label_354d84:
    // 0x354d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354d88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x354d8c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x354D8Cu;
    {
        const bool branch_taken_0x354d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354d8c) {
            ctx->pc = 0x354DC8u;
            goto label_354dc8;
        }
    }
    ctx->pc = 0x354D94u;
    // 0x354d94: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x354d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x354d98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x354d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x354d9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x354d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x354da0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x354da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x354da4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x354da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x354da8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x354da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x354dac: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x354dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x354db0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x354db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x354db4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x354db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x354db8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x354db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x354dbc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x354dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x354dc0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x354DC0u;
    {
        const bool branch_taken_0x354dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DC0u;
        // 0x354dc4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354dc0) {
            ctx->pc = 0x354E6Cu;
            goto label_354e6c;
        }
    }
    ctx->pc = 0x354DC8u;
label_354dc8:
    // 0x354dc8: 0xc10a450  jal         func_429140
    ctx->pc = 0x354DC8u;
    SET_GPR_U32(ctx, 31, 0x354DD0u);
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x354DC8u, 0x354DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DD0u;
label_354dd0:
    // 0x354dd0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x354dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354dd4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x354dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x354dd8: 0x2834818  mult        $t1, $s4, $v1
    ctx->pc = 0x354dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x354ddc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x354ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x354de0: 0x32664004  andi        $a2, $s3, 0x4004
    ctx->pc = 0x354de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16388);
    // 0x354de4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x354de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x354de8: 0x32652002  andi        $a1, $s3, 0x2002
    ctx->pc = 0x354de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8194);
    // 0x354dec: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x354df0: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x354df0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x354df4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x354df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x354df8: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x354df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x354dfc: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x354dfcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x354e00: 0x8c670140  lw          $a3, 0x140($v1)
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x354e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x354e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354e08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x354e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x354e0c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x354e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x354e10: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x354e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x354e14: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x354e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x354e18: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x354e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x354e1c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354E1Cu;
    {
        const bool branch_taken_0x354e1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E1Cu;
        // 0x354e20: 0xae080014  sw          $t0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e1c) {
            ctx->pc = 0x354E38u;
            goto label_354e38;
        }
    }
    ctx->pc = 0x354E24u;
    // 0x354e24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e28: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x354e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x354e2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x354e30: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x354e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x354e34: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x354e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_354e38:
    // 0x354e38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x354e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x354e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354E3Cu;
    {
        const bool branch_taken_0x354e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E3Cu;
        // 0x354e40: 0x2291821  addu        $v1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e3c) {
            ctx->pc = 0x354E50u;
            goto label_354e50;
        }
    }
    ctx->pc = 0x354E44u;
    // 0x354e44: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x354e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x354e48: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x354e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x354e4c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x354e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_354e50:
    // 0x354e50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x354e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x354e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354E54u;
    {
        const bool branch_taken_0x354e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E54u;
        // 0x354e58: 0x2291021  addu        $v0, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e54) {
            ctx->pc = 0x354E6Cu;
            goto label_354e6c;
        }
    }
    ctx->pc = 0x354E5Cu;
    // 0x354e5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x354e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x354e60: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x354e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x354e64: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x354e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x354e68: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x354e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_354e6c:
    // 0x354e6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x354e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354e70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x354e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x354e74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x354e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354e78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354e7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x354e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354e80: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x354e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354e88: 0x3e00008  jr          $ra
    ctx->pc = 0x354E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E88u;
        // 0x354e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354E90u;
}
