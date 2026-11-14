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

// Function: sub_00154B90
// Address: 0x154b90 - 0x154c70
void sub_00154B90_0x154b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154B90_0x154b90");
#endif

    switch (ctx->pc) {
        case 0x154bacu: goto label_154bac;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd8u: goto label_154bd8;
        case 0x154be4u: goto label_154be4;
        case 0x154bf0u: goto label_154bf0;
        case 0x154c00u: goto label_154c00;
        case 0x154c14u: goto label_154c14;
        case 0x154c30u: goto label_154c30;
        case 0x154c44u: goto label_154c44;
        case 0x154c54u: goto label_154c54;
        default: break;
    }

    ctx->pc = 0x154b90u;

    // 0x154b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154b98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x154b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x154b9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x154b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x154ba0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154ba4: 0xc055398  jal         func_154E60
    ctx->pc = 0x154BA4u;
    SET_GPR_U32(ctx, 31, 0x154BACu);
    ctx->pc = 0x154E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E60u, 0x154BA4u, 0x154BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BACu;
label_154bac:
    // 0x154bac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x154bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154bb0: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x154bb4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x154bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x154bb8: 0xc055370  jal         func_154DC0
    ctx->pc = 0x154BB8u;
    SET_GPR_U32(ctx, 31, 0x154BC0u);
    ctx->pc = 0x154DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DC0u, 0x154BB8u, 0x154BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC0u;
label_154bc0:
    // 0x154bc0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154bc4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x154bc8: 0xc055360  jal         func_154D80
    ctx->pc = 0x154BC8u;
    SET_GPR_U32(ctx, 31, 0x154BD0u);
    ctx->pc = 0x154D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D80u, 0x154BC8u, 0x154BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BD0u;
label_154bd0:
    // 0x154bd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x154BD0u;
    {
        const bool branch_taken_0x154bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bd0) {
            ctx->pc = 0x154C30u;
            goto label_154c30;
        }
    }
    ctx->pc = 0x154BD8u;
label_154bd8:
    // 0x154bd8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154bdc: 0xc055358  jal         func_154D60
    ctx->pc = 0x154BDCu;
    SET_GPR_U32(ctx, 31, 0x154BE4u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x154BDCu, 0x154BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BE4u;
label_154be4:
    // 0x154be4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154be8: 0xc041874  jal         func_1061D0
    ctx->pc = 0x154BE8u;
    SET_GPR_U32(ctx, 31, 0x154BF0u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x154BE8u, 0x154BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BF0u;
label_154bf0:
    // 0x154bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bf4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x154bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154bf8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x154BF8u;
    SET_GPR_U32(ctx, 31, 0x154C00u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x154BF8u, 0x154C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C00u;
label_154c00:
    // 0x154c00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154C00u;
    {
        const bool branch_taken_0x154c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c00) {
            ctx->pc = 0x154C24u;
            goto label_154c24;
        }
    }
    ctx->pc = 0x154C08u;
    // 0x154c08: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154c0c: 0xc055358  jal         func_154D60
    ctx->pc = 0x154C0Cu;
    SET_GPR_U32(ctx, 31, 0x154C14u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x154C0Cu, 0x154C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C14u;
label_154c14:
    // 0x154c14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154c18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x154c1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x154C1Cu;
    {
        const bool branch_taken_0x154c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c1c) {
            ctx->pc = 0x154C60u;
            goto label_154c60;
        }
    }
    ctx->pc = 0x154C24u;
label_154c24:
    // 0x154c24: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154c28: 0xc055348  jal         func_154D20
    ctx->pc = 0x154C28u;
    SET_GPR_U32(ctx, 31, 0x154C30u);
    ctx->pc = 0x154D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D20u, 0x154C28u, 0x154C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C30u;
label_154c30:
    // 0x154c30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154c34: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x154c38: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x154c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x154c3c: 0xc05531c  jal         func_154C70
    ctx->pc = 0x154C3Cu;
    SET_GPR_U32(ctx, 31, 0x154C44u);
    ctx->pc = 0x154C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154C70u, 0x154C3Cu, 0x154C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C44u;
label_154c44:
    // 0x154c44: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x154c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x154c48: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x154c4c: 0xc041998  jal         func_106660
    ctx->pc = 0x154C4Cu;
    SET_GPR_U32(ctx, 31, 0x154C54u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x154C4Cu, 0x154C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C54u;
label_154c54:
    // 0x154c54: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x154C54u;
    {
        const bool branch_taken_0x154c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c54) {
            ctx->pc = 0x154BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154C5Cu;
    // 0x154c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154c60:
    // 0x154c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154c64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x154c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x154c68: 0x3e00008  jr          $ra
    ctx->pc = 0x154C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154C70u;
}
