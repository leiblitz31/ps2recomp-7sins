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

// Function: sub_001360D0
// Address: 0x1360d0 - 0x136150
void sub_001360D0_0x1360d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001360D0_0x1360d0");
#endif

    switch (ctx->pc) {
        case 0x1360f8u: goto label_1360f8;
        case 0x136108u: goto label_136108;
        default: break;
    }

    ctx->pc = 0x1360d0u;

    // 0x1360d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1360d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1360d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1360d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1360d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1360d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1360dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1360dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1360e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1360e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1360e4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1360e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1360e8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1360e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1360ec: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1360ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1360f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1360F0u;
    {
        const bool branch_taken_0x1360f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1360f0) {
            ctx->pc = 0x13611Cu;
            goto label_13611c;
        }
    }
    ctx->pc = 0x1360F8u;
label_1360f8:
    // 0x1360f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1360f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360fc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136100: 0xc04d7c4  jal         func_135F10
    ctx->pc = 0x136100u;
    SET_GPR_U32(ctx, 31, 0x136108u);
    ctx->pc = 0x135F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F10u, 0x136100u, 0x136108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136108u;
label_136108:
    // 0x136108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x136108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13610c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x136110: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x136110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x136114: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x136114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x136118: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x136118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13611c:
    // 0x13611c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136120: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136124: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x136124u;
    {
        const bool branch_taken_0x136124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x136124) {
            ctx->pc = 0x1360F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1360f8;
        }
    }
    ctx->pc = 0x13612Cu;
    // 0x13612c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13612cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13613c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x136140: 0x3e00008  jr          $ra
    ctx->pc = 0x136140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136148u;
    // 0x136148: 0x0  nop
    ctx->pc = 0x136148u;
    // NOP
    // 0x13614c: 0x0  nop
    ctx->pc = 0x13614cu;
    // NOP
    ctx->pc = 0x136150u;
}
