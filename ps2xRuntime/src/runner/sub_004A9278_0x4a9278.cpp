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

// Function: sub_004A9278
// Address: 0x4a9278 - 0x4a92d8
void sub_004A9278_0x4a9278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9278_0x4a9278");
#endif

    switch (ctx->pc) {
        case 0x4a92acu: goto label_4a92ac;
        default: break;
    }

    ctx->pc = 0x4a9278u;

    // 0x4a9278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a9278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a927c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a9280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9288: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a9288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a928c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A928Cu;
    {
        const bool branch_taken_0x4a928c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A928Cu;
        // 0x4a9290: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a928c) {
            ctx->pc = 0x4A92C4u;
            goto label_4a92c4;
        }
    }
    ctx->pc = 0x4A9294u;
    // 0x4a9294: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a9298: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a9298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a929c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A929Cu;
    {
        const bool branch_taken_0x4a929c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A929Cu;
        // 0x4a92a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a929c) {
            ctx->pc = 0x4A92C4u;
            goto label_4a92c4;
        }
    }
    ctx->pc = 0x4A92A4u;
    // 0x4a92a4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A92A4u;
    SET_GPR_U32(ctx, 31, 0x4A92ACu);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A92A4u, 0x4A92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A92ACu;
label_4a92ac:
    // 0x4a92ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a92acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a92b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a92b4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x4a92b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x4a92b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a92b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a92bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4a92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4a92c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a92c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a92c4:
    // 0x4a92c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a92c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a92c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a92c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a92cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A92CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92CCu;
        // 0x4a92d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A92CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A92D4u;
    // 0x4a92d4: 0x0  nop
    ctx->pc = 0x4a92d4u;
    // NOP
    ctx->pc = 0x4a92d8u;
}
