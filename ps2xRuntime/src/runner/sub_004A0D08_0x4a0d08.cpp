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

// Function: sub_004A0D08
// Address: 0x4a0d08 - 0x4a0ea0
void sub_004A0D08_0x4a0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0D08_0x4a0d08");
#endif

    switch (ctx->pc) {
        case 0x4a0d3cu: goto label_4a0d3c;
        case 0x4a0d58u: goto label_4a0d58;
        case 0x4a0d64u: goto label_4a0d64;
        case 0x4a0d90u: goto label_4a0d90;
        case 0x4a0df8u: goto label_4a0df8;
        case 0x4a0e04u: goto label_4a0e04;
        case 0x4a0e20u: goto label_4a0e20;
        case 0x4a0e2cu: goto label_4a0e2c;
        case 0x4a0e54u: goto label_4a0e54;
        default: break;
    }

    ctx->pc = 0x4a0d08u;

    // 0x4a0d08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a0d0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a0d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a0d10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a0d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a0d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a0d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0d18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a0d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a0d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0d20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a0d24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a0d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0d28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a0d2c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4a0d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0d34: 0xc12ab46  jal         func_4AAD18
    ctx->pc = 0x4A0D34u;
    SET_GPR_U32(ctx, 31, 0x4A0D3Cu);
    ctx->pc = 0x4A0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0D34u;
    // 0x4a0d38: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAD18u, 0x4A0D34u, 0x4A0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0D3Cu;
label_4a0d3c:
    // 0x4a0d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0D3Cu;
    {
        const bool branch_taken_0x4a0d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D3Cu;
        // 0x4a0d40: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d3c) {
            ctx->pc = 0x4A0D4Cu;
            goto label_4a0d4c;
        }
    }
    ctx->pc = 0x4A0D44u;
    // 0x4a0d44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A0D44u;
    {
        const bool branch_taken_0x4a0d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D44u;
        // 0x4a0d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d44) {
            ctx->pc = 0x4A0D94u;
            goto label_4a0d94;
        }
    }
    ctx->pc = 0x4A0D4Cu;
label_4a0d4c:
    // 0x4a0d4c: 0x2793c1f0  addiu       $s3, $gp, -0x3E10
    ctx->pc = 0x4a0d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0d50: 0x1213000b  beq         $s0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x4A0D50u;
    {
        const bool branch_taken_0x4a0d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D50u;
        // 0x4a0d54: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d50) {
            ctx->pc = 0x4A0D80u;
            goto label_4a0d80;
        }
    }
    ctx->pc = 0x4A0D58u;
label_4a0d58:
    // 0x4a0d58: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x4a0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4a0d5c: 0xc12ab76  jal         func_4AADD8
    ctx->pc = 0x4A0D5Cu;
    SET_GPR_U32(ctx, 31, 0x4A0D64u);
    ctx->pc = 0x4A0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0D5Cu;
    // 0x4a0d60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AADD8u, 0x4A0D5Cu, 0x4A0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0D64u;
label_4a0d64:
    // 0x4a0d64: 0x2611ffe4  addiu       $s1, $s0, -0x1C
    ctx->pc = 0x4a0d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
    // 0x4a0d68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4a0d68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4a0d6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a0d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0d70: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x4a0d70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x4a0d74: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4a0d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0d78: 0x1613fff7  bne         $s0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A0D78u;
    {
        const bool branch_taken_0x4a0d78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x4A0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D78u;
        // 0x4a0d7c: 0x2a3a00b  movn        $s4, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d78) {
            ctx->pc = 0x4A0D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0d58;
        }
    }
    ctx->pc = 0x4A0D80u;
label_4a0d80:
    // 0x4a0d80: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0D80u;
    {
        const bool branch_taken_0x4a0d80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D80u;
        // 0x4a0d84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d80) {
            ctx->pc = 0x4A0D94u;
            goto label_4a0d94;
        }
    }
    ctx->pc = 0x4A0D88u;
    // 0x4a0d88: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A0D88u;
    SET_GPR_U32(ctx, 31, 0x4A0D90u);
    ctx->pc = 0x4A0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0D88u;
    // 0x4a0d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A0D88u, 0x4A0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0D90u;
