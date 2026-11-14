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

// Function: sub_0048DD90
// Address: 0x48dd90 - 0x48ddf0
void sub_0048DD90_0x48dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DD90_0x48dd90");
#endif

    switch (ctx->pc) {
        case 0x48ddbcu: goto label_48ddbc;
        case 0x48dddcu: goto label_48dddc;
        default: break;
    }

    ctx->pc = 0x48dd90u;

    // 0x48dd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48dd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dd98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48dd9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48dd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48dda0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dda4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48DDA4u;
    {
        const bool branch_taken_0x48dda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dda4) {
            ctx->pc = 0x48DDDCu;
            goto label_48dddc;
        }
    }
    ctx->pc = 0x48DDACu;
    // 0x48ddac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ddb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ddb4: 0xc12377c  jal         func_48DDF0
    ctx->pc = 0x48DDB4u;
    SET_GPR_U32(ctx, 31, 0x48DDBCu);
    ctx->pc = 0x48DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DDF0u, 0x48DDB4u, 0x48DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDBCu;
label_48ddbc:
    // 0x48ddbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48ddbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ddc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48ddc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48ddc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48ddc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48DDC8u;
    {
        const bool branch_taken_0x48ddc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48ddc8) {
            ctx->pc = 0x48DDDCu;
            goto label_48dddc;
        }
    }
    ctx->pc = 0x48DDD0u;
    // 0x48ddd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ddd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48DDD4u;
    SET_GPR_U32(ctx, 31, 0x48DDDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48DDD4u, 0x48DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDDCu;
label_48dddc:
    // 0x48dddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dde4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48dde4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48dde8: 0x3e00008  jr          $ra
    ctx->pc = 0x48DDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DDF0u;
}
