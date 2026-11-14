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

// Function: sub_00195540
// Address: 0x195540 - 0x195580
void sub_00195540_0x195540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195540_0x195540");
#endif

    switch (ctx->pc) {
        case 0x195558u: goto label_195558;
        case 0x195568u: goto label_195568;
        default: break;
    }

    ctx->pc = 0x195540u;

    // 0x195540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195548: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x195548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19554c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x195550: 0xc0655a0  jal         func_195680
    ctx->pc = 0x195550u;
    SET_GPR_U32(ctx, 31, 0x195558u);
    ctx->pc = 0x195680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195680u, 0x195550u, 0x195558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195558u;
label_195558:
    // 0x195558: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19555c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19555cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195560: 0xc065560  jal         func_195580
    ctx->pc = 0x195560u;
    SET_GPR_U32(ctx, 31, 0x195568u);
    ctx->pc = 0x195580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195580u, 0x195560u, 0x195568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195568u;
label_195568:
    // 0x195568: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19556c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195570: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195574: 0x3e00008  jr          $ra
    ctx->pc = 0x195574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19557Cu;
    // 0x19557c: 0x0  nop
    ctx->pc = 0x19557cu;
    // NOP
    ctx->pc = 0x195580u;
}
