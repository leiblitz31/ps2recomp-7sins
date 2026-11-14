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

// Function: sub_002C38B0
// Address: 0x2c38b0 - 0x2c38f0
void sub_002C38B0_0x2c38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C38B0_0x2c38b0");
#endif

    switch (ctx->pc) {
        case 0x2c38dcu: goto label_2c38dc;
        default: break;
    }

    ctx->pc = 0x2c38b0u;

    // 0x2c38b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c38b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c38b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c38bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c38c4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2c38c8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c38cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c38d4: 0xc058cd0  jal         func_163340
    ctx->pc = 0x2C38D4u;
    SET_GPR_U32(ctx, 31, 0x2C38DCu);
    ctx->pc = 0x163340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163340u, 0x2C38D4u, 0x2C38DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38DCu;
label_2c38dc:
    // 0x2c38dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c38dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c38e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38ECu;
    // 0x2c38ec: 0x0  nop
    ctx->pc = 0x2c38ecu;
    // NOP
    ctx->pc = 0x2c38f0u;
}
