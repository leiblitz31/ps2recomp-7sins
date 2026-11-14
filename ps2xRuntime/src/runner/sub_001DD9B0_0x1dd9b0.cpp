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

// Function: sub_001DD9B0
// Address: 0x1dd9b0 - 0x1ddab0
void sub_001DD9B0_0x1dd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD9B0_0x1dd9b0");
#endif

    switch (ctx->pc) {
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda70u: goto label_1dda70;
        case 0x1dda84u: goto label_1dda84;
        default: break;
    }

    ctx->pc = 0x1dd9b0u;

    // 0x1dd9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd9c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1dd9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1dd9c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD9CCu;
    {
        const bool branch_taken_0x1dd9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9cc) {
            ctx->pc = 0x1DDA10u;
            goto label_1dda10;
        }
    }
    ctx->pc = 0x1DD9D4u;
label_1dd9d4:
    // 0x1dd9d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd9d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd9dc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD9DCu;
    SET_GPR_U32(ctx, 31, 0x1DD9E4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD9DCu, 0x1DD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9E4u;
label_1dd9e4:
    // 0x1dd9e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd9ec: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd9f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD9F4u;
    SET_GPR_U32(ctx, 31, 0x1DD9FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD9F4u, 0x1DD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9FCu;
label_1dd9fc:
    // 0x1dd9fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dda00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dda00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda04: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DDA04u;
    SET_GPR_U32(ctx, 31, 0x1DDA0Cu);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DDA04u, 0x1DDA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA0Cu;
label_1dda0c:
    // 0x1dda0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dda0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dda10:
    // 0x1dda10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dda10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dda14: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dda14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dda18: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DDA18u;
    SET_GPR_U32(ctx, 31, 0x1DDA20u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DDA18u, 0x1DDA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA20u;
label_1dda20:
    // 0x1dda20: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dda20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dda24: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DDA24u;
    {
        const bool branch_taken_0x1dda24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dda24) {
            ctx->pc = 0x1DD9D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9d4;
        }
    }
    ctx->pc = 0x1DDA2Cu;
    // 0x1dda2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dda2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDA30u;
    {
        const bool branch_taken_0x1dda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda30) {
            ctx->pc = 0x1DDA74u;
            goto label_1dda74;
        }
    }
    ctx->pc = 0x1DDA38u;
label_1dda38:
    // 0x1dda38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dda3c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dda3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dda40: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDA40u;
    SET_GPR_U32(ctx, 31, 0x1DDA48u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDA40u, 0x1DDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA48u;
label_1dda48:
    // 0x1dda48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dda48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dda50: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dda50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dda54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dda54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda58: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DDA58u;
    SET_GPR_U32(ctx, 31, 0x1DDA60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DDA58u, 0x1DDA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA60u;
label_1dda60:
    // 0x1dda60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dda60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dda64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dda64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda68: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DDA68u;
    SET_GPR_U32(ctx, 31, 0x1DDA70u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DDA68u, 0x1DDA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA70u;
label_1dda70:
    // 0x1dda70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dda74:
    // 0x1dda74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dda78: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dda78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dda7c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA84u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DDA7Cu, 0x1DDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA84u;
label_1dda84:
    // 0x1dda84: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1dda84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dda88: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DDA88u;
    {
        const bool branch_taken_0x1dda88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dda88) {
            ctx->pc = 0x1DDA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dda38;
        }
    }
    ctx->pc = 0x1DDA90u;
    // 0x1dda90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dda90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dda94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dda94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dda98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dda98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dda9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ddaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDAA8u;
    // 0x1ddaa8: 0x0  nop
    ctx->pc = 0x1ddaa8u;
    // NOP
    // 0x1ddaac: 0x0  nop
    ctx->pc = 0x1ddaacu;
    // NOP
    ctx->pc = 0x1ddab0u;
}
