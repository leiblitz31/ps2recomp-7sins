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

// Function: sub_0022BB90
// Address: 0x22bb90 - 0x22bbe0
void sub_0022BB90_0x22bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB90_0x22bb90");
#endif

    switch (ctx->pc) {
        case 0x22bbb0u: goto label_22bbb0;
        default: break;
    }

    ctx->pc = 0x22bb90u;

    // 0x22bb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bb9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22bba0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bba4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bba8: 0xc042844  jal         func_10A110
    ctx->pc = 0x22BBA8u;
    SET_GPR_U32(ctx, 31, 0x22BBB0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x22BBA8u, 0x22BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBB0u;
label_22bbb0:
    // 0x22bbb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bbb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22bbb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bbbc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x22bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x22bbc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bbc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BBD4u;
    // 0x22bbd4: 0x0  nop
    ctx->pc = 0x22bbd4u;
    // NOP
    // 0x22bbd8: 0x0  nop
    ctx->pc = 0x22bbd8u;
    // NOP
    // 0x22bbdc: 0x0  nop
    ctx->pc = 0x22bbdcu;
    // NOP
    ctx->pc = 0x22bbe0u;
}
