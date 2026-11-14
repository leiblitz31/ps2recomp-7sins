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

// Function: sub_002B7790
// Address: 0x2b7790 - 0x2b7800
void sub_002B7790_0x2b7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7790_0x2b7790");
#endif

    switch (ctx->pc) {
        case 0x2b77c0u: goto label_2b77c0;
        case 0x2b77e0u: goto label_2b77e0;
        default: break;
    }

    ctx->pc = 0x2b7790u;

    // 0x2b7790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b7798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b779c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b779cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b77a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b77a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B77A4u;
    {
        const bool branch_taken_0x2b77a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b77a4) {
            ctx->pc = 0x2B77E0u;
            goto label_2b77e0;
        }
    }
    ctx->pc = 0x2B77ACu;
    // 0x2b77ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b77b0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2b77b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2b77b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b77b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b77b8: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2B77B8u;
    SET_GPR_U32(ctx, 31, 0x2B77C0u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2B77B8u, 0x2B77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77C0u;
label_2b77c0:
    // 0x2b77c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b77c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b77c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b77c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b77c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b77cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B77CCu;
    {
        const bool branch_taken_0x2b77cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b77cc) {
            ctx->pc = 0x2B77E0u;
            goto label_2b77e0;
        }
    }
    ctx->pc = 0x2B77D4u;
    // 0x2b77d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b77d8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B77D8u;
    SET_GPR_U32(ctx, 31, 0x2B77E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B77D8u, 0x2B77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77E0u;
label_2b77e0:
    // 0x2b77e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b77e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b77e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b77e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b77e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b77ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B77ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B77ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B77F4u;
    // 0x2b77f4: 0x0  nop
    ctx->pc = 0x2b77f4u;
    // NOP
    // 0x2b77f8: 0x0  nop
    ctx->pc = 0x2b77f8u;
    // NOP
    // 0x2b77fc: 0x0  nop
    ctx->pc = 0x2b77fcu;
    // NOP
    ctx->pc = 0x2b7800u;
}
