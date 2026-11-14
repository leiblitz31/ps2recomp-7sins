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

// Function: sub_00451BD0
// Address: 0x451bd0 - 0x451c70
void sub_00451BD0_0x451bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451BD0_0x451bd0");
#endif

    switch (ctx->pc) {
        case 0x451bf4u: goto label_451bf4;
        case 0x451c00u: goto label_451c00;
        case 0x451c0cu: goto label_451c0c;
        case 0x451c20u: goto label_451c20;
        case 0x451c3cu: goto label_451c3c;
        case 0x451c50u: goto label_451c50;
        default: break;
    }

    ctx->pc = 0x451bd0u;

    // 0x451bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x451bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x451bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x451bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x451bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x451bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x451bdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x451bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x451be0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x451be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x451be4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x451be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451be8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x451bec: 0xc11452c  jal         func_4514B0
    ctx->pc = 0x451BECu;
    SET_GPR_U32(ctx, 31, 0x451BF4u);
    ctx->pc = 0x4514B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4514B0u, 0x451BECu, 0x451BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451BF4u;
label_451bf4:
    // 0x451bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x451bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451bf8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x451BF8u;
    {
        const bool branch_taken_0x451bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451bf8) {
            ctx->pc = 0x451C40u;
            goto label_451c40;
        }
    }
    ctx->pc = 0x451C00u;
label_451c00:
    // 0x451c00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x451c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451c04: 0xc041874  jal         func_1061D0
    ctx->pc = 0x451C04u;
    SET_GPR_U32(ctx, 31, 0x451C0Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x451C04u, 0x451C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C0Cu;
label_451c0c:
    // 0x451c0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x451c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x451c10: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x451c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x451c14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x451c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c18: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x451C18u;
    SET_GPR_U32(ctx, 31, 0x451C20u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x451C18u, 0x451C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C20u;
label_451c20:
    // 0x451c20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x451C20u;
    {
        const bool branch_taken_0x451c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451c20) {
            ctx->pc = 0x451C3Cu;
            goto label_451c3c;
        }
    }
    ctx->pc = 0x451C28u;
    // 0x451c28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x451c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451c2c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x451c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x451c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c34: 0xc1146b8  jal         func_451AE0
    ctx->pc = 0x451C34u;
    SET_GPR_U32(ctx, 31, 0x451C3Cu);
    ctx->pc = 0x451AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451AE0u, 0x451C34u, 0x451C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C3Cu;
label_451c3c:
    // 0x451c3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x451c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_451c40:
    // 0x451c40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x451c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451c44: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x451c48: 0xc1146b0  jal         func_451AC0
    ctx->pc = 0x451C48u;
    SET_GPR_U32(ctx, 31, 0x451C50u);
    ctx->pc = 0x451AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451AC0u, 0x451C48u, 0x451C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C50u;
label_451c50:
    // 0x451c50: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x451C50u;
    {
        const bool branch_taken_0x451c50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x451c50) {
            ctx->pc = 0x451C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451c00;
        }
    }
    ctx->pc = 0x451C58u;
    // 0x451c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x451c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451c60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x451c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x451c64: 0x3e00008  jr          $ra
    ctx->pc = 0x451C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451C6Cu;
    // 0x451c6c: 0x0  nop
    ctx->pc = 0x451c6cu;
    // NOP
    ctx->pc = 0x451c70u;
}
