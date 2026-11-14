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

// Function: sub_002D1800
// Address: 0x2d1800 - 0x2d1860
void sub_002D1800_0x2d1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1800_0x2d1800");
#endif

    switch (ctx->pc) {
        case 0x2d1824u: goto label_2d1824;
        default: break;
    }

    ctx->pc = 0x2d1800u;

    // 0x2d1800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d180c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d180cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d1810: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d1810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d1814: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1818: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d1818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d181c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D181Cu;
    SET_GPR_U32(ctx, 31, 0x2D1824u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D181Cu, 0x2D1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1824u;
label_2d1824:
    // 0x2d1824: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2d1824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2d1828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1828u;
    {
        const bool branch_taken_0x2d1828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1828) {
            ctx->pc = 0x2D1840u;
            goto label_2d1840;
        }
    }
    ctx->pc = 0x2D1830u;
    // 0x2d1830: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d1830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1834: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1838: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2d1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d183c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d183cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2d1840:
    // 0x2d1840: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2d1840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d1844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d184c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d184cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d1850: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1858u;
    // 0x2d1858: 0x0  nop
    ctx->pc = 0x2d1858u;
    // NOP
    // 0x2d185c: 0x0  nop
    ctx->pc = 0x2d185cu;
    // NOP
    ctx->pc = 0x2d1860u;
}
