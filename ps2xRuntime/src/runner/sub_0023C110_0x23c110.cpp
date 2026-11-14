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

// Function: sub_0023C110
// Address: 0x23c110 - 0x23c170
void sub_0023C110_0x23c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C110_0x23c110");
#endif

    switch (ctx->pc) {
        case 0x23c13cu: goto label_23c13c;
        case 0x23c15cu: goto label_23c15c;
        default: break;
    }

    ctx->pc = 0x23c110u;

    // 0x23c110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c11c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23c11cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23c120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c124: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23C124u;
    {
        const bool branch_taken_0x23c124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c124) {
            ctx->pc = 0x23C15Cu;
            goto label_23c15c;
        }
    }
    ctx->pc = 0x23C12Cu;
    // 0x23c12c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c134: 0xc08f05c  jal         func_23C170
    ctx->pc = 0x23C134u;
    SET_GPR_U32(ctx, 31, 0x23C13Cu);
    ctx->pc = 0x23C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C170u, 0x23C134u, 0x23C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C13Cu;
label_23c13c:
    // 0x23c13c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c140: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23c144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23c148: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C148u;
    {
        const bool branch_taken_0x23c148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23c148) {
            ctx->pc = 0x23C15Cu;
            goto label_23c15c;
        }
    }
    ctx->pc = 0x23C150u;
    // 0x23c150: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c154: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23C154u;
    SET_GPR_U32(ctx, 31, 0x23C15Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23C154u, 0x23C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C15Cu;
label_23c15c:
    // 0x23c15c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c164: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c168: 0x3e00008  jr          $ra
    ctx->pc = 0x23C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C170u;
}
