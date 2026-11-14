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

// Function: sub_00452540
// Address: 0x452540 - 0x452580
void sub_00452540_0x452540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452540_0x452540");
#endif

    switch (ctx->pc) {
        case 0x452564u: goto label_452564;
        default: break;
    }

    ctx->pc = 0x452540u;

    // 0x452540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45254c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45254cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x452550: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452554: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x452554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x452558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45255c: 0xc114960  jal         func_452580
    ctx->pc = 0x45255Cu;
    SET_GPR_U32(ctx, 31, 0x452564u);
    ctx->pc = 0x452580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452580u, 0x45255Cu, 0x452564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452564u;
label_452564:
    // 0x452564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452568: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45256c: 0x3e00008  jr          $ra
    ctx->pc = 0x45256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452574u;
    // 0x452574: 0x0  nop
    ctx->pc = 0x452574u;
    // NOP
    // 0x452578: 0x0  nop
    ctx->pc = 0x452578u;
    // NOP
    // 0x45257c: 0x0  nop
    ctx->pc = 0x45257cu;
    // NOP
    ctx->pc = 0x452580u;
}
