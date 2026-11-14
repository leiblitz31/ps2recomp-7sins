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

// Function: sub_0040D010
// Address: 0x40d010 - 0x40d068
void sub_0040D010_0x40d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D010_0x40d010");
#endif

    switch (ctx->pc) {
        case 0x40d05cu: goto label_40d05c;
        default: break;
    }

    ctx->pc = 0x40d010u;

    // 0x40d010: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x40d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x40d014: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x40d014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x40d018: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x40d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x40d01c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x40d01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x40d020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x40d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x40d024: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x40d024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x40d028: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x40d028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x40d02c: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x40d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x40d030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40d034: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x40d034u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x40d038: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x40d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x40d03c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x40d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x40d040: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x40d040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x40d044: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x40d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x40d048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d04c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d050: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40d050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x40d054: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40D054u;
    SET_GPR_U32(ctx, 31, 0x40D05Cu);
    ctx->pc = 0x40D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D054u;
    // 0x40d058: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40D054u, 0x40D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D05Cu;
label_40d05c:
    // 0x40d05c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d060: 0x3e00008  jr          $ra
    ctx->pc = 0x40D060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D060u;
        // 0x40d064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D068u;
}
