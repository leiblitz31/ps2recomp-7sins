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

// Function: sub_004B17C8
// Address: 0x4b17c8 - 0x4b1820
void sub_004B17C8_0x4b17c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B17C8_0x4b17c8");
#endif

    switch (ctx->pc) {
        case 0x4b17f8u: goto label_4b17f8;
        case 0x4b180cu: goto label_4b180c;
        default: break;
    }

    ctx->pc = 0x4b17c8u;

    // 0x4b17c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b17cc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b17ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4b17d0: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4b17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4b17d4: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4b17d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4b17d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b17dc: 0x24c6ecc0  addiu       $a2, $a2, -0x1340
    ctx->pc = 0x4b17dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962368));
    // 0x4b17e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b17e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b17e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b17e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b17e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b17ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17f0: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4B17F0u;
    SET_GPR_U32(ctx, 31, 0x4B17F8u);
    ctx->pc = 0x4B17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B17F0u;
    // 0x4b17f4: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4B17F0u, 0x4B17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17F8u;
label_4b17f8:
    // 0x4b17f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b17f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B17FCu;
    {
        const bool branch_taken_0x4b17fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B17FCu;
        // 0x4b1800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b17fc) {
            ctx->pc = 0x4B1810u;
            goto label_4b1810;
        }
    }
    ctx->pc = 0x4B1804u;
    // 0x4b1804: 0xc12c21e  jal         func_4B0878
    ctx->pc = 0x4B1804u;
    SET_GPR_U32(ctx, 31, 0x4B180Cu);
    ctx->pc = 0x4B1808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1804u;
    // 0x4b1808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0878u, 0x4B1804u, 0x4B180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B180Cu;
label_4b180c:
    // 0x4b180c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b180cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b1810:
    // 0x4b1810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1818: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1818u;
        // 0x4b181c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1820u;
}
