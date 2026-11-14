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

// Function: sub_002E7AF0
// Address: 0x2e7af0 - 0x2e7b90
void sub_002E7AF0_0x2e7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7AF0_0x2e7af0");
#endif

    switch (ctx->pc) {
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b20u: goto label_2e7b20;
        case 0x2e7b2cu: goto label_2e7b2c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b68u: goto label_2e7b68;
        default: break;
    }

    ctx->pc = 0x2e7af0u;

    // 0x2e7af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e7af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7afc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e7b00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e7b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7b08: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7b0c: 0xc0b9a28  jal         func_2E68A0
    ctx->pc = 0x2E7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B14u);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E7B0Cu, 0x2E7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B14u;
label_2e7b14:
    // 0x2e7b14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E7B18u;
    {
        const bool branch_taken_0x2e7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b18) {
            ctx->pc = 0x2E7B58u;
            goto label_2e7b58;
        }
    }
    ctx->pc = 0x2E7B20u;
label_2e7b20:
    // 0x2e7b20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7b24: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2E7B24u;
    SET_GPR_U32(ctx, 31, 0x2E7B2Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2E7B24u, 0x2E7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B2Cu;
label_2e7b2c:
    // 0x2e7b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7b30: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x2e7b34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b38: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2E7B38u;
    SET_GPR_U32(ctx, 31, 0x2E7B40u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2E7B38u, 0x2E7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B40u;
label_2e7b40:
    // 0x2e7b40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7B40u;
    {
        const bool branch_taken_0x2e7b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b40) {
            ctx->pc = 0x2E7B54u;
            goto label_2e7b54;
        }
    }
    ctx->pc = 0x2E7B48u;
    // 0x2e7b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7b4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7B4Cu;
    {
        const bool branch_taken_0x2e7b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b4c) {
            ctx->pc = 0x2E7B74u;
            goto label_2e7b74;
        }
    }
    ctx->pc = 0x2E7B54u;
label_2e7b54:
    // 0x2e7b54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e7b58:
    // 0x2e7b58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7b5c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7b60: 0xc0b9a20  jal         func_2E6880
    ctx->pc = 0x2E7B60u;
    SET_GPR_U32(ctx, 31, 0x2E7B68u);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E7B60u, 0x2E7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B68u;
label_2e7b68:
    // 0x2e7b68: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E7B68u;
    {
        const bool branch_taken_0x2e7b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7b68) {
            ctx->pc = 0x2E7B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7b20;
        }
    }
    ctx->pc = 0x2E7B70u;
    // 0x2e7b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b74:
    // 0x2e7b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7b7c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7B88u;
    // 0x2e7b88: 0x0  nop
    ctx->pc = 0x2e7b88u;
    // NOP
    // 0x2e7b8c: 0x0  nop
    ctx->pc = 0x2e7b8cu;
    // NOP
    ctx->pc = 0x2e7b90u;
}
