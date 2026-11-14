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

// Function: sub_004272D0
// Address: 0x4272d0 - 0x427318
void sub_004272D0_0x4272d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004272D0_0x4272d0");
#endif

    switch (ctx->pc) {
        case 0x427308u: goto label_427308;
        default: break;
    }

    ctx->pc = 0x4272d0u;

label_4272d0:
    // 0x4272d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4272d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4272d4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4272D4u;
    {
        const bool branch_taken_0x4272d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4272D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4272D4u;
        // 0x4272d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4272d4) {
            ctx->pc = 0x4272E4u;
            goto label_4272e4;
        }
    }
    ctx->pc = 0x4272DCu;
    // 0x4272dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4272DCu;
    {
        const bool branch_taken_0x4272dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4272E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4272DCu;
        // 0x4272e0: 0x90820018  lbu         $v0, 0x18($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4272dc) {
            ctx->pc = 0x427308u;
            goto label_427308;
        }
    }
    ctx->pc = 0x4272E4u;
label_4272e4:
    // 0x4272e4: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4272e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4272e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4272e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4272ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4272ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4272f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4272f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4272f4: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x4272f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x4272f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4272f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4272fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4272fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x427300: 0xc109cb4  jal         func_4272D0
    ctx->pc = 0x427300u;
    SET_GPR_U32(ctx, 31, 0x427308u);
    ctx->pc = 0x427304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427300u;
    // 0x427304: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4272D0u;
    goto label_4272d0;
    ctx->pc = 0x427308u;
label_427308:
    // 0x427308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x427308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42730c: 0x3e00008  jr          $ra
    ctx->pc = 0x42730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42730Cu;
        // 0x427310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x427314u;
    // 0x427314: 0x0  nop
    ctx->pc = 0x427314u;
    // NOP
    ctx->pc = 0x427318u;
}
