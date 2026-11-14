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

// Function: sub_0010A660
// Address: 0x10a660 - 0x10a6d0
void sub_0010A660_0x10a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A660_0x10a660");
#endif

    switch (ctx->pc) {
        case 0x10a688u: goto label_10a688;
        case 0x10a698u: goto label_10a698;
        case 0x10a6b8u: goto label_10a6b8;
        default: break;
    }

    ctx->pc = 0x10a660u;

    // 0x10a660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a66c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10a66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10a670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a674: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10A674u;
    {
        const bool branch_taken_0x10a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a674) {
            ctx->pc = 0x10A6B8u;
            goto label_10a6b8;
        }
    }
    ctx->pc = 0x10A67Cu;
    // 0x10a67c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a680: 0xc0429d0  jal         func_10A740
    ctx->pc = 0x10A680u;
    SET_GPR_U32(ctx, 31, 0x10A688u);
    ctx->pc = 0x10A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A740u, 0x10A680u, 0x10A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A688u;
label_10a688:
    // 0x10a688: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a690: 0xc0429b4  jal         func_10A6D0
    ctx->pc = 0x10A690u;
    SET_GPR_U32(ctx, 31, 0x10A698u);
    ctx->pc = 0x10A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A6D0u, 0x10A690u, 0x10A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A698u;
label_10a698:
    // 0x10a698: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10a698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a69c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10a6a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10a6a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10a6a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A6A4u;
    {
        const bool branch_taken_0x10a6a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10a6a4) {
            ctx->pc = 0x10A6B8u;
            goto label_10a6b8;
        }
    }
    ctx->pc = 0x10A6ACu;
    // 0x10a6ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a6b0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10A6B0u;
    SET_GPR_U32(ctx, 31, 0x10A6B8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10A6B0u, 0x10A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6B8u;
label_10a6b8:
    // 0x10a6b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a6c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A6CCu;
    // 0x10a6cc: 0x0  nop
    ctx->pc = 0x10a6ccu;
    // NOP
    ctx->pc = 0x10a6d0u;
}
