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

// Function: sub_00221A00
// Address: 0x221a00 - 0x221a60
void sub_00221A00_0x221a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221A00_0x221a00");
#endif

    switch (ctx->pc) {
        case 0x221a24u: goto label_221a24;
        default: break;
    }

    ctx->pc = 0x221a00u;

    // 0x221a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221a0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x221a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x221a10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x221a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x221a14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x221a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221a18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221a1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x221A1Cu;
    SET_GPR_U32(ctx, 31, 0x221A24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x221A1Cu, 0x221A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A24u;
label_221a24:
    // 0x221a24: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x221a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x221a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221A28u;
    {
        const bool branch_taken_0x221a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a28) {
            ctx->pc = 0x221A40u;
            goto label_221a40;
        }
    }
    ctx->pc = 0x221A30u;
    // 0x221a30: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221a34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x221a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221a38: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x221a3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x221a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_221a40:
    // 0x221a40: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x221a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x221a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221a50: 0x3e00008  jr          $ra
    ctx->pc = 0x221A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A58u;
    // 0x221a58: 0x0  nop
    ctx->pc = 0x221a58u;
    // NOP
    // 0x221a5c: 0x0  nop
    ctx->pc = 0x221a5cu;
    // NOP
    ctx->pc = 0x221a60u;
}
