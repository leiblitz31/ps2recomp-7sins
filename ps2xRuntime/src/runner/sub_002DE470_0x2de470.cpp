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

// Function: sub_002DE470
// Address: 0x2de470 - 0x2de4c0
void sub_002DE470_0x2de470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE470_0x2de470");
#endif

    switch (ctx->pc) {
        case 0x2de494u: goto label_2de494;
        default: break;
    }

    ctx->pc = 0x2de470u;

    // 0x2de470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de47c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de480: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2de480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2de484: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2de484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de488: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2de488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de48c: 0xc0b7930  jal         func_2DE4C0
    ctx->pc = 0x2DE48Cu;
    SET_GPR_U32(ctx, 31, 0x2DE494u);
    ctx->pc = 0x2DE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE4C0u, 0x2DE48Cu, 0x2DE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE494u;
label_2de494:
    // 0x2de494: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2de494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de498: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de49c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2de49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2de4a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de4a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2de4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE4B4u;
    // 0x2de4b4: 0x0  nop
    ctx->pc = 0x2de4b4u;
    // NOP
    // 0x2de4b8: 0x0  nop
    ctx->pc = 0x2de4b8u;
    // NOP
    // 0x2de4bc: 0x0  nop
    ctx->pc = 0x2de4bcu;
    // NOP
    ctx->pc = 0x2de4c0u;
}
