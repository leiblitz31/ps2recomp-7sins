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

// Function: sub_00114260
// Address: 0x114260 - 0x1142c0
void sub_00114260_0x114260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114260_0x114260");
#endif

    switch (ctx->pc) {
        case 0x114288u: goto label_114288;
        case 0x1142a0u: goto label_1142a0;
        default: break;
    }

    ctx->pc = 0x114260u;

    // 0x114260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x114264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114268: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x114268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11426c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x114270: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x114270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x114274: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x114274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x114278: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x114278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x11427c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x11427cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114280: 0xc0450c0  jal         func_114300
    ctx->pc = 0x114280u;
    SET_GPR_U32(ctx, 31, 0x114288u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x114280u, 0x114288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114288u;
label_114288:
    // 0x114288: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x114288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11428c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x11428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114290: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x114290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114294: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x114294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114298: 0xc045c00  jal         func_117000
    ctx->pc = 0x114298u;
    SET_GPR_U32(ctx, 31, 0x1142A0u);
    ctx->pc = 0x117000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117000u, 0x114298u, 0x1142A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142A0u;
label_1142a0:
    // 0x1142a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1142a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1142a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1142a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1142a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1142a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1142ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1142ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1142B4u;
    // 0x1142b4: 0x0  nop
    ctx->pc = 0x1142b4u;
    // NOP
    // 0x1142b8: 0x0  nop
    ctx->pc = 0x1142b8u;
    // NOP
    // 0x1142bc: 0x0  nop
    ctx->pc = 0x1142bcu;
    // NOP
    ctx->pc = 0x1142c0u;
}
