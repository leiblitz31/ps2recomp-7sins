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

// Function: sub_001BBAA0
// Address: 0x1bbaa0 - 0x1bbb90
void sub_001BBAA0_0x1bbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAA0_0x1bbaa0");
#endif

    switch (ctx->pc) {
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb58u: goto label_1bbb58;
        default: break;
    }

    ctx->pc = 0x1bbaa0u;

    // 0x1bbaa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bbaa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bbaa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbaac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbab0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1bbab4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bbab8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbabc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1bbabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbac0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbac4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1bbac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbacc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1bbaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1bbad0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbad4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bbad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbad8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbadc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1bbadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1bbae0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbae4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1bbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbae8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbaec: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bbaf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbaf4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1bbaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbaf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbafc: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bbb00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb04: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1bbb04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bbb08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbb0c: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1bbb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bbb10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb14: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1bbb14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bbb18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbb1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bbb20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb24: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1bbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1bbb28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbb2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1bbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbb30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb34: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1bbb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1bbb38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb3c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1bbb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bbb40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbb44: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1bbb48:
    // 0x1bbb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bbb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb50: 0xc06eee4  jal         func_1BBB90
    ctx->pc = 0x1BBB50u;
    SET_GPR_U32(ctx, 31, 0x1BBB58u);
    ctx->pc = 0x1BBB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB90u, 0x1BBB50u, 0x1BBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB58u;
label_1bbb58:
    // 0x1bbb58: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1bbb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1bbb5c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1bbb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1bbb60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb64: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1bbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bbb68: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BBB68u;
    {
        const bool branch_taken_0x1bbb68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbb68) {
            ctx->pc = 0x1BBB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbb48;
        }
    }
    ctx->pc = 0x1BBB70u;
    // 0x1bbb70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbb74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbb84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBB8Cu;
    // 0x1bbb8c: 0x0  nop
    ctx->pc = 0x1bbb8cu;
    // NOP
    ctx->pc = 0x1bbb90u;
}
