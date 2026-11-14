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

// Function: sub_001902F0
// Address: 0x1902f0 - 0x190360
void sub_001902F0_0x1902f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001902F0_0x1902f0");
#endif

    switch (ctx->pc) {
        case 0x190318u: goto label_190318;
        case 0x190328u: goto label_190328;
        case 0x190348u: goto label_190348;
        default: break;
    }

    ctx->pc = 0x1902f0u;

    // 0x1902f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1902f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1902f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1902f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1902f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1902fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1902fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x190300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190304: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x190304u;
    {
        const bool branch_taken_0x190304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190304) {
            ctx->pc = 0x190348u;
            goto label_190348;
        }
    }
    ctx->pc = 0x19030Cu;
    // 0x19030c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190310: 0xc0640f4  jal         func_1903D0
    ctx->pc = 0x190310u;
    SET_GPR_U32(ctx, 31, 0x190318u);
    ctx->pc = 0x1903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1903D0u, 0x190310u, 0x190318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190318u;
label_190318:
    // 0x190318: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19031c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190320: 0xc0640d8  jal         func_190360
    ctx->pc = 0x190320u;
    SET_GPR_U32(ctx, 31, 0x190328u);
    ctx->pc = 0x190360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190360u, 0x190320u, 0x190328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190328u;
label_190328:
    // 0x190328: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19032c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x190330: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x190330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x190334: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190334u;
    {
        const bool branch_taken_0x190334 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x190334) {
            ctx->pc = 0x190348u;
            goto label_190348;
        }
    }
    ctx->pc = 0x19033Cu;
    // 0x19033c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190340: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x190340u;
    SET_GPR_U32(ctx, 31, 0x190348u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x190340u, 0x190348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190348u;
label_190348:
    // 0x190348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19034c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190350: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190354: 0x3e00008  jr          $ra
    ctx->pc = 0x190354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19035Cu;
    // 0x19035c: 0x0  nop
    ctx->pc = 0x19035cu;
    // NOP
    ctx->pc = 0x190360u;
}
