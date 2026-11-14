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

// Function: sub_0017A660
// Address: 0x17a660 - 0x17a6d0
void sub_0017A660_0x17a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A660_0x17a660");
#endif

    switch (ctx->pc) {
        case 0x17a684u: goto label_17a684;
        case 0x17a6b8u: goto label_17a6b8;
        default: break;
    }

    ctx->pc = 0x17a660u;

    // 0x17a660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17a66c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17a670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17a670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17a674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a678: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17a678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a67c: 0xc05e9b4  jal         func_17A6D0
    ctx->pc = 0x17A67Cu;
    SET_GPR_U32(ctx, 31, 0x17A684u);
    ctx->pc = 0x17A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6D0u, 0x17A67Cu, 0x17A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A684u;
label_17a684:
    // 0x17a684: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A684u;
    {
        const bool branch_taken_0x17a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a684) {
            ctx->pc = 0x17A698u;
            goto label_17a698;
        }
    }
    ctx->pc = 0x17A68Cu;
    // 0x17a68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a690: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A690u;
    {
        const bool branch_taken_0x17a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a690) {
            ctx->pc = 0x17A6BCu;
            goto label_17a6bc;
        }
    }
    ctx->pc = 0x17A698u;
label_17a698:
    // 0x17a698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a69c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a6a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a6a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17a6a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a6b0: 0xc056368  jal         func_158DA0
    ctx->pc = 0x17A6B0u;
    SET_GPR_U32(ctx, 31, 0x17A6B8u);
    ctx->pc = 0x158DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158DA0u, 0x17A6B0u, 0x17A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6B8u;
label_17a6b8:
    // 0x17a6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a6bc:
    // 0x17a6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6CCu;
    // 0x17a6cc: 0x0  nop
    ctx->pc = 0x17a6ccu;
    // NOP
    ctx->pc = 0x17a6d0u;
}
