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

// Function: sub_00216480
// Address: 0x216480 - 0x2164c0
void sub_00216480_0x216480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216480_0x216480");
#endif

    switch (ctx->pc) {
        case 0x2164a4u: goto label_2164a4;
        default: break;
    }

    ctx->pc = 0x216480u;

    // 0x216480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21648c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216490: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x216490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216498: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x216498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21649c: 0xc08eab8  jal         func_23AAE0
    ctx->pc = 0x21649Cu;
    SET_GPR_U32(ctx, 31, 0x2164A4u);
    ctx->pc = 0x23AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AAE0u, 0x21649Cu, 0x2164A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164A4u;
label_2164a4:
    // 0x2164a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2164a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2164ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2164acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2164b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2164B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2164B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2164B8u;
    // 0x2164b8: 0x0  nop
    ctx->pc = 0x2164b8u;
    // NOP
    // 0x2164bc: 0x0  nop
    ctx->pc = 0x2164bcu;
    // NOP
    ctx->pc = 0x2164c0u;
}
