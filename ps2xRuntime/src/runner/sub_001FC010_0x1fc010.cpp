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

// Function: sub_001FC010
// Address: 0x1fc010 - 0x1fc060
void sub_001FC010_0x1fc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC010_0x1fc010");
#endif

    switch (ctx->pc) {
        case 0x1fc04cu: goto label_1fc04c;
        default: break;
    }

    ctx->pc = 0x1fc010u;

    // 0x1fc010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fc018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fc01c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1fc01cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc024: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC024u;
    {
        const bool branch_taken_0x1fc024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc024) {
            ctx->pc = 0x1FC04Cu;
            goto label_1fc04c;
        }
    }
    ctx->pc = 0x1FC02Cu;
    // 0x1fc02c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1fc02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc030: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1fc030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fc034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fc034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fc038: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC038u;
    {
        const bool branch_taken_0x1fc038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fc038) {
            ctx->pc = 0x1FC04Cu;
            goto label_1fc04c;
        }
    }
    ctx->pc = 0x1FC040u;
    // 0x1fc040: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc044: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1FC044u;
    SET_GPR_U32(ctx, 31, 0x1FC04Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1FC044u, 0x1FC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC04Cu;
label_1fc04c:
    // 0x1fc04c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc054: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fc054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc058: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC060u;
}
