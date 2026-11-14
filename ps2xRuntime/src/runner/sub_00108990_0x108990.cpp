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

// Function: sub_00108990
// Address: 0x108990 - 0x1089e0
void sub_00108990_0x108990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108990_0x108990");
#endif

    switch (ctx->pc) {
        case 0x1089b4u: goto label_1089b4;
        default: break;
    }

    ctx->pc = 0x108990u;

    // 0x108990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10899c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1089a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1089a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1089a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1089a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1089a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1089ac: 0xc042278  jal         func_1089E0
    ctx->pc = 0x1089ACu;
    SET_GPR_U32(ctx, 31, 0x1089B4u);
    ctx->pc = 0x1089E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089E0u, 0x1089ACu, 0x1089B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089B4u;
label_1089b4:
    // 0x1089b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1089b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1089bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1089c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1089c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1089c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1089c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1089cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1089CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089D4u;
    // 0x1089d4: 0x0  nop
    ctx->pc = 0x1089d4u;
    // NOP
    // 0x1089d8: 0x0  nop
    ctx->pc = 0x1089d8u;
    // NOP
    // 0x1089dc: 0x0  nop
    ctx->pc = 0x1089dcu;
    // NOP
    ctx->pc = 0x1089e0u;
}
