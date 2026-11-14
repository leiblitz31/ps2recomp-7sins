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

// Function: sub_0025E540
// Address: 0x25e540 - 0x25e5c0
void sub_0025E540_0x25e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E540_0x25e540");
#endif

    switch (ctx->pc) {
        case 0x25e564u: goto label_25e564;
        case 0x25e57cu: goto label_25e57c;
        default: break;
    }

    ctx->pc = 0x25e540u;

    // 0x25e540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e54c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25e550: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25e550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25e554: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x25e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e558: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25e558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e55c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25E55Cu;
    SET_GPR_U32(ctx, 31, 0x25E564u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25E55Cu, 0x25E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E564u;
label_25e564:
    // 0x25e564: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x25e564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x25e568: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25E568u;
    {
        const bool branch_taken_0x25e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e568) {
            ctx->pc = 0x25E5A0u;
            goto label_25e5a0;
        }
    }
    ctx->pc = 0x25E570u;
    // 0x25e570: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x25e570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e574: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x25e574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25e578: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25e57c:
    // 0x25e57c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25e580: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x25e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25e584: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x25e584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25e588: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25e58c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x25e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x25e590: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x25e590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x25e594: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x25e594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x25e598: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25E598u;
    {
        const bool branch_taken_0x25e598 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x25e598) {
            ctx->pc = 0x25E57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e57c;
        }
    }
    ctx->pc = 0x25E5A0u;
label_25e5a0:
    // 0x25e5a0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25e5a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e5ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E5B8u;
    // 0x25e5b8: 0x0  nop
    ctx->pc = 0x25e5b8u;
    // NOP
    // 0x25e5bc: 0x0  nop
    ctx->pc = 0x25e5bcu;
    // NOP
    ctx->pc = 0x25e5c0u;
}
