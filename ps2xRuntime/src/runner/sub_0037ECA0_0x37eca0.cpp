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

// Function: sub_0037ECA0
// Address: 0x37eca0 - 0x37ed48
void sub_0037ECA0_0x37eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037ECA0_0x37eca0");
#endif

    switch (ctx->pc) {
        case 0x37ecb8u: goto label_37ecb8;
        case 0x37ece8u: goto label_37ece8;
        case 0x37ecf4u: goto label_37ecf4;
        case 0x37ed00u: goto label_37ed00;
        case 0x37ed0cu: goto label_37ed0c;
        case 0x37ed18u: goto label_37ed18;
        case 0x37ed24u: goto label_37ed24;
        case 0x37ed30u: goto label_37ed30;
        default: break;
    }

    ctx->pc = 0x37eca0u;

    // 0x37eca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37eca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37eca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37eca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ecac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ecb0: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x37ECB0u;
    SET_GPR_U32(ctx, 31, 0x37ECB8u);
    ctx->pc = 0x37ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECB0u;
    // 0x37ecb4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x37ECB0u, 0x37ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECB8u;
label_37ecb8:
    // 0x37ecb8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x37ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x37ecbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ecc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ecc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x37ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECC8u;
        // 0x37eccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37ECD0u;
    // 0x37ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ecd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37ecd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ece0: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ECE0u;
    SET_GPR_U32(ctx, 31, 0x37ECE8u);
    ctx->pc = 0x37ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECE0u;
    // 0x37ece4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ECE0u, 0x37ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECE8u;
label_37ece8:
    // 0x37ece8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ecec: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ECECu;
    SET_GPR_U32(ctx, 31, 0x37ECF4u);
    ctx->pc = 0x37ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECECu;
    // 0x37ecf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ECECu, 0x37ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECF4u;
label_37ecf4:
    // 0x37ecf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ecf8: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ECF8u;
    SET_GPR_U32(ctx, 31, 0x37ED00u);
    ctx->pc = 0x37ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECF8u;
    // 0x37ecfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ECF8u, 0x37ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED00u;
label_37ed00:
    // 0x37ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed04: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ED04u;
    SET_GPR_U32(ctx, 31, 0x37ED0Cu);
    ctx->pc = 0x37ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED04u;
    // 0x37ed08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ED04u, 0x37ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED0Cu;
label_37ed0c:
    // 0x37ed0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed10: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ED10u;
    SET_GPR_U32(ctx, 31, 0x37ED18u);
    ctx->pc = 0x37ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED10u;
    // 0x37ed14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ED10u, 0x37ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED18u;
label_37ed18:
    // 0x37ed18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed1c: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ED1Cu;
    SET_GPR_U32(ctx, 31, 0x37ED24u);
    ctx->pc = 0x37ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED1Cu;
    // 0x37ed20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ED1Cu, 0x37ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED24u;
label_37ed24:
    // 0x37ed24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed28: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37ED28u;
    SET_GPR_U32(ctx, 31, 0x37ED30u);
    ctx->pc = 0x37ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED28u;
    // 0x37ed2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37ED28u, 0x37ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED30u;
label_37ed30:
    // 0x37ed30: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x37ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x37ed34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37ed34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ed3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ed3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ed40: 0x3e00008  jr          $ra
    ctx->pc = 0x37ED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED40u;
        // 0x37ed44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37ED48u;
}
