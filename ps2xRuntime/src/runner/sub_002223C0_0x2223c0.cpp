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

// Function: sub_002223C0
// Address: 0x2223c0 - 0x222420
void sub_002223C0_0x2223c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002223C0_0x2223c0");
#endif

    switch (ctx->pc) {
        case 0x2223ecu: goto label_2223ec;
        case 0x22240cu: goto label_22240c;
        default: break;
    }

    ctx->pc = 0x2223c0u;

    // 0x2223c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2223c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2223c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2223c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2223c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2223c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2223cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2223ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2223d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2223d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2223d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2223D4u;
    {
        const bool branch_taken_0x2223d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223d4) {
            ctx->pc = 0x22240Cu;
            goto label_22240c;
        }
    }
    ctx->pc = 0x2223DCu;
    // 0x2223dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2223e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2223e4: 0xc088908  jal         func_222420
    ctx->pc = 0x2223E4u;
    SET_GPR_U32(ctx, 31, 0x2223ECu);
    ctx->pc = 0x222420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222420u, 0x2223E4u, 0x2223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ECu;
label_2223ec:
    // 0x2223ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2223f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2223f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2223f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2223f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2223f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x22240Cu;
            goto label_22240c;
        }
    }
    ctx->pc = 0x222400u;
    // 0x222400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222404: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222404u;
    SET_GPR_U32(ctx, 31, 0x22240Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222404u, 0x22240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22240Cu;
label_22240c:
    // 0x22240c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222414: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222418: 0x3e00008  jr          $ra
    ctx->pc = 0x222418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222420u;
}
