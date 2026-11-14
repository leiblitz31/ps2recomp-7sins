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

// Function: sub_001A72A0
// Address: 0x1a72a0 - 0x1a7320
void sub_001A72A0_0x1a72a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72A0_0x1a72a0");
#endif

    switch (ctx->pc) {
        case 0x1a72c8u: goto label_1a72c8;
        case 0x1a72d8u: goto label_1a72d8;
        default: break;
    }

    ctx->pc = 0x1a72a0u;

    // 0x1a72a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a72a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a72a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a72a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a72ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a72b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a72b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a72b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1a72bc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1a72bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a72c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A72C0u;
    {
        const bool branch_taken_0x1a72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a72c0) {
            ctx->pc = 0x1A72ECu;
            goto label_1a72ec;
        }
    }
    ctx->pc = 0x1A72C8u;
label_1a72c8:
    // 0x1a72c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a72c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1a72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a72d0: 0xc069cf8  jal         func_1A73E0
    ctx->pc = 0x1A72D0u;
    SET_GPR_U32(ctx, 31, 0x1A72D8u);
    ctx->pc = 0x1A73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73E0u, 0x1A72D0u, 0x1A72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72D8u;
label_1a72d8:
    // 0x1a72d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a72dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a72e0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a72e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1a72e4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1a72e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a72e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a72e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a72ec:
    // 0x1a72ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a72f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A72F0u;
    {
        const bool branch_taken_0x1a72f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a72f0) {
            ctx->pc = 0x1A72C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a72c8;
        }
    }
    ctx->pc = 0x1A72F8u;
    // 0x1a72f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a72f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a72fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7308: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a7308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a730c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7314u;
    // 0x1a7314: 0x0  nop
    ctx->pc = 0x1a7314u;
    // NOP
    // 0x1a7318: 0x0  nop
    ctx->pc = 0x1a7318u;
    // NOP
    // 0x1a731c: 0x0  nop
    ctx->pc = 0x1a731cu;
    // NOP
    ctx->pc = 0x1a7320u;
}
