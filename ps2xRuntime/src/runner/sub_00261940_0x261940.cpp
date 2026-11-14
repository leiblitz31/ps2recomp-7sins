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

// Function: sub_00261940
// Address: 0x261940 - 0x261990
void sub_00261940_0x261940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261940_0x261940");
#endif

    switch (ctx->pc) {
        case 0x261960u: goto label_261960;
        case 0x261978u: goto label_261978;
        default: break;
    }

    ctx->pc = 0x261940u;

    // 0x261940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x261940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x261944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261948: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x261948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26194c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x261950: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x261950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x261954: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x261958: 0xc09868c  jal         func_261A30
    ctx->pc = 0x261958u;
    SET_GPR_U32(ctx, 31, 0x261960u);
    ctx->pc = 0x261A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A30u, 0x261958u, 0x261960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261960u;
label_261960:
    // 0x261960: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261964: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x261964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261968: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26196c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x261970: 0xc098664  jal         func_261990
    ctx->pc = 0x261970u;
    SET_GPR_U32(ctx, 31, 0x261978u);
    ctx->pc = 0x261990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261990u, 0x261970u, 0x261978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26197c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26197cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x261980: 0x3e00008  jr          $ra
    ctx->pc = 0x261980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261988u;
    // 0x261988: 0x0  nop
    ctx->pc = 0x261988u;
    // NOP
    // 0x26198c: 0x0  nop
    ctx->pc = 0x26198cu;
    // NOP
    ctx->pc = 0x261990u;
}
