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

// Function: sub_002963A0
// Address: 0x2963a0 - 0x2963e0
void sub_002963A0_0x2963a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963A0_0x2963a0");
#endif

    switch (ctx->pc) {
        case 0x2963b8u: goto label_2963b8;
        case 0x2963c8u: goto label_2963c8;
        default: break;
    }

    ctx->pc = 0x2963a0u;

    // 0x2963a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2963a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2963a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2963a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2963a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2963a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2963ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2963acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2963b0: 0xc056254  jal         func_158950
    ctx->pc = 0x2963B0u;
    SET_GPR_U32(ctx, 31, 0x2963B8u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x2963B0u, 0x2963B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963B8u;
label_2963b8:
    // 0x2963b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2963bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2963bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2963c0: 0xc0a5278  jal         func_2949E0
    ctx->pc = 0x2963C0u;
    SET_GPR_U32(ctx, 31, 0x2963C8u);
    ctx->pc = 0x2949E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949E0u, 0x2963C0u, 0x2963C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963C8u;
label_2963c8:
    // 0x2963c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2963c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2963cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2963ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2963d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2963d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2963d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2963D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2963DCu;
    // 0x2963dc: 0x0  nop
    ctx->pc = 0x2963dcu;
    // NOP
    ctx->pc = 0x2963e0u;
}
