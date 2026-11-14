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

// Function: sub_00288C90
// Address: 0x288c90 - 0x288d20
void sub_00288C90_0x288c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C90_0x288c90");
#endif

    switch (ctx->pc) {
        case 0x288cd8u: goto label_288cd8;
        case 0x288ce8u: goto label_288ce8;
        case 0x288cfcu: goto label_288cfc;
        default: break;
    }

    ctx->pc = 0x288c90u;

    // 0x288c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x288c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x288c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288c9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x288c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x288ca0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x288ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288ca4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x288ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288ca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288cac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x288cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288cb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x288cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288cb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x288cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288cc0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288cc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x288cc8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x288cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x288ccc: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x288cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x288cd0: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x288CD0u;
    SET_GPR_U32(ctx, 31, 0x288CD8u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x288CD0u, 0x288CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CD8u;
label_288cd8:
    // 0x288cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cdc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x288cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288ce0: 0xc0a2348  jal         func_288D20
    ctx->pc = 0x288CE0u;
    SET_GPR_U32(ctx, 31, 0x288CE8u);
    ctx->pc = 0x288D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288D20u, 0x288CE0u, 0x288CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CE8u;
label_288ce8:
    // 0x288ce8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x288cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288cf4: 0xc0a37f0  jal         func_28DFC0
    ctx->pc = 0x288CF4u;
    SET_GPR_U32(ctx, 31, 0x288CFCu);
    ctx->pc = 0x28DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DFC0u, 0x288CF4u, 0x288CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CFCu;
label_288cfc:
    // 0x288cfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288d00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x288d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288d04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288d08: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x288d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x288d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x288d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288d18: 0x3e00008  jr          $ra
    ctx->pc = 0x288D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288D20u;
}
