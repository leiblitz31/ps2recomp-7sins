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

// Function: sub_00298C70
// Address: 0x298c70 - 0x298d40
void sub_00298C70_0x298c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298C70_0x298c70");
#endif

    switch (ctx->pc) {
        case 0x298ca0u: goto label_298ca0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298d20u: goto label_298d20;
        default: break;
    }

    ctx->pc = 0x298c70u;

    // 0x298c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298c7c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x298c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x298c80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c84: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298c88: 0x1003001b  beq         $zero, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x298C88u;
    {
        const bool branch_taken_0x298c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x298c88) {
            ctx->pc = 0x298CF8u;
            goto label_298cf8;
        }
    }
    ctx->pc = 0x298C90u;
    // 0x298c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c94: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298c98: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x298C98u;
    SET_GPR_U32(ctx, 31, 0x298CA0u);
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x298C98u, 0x298CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CA0u;
label_298ca0:
    // 0x298ca0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ca4: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298ca8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x298cac: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x298cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298cb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x298cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x298cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298cb8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x298CB8u;
    {
        const bool branch_taken_0x298cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298cb8) {
            ctx->pc = 0x298CECu;
            goto label_298cec;
        }
    }
    ctx->pc = 0x298CC0u;
    // 0x298cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cc4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ccc: 0xc12346c  jal         func_48D1B0
    ctx->pc = 0x298CCCu;
    SET_GPR_U32(ctx, 31, 0x298CD4u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x298CCCu, 0x298CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CD4u;
label_298cd4:
    // 0x298cd4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cd8: 0xa060004c  sb          $zero, 0x4C($v1)
    ctx->pc = 0x298cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x298cdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ce0: 0xa060004d  sb          $zero, 0x4D($v1)
    ctx->pc = 0x298ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x298ce4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298CE4u;
    {
        const bool branch_taken_0x298ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ce4) {
            ctx->pc = 0x298CF8u;
            goto label_298cf8;
        }
    }
    ctx->pc = 0x298CECu;
label_298cec:
    // 0x298cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298cf0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cf4: 0xa064004d  sb          $a0, 0x4D($v1)
    ctx->pc = 0x298cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 4));
label_298cf8:
    // 0x298cf8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cfc: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x298cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x298d00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298D00u;
    {
        const bool branch_taken_0x298d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d00) {
            ctx->pc = 0x298D28u;
            goto label_298d28;
        }
    }
    ctx->pc = 0x298D08u;
    // 0x298d08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d0c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x298d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x298d10: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x298d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x298d14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298d18: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x298D18u;
    SET_GPR_U32(ctx, 31, 0x298D20u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x298D18u, 0x298D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D20u;
label_298d20:
    // 0x298d20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d24: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x298d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_298d28:
    // 0x298d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298d2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298d30: 0x3e00008  jr          $ra
    ctx->pc = 0x298D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298D38u;
    // 0x298d38: 0x0  nop
    ctx->pc = 0x298d38u;
    // NOP
    // 0x298d3c: 0x0  nop
    ctx->pc = 0x298d3cu;
    // NOP
    ctx->pc = 0x298d40u;
}
