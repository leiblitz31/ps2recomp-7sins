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

// Function: sub_002BF2F0
// Address: 0x2bf2f0 - 0x2bf370
void sub_002BF2F0_0x2bf2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF2F0_0x2bf2f0");
#endif

    switch (ctx->pc) {
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf330u: goto label_2bf330;
        case 0x2bf350u: goto label_2bf350;
        default: break;
    }

    ctx->pc = 0x2bf2f0u;

    // 0x2bf2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bf2fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bf2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bf300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf304: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF304u;
    {
        const bool branch_taken_0x2bf304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf304) {
            ctx->pc = 0x2BF350u;
            goto label_2bf350;
        }
    }
    ctx->pc = 0x2BF30Cu;
    // 0x2bf30c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf310: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2bf310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2bf314: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf318: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BF318u;
    SET_GPR_U32(ctx, 31, 0x2BF320u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BF318u, 0x2BF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF320u;
label_2bf320:
    // 0x2bf320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf324: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf328: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BF328u;
    SET_GPR_U32(ctx, 31, 0x2BF330u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BF328u, 0x2BF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF330u;
label_2bf330:
    // 0x2bf330: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bf330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf334: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bf334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bf338: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bf338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bf33c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF33Cu;
    {
        const bool branch_taken_0x2bf33c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bf33c) {
            ctx->pc = 0x2BF350u;
            goto label_2bf350;
        }
    }
    ctx->pc = 0x2BF344u;
    // 0x2bf344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf348: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BF348u;
    SET_GPR_U32(ctx, 31, 0x2BF350u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BF348u, 0x2BF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF350u;
label_2bf350:
    // 0x2bf350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bf350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bf358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bf35c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF364u;
    // 0x2bf364: 0x0  nop
    ctx->pc = 0x2bf364u;
    // NOP
    // 0x2bf368: 0x0  nop
    ctx->pc = 0x2bf368u;
    // NOP
    // 0x2bf36c: 0x0  nop
    ctx->pc = 0x2bf36cu;
    // NOP
    ctx->pc = 0x2bf370u;
}
