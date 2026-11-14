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

// Function: sub_00419D80
// Address: 0x419d80 - 0x419e08
void sub_00419D80_0x419d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419D80_0x419d80");
#endif

    switch (ctx->pc) {
        case 0x419dacu: goto label_419dac;
        case 0x419dd8u: goto label_419dd8;
        case 0x419de0u: goto label_419de0;
        default: break;
    }

    ctx->pc = 0x419d80u;

    // 0x419d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x419d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x419d84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x419d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x419d88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x419d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x419d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x419d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x419d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x419d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419d98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x419d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x419d9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x419D9Cu;
    {
        const bool branch_taken_0x419d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419D9Cu;
        // 0x419da0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419d9c) {
            ctx->pc = 0x419DACu;
            goto label_419dac;
        }
    }
    ctx->pc = 0x419DA4u;
    // 0x419da4: 0xc1066de  jal         func_419B78
    ctx->pc = 0x419DA4u;
    SET_GPR_U32(ctx, 31, 0x419DACu);
    ctx->pc = 0x419DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419DA4u;
    // 0x419da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x419DA4u, 0x419DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419DACu;
label_419dac:
    // 0x419dac: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x419dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x419db0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x419db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419db4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x419db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x419db8: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x419db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x419dbc: 0xae510098  sw          $s1, 0x98($s2)
    ctx->pc = 0x419dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 17));
    // 0x419dc0: 0x8e5100a0  lw          $s1, 0xA0($s2)
    ctx->pc = 0x419dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x419dc4: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x419dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x419dc8: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x419dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x419dcc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x419DCCu;
    {
        const bool branch_taken_0x419dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419DCCu;
        // 0x419dd0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419dcc) {
            ctx->pc = 0x419DF0u;
            goto label_419df0;
        }
    }
    ctx->pc = 0x419DD4u;
    // 0x419dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419dd8:
    // 0x419dd8: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x419DD8u;
    SET_GPR_U32(ctx, 31, 0x419DE0u);
    ctx->pc = 0x419DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419DD8u;
    // 0x419ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x419DD8u, 0x419DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419DE0u;
label_419de0:
    // 0x419de0: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x419de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x419de4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x419DE4u;
    {
        const bool branch_taken_0x419de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419DE4u;
        // 0x419de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419de4) {
            ctx->pc = 0x419DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419dd8;
        }
    }
    ctx->pc = 0x419DECu;
    // 0x419dec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x419decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_419df0:
    // 0x419df0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x419df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419df4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x419df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419df8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x419df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419e00: 0x3e00008  jr          $ra
    ctx->pc = 0x419E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419E00u;
        // 0x419e04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419E08u;
}
