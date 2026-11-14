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

// Function: sub_001560F0
// Address: 0x1560f0 - 0x156160
void sub_001560F0_0x1560f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001560F0_0x1560f0");
#endif

    switch (ctx->pc) {
        case 0x156118u: goto label_156118;
        case 0x156128u: goto label_156128;
        case 0x156148u: goto label_156148;
        default: break;
    }

    ctx->pc = 0x1560f0u;

    // 0x1560f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1560f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1560f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1560f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1560f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1560f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1560fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1560fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x156100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156104: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x156104u;
    {
        const bool branch_taken_0x156104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156104) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x15610Cu;
    // 0x15610c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156110: 0xc055874  jal         func_1561D0
    ctx->pc = 0x156110u;
    SET_GPR_U32(ctx, 31, 0x156118u);
    ctx->pc = 0x1561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561D0u, 0x156110u, 0x156118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156118u;
label_156118:
    // 0x156118: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15611c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15611cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156120: 0xc055858  jal         func_156160
    ctx->pc = 0x156120u;
    SET_GPR_U32(ctx, 31, 0x156128u);
    ctx->pc = 0x156160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156160u, 0x156120u, 0x156128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156128u;
label_156128:
    // 0x156128: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x156128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15612c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156130: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x156134: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156134u;
    {
        const bool branch_taken_0x156134 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x156134) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x15613Cu;
    // 0x15613c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156140: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x156140u;
    SET_GPR_U32(ctx, 31, 0x156148u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x156140u, 0x156148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156148u;
label_156148:
    // 0x156148: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15614c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15614cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x156150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156154: 0x3e00008  jr          $ra
    ctx->pc = 0x156154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15615Cu;
    // 0x15615c: 0x0  nop
    ctx->pc = 0x15615cu;
    // NOP
    ctx->pc = 0x156160u;
}
