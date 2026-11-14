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

// Function: sub_00464FA0
// Address: 0x464fa0 - 0x465020
void sub_00464FA0_0x464fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464FA0_0x464fa0");
#endif

    switch (ctx->pc) {
        case 0x464fc8u: goto label_464fc8;
        case 0x464fdcu: goto label_464fdc;
        case 0x465000u: goto label_465000;
        default: break;
    }

    ctx->pc = 0x464fa0u;

    // 0x464fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x464fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x464fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x464fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x464fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464fac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x464facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x464fb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x464fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x464fb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x464fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464fb8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x464fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x464fbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x464fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x464FC0u;
    {
        const bool branch_taken_0x464fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464fc0) {
            ctx->pc = 0x464FF0u;
            goto label_464ff0;
        }
    }
    ctx->pc = 0x464FC8u;
label_464fc8:
    // 0x464fc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x464fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x464fcc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x464fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464fd0: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x464fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x464fd4: 0xc061e3c  jal         func_1878F0
    ctx->pc = 0x464FD4u;
    SET_GPR_U32(ctx, 31, 0x464FDCu);
    ctx->pc = 0x1878F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878F0u, 0x464FD4u, 0x464FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464FDCu;
label_464fdc:
    // 0x464fdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464FDCu;
    {
        const bool branch_taken_0x464fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464fdc) {
            ctx->pc = 0x464FF0u;
            goto label_464ff0;
        }
    }
    ctx->pc = 0x464FE4u;
    // 0x464fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x464fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x464FE8u;
    {
        const bool branch_taken_0x464fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464fe8) {
            ctx->pc = 0x46500Cu;
            goto label_46500c;
        }
    }
    ctx->pc = 0x464FF0u;
label_464ff0:
    // 0x464ff0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x464ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464ff4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x464ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x464ff8: 0xc061f44  jal         func_187D10
    ctx->pc = 0x464FF8u;
    SET_GPR_U32(ctx, 31, 0x465000u);
    ctx->pc = 0x187D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D10u, 0x464FF8u, 0x465000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465000u;
label_465000:
    // 0x465000: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x465000u;
    {
        const bool branch_taken_0x465000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465000) {
            ctx->pc = 0x464FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464fc8;
        }
    }
    ctx->pc = 0x465008u;
    // 0x465008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46500c:
    // 0x46500c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46500cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465014: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x465014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465018: 0x3e00008  jr          $ra
    ctx->pc = 0x465018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465020u;
}
