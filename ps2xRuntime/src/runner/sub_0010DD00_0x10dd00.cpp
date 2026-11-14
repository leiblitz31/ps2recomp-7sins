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

// Function: sub_0010DD00
// Address: 0x10dd00 - 0x10dd90
void sub_0010DD00_0x10dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DD00_0x10dd00");
#endif

    switch (ctx->pc) {
        case 0x10dd58u: goto label_10dd58;
        default: break;
    }

    ctx->pc = 0x10dd00u;

    // 0x10dd00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10dd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10dd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10dd0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10dd10: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x10dd10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x10dd14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10dd18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dd20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD20u;
    {
        const bool branch_taken_0x10dd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd20) {
            ctx->pc = 0x10DD34u;
            goto label_10dd34;
        }
    }
    ctx->pc = 0x10DD28u;
    // 0x10dd28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10dd2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10DD2Cu;
    {
        const bool branch_taken_0x10dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dd2c) {
            ctx->pc = 0x10DD7Cu;
            goto label_10dd7c;
        }
    }
    ctx->pc = 0x10DD34u;
label_10dd34:
    // 0x10dd34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dd3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10dd40: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10dd44: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x10dd44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dd48: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x10dd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x10dd4c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x10dd4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x10dd50: 0xc119260  jal         func_464980
    ctx->pc = 0x10DD50u;
    SET_GPR_U32(ctx, 31, 0x10DD58u);
    ctx->pc = 0x464980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464980u, 0x10DD50u, 0x10DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD58u;
label_10dd58:
    // 0x10dd58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd5c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD5Cu;
    {
        const bool branch_taken_0x10dd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd5c) {
            ctx->pc = 0x10DD70u;
            goto label_10dd70;
        }
    }
    ctx->pc = 0x10DD64u;
    // 0x10dd64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10dd68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD68u;
    {
        const bool branch_taken_0x10dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dd68) {
            ctx->pc = 0x10DD7Cu;
            goto label_10dd7c;
        }
    }
    ctx->pc = 0x10DD70u;
label_10dd70:
    // 0x10dd70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dd78: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x10dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10dd7c:
    // 0x10dd7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dd80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dd84: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10dd84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD90u;
}
