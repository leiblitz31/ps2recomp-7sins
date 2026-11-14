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

// Function: sub_00218790
// Address: 0x218790 - 0x2187d0
void sub_00218790_0x218790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218790_0x218790");
#endif

    switch (ctx->pc) {
        case 0x2187acu: goto label_2187ac;
        default: break;
    }

    ctx->pc = 0x218790u;

    // 0x218790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21879c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2187a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2187a4: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x2187A4u;
    SET_GPR_U32(ctx, 31, 0x2187ACu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x2187A4u, 0x2187ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187ACu;
label_2187ac:
    // 0x2187ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2187acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2187b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2187b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2187b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2187bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2187bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2187c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2187C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2187C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2187C8u;
    // 0x2187c8: 0x0  nop
    ctx->pc = 0x2187c8u;
    // NOP
    // 0x2187cc: 0x0  nop
    ctx->pc = 0x2187ccu;
    // NOP
    ctx->pc = 0x2187d0u;
}
