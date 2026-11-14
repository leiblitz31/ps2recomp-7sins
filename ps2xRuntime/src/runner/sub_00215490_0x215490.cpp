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

// Function: sub_00215490
// Address: 0x215490 - 0x2154c0
void sub_00215490_0x215490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215490_0x215490");
#endif

    ctx->pc = 0x215490u;

    // 0x215490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215494: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x215494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x215498: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x215498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21549c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2154a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2154a4: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x2154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x2154a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2154ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2154ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2154ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2154B4u;
    // 0x2154b4: 0x0  nop
    ctx->pc = 0x2154b4u;
    // NOP
    // 0x2154b8: 0x0  nop
    ctx->pc = 0x2154b8u;
    // NOP
    // 0x2154bc: 0x0  nop
    ctx->pc = 0x2154bcu;
    // NOP
    ctx->pc = 0x2154c0u;
}
