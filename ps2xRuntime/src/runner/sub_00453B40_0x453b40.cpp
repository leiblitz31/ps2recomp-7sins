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

// Function: sub_00453B40
// Address: 0x453b40 - 0x453ba0
void sub_00453B40_0x453b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453B40_0x453b40");
#endif

    switch (ctx->pc) {
        case 0x453b64u: goto label_453b64;
        default: break;
    }

    ctx->pc = 0x453b40u;

    // 0x453b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x453b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x453b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x453b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x453b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x453b4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x453b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x453b50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x453b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x453b54: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x453b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x453b58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x453b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x453b5c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x453B5Cu;
    SET_GPR_U32(ctx, 31, 0x453B64u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x453B5Cu, 0x453B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453B64u;
label_453b64:
    // 0x453b64: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x453b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x453b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x453B68u;
    {
        const bool branch_taken_0x453b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453b68) {
            ctx->pc = 0x453B80u;
            goto label_453b80;
        }
    }
    ctx->pc = 0x453B70u;
    // 0x453b70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x453b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x453b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x453b78: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x453b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x453b7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x453b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_453b80:
    // 0x453b80: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x453b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x453b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x453b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453b8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x453b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x453b90: 0x3e00008  jr          $ra
    ctx->pc = 0x453B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453B98u;
    // 0x453b98: 0x0  nop
    ctx->pc = 0x453b98u;
    // NOP
    // 0x453b9c: 0x0  nop
    ctx->pc = 0x453b9cu;
    // NOP
    ctx->pc = 0x453ba0u;
}
