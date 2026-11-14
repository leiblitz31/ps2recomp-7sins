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

// Function: sub_001E3AE0
// Address: 0x1e3ae0 - 0x1e3b80
void sub_001E3AE0_0x1e3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3AE0_0x1e3ae0");
#endif

    switch (ctx->pc) {
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b50u: goto label_1e3b50;
        default: break;
    }

    ctx->pc = 0x1e3ae0u;

    // 0x1e3ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e3ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3af0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e3af4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3afc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3AFCu;
    {
        const bool branch_taken_0x1e3afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3afc) {
            ctx->pc = 0x1E3B40u;
            goto label_1e3b40;
        }
    }
    ctx->pc = 0x1E3B04u;
label_1e3b04:
    // 0x1e3b04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3b08: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e3b0c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E3B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E3B14u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E3B0Cu, 0x1E3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B14u;
label_1e3b14:
    // 0x1e3b14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3b1c: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e3b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b24: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E3B24u;
    SET_GPR_U32(ctx, 31, 0x1E3B2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E3B24u, 0x1E3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B2Cu;
label_1e3b2c:
    // 0x1e3b2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b34: 0xc08c258  jal         func_230960
    ctx->pc = 0x1E3B34u;
    SET_GPR_U32(ctx, 31, 0x1E3B3Cu);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1E3B34u, 0x1E3B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B3Cu;
label_1e3b3c:
    // 0x1e3b3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e3b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e3b40:
    // 0x1e3b40: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3b44: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e3b48: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E3B48u;
    SET_GPR_U32(ctx, 31, 0x1E3B50u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E3B48u, 0x1E3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B50u;
label_1e3b50:
    // 0x1e3b50: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1e3b50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e3b54: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E3B54u;
    {
        const bool branch_taken_0x1e3b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b54) {
            ctx->pc = 0x1E3B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3b04;
        }
    }
    ctx->pc = 0x1E3B5Cu;
    // 0x1e3b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e3b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3B74u;
    // 0x1e3b74: 0x0  nop
    ctx->pc = 0x1e3b74u;
    // NOP
    // 0x1e3b78: 0x0  nop
    ctx->pc = 0x1e3b78u;
    // NOP
    // 0x1e3b7c: 0x0  nop
    ctx->pc = 0x1e3b7cu;
    // NOP
    ctx->pc = 0x1e3b80u;
}
