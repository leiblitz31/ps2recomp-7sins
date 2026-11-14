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

// Function: sub_002D0090
// Address: 0x2d0090 - 0x2d00f0
void sub_002D0090_0x2d0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0090_0x2d0090");
#endif

    switch (ctx->pc) {
        case 0x2d00a8u: goto label_2d00a8;
        case 0x2d00c8u: goto label_2d00c8;
        case 0x2d00d8u: goto label_2d00d8;
        default: break;
    }

    ctx->pc = 0x2d0090u;

    // 0x2d0090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d009c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00a0: 0xc04f5e8  jal         func_13D7A0
    ctx->pc = 0x2D00A0u;
    SET_GPR_U32(ctx, 31, 0x2D00A8u);
    ctx->pc = 0x13D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D7A0u, 0x2D00A0u, 0x2D00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00A8u;
label_2d00a8:
    // 0x2d00a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d00ac: 0x24636820  addiu       $v1, $v1, 0x6820
    ctx->pc = 0x2d00acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26656));
    // 0x2d00b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d00b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00bc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d00c0: 0xc0b41a4  jal         func_2D0690
    ctx->pc = 0x2D00C0u;
    SET_GPR_U32(ctx, 31, 0x2D00C8u);
    ctx->pc = 0x2D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0690u, 0x2D00C0u, 0x2D00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00C8u;
label_2d00c8:
    // 0x2d00c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00cc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d00d0: 0xc0b414c  jal         func_2D0530
    ctx->pc = 0x2D00D0u;
    SET_GPR_U32(ctx, 31, 0x2D00D8u);
    ctx->pc = 0x2D0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0530u, 0x2D00D0u, 0x2D00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00D8u;
label_2d00d8:
    // 0x2d00d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d00dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d00e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d00e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D00E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D00ECu;
    // 0x2d00ec: 0x0  nop
    ctx->pc = 0x2d00ecu;
    // NOP
    ctx->pc = 0x2d00f0u;
}
