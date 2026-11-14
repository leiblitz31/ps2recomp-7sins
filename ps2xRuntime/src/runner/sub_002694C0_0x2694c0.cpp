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

// Function: sub_002694C0
// Address: 0x2694c0 - 0x269540
void sub_002694C0_0x2694c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002694C0_0x2694c0");
#endif

    switch (ctx->pc) {
        case 0x2694e8u: goto label_2694e8;
        case 0x2694f8u: goto label_2694f8;
        default: break;
    }

    ctx->pc = 0x2694c0u;

    // 0x2694c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2694c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2694c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2694c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2694c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2694c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2694cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2694ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2694d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2694d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2694d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2694d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2694d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2694d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2694dc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2694dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2694e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2694E0u;
    {
        const bool branch_taken_0x2694e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694e0) {
            ctx->pc = 0x26950Cu;
            goto label_26950c;
        }
    }
    ctx->pc = 0x2694E8u;
label_2694e8:
    // 0x2694e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2694e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2694ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2694f0: 0xc09a580  jal         func_269600
    ctx->pc = 0x2694F0u;
    SET_GPR_U32(ctx, 31, 0x2694F8u);
    ctx->pc = 0x269600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269600u, 0x2694F0u, 0x2694F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694F8u;
label_2694f8:
    // 0x2694f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2694fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x269500: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x269500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x269504: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x269504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x269508: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x269508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26950c:
    // 0x26950c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269510: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x269510u;
    {
        const bool branch_taken_0x269510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269510) {
            ctx->pc = 0x2694E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2694e8;
        }
    }
    ctx->pc = 0x269518u;
    // 0x269518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x269518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26951c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269528: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x269528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26952c: 0x3e00008  jr          $ra
    ctx->pc = 0x26952Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26952Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269534u;
    // 0x269534: 0x0  nop
    ctx->pc = 0x269534u;
    // NOP
    // 0x269538: 0x0  nop
    ctx->pc = 0x269538u;
    // NOP
    // 0x26953c: 0x0  nop
    ctx->pc = 0x26953cu;
    // NOP
    ctx->pc = 0x269540u;
}
