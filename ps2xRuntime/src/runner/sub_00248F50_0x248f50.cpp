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

// Function: sub_00248F50
// Address: 0x248f50 - 0x248fb0
void sub_00248F50_0x248f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248F50_0x248f50");
#endif

    switch (ctx->pc) {
        case 0x248f7cu: goto label_248f7c;
        case 0x248f9cu: goto label_248f9c;
        default: break;
    }

    ctx->pc = 0x248f50u;

    // 0x248f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x248f5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x248f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x248f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248f64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x248F64u;
    {
        const bool branch_taken_0x248f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248f64) {
            ctx->pc = 0x248F9Cu;
            goto label_248f9c;
        }
    }
    ctx->pc = 0x248F6Cu;
    // 0x248f6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f74: 0xc0923ec  jal         func_248FB0
    ctx->pc = 0x248F74u;
    SET_GPR_U32(ctx, 31, 0x248F7Cu);
    ctx->pc = 0x248FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248FB0u, 0x248F74u, 0x248F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F7Cu;
label_248f7c:
    // 0x248f7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x248f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248f80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x248f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248f84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x248f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x248f88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248F88u;
    {
        const bool branch_taken_0x248f88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x248f88) {
            ctx->pc = 0x248F9Cu;
            goto label_248f9c;
        }
    }
    ctx->pc = 0x248F90u;
    // 0x248f90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248f94: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x248F94u;
    SET_GPR_U32(ctx, 31, 0x248F9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x248F94u, 0x248F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F9Cu;
label_248f9c:
    // 0x248f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248fa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x248fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x248FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FB0u;
}
