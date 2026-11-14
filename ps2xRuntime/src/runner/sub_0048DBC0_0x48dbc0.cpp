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

// Function: sub_0048DBC0
// Address: 0x48dbc0 - 0x48dc40
void sub_0048DBC0_0x48dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DBC0_0x48dbc0");
#endif

    switch (ctx->pc) {
        case 0x48dbe4u: goto label_48dbe4;
        case 0x48dbfcu: goto label_48dbfc;
        default: break;
    }

    ctx->pc = 0x48dbc0u;

    // 0x48dbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48dbc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48dbc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48dbcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48dbd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x48dbd4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x48dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x48dbd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48dbdc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x48DBDCu;
    SET_GPR_U32(ctx, 31, 0x48DBE4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48DBDCu, 0x48DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DBE4u;
label_48dbe4:
    // 0x48dbe4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x48dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x48dbe8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48DBE8u;
    {
        const bool branch_taken_0x48dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dbe8) {
            ctx->pc = 0x48DC20u;
            goto label_48dc20;
        }
    }
    ctx->pc = 0x48DBF0u;
    // 0x48dbf0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x48dbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48dbf4: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x48dbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x48dbf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x48dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48dbfc:
    // 0x48dbfc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x48dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48dc00: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x48dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x48dc04: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x48dc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x48dc08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x48dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x48dc0c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x48dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x48dc10: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x48dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x48dc14: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x48dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x48dc18: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x48DC18u;
    {
        const bool branch_taken_0x48dc18 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x48dc18) {
            ctx->pc = 0x48DBFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dbfc;
        }
    }
    ctx->pc = 0x48DC20u;
label_48dc20:
    // 0x48dc20: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x48dc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x48dc24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48dc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48dc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dc2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x48dc2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x48DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DC38u;
    // 0x48dc38: 0x0  nop
    ctx->pc = 0x48dc38u;
    // NOP
    // 0x48dc3c: 0x0  nop
    ctx->pc = 0x48dc3cu;
    // NOP
    ctx->pc = 0x48dc40u;
}
