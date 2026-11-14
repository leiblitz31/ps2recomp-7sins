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

// Function: sub_003D3758
// Address: 0x3d3758 - 0x3d37d8
void sub_003D3758_0x3d3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3758_0x3d3758");
#endif

    switch (ctx->pc) {
        case 0x3d379cu: goto label_3d379c;
        case 0x3d37c0u: goto label_3d37c0;
        default: break;
    }

    ctx->pc = 0x3d3758u;

    // 0x3d3758: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3d3758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3d375c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3760: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3760u;
        // 0x3d3764: 0xac64b354  sw          $a0, -0x4CAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947668), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3768u;
    // 0x3d3768: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3d3768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3d376c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D376Cu;
        // 0x3d3770: 0x8c62b354  lw          $v0, -0x4CAC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947668)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3774u;
    // 0x3d3774: 0x0  nop
    ctx->pc = 0x3d3774u;
    // NOP
    // 0x3d3778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d377c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3d3780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d3784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d3784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d3788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d378c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D378Cu;
    {
        const bool branch_taken_0x3d378c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D378Cu;
        // 0x3d3790: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d378c) {
            ctx->pc = 0x3D37C0u;
            goto label_3d37c0;
        }
    }
    ctx->pc = 0x3D3794u;
    // 0x3d3794: 0xc0c8d72  jal         func_3235C8
    ctx->pc = 0x3D3794u;
    SET_GPR_U32(ctx, 31, 0x3D379Cu);
    ctx->pc = 0x3235C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235C8u, 0x3D3794u, 0x3D379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D379Cu;
label_3d379c:
    // 0x3d379c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D379Cu;
    {
        const bool branch_taken_0x3d379c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D379Cu;
        // 0x3d37a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d379c) {
            ctx->pc = 0x3D37C0u;
            goto label_3d37c0;
        }
    }
    ctx->pc = 0x3D37A4u;
    // 0x3d37a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d37a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d37ac: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d37acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d37b0: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x3d37b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d37b4: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3d37b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3d37b8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D37B8u;
    SET_GPR_U32(ctx, 31, 0x3D37C0u);
    ctx->pc = 0x3D37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D37B8u;
    // 0x3d37bc: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D37B8u, 0x3D37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D37C0u;
label_3d37c0:
    // 0x3d37c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d37c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d37c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d37c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d37c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d37cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d37ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d37d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D37D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37D0u;
        // 0x3d37d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D37D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D37D8u;
}
