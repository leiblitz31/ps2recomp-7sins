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

// Function: sub_002346B0
// Address: 0x2346b0 - 0x2346f0
void sub_002346B0_0x2346b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002346B0_0x2346b0");
#endif

    switch (ctx->pc) {
        case 0x2346ccu: goto label_2346cc;
        case 0x2346dcu: goto label_2346dc;
        default: break;
    }

    ctx->pc = 0x2346b0u;

    // 0x2346b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2346b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2346b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2346b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2346b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2346bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2346c4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x2346C4u;
    SET_GPR_U32(ctx, 31, 0x2346CCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2346C4u, 0x2346CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346CCu;
label_2346cc:
    // 0x2346cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346d0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2346d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2346d4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x2346D4u;
    SET_GPR_U32(ctx, 31, 0x2346DCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2346D4u, 0x2346DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346DCu;
label_2346dc:
    // 0x2346dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2346e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2346e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2346e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2346e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2346E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2346E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2346F0u;
}
