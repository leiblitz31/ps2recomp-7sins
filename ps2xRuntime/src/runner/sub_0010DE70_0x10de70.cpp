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

// Function: sub_0010DE70
// Address: 0x10de70 - 0x10ded0
void sub_0010DE70_0x10de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DE70_0x10de70");
#endif

    switch (ctx->pc) {
        case 0x10de9cu: goto label_10de9c;
        case 0x10debcu: goto label_10debc;
        default: break;
    }

    ctx->pc = 0x10de70u;

    // 0x10de70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10de74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10de78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10de78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10de7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10de7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10de80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DE84u;
    {
        const bool branch_taken_0x10de84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10de84) {
            ctx->pc = 0x10DEBCu;
            goto label_10debc;
        }
    }
    ctx->pc = 0x10DE8Cu;
    // 0x10de8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de94: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x10DE94u;
    SET_GPR_U32(ctx, 31, 0x10DE9Cu);
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x10DE94u, 0x10DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE9Cu;
label_10de9c:
    // 0x10de9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dea0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10dea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10dea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10dea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10dea8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DEA8u;
    {
        const bool branch_taken_0x10dea8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10dea8) {
            ctx->pc = 0x10DEBCu;
            goto label_10debc;
        }
    }
    ctx->pc = 0x10DEB0u;
    // 0x10deb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10deb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10DEB4u;
    SET_GPR_U32(ctx, 31, 0x10DEBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10DEB4u, 0x10DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEBCu;
label_10debc:
    // 0x10debc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dec4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10dec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10dec8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DED0u;
}
