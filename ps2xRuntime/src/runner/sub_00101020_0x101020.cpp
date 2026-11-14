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

// Function: sub_00101020
// Address: 0x101020 - 0x101050
void sub_00101020_0x101020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101020_0x101020");
#endif

    switch (ctx->pc) {
        case 0x10103cu: goto label_10103c;
        default: break;
    }

    ctx->pc = 0x101020u;

    // 0x101020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10102c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101030: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101034: 0xc040760  jal         func_101D80
    ctx->pc = 0x101034u;
    SET_GPR_U32(ctx, 31, 0x10103Cu);
    ctx->pc = 0x101D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101D80u, 0x101034u, 0x10103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10103Cu;
label_10103c:
    // 0x10103c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101040: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x101044: 0x3e00008  jr          $ra
    ctx->pc = 0x101044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10104Cu;
    // 0x10104c: 0x0  nop
    ctx->pc = 0x10104cu;
    // NOP
    ctx->pc = 0x101050u;
}
