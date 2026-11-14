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

// Function: sub_002EA2C0
// Address: 0x2ea2c0 - 0x2ea328
void sub_002EA2C0_0x2ea2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA2C0_0x2ea2c0");
#endif

    switch (ctx->pc) {
        case 0x2ea2ecu: goto label_2ea2ec;
        case 0x2ea2fcu: goto label_2ea2fc;
        case 0x2ea308u: goto label_2ea308;
        default: break;
    }

    ctx->pc = 0x2ea2c0u;

    // 0x2ea2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea2c8: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2ea2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2ea2cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ea2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ea2d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ea2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ea2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ea2d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ea2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ea2e0: 0x2610ea90  addiu       $s0, $s0, -0x1570
    ctx->pc = 0x2ea2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961808));
    // 0x2ea2e4: 0xc0bb816  jal         func_2EE058
    ctx->pc = 0x2EA2E4u;
    SET_GPR_U32(ctx, 31, 0x2EA2ECu);
    ctx->pc = 0x2EA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2E4u;
    // 0x2ea2e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE058u, 0x2EA2E4u, 0x2EA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2ECu;
label_2ea2ec:
    // 0x2ea2ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea2f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f4: 0xc0ba8ca  jal         func_2EA328
    ctx->pc = 0x2EA2F4u;
    SET_GPR_U32(ctx, 31, 0x2EA2FCu);
    ctx->pc = 0x2EA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2F4u;
    // 0x2ea2f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA328u, 0x2EA2F4u, 0x2EA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2FCu;
label_2ea2fc:
    // 0x2ea2fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea300: 0xc0bb836  jal         func_2EE0D8
    ctx->pc = 0x2EA300u;
    SET_GPR_U32(ctx, 31, 0x2EA308u);
    ctx->pc = 0x2EA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA300u;
    // 0x2ea304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE0D8u, 0x2EA300u, 0x2EA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA308u;
label_2ea308:
    // 0x2ea308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ea308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ea314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea318: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ea318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea31c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA31Cu;
        // 0x2ea320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA324u;
    // 0x2ea324: 0x0  nop
    ctx->pc = 0x2ea324u;
    // NOP
    ctx->pc = 0x2ea328u;
}
