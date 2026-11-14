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

// Function: sub_00312330
// Address: 0x312330 - 0x312390
void sub_00312330_0x312330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312330_0x312330");
#endif

    switch (ctx->pc) {
        case 0x31236cu: goto label_31236c;
        default: break;
    }

    ctx->pc = 0x312330u;

    // 0x312330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x312334: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x312334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312338: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x312338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31233c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x312340: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x312340u;
    {
        const bool branch_taken_0x312340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x312344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312340u;
        // 0x312344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312340) {
            ctx->pc = 0x312378u;
            goto label_312378;
        }
    }
    ctx->pc = 0x312348u;
    // 0x312348: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x312348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31234c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31234Cu;
    {
        const bool branch_taken_0x31234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31234Cu;
        // 0x312350: 0x8f83a584  lw          $v1, -0x5A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31234c) {
            ctx->pc = 0x312378u;
            goto label_312378;
        }
    }
    ctx->pc = 0x312354u;
    // 0x312354: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x312354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312358: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x312358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31235c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x31235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x312360: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x312360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312364: 0xc103440  jal         func_40D100
    ctx->pc = 0x312364u;
    SET_GPR_U32(ctx, 31, 0x31236Cu);
    ctx->pc = 0x312368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312364u;
    // 0x312368: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x312364u, 0x31236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31236Cu;
label_31236c:
    // 0x31236c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31236cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x312370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312370u;
    {
        const bool branch_taken_0x312370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312370u;
        // 0x312374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312370) {
            ctx->pc = 0x31237Cu;
            goto label_31237c;
        }
    }
    ctx->pc = 0x312378u;
label_312378:
    // 0x312378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31237c:
    // 0x31237c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31237cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312384: 0x3e00008  jr          $ra
    ctx->pc = 0x312384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312384u;
        // 0x312388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31238Cu;
    // 0x31238c: 0x0  nop
    ctx->pc = 0x31238cu;
    // NOP
    ctx->pc = 0x312390u;
}
