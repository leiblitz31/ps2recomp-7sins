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

// Function: sub_00113190
// Address: 0x113190 - 0x113200
void sub_00113190_0x113190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113190_0x113190");
#endif

    switch (ctx->pc) {
        case 0x1131b8u: goto label_1131b8;
        case 0x1131c8u: goto label_1131c8;
        case 0x1131e8u: goto label_1131e8;
        default: break;
    }

    ctx->pc = 0x113190u;

    // 0x113190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11319c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11319cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1131a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1131a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1131A4u;
    {
        const bool branch_taken_0x1131a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1131a4) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131ACu;
    // 0x1131ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1131acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1131b0: 0xc044c9c  jal         func_113270
    ctx->pc = 0x1131B0u;
    SET_GPR_U32(ctx, 31, 0x1131B8u);
    ctx->pc = 0x113270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113270u, 0x1131B0u, 0x1131B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131B8u;
label_1131b8:
    // 0x1131b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1131bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1131bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131c0: 0xc044c80  jal         func_113200
    ctx->pc = 0x1131C0u;
    SET_GPR_U32(ctx, 31, 0x1131C8u);
    ctx->pc = 0x113200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113200u, 0x1131C0u, 0x1131C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131C8u;
label_1131c8:
    // 0x1131c8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1131cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1131ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1131d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1131d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1131d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1131D4u;
    {
        const bool branch_taken_0x1131d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1131d4) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131DCu;
    // 0x1131dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1131dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1131e0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1131E0u;
    SET_GPR_U32(ctx, 31, 0x1131E8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1131E0u, 0x1131E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131E8u;
label_1131e8:
    // 0x1131e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1131ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1131ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1131f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1131f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1131f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1131F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1131FCu;
    // 0x1131fc: 0x0  nop
    ctx->pc = 0x1131fcu;
    // NOP
    ctx->pc = 0x113200u;
}