label_4a0d90:
    // 0x4a0d90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a0d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a0d94:
    // 0x4a0d94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a0d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a0d98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a0d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a0d9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a0d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0da0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0da4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a0da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0da8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a0da8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0db0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DB0u;
        // 0x4a0db4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0DB8u;
    // 0x4a0db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a0db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a0dbc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a0dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4a0dc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4a0dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4a0dc4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a0dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4a0dc8: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x4a0dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0dcc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a0dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4a0dd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a0dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0dd4: 0x8f91c1f0  lw          $s1, -0x3E10($gp)
    ctx->pc = 0x4a0dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0dd8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x4a0dd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0ddc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a0ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4a0de0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a0de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4a0de4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4a0de8: 0x1236001d  beq         $s1, $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A0DE8u;
    {
        const bool branch_taken_0x4a0de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x4A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DE8u;
        // 0x4a0dec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0de8) {
            ctx->pc = 0x4A0E60u;
            goto label_4a0e60;
        }
    }
    ctx->pc = 0x4A0DF0u;
    // 0x4a0df0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a0df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0df4: 0x0  nop
    ctx->pc = 0x4a0df4u;
    // NOP
label_4a0df8:
    // 0x4a0df8: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x4a0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x4a0dfc: 0xc12ab46  jal         func_4AAD18
    ctx->pc = 0x4A0DFCu;
    SET_GPR_U32(ctx, 31, 0x4A0E04u);
    ctx->pc = 0x4A0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0DFCu;
    // 0x4a0e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAD18u, 0x4A0DFCu, 0x4A0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0E04u;
label_4a0e04:
    // 0x4a0e04: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A0E04u;
    {
        const bool branch_taken_0x4a0e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0e04) {
            ctx->pc = 0x4A0E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0E04u;
            // 0x4a0e08: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0E58u;
            goto label_4a0e58;
        }
    }
    ctx->pc = 0x4A0E0Cu;
    // 0x4a0e0c: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a0e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0e10: 0x1215000c  beq         $s0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x4A0E10u;
    {
        const bool branch_taken_0x4a0e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x4a0e10) {
            ctx->pc = 0x4A0E44u;
            goto label_4a0e44;
        }
    }
    ctx->pc = 0x4A0E18u;
    // 0x4a0e18: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a0e18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a0e1c: 0x0  nop
    ctx->pc = 0x4a0e1cu;
    // NOP
label_4a0e20:
    // 0x4a0e20: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x4a0e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4a0e24: 0xc12ab76  jal         func_4AADD8
    ctx->pc = 0x4A0E24u;
    SET_GPR_U32(ctx, 31, 0x4A0E2Cu);
    ctx->pc = 0x4A0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0E24u;
    // 0x4a0e28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AADD8u, 0x4A0E24u, 0x4A0E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0E2Cu;
label_4a0e2c:
    // 0x4a0e2c: 0x2603ffe4  addiu       $v1, $s0, -0x1C
    ctx->pc = 0x4a0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
    // 0x4a0e30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4a0e30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4a0e34: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x4a0e34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x4a0e38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4a0e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0e3c: 0x1615fff8  bne         $s0, $s5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A0E3Cu;
    {
        const bool branch_taken_0x4a0e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x4A0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E3Cu;
        // 0x4a0e40: 0x283980b  movn        $s3, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e3c) {
            ctx->pc = 0x4A0E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0e20;
        }
    }
    ctx->pc = 0x4A0E44u;
label_4a0e44:
    // 0x4a0e44: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0E44u;
    {
        const bool branch_taken_0x4a0e44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0e44) {
            ctx->pc = 0x4A0E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0E44u;
            // 0x4a0e48: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0E58u;
            goto label_4a0e58;
        }
    }
    ctx->pc = 0x4A0E4Cu;
    // 0x4a0e4c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A0E4Cu;
    SET_GPR_U32(ctx, 31, 0x4A0E54u);
    ctx->pc = 0x4A0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0E4Cu;
    // 0x4a0e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A0E4Cu, 0x4A0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0E54u;
label_4a0e54:
    // 0x4a0e54: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x4a0e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0e58:
    // 0x4a0e58: 0x1636ffe7  bne         $s1, $s6, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4A0E58u;
    {
        const bool branch_taken_0x4a0e58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x4A0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E58u;
        // 0x4a0e5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e58) {
            ctx->pc = 0x4A0DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0df8;
        }
    }
    ctx->pc = 0x4A0E60u;
label_4a0e60:
    // 0x4a0e60: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a0e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a0e64: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a0e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a0e68: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a0e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a0e6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a0e6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0e70: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a0e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0e74: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a0e74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0e78: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4a0e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0e80: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E80u;
        // 0x4a0e84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0E88u;
    // 0x4a0e88: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E88u;
        // 0x4a0e8c: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0E90u;
    // 0x4a0e90: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x4a0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E94u;
        // 0x4a0e98: 0xaf84b844  sw          $a0, -0x47BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0E9Cu;
    // 0x4a0e9c: 0x0  nop
    ctx->pc = 0x4a0e9cu;
    // NOP
    ctx->pc = 0x4a0ea0u;
}
