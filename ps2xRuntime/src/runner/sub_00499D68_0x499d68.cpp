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

// Function: sub_00499D68
// Address: 0x499d68 - 0x499e78
void sub_00499D68_0x499d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499D68_0x499d68");
#endif

    switch (ctx->pc) {
        case 0x499dd0u: goto label_499dd0;
        case 0x499e04u: goto label_499e04;
        case 0x499e14u: goto label_499e14;
        case 0x499e20u: goto label_499e20;
        default: break;
    }

    ctx->pc = 0x499d68u;

    // 0x499d68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x499d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x499d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499d70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x499d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x499d74: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x499d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x499d78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x499d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d7c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x499d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x499d80: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x499d80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d84: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x499d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x499d88: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x499d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x499d8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x499d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x499d90: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x499d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x499d94: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x499d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x499d98: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x499d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x499d9c: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x499D9Cu;
    {
        const bool branch_taken_0x499d9c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x499DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D9Cu;
        // 0x499da0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d9c) {
            ctx->pc = 0x499DB0u;
            goto label_499db0;
        }
    }
    ctx->pc = 0x499DA4u;
    // 0x499da4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x499da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499da8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x499DA8u;
    {
        const bool branch_taken_0x499da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499DA8u;
        // 0x499dac: 0x9455000c  lhu         $s5, 0xC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499da8) {
            ctx->pc = 0x499DB8u;
            goto label_499db8;
        }
    }
    ctx->pc = 0x499DB0u;
label_499db0:
    // 0x499db0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x499db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499db4: 0x9455000e  lhu         $s5, 0xE($v0)
    ctx->pc = 0x499db4u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_499db8:
    // 0x499db8: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x499DB8u;
    {
        const bool branch_taken_0x499db8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x499DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499DB8u;
        // 0x499dbc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499db8) {
            ctx->pc = 0x499E40u;
            goto label_499e40;
        }
    }
    ctx->pc = 0x499DC0u;
    // 0x499dc0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x499dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499dc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x499dc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499dc8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x499dc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499dcc: 0x0  nop
    ctx->pc = 0x499dccu;
    // NOP
label_499dd0:
    // 0x499dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499dd4: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x499DD4u;
    {
        const bool branch_taken_0x499dd4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x499DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499DD4u;
        // 0x499dd8: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499dd4) {
            ctx->pc = 0x499DE8u;
            goto label_499de8;
        }
    }
    ctx->pc = 0x499DDCu;
    // 0x499ddc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x499ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x499de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x499DE0u;
    {
        const bool branch_taken_0x499de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499DE0u;
        // 0x499de4: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499de0) {
            ctx->pc = 0x499DF0u;
            goto label_499df0;
        }
    }
    ctx->pc = 0x499DE8u;
label_499de8:
    // 0x499de8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x499de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x499dec: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x499decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_499df0:
    // 0x499df0: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x499df0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x499df4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x499df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x499df8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x499df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499dfc: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x499DFCu;
    SET_GPR_U32(ctx, 31, 0x499E04u);
    ctx->pc = 0x499E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499DFCu;
    // 0x499e00: 0x24452018  addiu       $a1, $v0, 0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x499DFCu, 0x499E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499E04u;
label_499e04:
    // 0x499e04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x499E04u;
    {
        const bool branch_taken_0x499e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E04u;
        // 0x499e08: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499e04) {
            ctx->pc = 0x499E24u;
            goto label_499e24;
        }
    }
    ctx->pc = 0x499E0Cu;
    // 0x499e0c: 0xc127d08  jal         func_49F420
    ctx->pc = 0x499E0Cu;
    SET_GPR_U32(ctx, 31, 0x499E14u);
    ctx->pc = 0x499E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499E0Cu;
    // 0x499e10: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x499E0Cu, 0x499E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499E14u;
label_499e14:
    // 0x499e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x499e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e18: 0xc127b5a  jal         func_49ED68
    ctx->pc = 0x499E18u;
    SET_GPR_U32(ctx, 31, 0x499E20u);
    ctx->pc = 0x499E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499E18u;
    // 0x499e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ED68u, 0x499E18u, 0x499E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499E20u;
label_499e20:
    // 0x499e20: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x499e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_499e24:
    // 0x499e24: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x499e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x499e28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x499e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x499e2c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x499e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x499e30: 0x26f70018  addiu       $s7, $s7, 0x18
    ctx->pc = 0x499e30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x499e34: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x499e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x499e38: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x499E38u;
    {
        const bool branch_taken_0x499e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E38u;
        // 0x499e3c: 0x26d60018  addiu       $s6, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499e38) {
            ctx->pc = 0x499DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499dd0;
        }
    }
    ctx->pc = 0x499E40u;
label_499e40:
    // 0x499e40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x499e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x499e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499e48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x499e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x499e4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x499e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499e50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x499e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499e54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x499e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499e58: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x499e58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499e5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x499e5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499e60: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x499e60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499e64: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x499e64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x499E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E6Cu;
        // 0x499e70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499E74u;
    // 0x499e74: 0x0  nop
    ctx->pc = 0x499e74u;
    // NOP
    ctx->pc = 0x499e78u;
}
