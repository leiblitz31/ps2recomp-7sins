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

// Function: sub_00466CF0
// Address: 0x466cf0 - 0x466da0
void sub_00466CF0_0x466cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466CF0_0x466cf0");
#endif

    ctx->pc = 0x466cf0u;

    // 0x466cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x466cf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x466cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x466cf8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x466cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x466cfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x466cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466d00: 0xaf83c038  sw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 3));
    // 0x466d04: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d08: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x466d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x466d0c: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d10: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x466d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466d14: 0xaf83c03c  sw          $v1, -0x3FC4($gp)
    ctx->pc = 0x466d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950972), GPR_U32(ctx, 3));
    // 0x466d18: 0x8f84c03c  lw          $a0, -0x3FC4($gp)
    ctx->pc = 0x466d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
    // 0x466d1c: 0x8f83c040  lw          $v1, -0x3FC0($gp)
    ctx->pc = 0x466d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950976)));
    // 0x466d20: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x466d20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x466d24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x466D24u;
    {
        const bool branch_taken_0x466d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466d24) {
            ctx->pc = 0x466D34u;
            goto label_466d34;
        }
    }
    ctx->pc = 0x466D2Cu;
    // 0x466d2c: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x466d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
    // 0x466d30: 0xaf83c040  sw          $v1, -0x3FC0($gp)
    ctx->pc = 0x466d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950976), GPR_U32(ctx, 3));
label_466d34:
    // 0x466d34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x466d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466d38: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x466d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
    // 0x466d3c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x466d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466d40: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x466d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x466d48: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d4c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x466d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x466d50: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d54: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x466d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x466d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x466d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466d5c: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d60: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x466d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x466d64: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d68: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x466d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x466d6c: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d70: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x466d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x466d74: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x466d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
    // 0x466d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x466d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x466d7c: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x466d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
    // 0x466d80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x466d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466d84: 0xaf83c000  sw          $v1, -0x4000($gp)
    ctx->pc = 0x466d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 3));
    // 0x466d88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x466d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x466d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x466D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466D94u;
    // 0x466d94: 0x0  nop
    ctx->pc = 0x466d94u;
    // NOP
    // 0x466d98: 0x0  nop
    ctx->pc = 0x466d98u;
    // NOP
    // 0x466d9c: 0x0  nop
    ctx->pc = 0x466d9cu;
    // NOP
    ctx->pc = 0x466da0u;
}
