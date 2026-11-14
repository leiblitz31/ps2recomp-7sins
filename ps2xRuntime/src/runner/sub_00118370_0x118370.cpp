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

// Function: sub_00118370
// Address: 0x118370 - 0x1183b0
void sub_00118370_0x118370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118370_0x118370");
#endif

    ctx->pc = 0x118370u;

    // 0x118370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118374: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x118374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x118378: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x118378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11837c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118380: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118384: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x118388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11838c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118390: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x118390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118398: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x118398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x11839c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1183a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1183a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1183A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1183A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1183ACu;
    // 0x1183ac: 0x0  nop
    ctx->pc = 0x1183acu;
    // NOP
    ctx->pc = 0x1183b0u;
}
