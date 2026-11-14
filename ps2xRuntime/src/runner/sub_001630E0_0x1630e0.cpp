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

// Function: sub_001630E0
// Address: 0x1630e0 - 0x163140
void sub_001630E0_0x1630e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001630E0_0x1630e0");
#endif

    switch (ctx->pc) {
        case 0x16310cu: goto label_16310c;
        case 0x16312cu: goto label_16312c;
        default: break;
    }

    ctx->pc = 0x1630e0u;

    // 0x1630e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1630e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1630e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1630e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1630e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1630ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1630ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1630f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1630F4u;
    {
        const bool branch_taken_0x1630f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1630f4) {
            ctx->pc = 0x16312Cu;
            goto label_16312c;
        }
    }
    ctx->pc = 0x1630FCu;
    // 0x1630fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1630fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163104: 0xc058c50  jal         func_163140
    ctx->pc = 0x163104u;
    SET_GPR_U32(ctx, 31, 0x16310Cu);
    ctx->pc = 0x163140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163140u, 0x163104u, 0x16310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16310Cu;
label_16310c:
    // 0x16310c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163110: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x163114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x163114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x163118: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163118u;
    {
        const bool branch_taken_0x163118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x163118) {
            ctx->pc = 0x16312Cu;
            goto label_16312c;
        }
    }
    ctx->pc = 0x163120u;
    // 0x163120: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163124: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x163124u;
    SET_GPR_U32(ctx, 31, 0x16312Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x163124u, 0x16312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16312Cu;
label_16312c:
    // 0x16312c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163134: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163138: 0x3e00008  jr          $ra
    ctx->pc = 0x163138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163140u;
}
