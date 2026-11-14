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

// Function: sub_00222840
// Address: 0x222840 - 0x2228c0
void sub_00222840_0x222840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222840_0x222840");
#endif

    switch (ctx->pc) {
        case 0x222874u: goto label_222874;
        case 0x222884u: goto label_222884;
        case 0x2228a4u: goto label_2228a4;
        default: break;
    }

    ctx->pc = 0x222840u;

    // 0x222840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22284c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22284cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x222850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222854: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x222854u;
    {
        const bool branch_taken_0x222854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222854) {
            ctx->pc = 0x2228A4u;
            goto label_2228a4;
        }
    }
    ctx->pc = 0x22285Cu;
    // 0x22285c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222864: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x222864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222868: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22286c: 0xc088630  jal         func_2218C0
    ctx->pc = 0x22286Cu;
    SET_GPR_U32(ctx, 31, 0x222874u);
    ctx->pc = 0x2218C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2218C0u, 0x22286Cu, 0x222874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222874u;
label_222874:
    // 0x222874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22287c: 0xc088a30  jal         func_2228C0
    ctx->pc = 0x22287Cu;
    SET_GPR_U32(ctx, 31, 0x222884u);
    ctx->pc = 0x2228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2228C0u, 0x22287Cu, 0x222884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222884u;
label_222884:
    // 0x222884: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22288c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22288cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x222890: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222890u;
    {
        const bool branch_taken_0x222890 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222890) {
            ctx->pc = 0x2228A4u;
            goto label_2228a4;
        }
    }
    ctx->pc = 0x222898u;
    // 0x222898: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22289c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22289Cu;
    SET_GPR_U32(ctx, 31, 0x2228A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22289Cu, 0x2228A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228A4u;
label_2228a4:
    // 0x2228a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2228a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2228a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2228ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2228acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2228b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2228B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2228B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2228B8u;
    // 0x2228b8: 0x0  nop
    ctx->pc = 0x2228b8u;
    // NOP
    // 0x2228bc: 0x0  nop
    ctx->pc = 0x2228bcu;
    // NOP
    ctx->pc = 0x2228c0u;
}
