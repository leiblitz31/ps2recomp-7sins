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

// Function: sub_002B8410
// Address: 0x2b8410 - 0x2b8470
void sub_002B8410_0x2b8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8410_0x2b8410");
#endif

    switch (ctx->pc) {
        case 0x2b842cu: goto label_2b842c;
        case 0x2b843cu: goto label_2b843c;
        case 0x2b8450u: goto label_2b8450;
        default: break;
    }

    ctx->pc = 0x2b8410u;

    // 0x2b8410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b841c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b8420: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b8420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8424: 0xc0adef8  jal         func_2B7BE0
    ctx->pc = 0x2B8424u;
    SET_GPR_U32(ctx, 31, 0x2B842Cu);
    ctx->pc = 0x2B7BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BE0u, 0x2B8424u, 0x2B842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B842Cu;
label_2b842c:
    // 0x2b842c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b842cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b8430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8434: 0xc0adef0  jal         func_2B7BC0
    ctx->pc = 0x2B8434u;
    SET_GPR_U32(ctx, 31, 0x2B843Cu);
    ctx->pc = 0x2B7BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BC0u, 0x2B8434u, 0x2B843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B843Cu;
label_2b843c:
    // 0x2b843c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b8440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8444: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8448: 0xc0ae11c  jal         func_2B8470
    ctx->pc = 0x2B8448u;
    SET_GPR_U32(ctx, 31, 0x2B8450u);
    ctx->pc = 0x2B8470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8470u, 0x2B8448u, 0x2B8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8450u;
label_2b8450:
    // 0x2b8450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8458: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b8458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b845c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B845Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B845Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8464u;
    // 0x2b8464: 0x0  nop
    ctx->pc = 0x2b8464u;
    // NOP
    // 0x2b8468: 0x0  nop
    ctx->pc = 0x2b8468u;
    // NOP
    // 0x2b846c: 0x0  nop
    ctx->pc = 0x2b846cu;
    // NOP
    ctx->pc = 0x2b8470u;
}
