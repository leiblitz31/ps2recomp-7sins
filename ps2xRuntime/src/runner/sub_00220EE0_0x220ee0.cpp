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

// Function: sub_00220EE0
// Address: 0x220ee0 - 0x220f20
void sub_00220EE0_0x220ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220EE0_0x220ee0");
#endif

    switch (ctx->pc) {
        case 0x220ef8u: goto label_220ef8;
        case 0x220f08u: goto label_220f08;
        default: break;
    }

    ctx->pc = 0x220ee0u;

    // 0x220ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220ee8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x220ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x220eec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x220eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220ef0: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x220EF0u;
    SET_GPR_U32(ctx, 31, 0x220EF8u);
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x220EF0u, 0x220EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EF8u;
label_220ef8:
    // 0x220ef8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x220ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x220efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x220efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f00: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220F00u;
    SET_GPR_U32(ctx, 31, 0x220F08u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220F00u, 0x220F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F08u;
label_220f08:
    // 0x220f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x220f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x220f10: 0x3e00008  jr          $ra
    ctx->pc = 0x220F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220F18u;
    // 0x220f18: 0x0  nop
    ctx->pc = 0x220f18u;
    // NOP
    // 0x220f1c: 0x0  nop
    ctx->pc = 0x220f1cu;
    // NOP
    ctx->pc = 0x220f20u;
}
