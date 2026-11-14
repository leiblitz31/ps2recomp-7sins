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

// Function: sub_002884B0
// Address: 0x2884b0 - 0x288500
void sub_002884B0_0x2884b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002884B0_0x2884b0");
#endif

    switch (ctx->pc) {
        case 0x2884d4u: goto label_2884d4;
        default: break;
    }

    ctx->pc = 0x2884b0u;

    // 0x2884b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2884b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2884b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2884b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2884b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2884b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2884bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2884bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2884c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2884c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2884c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2884c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2884c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2884cc: 0xc0a210c  jal         func_288430
    ctx->pc = 0x2884CCu;
    SET_GPR_U32(ctx, 31, 0x2884D4u);
    ctx->pc = 0x288430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288430u, 0x2884CCu, 0x2884D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884D4u;
label_2884d4:
    // 0x2884d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2884d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2884d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2884d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2884dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2884dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884e0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x2884e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2884e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2884e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2884ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2884ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2884f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2884F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884F8u;
    // 0x2884f8: 0x0  nop
    ctx->pc = 0x2884f8u;
    // NOP
    // 0x2884fc: 0x0  nop
    ctx->pc = 0x2884fcu;
    // NOP
    ctx->pc = 0x288500u;
}
