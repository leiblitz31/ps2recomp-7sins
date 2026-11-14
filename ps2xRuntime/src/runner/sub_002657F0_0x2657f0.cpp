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

// Function: sub_002657F0
// Address: 0x2657f0 - 0x265850
void sub_002657F0_0x2657f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002657F0_0x2657f0");
#endif

    switch (ctx->pc) {
        case 0x26581cu: goto label_26581c;
        case 0x26583cu: goto label_26583c;
        default: break;
    }

    ctx->pc = 0x2657f0u;

    // 0x2657f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2657f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2657f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2657f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2657f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2657f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2657fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2657fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x265800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265804: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x265804u;
    {
        const bool branch_taken_0x265804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265804) {
            ctx->pc = 0x26583Cu;
            goto label_26583c;
        }
    }
    ctx->pc = 0x26580Cu;
    // 0x26580c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265814: 0xc099614  jal         func_265850
    ctx->pc = 0x265814u;
    SET_GPR_U32(ctx, 31, 0x26581Cu);
    ctx->pc = 0x265850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265850u, 0x265814u, 0x26581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26581Cu;
label_26581c:
    // 0x26581c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26581cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x265824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x265828: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265828u;
    {
        const bool branch_taken_0x265828 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x265828) {
            ctx->pc = 0x26583Cu;
            goto label_26583c;
        }
    }
    ctx->pc = 0x265830u;
    // 0x265830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265834: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x265834u;
    SET_GPR_U32(ctx, 31, 0x26583Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x265834u, 0x26583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26583Cu;
label_26583c:
    // 0x26583c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265844: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265848: 0x3e00008  jr          $ra
    ctx->pc = 0x265848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265850u;
}
