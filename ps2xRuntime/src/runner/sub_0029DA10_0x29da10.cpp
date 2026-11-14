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

// Function: sub_0029DA10
// Address: 0x29da10 - 0x29db60
void sub_0029DA10_0x29da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DA10_0x29da10");
#endif

    switch (ctx->pc) {
        case 0x29da5cu: goto label_29da5c;
        case 0x29da78u: goto label_29da78;
        case 0x29dabcu: goto label_29dabc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29db18u: goto label_29db18;
        case 0x29db34u: goto label_29db34;
        default: break;
    }

    ctx->pc = 0x29da10u;

    // 0x29da10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29da14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29da18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29da1c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x29da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x29da20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29da24: 0x3e00008  jr          $ra
    ctx->pc = 0x29DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DA2Cu;
    // 0x29da2c: 0x0  nop
    ctx->pc = 0x29da2cu;
    // NOP
    // 0x29da30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29da34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29da38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29da3c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x29da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x29da40: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x29da40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x29da44: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x29da44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x29da48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29da4c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29da50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29da54: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29DA54u;
    SET_GPR_U32(ctx, 31, 0x29DA5Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29DA54u, 0x29DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA5Cu;
label_29da5c:
    // 0x29da5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29da5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da60: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29DA60u;
    {
        const bool branch_taken_0x29da60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da60) {
            ctx->pc = 0x29DAD8u;
            goto label_29dad8;
        }
    }
    ctx->pc = 0x29DA68u;
    // 0x29da68: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29da68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x29da6c: 0x24c6d8d0  addiu       $a2, $a2, -0x2730
    ctx->pc = 0x29da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957264));
    // 0x29da70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29da74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29da78:
    // 0x29da78: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x29da78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29da7c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x29da80: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x29da80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x29da84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29da88: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x29da88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29da8c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x29da8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x29da90: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x29da94: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29DA94u;
    {
        const bool branch_taken_0x29da94 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x29da94) {
            ctx->pc = 0x29DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29da78;
        }
    }
    ctx->pc = 0x29DA9Cu;
    // 0x29da9c: 0x83a20050  lb          $v0, 0x50($sp)
    ctx->pc = 0x29da9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29daa0: 0xa3a2002d  sb          $v0, 0x2D($sp)
    ctx->pc = 0x29daa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x29daa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29daa8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29daac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29dab0: 0x2786a388  addiu       $a2, $gp, -0x5C78
    ctx->pc = 0x29dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943624));
    // 0x29dab4: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x29DAB4u;
    SET_GPR_U32(ctx, 31, 0x29DABCu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29DAB4u, 0x29DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DABCu;
label_29dabc:
    // 0x29dabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29dac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dac4: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x29dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dac8: 0xc0a83a8  jal         func_2A0EA0
    ctx->pc = 0x29DAC8u;
    SET_GPR_U32(ctx, 31, 0x29DAD0u);
    ctx->pc = 0x2A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EA0u, 0x29DAC8u, 0x29DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAD0u;
label_29dad0:
    // 0x29dad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DAD0u;
    {
        const bool branch_taken_0x29dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dad0) {
            ctx->pc = 0x29DADCu;
            goto label_29dadc;
        }
    }
    ctx->pc = 0x29DAD8u;
label_29dad8:
    // 0x29dad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dadc:
    // 0x29dadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29dadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dae4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29dae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x29DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DAF0u;
    // 0x29daf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29daf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29daf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29dafc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29db00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29db00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29db04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29db08: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29db0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29db10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29DB10u;
    SET_GPR_U32(ctx, 31, 0x29DB18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29DB10u, 0x29DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB18u;
label_29db18:
    // 0x29db18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29db18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db1c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DB1Cu;
    {
        const bool branch_taken_0x29db1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db1c) {
            ctx->pc = 0x29DB3Cu;
            goto label_29db3c;
        }
    }
    ctx->pc = 0x29DB24u;
    // 0x29db24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29db28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29db2c: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x29DB2Cu;
    SET_GPR_U32(ctx, 31, 0x29DB34u);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x29DB2Cu, 0x29DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB34u;
label_29db34:
    // 0x29db34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DB34u;
    {
        const bool branch_taken_0x29db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db34) {
            ctx->pc = 0x29DB40u;
            goto label_29db40;
        }
    }
    ctx->pc = 0x29DB3Cu;
label_29db3c:
    // 0x29db3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29db40:
    // 0x29db40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29db44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29db44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29db48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29db4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DB54u;
    // 0x29db54: 0x0  nop
    ctx->pc = 0x29db54u;
    // NOP
    // 0x29db58: 0x0  nop
    ctx->pc = 0x29db58u;
    // NOP
    // 0x29db5c: 0x0  nop
    ctx->pc = 0x29db5cu;
    // NOP
    ctx->pc = 0x29db60u;
}
