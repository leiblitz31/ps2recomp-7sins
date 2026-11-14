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

// Function: sub_00177BB0
// Address: 0x177bb0 - 0x177c60
void sub_00177BB0_0x177bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177BB0_0x177bb0");
#endif

    switch (ctx->pc) {
        case 0x177bdcu: goto label_177bdc;
        case 0x177becu: goto label_177bec;
        case 0x177bfcu: goto label_177bfc;
        case 0x177c10u: goto label_177c10;
        case 0x177c20u: goto label_177c20;
        case 0x177c38u: goto label_177c38;
        default: break;
    }

    ctx->pc = 0x177bb0u;

    // 0x177bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x177bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177bc0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x177bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x177bc4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x177bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x177bc8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x177bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x177bcc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177bd0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x177bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177bd4: 0xc119438  jal         func_4650E0
    ctx->pc = 0x177BD4u;
    SET_GPR_U32(ctx, 31, 0x177BDCu);
    ctx->pc = 0x4650E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4650E0u, 0x177BD4u, 0x177BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BDCu;
label_177bdc:
    // 0x177bdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177be0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177be4: 0xc05dfc8  jal         func_177F20
    ctx->pc = 0x177BE4u;
    SET_GPR_U32(ctx, 31, 0x177BECu);
    ctx->pc = 0x177F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F20u, 0x177BE4u, 0x177BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BECu;
label_177bec:
    // 0x177bec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bf4: 0xc05df18  jal         func_177C60
    ctx->pc = 0x177BF4u;
    SET_GPR_U32(ctx, 31, 0x177BFCu);
    ctx->pc = 0x177C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C60u, 0x177BF4u, 0x177BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BFCu;
label_177bfc:
    // 0x177bfc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x177bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177c00: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x177c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x177c04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x177C08u;
    {
        const bool branch_taken_0x177c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c08) {
            ctx->pc = 0x177C3Cu;
            goto label_177c3c;
        }
    }
    ctx->pc = 0x177C10u;
label_177c10:
    // 0x177c10: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c18: 0xc05ded4  jal         func_177B50
    ctx->pc = 0x177C18u;
    SET_GPR_U32(ctx, 31, 0x177C20u);
    ctx->pc = 0x177B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B50u, 0x177C18u, 0x177C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C20u;
label_177c20:
    // 0x177c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c24: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x177c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177c28: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x177c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x177c2c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x177c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x177c30: 0xc05650c  jal         func_159430
    ctx->pc = 0x177C30u;
    SET_GPR_U32(ctx, 31, 0x177C38u);
    ctx->pc = 0x159430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159430u, 0x177C30u, 0x177C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C38u;
label_177c38:
    // 0x177c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_177c3c:
    // 0x177c3c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x177c3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x177c40: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x177C40u;
    {
        const bool branch_taken_0x177c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177c40) {
            ctx->pc = 0x177C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177c10;
        }
    }
    ctx->pc = 0x177C48u;
    // 0x177c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x177c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177c54: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x177c58: 0x3e00008  jr          $ra
    ctx->pc = 0x177C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C60u;
}
