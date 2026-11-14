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

// Function: sub_002DDD70
// Address: 0x2ddd70 - 0x2dddd0
void sub_002DDD70_0x2ddd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD70_0x2ddd70");
#endif

    switch (ctx->pc) {
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2dddbcu: goto label_2dddbc;
        default: break;
    }

    ctx->pc = 0x2ddd70u;

    // 0x2ddd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddd78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ddd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ddd7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ddd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ddd80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ddd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DDD84u;
    {
        const bool branch_taken_0x2ddd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd84) {
            ctx->pc = 0x2DDDBCu;
            goto label_2dddbc;
        }
    }
    ctx->pc = 0x2DDD8Cu;
    // 0x2ddd8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ddd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ddd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd94: 0xc0b7774  jal         func_2DDDD0
    ctx->pc = 0x2DDD94u;
    SET_GPR_U32(ctx, 31, 0x2DDD9Cu);
    ctx->pc = 0x2DDDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDD0u, 0x2DDD94u, 0x2DDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD9Cu;
label_2ddd9c:
    // 0x2ddd9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ddd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddda0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ddda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ddda4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ddda4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ddda8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDDA8u;
    {
        const bool branch_taken_0x2ddda8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ddda8) {
            ctx->pc = 0x2DDDBCu;
            goto label_2dddbc;
        }
    }
    ctx->pc = 0x2DDDB0u;
    // 0x2dddb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dddb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DDDB4u;
    SET_GPR_U32(ctx, 31, 0x2DDDBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DDDB4u, 0x2DDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDBCu;
label_2dddbc:
    // 0x2dddbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dddc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dddc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dddc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDD0u;
}
