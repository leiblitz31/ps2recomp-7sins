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

// Function: sub_00389850
// Address: 0x389850 - 0x3898a0
void sub_00389850_0x389850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389850_0x389850");
#endif

    switch (ctx->pc) {
        case 0x389888u: goto label_389888;
        default: break;
    }

    ctx->pc = 0x389850u;

    // 0x389850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x389858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38985c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38985cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389860: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x389860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x389864: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x389864u;
    {
        const bool branch_taken_0x389864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x389868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389864u;
        // 0x389868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389864) {
            ctx->pc = 0x389880u;
            goto label_389880;
        }
    }
    ctx->pc = 0x38986Cu;
    // 0x38986c: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x38986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x389870: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x389870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x389874: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x389874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x389878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x389878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38987c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x38987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_389880:
    // 0x389880: 0xc111718  jal         func_445C60
    ctx->pc = 0x389880u;
    SET_GPR_U32(ctx, 31, 0x389888u);
    ctx->pc = 0x389884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389880u;
    // 0x389884: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x389880u, 0x389888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389888u;
label_389888:
    // 0x389888: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x389888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38988c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389898: 0x3e00008  jr          $ra
    ctx->pc = 0x389898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389898u;
        // 0x38989c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3898A0u;
}
