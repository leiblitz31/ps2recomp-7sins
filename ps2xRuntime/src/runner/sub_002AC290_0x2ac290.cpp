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

// Function: sub_002AC290
// Address: 0x2ac290 - 0x2ac390
void sub_002AC290_0x2ac290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC290_0x2ac290");
#endif

    switch (ctx->pc) {
        case 0x2ac2acu: goto label_2ac2ac;
        case 0x2ac304u: goto label_2ac304;
        case 0x2ac314u: goto label_2ac314;
        case 0x2ac340u: goto label_2ac340;
        default: break;
    }

    ctx->pc = 0x2ac290u;

    // 0x2ac290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac29c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ac29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ac2a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ac2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2a4: 0xc084f04  jal         func_213C10
    ctx->pc = 0x2AC2A4u;
    SET_GPR_U32(ctx, 31, 0x2AC2ACu);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x2AC2A4u, 0x2AC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2ACu;
label_2ac2ac:
    // 0x2ac2ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ac2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2ac2b0: 0x246364e0  addiu       $v1, $v1, 0x64E0
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25824));
    // 0x2ac2b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ac2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ac2bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2c0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2ac2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2ac2c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2c8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2ac2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2ac2cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2d0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2ac2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2ac2d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2d8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2ac2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2ac2dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2e0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2ac2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2ac2e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2e8: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2ac2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2ac2ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2f0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2ac2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2ac2f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac2f8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ac2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2ac2fc: 0xc0ab24c  jal         func_2AC930
    ctx->pc = 0x2AC2FCu;
    SET_GPR_U32(ctx, 31, 0x2AC304u);
    ctx->pc = 0x2AC930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC930u, 0x2AC2FCu, 0x2AC304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC304u;
label_2ac304:
    // 0x2ac304: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac308: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ac30c: 0xc0ab1f4  jal         func_2AC7D0
    ctx->pc = 0x2AC30Cu;
    SET_GPR_U32(ctx, 31, 0x2AC314u);
    ctx->pc = 0x2AC7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC7D0u, 0x2AC30Cu, 0x2AC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC314u;
label_2ac314:
    // 0x2ac314: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac318: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2ac318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2ac31c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac320: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2ac320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac324: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac328: 0xaf82bc68  sw          $v0, -0x4398($gp)
    ctx->pc = 0x2ac328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949992), GPR_U32(ctx, 2));
    // 0x2ac32c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac330: 0xa0400071  sb          $zero, 0x71($v0)
    ctx->pc = 0x2ac330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac334: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ac334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AC338u;
    {
        const bool branch_taken_0x2ac338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac338) {
            ctx->pc = 0x2AC360u;
            goto label_2ac360;
        }
    }
    ctx->pc = 0x2AC340u;
label_2ac340:
    // 0x2ac340: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ac340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ac344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac34c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2ac34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x2ac350: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac354: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ac354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ac358: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x2ac358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac35c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ac360:
    // 0x2ac360: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2ac360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac364: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AC364u;
    {
        const bool branch_taken_0x2ac364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac364) {
            ctx->pc = 0x2AC340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac340;
        }
    }
    ctx->pc = 0x2AC36Cu;
    // 0x2ac36c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac37c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC384u;
    // 0x2ac384: 0x0  nop
    ctx->pc = 0x2ac384u;
    // NOP
    // 0x2ac388: 0x0  nop
    ctx->pc = 0x2ac388u;
    // NOP
    // 0x2ac38c: 0x0  nop
    ctx->pc = 0x2ac38cu;
    // NOP
    ctx->pc = 0x2ac390u;
}
