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

// Function: sub_00134CA0
// Address: 0x134ca0 - 0x134d50
void sub_00134CA0_0x134ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134CA0_0x134ca0");
#endif

    switch (ctx->pc) {
        case 0x134d2cu: goto label_134d2c;
        default: break;
    }

    ctx->pc = 0x134ca0u;

    // 0x134ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134cac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x134cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x134cb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x134cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x134cb4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x134cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x134cb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x134cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134cbc: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x134CBCu;
    {
        const bool branch_taken_0x134cbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x134cbc) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134CC4u;
    // 0x134cc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x134cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134cc8: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x134CC8u;
    {
        const bool branch_taken_0x134cc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x134cc8) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134CD0u;
    // 0x134cd0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x134cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134cd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134cd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134cdc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x134cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134ce0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x134CE0u;
    {
        const bool branch_taken_0x134ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ce0) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134CE8u;
    // 0x134ce8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x134ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134cec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134cf0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x134cf4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x134cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134cf8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x134CF8u;
    {
        const bool branch_taken_0x134cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf8) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134D00u;
    // 0x134d00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x134d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134d04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134d08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134d0c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x134d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x134d10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x134d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134d14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x134d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134d18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134d1c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x134d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x134d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d24: 0xc04d354  jal         func_134D50
    ctx->pc = 0x134D24u;
    SET_GPR_U32(ctx, 31, 0x134D2Cu);
    ctx->pc = 0x134D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D50u, 0x134D24u, 0x134D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D2Cu;
label_134d2c:
    // 0x134d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134D2Cu;
    {
        const bool branch_taken_0x134d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d2c) {
            ctx->pc = 0x134D38u;
            goto label_134d38;
        }
    }
    ctx->pc = 0x134D34u;
label_134d34:
    // 0x134d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134d38:
    // 0x134d38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x134d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x134d44: 0x3e00008  jr          $ra
    ctx->pc = 0x134D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134D4Cu;
    // 0x134d4c: 0x0  nop
    ctx->pc = 0x134d4cu;
    // NOP
    ctx->pc = 0x134d50u;
}
