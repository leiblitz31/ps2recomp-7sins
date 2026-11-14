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

// Function: sub_002FE080
// Address: 0x2fe080 - 0x2fe128
void sub_002FE080_0x2fe080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE080_0x2fe080");
#endif

    switch (ctx->pc) {
        case 0x2fe098u: goto label_2fe098;
        case 0x2fe0a0u: goto label_2fe0a0;
        case 0x2fe0c4u: goto label_2fe0c4;
        case 0x2fe0d0u: goto label_2fe0d0;
        case 0x2fe0f4u: goto label_2fe0f4;
        case 0x2fe114u: goto label_2fe114;
        default: break;
    }

    ctx->pc = 0x2fe080u;

    // 0x2fe080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe08c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2fe08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2fe090: 0xc0bf7b4  jal         func_2FDED0
    ctx->pc = 0x2FE090u;
    SET_GPR_U32(ctx, 31, 0x2FE098u);
    ctx->pc = 0x2FE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE090u;
    // 0x2fe094: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDED0u, 0x2FE090u, 0x2FE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE098u;
label_2fe098:
    // 0x2fe098: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE098u;
    SET_GPR_U32(ctx, 31, 0x2FE0A0u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE098u, 0x2FE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0A0u;
label_2fe0a0:
    // 0x2fe0a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe0a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fe0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe0a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2fe0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2fe0ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fe0acu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x2fe0b0: 0xf  sync
    ctx->pc = 0x2fe0b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe0b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE0B4u;
    {
        const bool branch_taken_0x2fe0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0B4u;
        // 0x2fe0b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0b4) {
            ctx->pc = 0x2FE0C8u;
            goto label_2fe0c8;
        }
    }
    ctx->pc = 0x2FE0BCu;
    // 0x2fe0bc: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE0BCu;
    SET_GPR_U32(ctx, 31, 0x2FE0C4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE0BCu, 0x2FE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0C4u;
label_2fe0c4:
    // 0x2fe0c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2fe0c8:
    // 0x2fe0c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2fe0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2fe0cc: 0x0  nop
    ctx->pc = 0x2fe0ccu;
    // NOP
label_2fe0d0:
    // 0x2fe0d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x2fe0d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fe0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fe0d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE0D8u;
    {
        const bool branch_taken_0x2fe0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe0d8) {
            ctx->pc = 0x2FE0ECu;
            goto label_2fe0ec;
        }
    }
    ctx->pc = 0x2FE0E0u;
    // 0x2fe0e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fe0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FE0E4u;
    {
        const bool branch_taken_0x2fe0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe0e4) {
            ctx->pc = 0x2FE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe0d0;
        }
    }
    ctx->pc = 0x2FE0ECu;
label_2fe0ec:
    // 0x2fe0ec: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE0ECu;
    SET_GPR_U32(ctx, 31, 0x2FE0F4u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE0ECu, 0x2FE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0F4u;
label_2fe0f4:
    // 0x2fe0f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fe0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe0f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2fe0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2fe0fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x2fe0fcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x2fe100: 0xf  sync
    ctx->pc = 0x2fe100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE104u;
    {
        const bool branch_taken_0x2fe104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe104) {
            ctx->pc = 0x2FE114u;
            goto label_2fe114;
        }
    }
    ctx->pc = 0x2FE10Cu;
    // 0x2fe10c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE10Cu;
    SET_GPR_U32(ctx, 31, 0x2FE114u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE10Cu, 0x2FE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE114u;
label_2fe114:
    // 0x2fe114: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2fe114u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE11Cu;
        // 0x2fe120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE124u;
    // 0x2fe124: 0x0  nop
    ctx->pc = 0x2fe124u;
    // NOP
    ctx->pc = 0x2fe128u;
}
