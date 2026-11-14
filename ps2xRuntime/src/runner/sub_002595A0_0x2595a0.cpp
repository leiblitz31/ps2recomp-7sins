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

// Function: sub_002595A0
// Address: 0x2595a0 - 0x2595f0
void sub_002595A0_0x2595a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002595A0_0x2595a0");
#endif

    switch (ctx->pc) {
        case 0x2595d8u: goto label_2595d8;
        default: break;
    }

    ctx->pc = 0x2595a0u;

    // 0x2595a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2595a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2595a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2595a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2595a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2595a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2595ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2595acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2595b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2595b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2595b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2595b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2595b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2595bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2595bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2595c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2595c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2595c4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2595c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2595c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2595c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2595cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2595ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595d0: 0xc09657c  jal         func_2595F0
    ctx->pc = 0x2595D0u;
    SET_GPR_U32(ctx, 31, 0x2595D8u);
    ctx->pc = 0x2595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2595F0u, 0x2595D0u, 0x2595D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595D8u;
label_2595d8:
    // 0x2595d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2595d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2595dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2595dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2595e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2595e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2595e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2595E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2595E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2595ECu;
    // 0x2595ec: 0x0  nop
    ctx->pc = 0x2595ecu;
    // NOP
    ctx->pc = 0x2595f0u;
}
