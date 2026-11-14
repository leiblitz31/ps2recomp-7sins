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

// Function: sub_0025D610
// Address: 0x25d610 - 0x25d670
void sub_0025D610_0x25d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D610_0x25d610");
#endif

    switch (ctx->pc) {
        case 0x25d63cu: goto label_25d63c;
        case 0x25d65cu: goto label_25d65c;
        default: break;
    }

    ctx->pc = 0x25d610u;

    // 0x25d610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d61c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25d61cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d624: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25D624u;
    {
        const bool branch_taken_0x25d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d624) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D62Cu;
    // 0x25d62c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d634: 0xc09759c  jal         func_25D670
    ctx->pc = 0x25D634u;
    SET_GPR_U32(ctx, 31, 0x25D63Cu);
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x25D634u, 0x25D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D63Cu;
label_25d63c:
    // 0x25d63c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25d63cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d640: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25d644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25d644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25d648: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D648u;
    {
        const bool branch_taken_0x25d648 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25d648) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D650u;
    // 0x25d650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d654: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25D654u;
    SET_GPR_U32(ctx, 31, 0x25D65Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25D654u, 0x25D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D65Cu;
label_25d65c:
    // 0x25d65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d664: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d668: 0x3e00008  jr          $ra
    ctx->pc = 0x25D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D670u;
}
