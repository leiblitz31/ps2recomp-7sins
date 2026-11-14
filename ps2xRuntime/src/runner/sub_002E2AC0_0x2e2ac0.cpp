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

// Function: sub_002E2AC0
// Address: 0x2e2ac0 - 0x2e2b70
void sub_002E2AC0_0x2e2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2AC0_0x2e2ac0");
#endif

    switch (ctx->pc) {
        case 0x2e2ac0u: goto label_2e2ac0;
        case 0x2e2ac4u: goto label_2e2ac4;
        case 0x2e2ac8u: goto label_2e2ac8;
        case 0x2e2accu: goto label_2e2acc;
        case 0x2e2ad0u: goto label_2e2ad0;
        case 0x2e2ad4u: goto label_2e2ad4;
        case 0x2e2ad8u: goto label_2e2ad8;
        case 0x2e2adcu: goto label_2e2adc;
        case 0x2e2ae0u: goto label_2e2ae0;
        case 0x2e2ae4u: goto label_2e2ae4;
        case 0x2e2ae8u: goto label_2e2ae8;
        case 0x2e2aecu: goto label_2e2aec;
        case 0x2e2af0u: goto label_2e2af0;
        case 0x2e2af4u: goto label_2e2af4;
        case 0x2e2af8u: goto label_2e2af8;
        case 0x2e2afcu: goto label_2e2afc;
        case 0x2e2b00u: goto label_2e2b00;
        case 0x2e2b04u: goto label_2e2b04;
        case 0x2e2b08u: goto label_2e2b08;
        case 0x2e2b0cu: goto label_2e2b0c;
        case 0x2e2b10u: goto label_2e2b10;
        case 0x2e2b14u: goto label_2e2b14;
        case 0x2e2b18u: goto label_2e2b18;
        case 0x2e2b1cu: goto label_2e2b1c;
        case 0x2e2b20u: goto label_2e2b20;
        case 0x2e2b24u: goto label_2e2b24;
        case 0x2e2b28u: goto label_2e2b28;
        case 0x2e2b2cu: goto label_2e2b2c;
        case 0x2e2b30u: goto label_2e2b30;
        case 0x2e2b34u: goto label_2e2b34;
        case 0x2e2b38u: goto label_2e2b38;
        case 0x2e2b3cu: goto label_2e2b3c;
        case 0x2e2b40u: goto label_2e2b40;
        case 0x2e2b44u: goto label_2e2b44;
        case 0x2e2b48u: goto label_2e2b48;
        case 0x2e2b4cu: goto label_2e2b4c;
        case 0x2e2b50u: goto label_2e2b50;
        case 0x2e2b54u: goto label_2e2b54;
        case 0x2e2b58u: goto label_2e2b58;
        case 0x2e2b5cu: goto label_2e2b5c;
        case 0x2e2b60u: goto label_2e2b60;
        case 0x2e2b64u: goto label_2e2b64;
        case 0x2e2b68u: goto label_2e2b68;
        case 0x2e2b6cu: goto label_2e2b6c;
        default: break;
    }

    ctx->pc = 0x2e2ac0u;

label_2e2ac0:
    // 0x2e2ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e2ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e2ac4:
    // 0x2e2ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e2ac8:
    // 0x2e2ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e2acc:
    // 0x2e2acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e2ad0:
    // 0x2e2ad0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2e2ad4:
    // 0x2e2ad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2ad8:
    // 0x2e2ad8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e2adc:
    if (ctx->pc == 0x2E2ADCu) {
        ctx->pc = 0x2E2AE0u;
        goto label_2e2ae0;
    }
    ctx->pc = 0x2E2AD8u;
    {
        const bool branch_taken_0x2e2ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ad8) {
            ctx->pc = 0x2E2AE8u;
            goto label_2e2ae8;
        }
    }
    ctx->pc = 0x2E2AE0u;
label_2e2ae0:
    // 0x2e2ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2ae4:
    // 0x2e2ae4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e2ae8:
    // 0x2e2ae8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2aec:
    // 0x2e2aec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e2af0:
    // 0x2e2af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e2af4:
    // 0x2e2af4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2e2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e2af8:
    // 0x2e2af8: 0xc119b68  jal         func_466DA0
