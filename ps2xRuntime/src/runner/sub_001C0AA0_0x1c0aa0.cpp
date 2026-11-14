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

// Function: sub_001C0AA0
// Address: 0x1c0aa0 - 0x1c0b40
void sub_001C0AA0_0x1c0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AA0_0x1c0aa0");
#endif

    switch (ctx->pc) {
        case 0x1c0abcu: goto label_1c0abc;
        case 0x1c0ad0u: goto label_1c0ad0;
        case 0x1c0af8u: goto label_1c0af8;
        case 0x1c0b14u: goto label_1c0b14;
        default: break;
    }

    ctx->pc = 0x1c0aa0u;

    // 0x1c0aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c0aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0aac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c0ab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ab4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0AB4u;
    {
        const bool branch_taken_0x1c0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ab4) {
            ctx->pc = 0x1C0B04u;
            goto label_1c0b04;
        }
    }
    ctx->pc = 0x1C0ABCu;
label_1c0abc:
    // 0x1c0abc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0ac0: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ac8: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1C0AC8u;
    SET_GPR_U32(ctx, 31, 0x1C0AD0u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1C0AC8u, 0x1C0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD0u;
label_1c0ad0:
    // 0x1c0ad0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1c0ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0ad4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c0ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0adc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0ADCu;
    {
        const bool branch_taken_0x1c0adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0adc) {
            ctx->pc = 0x1C0B00u;
            goto label_1c0b00;
        }
    }
    ctx->pc = 0x1C0AE4u;
    // 0x1c0ae4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0ae8: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af0: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1C0AF0u;
    SET_GPR_U32(ctx, 31, 0x1C0AF8u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1C0AF0u, 0x1C0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AF8u;
label_1c0af8:
    // 0x1c0af8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C0AF8u;
    {
        const bool branch_taken_0x1c0af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0af8) {
            ctx->pc = 0x1C0B24u;
            goto label_1c0b24;
        }
    }
    ctx->pc = 0x1C0B00u;
label_1c0b00:
    // 0x1c0b00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0b04:
    // 0x1c0b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0b08: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0b0c: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1C0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B14u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1C0B0Cu, 0x1C0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B14u;
label_1c0b14:
    // 0x1c0b14: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c0b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0b18: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C0B18u;
    {
        const bool branch_taken_0x1c0b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b18) {
            ctx->pc = 0x1C0ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0abc;
        }
    }
    ctx->pc = 0x1C0B20u;
    // 0x1c0b20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b24:
    // 0x1c0b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0b2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c0b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c0b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0B38u;
    // 0x1c0b38: 0x0  nop
    ctx->pc = 0x1c0b38u;
    // NOP
    // 0x1c0b3c: 0x0  nop
    ctx->pc = 0x1c0b3cu;
    // NOP
    ctx->pc = 0x1c0b40u;
}
