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

// Function: sub_0025E400
// Address: 0x25e400 - 0x25e480
void sub_0025E400_0x25e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E400_0x25e400");
#endif

    switch (ctx->pc) {
        case 0x25e428u: goto label_25e428;
        case 0x25e438u: goto label_25e438;
        default: break;
    }

    ctx->pc = 0x25e400u;

    // 0x25e400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e410: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25e410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25e414: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25e414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25e418: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25e418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25e41c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E420u;
    {
        const bool branch_taken_0x25e420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e420) {
            ctx->pc = 0x25E44Cu;
            goto label_25e44c;
        }
    }
    ctx->pc = 0x25E428u;
label_25e428:
    // 0x25e428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e42c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e430: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E430u;
    SET_GPR_U32(ctx, 31, 0x25E438u);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E430u, 0x25E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E438u;
label_25e438:
    // 0x25e438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e43c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25e440: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25e440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x25e444: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e448: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25e448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e44c:
    // 0x25e44c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e450: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25E450u;
    {
        const bool branch_taken_0x25e450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e450) {
            ctx->pc = 0x25E428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e428;
        }
    }
    ctx->pc = 0x25E458u;
    // 0x25e458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e45c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e468: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25e468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25e46c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E474u;
    // 0x25e474: 0x0  nop
    ctx->pc = 0x25e474u;
    // NOP
    // 0x25e478: 0x0  nop
    ctx->pc = 0x25e478u;
    // NOP
    // 0x25e47c: 0x0  nop
    ctx->pc = 0x25e47cu;
    // NOP
    ctx->pc = 0x25e480u;
}
