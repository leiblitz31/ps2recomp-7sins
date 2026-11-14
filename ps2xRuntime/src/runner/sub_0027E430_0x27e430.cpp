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

// Function: sub_0027E430
// Address: 0x27e430 - 0x27e480
void sub_0027E430_0x27e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E430_0x27e430");
#endif

    switch (ctx->pc) {
        case 0x27e454u: goto label_27e454;
        default: break;
    }

    ctx->pc = 0x27e430u;

    // 0x27e430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e43c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27e440: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x27e440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x27e444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e448: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27e448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e44c: 0xc09f8ec  jal         func_27E3B0
    ctx->pc = 0x27E44Cu;
    SET_GPR_U32(ctx, 31, 0x27E454u);
    ctx->pc = 0x27E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E3B0u, 0x27E44Cu, 0x27E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E454u;
label_27e454:
    // 0x27e454: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e458: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27e458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e460: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x27e460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e464: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e46c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e470: 0x3e00008  jr          $ra
    ctx->pc = 0x27E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E478u;
    // 0x27e478: 0x0  nop
    ctx->pc = 0x27e478u;
    // NOP
    // 0x27e47c: 0x0  nop
    ctx->pc = 0x27e47cu;
    // NOP
    ctx->pc = 0x27e480u;
}
