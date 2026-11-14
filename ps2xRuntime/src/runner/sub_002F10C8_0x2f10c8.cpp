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

// Function: sub_002F10C8
// Address: 0x2f10c8 - 0x2f1130
void sub_002F10C8_0x2f10c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F10C8_0x2f10c8");
#endif

    switch (ctx->pc) {
        case 0x2f10ecu: goto label_2f10ec;
        default: break;
    }

    ctx->pc = 0x2f10c8u;

    // 0x2f10c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f10c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f10cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f10ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f10d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f10d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f10d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f10dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f10dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f10e4: 0xc0bbf38  jal         func_2EFCE0
    ctx->pc = 0x2F10E4u;
    SET_GPR_U32(ctx, 31, 0x2F10ECu);
    ctx->pc = 0x2F10E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10E4u;
    // 0x2f10e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCE0u, 0x2F10E4u, 0x2F10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10ECu;
label_2f10ec:
    // 0x2f10ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f10ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f10f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2f10f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f10f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F10F4u;
    {
        const bool branch_taken_0x2f10f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10F4u;
        // 0x2f10f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10f4) {
            ctx->pc = 0x2F1110u;
            goto label_2f1110;
        }
    }
    ctx->pc = 0x2F10FCu;
    // 0x2f10fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2f1100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f1100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f1104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1104u;
    {
        const bool branch_taken_0x2f1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1104u;
        // 0x2f1108: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1104) {
            ctx->pc = 0x2F111Cu;
            goto label_2f111c;
        }
    }
    ctx->pc = 0x2F110Cu;
    // 0x2f110c: 0x0  nop
    ctx->pc = 0x2f110cu;
    // NOP
label_2f1110:
    // 0x2f1110: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2f1110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f1114: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x2f1114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x2f1118: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2f1118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_2f111c:
    // 0x2f111c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f111cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1120: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f1120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1124: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1124u;
        // 0x2f1128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F112Cu;
    // 0x2f112c: 0x0  nop
    ctx->pc = 0x2f112cu;
    // NOP
    ctx->pc = 0x2f1130u;
}
