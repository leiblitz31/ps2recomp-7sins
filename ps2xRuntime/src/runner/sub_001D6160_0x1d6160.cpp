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

// Function: sub_001D6160
// Address: 0x1d6160 - 0x1d61c0
void sub_001D6160_0x1d6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6160_0x1d6160");
#endif

    switch (ctx->pc) {
        case 0x1d618cu: goto label_1d618c;
        case 0x1d61acu: goto label_1d61ac;
        default: break;
    }

    ctx->pc = 0x1d6160u;

    // 0x1d6160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d616c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d616cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6174: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6174u;
    {
        const bool branch_taken_0x1d6174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6174) {
            ctx->pc = 0x1D61ACu;
            goto label_1d61ac;
        }
    }
    ctx->pc = 0x1D617Cu;
    // 0x1d617c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6184: 0xc075870  jal         func_1D61C0
    ctx->pc = 0x1D6184u;
    SET_GPR_U32(ctx, 31, 0x1D618Cu);
    ctx->pc = 0x1D61C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61C0u, 0x1D6184u, 0x1D618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D618Cu;
label_1d618c:
    // 0x1d618c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d618cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6190: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6194: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6198: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6198u;
    {
        const bool branch_taken_0x1d6198 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6198) {
            ctx->pc = 0x1D61ACu;
            goto label_1d61ac;
        }
    }
    ctx->pc = 0x1D61A0u;
    // 0x1d61a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61a4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D61A4u;
    SET_GPR_U32(ctx, 31, 0x1D61ACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D61A4u, 0x1D61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61ACu;
label_1d61ac:
    // 0x1d61ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d61b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d61b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d61b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D61B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61C0u;
}
