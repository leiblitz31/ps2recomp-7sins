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

// Function: sub_0010C450
// Address: 0x10c450 - 0x10c4b0
void sub_0010C450_0x10c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C450_0x10c450");
#endif

    switch (ctx->pc) {
        case 0x10c46cu: goto label_10c46c;
        case 0x10c47cu: goto label_10c47c;
        case 0x10c490u: goto label_10c490;
        default: break;
    }

    ctx->pc = 0x10c450u;

    // 0x10c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10c45c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c460: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c464: 0xc043000  jal         func_10C000
    ctx->pc = 0x10C464u;
    SET_GPR_U32(ctx, 31, 0x10C46Cu);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x10C464u, 0x10C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C46Cu;
label_10c46c:
    // 0x10c46c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c470: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c474: 0xc0430fc  jal         func_10C3F0
    ctx->pc = 0x10C474u;
    SET_GPR_U32(ctx, 31, 0x10C47Cu);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x10C474u, 0x10C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C47Cu;
label_10c47c:
    // 0x10c47c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c484: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10c484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c488: 0xc043060  jal         func_10C180
    ctx->pc = 0x10C488u;
    SET_GPR_U32(ctx, 31, 0x10C490u);
    ctx->pc = 0x10C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C180u, 0x10C488u, 0x10C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C490u;
label_10c490:
    // 0x10c490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c498: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10c49c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C4A4u;
    // 0x10c4a4: 0x0  nop
    ctx->pc = 0x10c4a4u;
    // NOP
    // 0x10c4a8: 0x0  nop
    ctx->pc = 0x10c4a8u;
    // NOP
    // 0x10c4ac: 0x0  nop
    ctx->pc = 0x10c4acu;
    // NOP
    ctx->pc = 0x10c4b0u;
}
