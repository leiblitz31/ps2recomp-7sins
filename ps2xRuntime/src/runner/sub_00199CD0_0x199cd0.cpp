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

// Function: sub_00199CD0
// Address: 0x199cd0 - 0x199da0
void sub_00199CD0_0x199cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199CD0_0x199cd0");
#endif

    switch (ctx->pc) {
        case 0x199cf4u: goto label_199cf4;
        case 0x199d1cu: goto label_199d1c;
        case 0x199d2cu: goto label_199d2c;
        case 0x199d3cu: goto label_199d3c;
        case 0x199d50u: goto label_199d50;
        case 0x199d60u: goto label_199d60;
        case 0x199d70u: goto label_199d70;
        default: break;
    }

    ctx->pc = 0x199cd0u;

    // 0x199cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x199cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x199cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199ce4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x199ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x199ce8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199cec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x199CECu;
    SET_GPR_U32(ctx, 31, 0x199CF4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x199CECu, 0x199CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CF4u;
label_199cf4:
    // 0x199cf4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x199cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199cf8: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x199cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x199cfc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x199d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d08: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x199d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199d0c: 0xc46d00d8  lwc1        $f13, 0xD8($v1)
    ctx->pc = 0x199d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x199d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d14: 0xc08c208  jal         func_230820
    ctx->pc = 0x199D14u;
    SET_GPR_U32(ctx, 31, 0x199D1Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x199D14u, 0x199D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D1Cu;
label_199d1c:
    // 0x199d1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d20: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199d24: 0xc06610c  jal         func_198430
    ctx->pc = 0x199D24u;
    SET_GPR_U32(ctx, 31, 0x199D2Cu);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x199D24u, 0x199D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D2Cu;
label_199d2c:
    // 0x199d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x199D34u;
    {
        const bool branch_taken_0x199d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d34) {
            ctx->pc = 0x199D74u;
            goto label_199d74;
        }
    }
    ctx->pc = 0x199D3Cu;
label_199d3c:
    // 0x199d3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x199d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d40: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d48: 0xc066004  jal         func_198010
    ctx->pc = 0x199D48u;
    SET_GPR_U32(ctx, 31, 0x199D50u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199D48u, 0x199D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D50u;
label_199d50:
    // 0x199d50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x199d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d58: 0xc06479c  jal         func_191E70
    ctx->pc = 0x199D58u;
    SET_GPR_U32(ctx, 31, 0x199D60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x199D58u, 0x199D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D60u;
label_199d60:
    // 0x199d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x199d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d68: 0xc067174  jal         func_19C5D0
    ctx->pc = 0x199D68u;
    SET_GPR_U32(ctx, 31, 0x199D70u);
    ctx->pc = 0x19C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5D0u, 0x199D68u, 0x199D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D70u;
label_199d70:
    // 0x199d70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_199d74:
    // 0x199d74: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x199d74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x199d78: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x199D78u;
    {
        const bool branch_taken_0x199d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d78) {
            ctx->pc = 0x199D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d3c;
        }
    }
    ctx->pc = 0x199D80u;
    // 0x199d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x199d94: 0x3e00008  jr          $ra
    ctx->pc = 0x199D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199D9Cu;
    // 0x199d9c: 0x0  nop
    ctx->pc = 0x199d9cu;
    // NOP
    ctx->pc = 0x199da0u;
}
