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

// Function: sub_00141940
// Address: 0x141940 - 0x141980
void sub_00141940_0x141940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141940_0x141940");
#endif

    switch (ctx->pc) {
        case 0x141964u: goto label_141964;
        default: break;
    }

    ctx->pc = 0x141940u;

    // 0x141940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14194c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x141950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141954: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x141954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14195c: 0xc050660  jal         func_141980
    ctx->pc = 0x14195Cu;
    SET_GPR_U32(ctx, 31, 0x141964u);
    ctx->pc = 0x141980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141980u, 0x14195Cu, 0x141964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141964u;
label_141964:
    // 0x141964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141968: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14196c: 0x3e00008  jr          $ra
    ctx->pc = 0x14196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141974u;
    // 0x141974: 0x0  nop
    ctx->pc = 0x141974u;
    // NOP
    // 0x141978: 0x0  nop
    ctx->pc = 0x141978u;
    // NOP
    // 0x14197c: 0x0  nop
    ctx->pc = 0x14197cu;
    // NOP
    ctx->pc = 0x141980u;
}
