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

// Function: sub_0048E010
// Address: 0x48e010 - 0x48e0b0
void sub_0048E010_0x48e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E010_0x48e010");
#endif

    switch (ctx->pc) {
        case 0x48e038u: goto label_48e038;
        case 0x48e050u: goto label_48e050;
        case 0x48e068u: goto label_48e068;
        case 0x48e084u: goto label_48e084;
        default: break;
    }

    ctx->pc = 0x48e010u;

    // 0x48e010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48e014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48e018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48e01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48e020: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x48e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x48e024: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x48e024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x48e028: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48e028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e02c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48e030: 0xc123ed0  jal         func_48FB40
    ctx->pc = 0x48E030u;
    SET_GPR_U32(ctx, 31, 0x48E038u);
    ctx->pc = 0x48FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FB40u, 0x48E030u, 0x48E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E038u;
label_48e038:
    // 0x48e038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48e038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e03c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e040: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48e044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e048: 0xc04f260  jal         func_13C980
    ctx->pc = 0x48E048u;
    SET_GPR_U32(ctx, 31, 0x48E050u);
    ctx->pc = 0x13C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C980u, 0x48E048u, 0x48E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E050u;
label_48e050:
    // 0x48e050: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x48e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x48e054: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x48e054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x48e058: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e05c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e060: 0xc04e0d0  jal         func_138340
    ctx->pc = 0x48E060u;
    SET_GPR_U32(ctx, 31, 0x48E068u);
    ctx->pc = 0x138340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138340u, 0x48E060u, 0x48E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E068u;
label_48e068:
    // 0x48e068: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e06c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x48e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48e070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48e070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e074: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48e074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e078: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x48e078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e07c: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x48E07Cu;
    SET_GPR_U32(ctx, 31, 0x48E084u);
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x48E07Cu, 0x48E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E084u;
label_48e084:
    // 0x48e084: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e088: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x48e088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x48e08c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48e08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e098: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E0A4u;
    // 0x48e0a4: 0x0  nop
    ctx->pc = 0x48e0a4u;
    // NOP
    // 0x48e0a8: 0x0  nop
    ctx->pc = 0x48e0a8u;
    // NOP
    // 0x48e0ac: 0x0  nop
    ctx->pc = 0x48e0acu;
    // NOP
    ctx->pc = 0x48e0b0u;
}
