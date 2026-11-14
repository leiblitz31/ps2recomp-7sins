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

// Function: sub_002F11B0
// Address: 0x2f11b0 - 0x2f1218
void sub_002F11B0_0x2f11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F11B0_0x2f11b0");
#endif

    switch (ctx->pc) {
        case 0x2f11d4u: goto label_2f11d4;
        default: break;
    }

    ctx->pc = 0x2f11b0u;

    // 0x2f11b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f11b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f11b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f11b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f11bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f11bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f11c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f11c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f11cc: 0xc0bb416  jal         func_2ED058
    ctx->pc = 0x2F11CCu;
    SET_GPR_U32(ctx, 31, 0x2F11D4u);
    ctx->pc = 0x2F11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11CCu;
    // 0x2f11d0: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED058u, 0x2F11CCu, 0x2F11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11D4u;
label_2f11d4:
    // 0x2f11d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f11d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f11d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11dc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2f11dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f11e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2f11e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f11e4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F11E4u;
    {
        const bool branch_taken_0x2f11e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11E4u;
        // 0x2f11e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11e4) {
            ctx->pc = 0x2F11F8u;
            goto label_2f11f8;
        }
    }
    ctx->pc = 0x2F11ECu;
    // 0x2f11ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F11ECu;
    {
        const bool branch_taken_0x2f11ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11ECu;
        // 0x2f11f0: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11ec) {
            ctx->pc = 0x2F1200u;
            goto label_2f1200;
        }
    }
    ctx->pc = 0x2F11F4u;
    // 0x2f11f4: 0x0  nop
    ctx->pc = 0x2f11f4u;
    // NOP
label_2f11f8:
    // 0x2f11f8: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2f11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2f11fc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2f11fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_2f1200:
    // 0x2f1200: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2f1200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f1208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f120c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F120Cu;
        // 0x2f1210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F120Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1214u;
    // 0x2f1214: 0x0  nop
    ctx->pc = 0x2f1214u;
    // NOP
    ctx->pc = 0x2f1218u;
}
