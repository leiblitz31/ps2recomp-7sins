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

// Function: sub_00222FD0
// Address: 0x222fd0 - 0x223030
void sub_00222FD0_0x222fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222FD0_0x222fd0");
#endif

    switch (ctx->pc) {
        case 0x222ffcu: goto label_222ffc;
        case 0x22301cu: goto label_22301c;
        default: break;
    }

    ctx->pc = 0x222fd0u;

    // 0x222fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x222fdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x222fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x222fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222fe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222FE4u;
    {
        const bool branch_taken_0x222fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222fe4) {
            ctx->pc = 0x22301Cu;
            goto label_22301c;
        }
    }
    ctx->pc = 0x222FECu;
    // 0x222fec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ff4: 0xc088c0c  jal         func_223030
    ctx->pc = 0x222FF4u;
    SET_GPR_U32(ctx, 31, 0x222FFCu);
    ctx->pc = 0x223030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223030u, 0x222FF4u, 0x222FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FFCu;
label_222ffc:
    // 0x222ffc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223000: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x223000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x223004: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x223008: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223008u;
    {
        const bool branch_taken_0x223008 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x223008) {
            ctx->pc = 0x22301Cu;
            goto label_22301c;
        }
    }
    ctx->pc = 0x223010u;
    // 0x223010: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223014: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x223014u;
    SET_GPR_U32(ctx, 31, 0x22301Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x223014u, 0x22301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22301Cu;
label_22301c:
    // 0x22301c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223028: 0x3e00008  jr          $ra
    ctx->pc = 0x223028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223030u;
}
