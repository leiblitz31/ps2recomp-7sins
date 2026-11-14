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

// Function: sub_0037EAC8
// Address: 0x37eac8 - 0x37eb20
void sub_0037EAC8_0x37eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037EAC8_0x37eac8");
#endif

    switch (ctx->pc) {
        case 0x37eaecu: goto label_37eaec;
        case 0x37eb14u: goto label_37eb14;
        default: break;
    }

    ctx->pc = 0x37eac8u;

    // 0x37eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x37EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAC8u;
        // 0x37eacc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EAD0u;
    // 0x37ead0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ead4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x37ead4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ead8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37eadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37eadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37eae4: 0xc0dfac8  jal         func_37EB20
    ctx->pc = 0x37EAE4u;
    SET_GPR_U32(ctx, 31, 0x37EAECu);
    ctx->pc = 0x37EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EAE4u;
    // 0x37eae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37EB20u, 0x37EAE4u, 0x37EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EAECu;
label_37eaec:
    // 0x37eaec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37eaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37eaf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37eaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37eaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x37EAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAF8u;
        // 0x37eafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EB00u;
    // 0x37eb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37eb04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37eb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37eb0c: 0xc0dfb20  jal         func_37EC80
    ctx->pc = 0x37EB0Cu;
    SET_GPR_U32(ctx, 31, 0x37EB14u);
    ctx->pc = 0x37EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB0Cu;
    // 0x37eb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37EC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37EC80u, 0x37EB0Cu, 0x37EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EB14u;
label_37eb14:
    // 0x37eb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x37EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB18u;
        // 0x37eb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EB20u;
}
