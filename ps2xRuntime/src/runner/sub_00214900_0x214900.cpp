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

// Function: sub_00214900
// Address: 0x214900 - 0x214930
void sub_00214900_0x214900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214900_0x214900");
#endif

    switch (ctx->pc) {
        case 0x21491cu: goto label_21491c;
        default: break;
    }

    ctx->pc = 0x214900u;

    // 0x214900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21490c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214910: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x214910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214914: 0xc08524c  jal         func_214930
    ctx->pc = 0x214914u;
    SET_GPR_U32(ctx, 31, 0x21491Cu);
    ctx->pc = 0x214930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214930u, 0x214914u, 0x21491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21491Cu;
label_21491c:
    // 0x21491c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214924: 0x3e00008  jr          $ra
    ctx->pc = 0x214924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21492Cu;
    // 0x21492c: 0x0  nop
    ctx->pc = 0x21492cu;
    // NOP
    ctx->pc = 0x214930u;
}
