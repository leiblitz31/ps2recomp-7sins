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

// Function: sub_00457DE0
// Address: 0x457de0 - 0x457e80
void sub_00457DE0_0x457de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457DE0_0x457de0");
#endif

    switch (ctx->pc) {
        case 0x457e24u: goto label_457e24;
        case 0x457e54u: goto label_457e54;
        case 0x457e60u: goto label_457e60;
        default: break;
    }

    ctx->pc = 0x457de0u;

    // 0x457de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x457de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x457de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x457de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x457de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x457dec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x457decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x457df0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x457df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x457df4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x457df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x457df8: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x457df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x457dfc: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x457dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x457e00: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x457e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x457e04: 0x8c6441c4  lw          $a0, 0x41C4($v1)
    ctx->pc = 0x457e04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6241C4u));
    // 0x457e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x457e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x457e0c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x457E0Cu;
    {
        const bool branch_taken_0x457e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x457e0c) {
            ctx->pc = 0x457E60u;
            goto label_457e60;
        }
    }
    ctx->pc = 0x457E14u;
    // 0x457e14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x457e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457e18: 0x2785b0dc  addiu       $a1, $gp, -0x4F24
    ctx->pc = 0x457e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947036));
    // 0x457e1c: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x457E1Cu;
    SET_GPR_U32(ctx, 31, 0x457E24u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x457E1Cu, 0x457E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457E24u;
label_457e24:
    // 0x457e24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x457e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457e28: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x457E28u;
    {
        const bool branch_taken_0x457e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x457e28) {
            ctx->pc = 0x457E60u;
            goto label_457e60;
        }
    }
    ctx->pc = 0x457E30u;
    // 0x457e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x457e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457e34: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x457e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x457e38: 0x24a5e590  addiu       $a1, $a1, -0x1A70
    ctx->pc = 0x457e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960528));
    // 0x457e3c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x457e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457e40: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x457e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457e44: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x457e44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x457e48: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x457e48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457e4c: 0xc0bb002  jal         func_2EC008
    ctx->pc = 0x457E4Cu;
    SET_GPR_U32(ctx, 31, 0x457E54u);
    ctx->pc = 0x2EC008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC008u, 0x457E4Cu, 0x457E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457E54u;
label_457e54:
    // 0x457e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x457e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457e58: 0xc0bae64  jal         func_2EB990
    ctx->pc = 0x457E58u;
    SET_GPR_U32(ctx, 31, 0x457E60u);
    ctx->pc = 0x2EB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB990u, 0x457E58u, 0x457E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457E60u;
label_457e60:
    // 0x457e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x457e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457e68: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x457e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x457e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x457E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457E74u;
    // 0x457e74: 0x0  nop
    ctx->pc = 0x457e74u;
    // NOP
    // 0x457e78: 0x0  nop
    ctx->pc = 0x457e78u;
    // NOP
    // 0x457e7c: 0x0  nop
    ctx->pc = 0x457e7cu;
    // NOP
    ctx->pc = 0x457e80u;
}
