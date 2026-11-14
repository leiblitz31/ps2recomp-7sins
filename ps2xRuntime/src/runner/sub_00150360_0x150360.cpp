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

// Function: sub_00150360
// Address: 0x150360 - 0x1503c0
void sub_00150360_0x150360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150360_0x150360");
#endif

    ctx->pc = 0x150360u;

    // 0x150360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x150364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x150368: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x150368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15036c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150370: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150374: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150378: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x150378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15037c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150384: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150388: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x150388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x15038c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x150390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150398: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x150398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15039c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1503a0: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1503a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1503a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1503a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1503a8: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x1503a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1503ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1503b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1503b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1503B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1503B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1503BCu;
    // 0x1503bc: 0x0  nop
    ctx->pc = 0x1503bcu;
    // NOP
    ctx->pc = 0x1503c0u;
}
