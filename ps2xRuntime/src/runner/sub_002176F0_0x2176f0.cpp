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

// Function: sub_002176F0
// Address: 0x2176f0 - 0x217750
void sub_002176F0_0x2176f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176F0_0x2176f0");
#endif

    switch (ctx->pc) {
        case 0x21771cu: goto label_21771c;
        case 0x21773cu: goto label_21773c;
        default: break;
    }

    ctx->pc = 0x2176f0u;

    // 0x2176f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2176f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2176f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2176f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2176f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2176fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2176fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x217700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217704: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217704u;
    {
        const bool branch_taken_0x217704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217704) {
            ctx->pc = 0x21773Cu;
            goto label_21773c;
        }
    }
    ctx->pc = 0x21770Cu;
    // 0x21770c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217714: 0xc085dd4  jal         func_217750
    ctx->pc = 0x217714u;
    SET_GPR_U32(ctx, 31, 0x21771Cu);
    ctx->pc = 0x217750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217750u, 0x217714u, 0x21771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21771Cu;
label_21771c:
    // 0x21771c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217720: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x217720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x217724: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x217724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x217728: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217728u;
    {
        const bool branch_taken_0x217728 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x217728) {
            ctx->pc = 0x21773Cu;
            goto label_21773c;
        }
    }
    ctx->pc = 0x217730u;
    // 0x217730: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217734: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x217734u;
    SET_GPR_U32(ctx, 31, 0x21773Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x217734u, 0x21773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21773Cu;
label_21773c:
    // 0x21773c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217744: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217748: 0x3e00008  jr          $ra
    ctx->pc = 0x217748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217750u;
}
