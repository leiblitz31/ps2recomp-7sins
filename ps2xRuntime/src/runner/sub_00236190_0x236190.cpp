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

// Function: sub_00236190
// Address: 0x236190 - 0x2361c0
void sub_00236190_0x236190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236190_0x236190");
#endif

    switch (ctx->pc) {
        case 0x2361acu: goto label_2361ac;
        default: break;
    }

    ctx->pc = 0x236190u;

    // 0x236190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23619c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2361a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2361a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2361a4: 0xc08d870  jal         func_2361C0
    ctx->pc = 0x2361A4u;
    SET_GPR_U32(ctx, 31, 0x2361ACu);
    ctx->pc = 0x2361C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2361C0u, 0x2361A4u, 0x2361ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361ACu;
label_2361ac:
    // 0x2361ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2361acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2361b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2361b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2361b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2361B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2361B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2361BCu;
    // 0x2361bc: 0x0  nop
    ctx->pc = 0x2361bcu;
    // NOP
    ctx->pc = 0x2361c0u;
}
