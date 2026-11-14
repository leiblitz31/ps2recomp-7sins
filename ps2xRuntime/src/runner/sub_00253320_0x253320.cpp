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

// Function: sub_00253320
// Address: 0x253320 - 0x253380
void sub_00253320_0x253320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253320_0x253320");
#endif

    switch (ctx->pc) {
        case 0x253344u: goto label_253344;
        default: break;
    }

    ctx->pc = 0x253320u;

    // 0x253320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x253324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25332c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x253330: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x253330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x253334: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x253334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253338: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x253338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25333c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25333Cu;
    SET_GPR_U32(ctx, 31, 0x253344u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25333Cu, 0x253344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253344u;
label_253344:
    // 0x253344: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x253344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x253348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253348u;
    {
        const bool branch_taken_0x253348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253348) {
            ctx->pc = 0x253360u;
            goto label_253360;
        }
    }
    ctx->pc = 0x253350u;
    // 0x253350: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253358: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x253358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25335c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25335cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_253360:
    // 0x253360: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x253364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25336c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25336cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253370: 0x3e00008  jr          $ra
    ctx->pc = 0x253370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253378u;
    // 0x253378: 0x0  nop
    ctx->pc = 0x253378u;
    // NOP
    // 0x25337c: 0x0  nop
    ctx->pc = 0x25337cu;
    // NOP
    ctx->pc = 0x253380u;
}
