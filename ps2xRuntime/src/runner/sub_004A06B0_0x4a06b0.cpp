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

// Function: sub_004A06B0
// Address: 0x4a06b0 - 0x4a0750
void sub_004A06B0_0x4a06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A06B0_0x4a06b0");
#endif

    switch (ctx->pc) {
        case 0x4a06e0u: goto label_4a06e0;
        case 0x4a0700u: goto label_4a0700;
        default: break;
    }

    ctx->pc = 0x4a06b0u;

    // 0x4a06b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a06b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a06b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a06b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a06b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a06bc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A06BCu;
    {
        const bool branch_taken_0x4a06bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06BCu;
        // 0x4a06c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a06bc) {
            ctx->pc = 0x4A06CCu;
            goto label_4a06cc;
        }
    }
    ctx->pc = 0x4A06C4u;
    // 0x4a06c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A06C4u;
    {
        const bool branch_taken_0x4a06c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06C4u;
        // 0x4a06c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a06c4) {
            ctx->pc = 0x4A06F4u;
            goto label_4a06f4;
        }
    }
    ctx->pc = 0x4A06CCu;
label_4a06cc:
    // 0x4a06cc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4a06d0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a06d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a06d4: 0x248486b0  addiu       $a0, $a0, -0x7950
    ctx->pc = 0x4a06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
    // 0x4a06d8: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4A06D8u;
    SET_GPR_U32(ctx, 31, 0x4A06E0u);
    ctx->pc = 0x4A06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A06D8u;
    // 0x4a06dc: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4A06D8u, 0x4A06E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A06E0u;
label_4a06e0:
    // 0x4a06e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a06e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a06e4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A06E4u;
    {
        const bool branch_taken_0x4a06e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06E4u;
        // 0x4a06e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a06e4) {
            ctx->pc = 0x4A06F4u;
            goto label_4a06f4;
        }
    }
    ctx->pc = 0x4A06ECu;
    // 0x4a06ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A06ECu;
    {
        const bool branch_taken_0x4a06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06ECu;
        // 0x4a06f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a06ec) {
            ctx->pc = 0x4A0740u;
            goto label_4a0740;
        }
    }
    ctx->pc = 0x4A06F4u;
label_4a06f4:
    // 0x4a06f4: 0xa202001b  sb          $v0, 0x1B($s0)
    ctx->pc = 0x4a06f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a06f8: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x4A06F8u;
    SET_GPR_U32(ctx, 31, 0x4A0700u);
    ctx->pc = 0x4A06FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A06F8u;
    // 0x4a06fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x4A06F8u, 0x4A0700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0700u;
label_4a0700:
    // 0x4a0700: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a0700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4a0704: 0x2782c1f0  addiu       $v0, $gp, -0x3E10
    ctx->pc = 0x4a0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0708: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4a0708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4a070c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4a070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4a0710: 0x8f83c1f0  lw          $v1, -0x3E10($gp)
    ctx->pc = 0x4a0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0714: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4a0714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x4a0718: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4a0718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x4a071c: 0x8f82c1f0  lw          $v0, -0x3E10($gp)
    ctx->pc = 0x4a071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0720: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4a0720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x4a0724: 0xaf84c1f0  sw          $a0, -0x3E10($gp)
    ctx->pc = 0x4a0724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951408), GPR_U32(ctx, 4));
    // 0x4a0728: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x4a0728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4a072c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4a0730: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4a0730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4a0734: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4a0734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4a0738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a073c: 0x0  nop
    ctx->pc = 0x4a073cu;
    // NOP
label_4a0740:
    // 0x4a0740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a0740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0748: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0748u;
        // 0x4a074c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0750u;
}
