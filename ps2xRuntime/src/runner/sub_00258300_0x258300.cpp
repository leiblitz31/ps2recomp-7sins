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

// Function: sub_00258300
// Address: 0x258300 - 0x258360
void sub_00258300_0x258300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258300_0x258300");
#endif

    switch (ctx->pc) {
        case 0x25832cu: goto label_25832c;
        case 0x25834cu: goto label_25834c;
        default: break;
    }

    ctx->pc = 0x258300u;

    // 0x258300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25830c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25830cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258314: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258314u;
    {
        const bool branch_taken_0x258314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258314) {
            ctx->pc = 0x25834Cu;
            goto label_25834c;
        }
    }
    ctx->pc = 0x25831Cu;
    // 0x25831c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258324: 0xc0960d8  jal         func_258360
    ctx->pc = 0x258324u;
    SET_GPR_U32(ctx, 31, 0x25832Cu);
    ctx->pc = 0x258360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258360u, 0x258324u, 0x25832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25832Cu;
label_25832c:
    // 0x25832c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258330: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258334: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258334u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258338: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258338u;
    {
        const bool branch_taken_0x258338 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258338) {
            ctx->pc = 0x25834Cu;
            goto label_25834c;
        }
    }
    ctx->pc = 0x258340u;
    // 0x258340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258344: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x258344u;
    SET_GPR_U32(ctx, 31, 0x25834Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x258344u, 0x25834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25834Cu;
label_25834c:
    // 0x25834c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258354: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258358: 0x3e00008  jr          $ra
    ctx->pc = 0x258358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258360u;
}
