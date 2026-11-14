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

// Function: sub_00155F40
// Address: 0x155f40 - 0x155fa0
void sub_00155F40_0x155f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F40_0x155f40");
#endif

    switch (ctx->pc) {
        case 0x155f64u: goto label_155f64;
        default: break;
    }

    ctx->pc = 0x155f40u;

    // 0x155f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x155f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155f4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x155f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x155f50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x155f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x155f54: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x155f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155f58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155f5c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x155F5Cu;
    SET_GPR_U32(ctx, 31, 0x155F64u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x155F5Cu, 0x155F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F64u;
label_155f64:
    // 0x155f64: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x155f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x155f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155F68u;
    {
        const bool branch_taken_0x155f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f68) {
            ctx->pc = 0x155F80u;
            goto label_155f80;
        }
    }
    ctx->pc = 0x155F70u;
    // 0x155f70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155f78: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x155f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x155f7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x155f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_155f80:
    // 0x155f80: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x155f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155f90: 0x3e00008  jr          $ra
    ctx->pc = 0x155F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F98u;
    // 0x155f98: 0x0  nop
    ctx->pc = 0x155f98u;
    // NOP
    // 0x155f9c: 0x0  nop
    ctx->pc = 0x155f9cu;
    // NOP
    ctx->pc = 0x155fa0u;
}