label_2e2afc:
    if (ctx->pc == 0x2E2AFCu) {
        ctx->pc = 0x2E2B00u;
        goto label_2e2b00;
    }
    ctx->pc = 0x2E2AF8u;
    SET_GPR_U32(ctx, 31, 0x2E2B00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E2AF8u, 0x2E2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B00u;
label_2e2b00:
    // 0x2e2b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2b04:
    // 0x2e2b04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2e2b08:
    if (ctx->pc == 0x2E2B08u) {
        ctx->pc = 0x2E2B0Cu;
        goto label_2e2b0c;
    }
    ctx->pc = 0x2E2B04u;
    {
        const bool branch_taken_0x2e2b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b04) {
            ctx->pc = 0x2E2B18u;
            goto label_2e2b18;
        }
    }
    ctx->pc = 0x2E2B0Cu;
label_2e2b0c:
    // 0x2e2b0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e2b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e2b10:
    // 0x2e2b10: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e2b14:
    if (ctx->pc == 0x2E2B14u) {
        ctx->pc = 0x2E2B18u;
        goto label_2e2b18;
    }
    ctx->pc = 0x2E2B10u;
    {
        const bool branch_taken_0x2e2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b10) {
            ctx->pc = 0x2E2B4Cu;
            goto label_2e2b4c;
        }
    }
    ctx->pc = 0x2E2B18u;
label_2e2b18:
    // 0x2e2b18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2b1c:
    // 0x2e2b1c: 0xc0ba088  jal         func_2E8220
label_2e2b20:
    if (ctx->pc == 0x2E2B20u) {
        ctx->pc = 0x2E2B24u;
        goto label_2e2b24;
    }
    ctx->pc = 0x2E2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2B24u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E2B1Cu, 0x2E2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B24u;
label_2e2b24:
    // 0x2e2b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2b28:
    // 0x2e2b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2b2c:
    // 0x2e2b2c: 0xc0ba088  jal         func_2E8220
label_2e2b30:
    if (ctx->pc == 0x2E2B30u) {
        ctx->pc = 0x2E2B34u;
        goto label_2e2b34;
    }
    ctx->pc = 0x2E2B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E2B34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E2B2Cu, 0x2E2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B34u;
label_2e2b34:
    // 0x2e2b34: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_2e2b38:
    if (ctx->pc == 0x2E2B38u) {
        ctx->pc = 0x2E2B3Cu;
        goto label_2e2b3c;
    }
    ctx->pc = 0x2E2B34u;
    {
        const bool branch_taken_0x2e2b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b34) {
            ctx->pc = 0x2E2AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2ae8;
        }
    }
    ctx->pc = 0x2E2B3Cu;
label_2e2b3c:
    // 0x2e2b3c: 0x200f809  jalr        $s0
label_2e2b40:
    if (ctx->pc == 0x2E2B40u) {
        ctx->pc = 0x2E2B44u;
        goto label_2e2b44;
    }
    ctx->pc = 0x2E2B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2E2B44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2B3Cu, 0x2E2B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2B44u;
label_2e2b44:
    // 0x2e2b44: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2e2b48:
    if (ctx->pc == 0x2E2B48u) {
        ctx->pc = 0x2E2B4Cu;
        goto label_2e2b4c;
    }
    ctx->pc = 0x2E2B44u;
    {
        const bool branch_taken_0x2e2b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b44) {
            ctx->pc = 0x2E2AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2ae8;
        }
    }
    ctx->pc = 0x2E2B4Cu;
label_2e2b4c:
    // 0x2e2b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2b50:
    // 0x2e2b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2b54:
    // 0x2e2b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2b58:
    // 0x2e2b58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e2b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e2b5c:
    // 0x2e2b5c: 0x3e00008  jr          $ra
label_2e2b60:
    if (ctx->pc == 0x2E2B60u) {
        ctx->pc = 0x2E2B64u;
        goto label_2e2b64;
    }
    ctx->pc = 0x2E2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2B64u;
label_2e2b64:
    // 0x2e2b64: 0x0  nop
    ctx->pc = 0x2e2b64u;
    // NOP
label_2e2b68:
    // 0x2e2b68: 0x0  nop
    ctx->pc = 0x2e2b68u;
    // NOP
label_2e2b6c:
    // 0x2e2b6c: 0x0  nop
    ctx->pc = 0x2e2b6cu;
    // NOP
    ctx->pc = 0x2e2b70u;
}
