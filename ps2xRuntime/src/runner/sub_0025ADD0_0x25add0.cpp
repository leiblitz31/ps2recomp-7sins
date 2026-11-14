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

// Function: sub_0025ADD0
// Address: 0x25add0 - 0x25ae60
void sub_0025ADD0_0x25add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ADD0_0x25add0");
#endif

    switch (ctx->pc) {
        case 0x25ae48u: goto label_25ae48;
        default: break;
    }

    ctx->pc = 0x25add0u;

    // 0x25add0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25add4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25add4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25add8: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25add8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25addc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25addcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ade0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ade4: 0xa0640110  sb          $a0, 0x110($v1)
    ctx->pc = 0x25ade4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 272), (uint8_t)GPR_U32(ctx, 4));
    // 0x25ade8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25adec: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ADF4u;
    // 0x25adf4: 0x0  nop
    ctx->pc = 0x25adf4u;
    // NOP
    // 0x25adf8: 0x0  nop
    ctx->pc = 0x25adf8u;
    // NOP
    // 0x25adfc: 0x0  nop
    ctx->pc = 0x25adfcu;
    // NOP
    // 0x25ae00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ae08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25ae0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25ae10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25ae14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ae18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25ae1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AE1Cu;
    {
        const bool branch_taken_0x25ae1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ae1c) {
            ctx->pc = 0x25AE2Cu;
            goto label_25ae2c;
        }
    }
    ctx->pc = 0x25AE24u;
    // 0x25ae24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AE24u;
    {
        const bool branch_taken_0x25ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae24) {
            ctx->pc = 0x25AE48u;
            goto label_25ae48;
        }
    }
    ctx->pc = 0x25AE2Cu;
label_25ae2c:
    // 0x25ae2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ae30: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AE30u;
    {
        const bool branch_taken_0x25ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ae30) {
            ctx->pc = 0x25AE48u;
            goto label_25ae48;
        }
    }
    ctx->pc = 0x25AE38u;
    // 0x25ae38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ae3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ae40: 0xc096b98  jal         func_25AE60
    ctx->pc = 0x25AE40u;
    SET_GPR_U32(ctx, 31, 0x25AE48u);
    ctx->pc = 0x25AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE60u, 0x25AE40u, 0x25AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE48u;
label_25ae48:
    // 0x25ae48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ae4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ae4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ae50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AE5Cu;
    // 0x25ae5c: 0x0  nop
    ctx->pc = 0x25ae5cu;
    // NOP
    ctx->pc = 0x25ae60u;
}
