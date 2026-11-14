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

// Function: sub_00109CD0
// Address: 0x109cd0 - 0x109db0
void sub_00109CD0_0x109cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109CD0_0x109cd0");
#endif

    switch (ctx->pc) {
        case 0x109d40u: goto label_109d40;
        case 0x109d78u: goto label_109d78;
        default: break;
    }

    ctx->pc = 0x109cd0u;

    // 0x109cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x109cdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x109cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x109ce0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ce4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x109ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109ce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x109cec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109CECu;
    {
        const bool branch_taken_0x109cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109cec) {
            ctx->pc = 0x109D20u;
            goto label_109d20;
        }
    }
    ctx->pc = 0x109CF4u;
    // 0x109cf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109cf8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x109cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x109cfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x109cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x109d00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109D04u;
    {
        const bool branch_taken_0x109d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109d04) {
            ctx->pc = 0x109D20u;
            goto label_109d20;
        }
    }
    ctx->pc = 0x109D0Cu;
    // 0x109d0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d10: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109d14: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x109d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x109d18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x109D18u;
    {
        const bool branch_taken_0x109d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d18) {
            ctx->pc = 0x109D98u;
            goto label_109d98;
        }
    }
    ctx->pc = 0x109D20u;
label_109d20:
    // 0x109d20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109d28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109D28u;
    {
        const bool branch_taken_0x109d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d28) {
            ctx->pc = 0x109D68u;
            goto label_109d68;
        }
    }
    ctx->pc = 0x109D30u;
    // 0x109d30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d34: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109d38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109D38u;
    {
        const bool branch_taken_0x109d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d38) {
            ctx->pc = 0x109D44u;
            goto label_109d44;
        }
    }
    ctx->pc = 0x109D40u;
label_109d40:
    // 0x109d40: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x109d40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_109d44:
    // 0x109d44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x109d48: 0x0  nop
    ctx->pc = 0x109d48u;
    // NOP
    // 0x109d4c: 0x0  nop
    ctx->pc = 0x109d4cu;
    // NOP
    // 0x109d50: 0x0  nop
    ctx->pc = 0x109d50u;
    // NOP
    // 0x109d54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109D54u;
    {
        const bool branch_taken_0x109d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109d54) {
            ctx->pc = 0x109D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d40;
        }
    }
    ctx->pc = 0x109D5Cu;
    // 0x109d5c: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x109d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x109d60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x109D60u;
    {
        const bool branch_taken_0x109d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d60) {
            ctx->pc = 0x109D98u;
            goto label_109d98;
        }
    }
    ctx->pc = 0x109D68u;
label_109d68:
    // 0x109d68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d6c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x109d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x109d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109D70u;
    {
        const bool branch_taken_0x109d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d70) {
            ctx->pc = 0x109D80u;
            goto label_109d80;
        }
    }
    ctx->pc = 0x109D78u;
label_109d78:
    // 0x109d78: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x109d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x109d7c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x109d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109d80:
    // 0x109d80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x109d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x109d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x109d88: 0x0  nop
    ctx->pc = 0x109d88u;
    // NOP
    // 0x109d8c: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109D8Cu;
    {
        const bool branch_taken_0x109d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109d8c) {
            ctx->pc = 0x109D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d78;
        }
    }
    ctx->pc = 0x109D94u;
    // 0x109d94: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x109d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_109d98:
    // 0x109d98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109da0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109da4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x109da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109da8: 0x3e00008  jr          $ra
    ctx->pc = 0x109DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109DB0u;
}
