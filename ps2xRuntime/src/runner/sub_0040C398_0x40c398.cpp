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

// Function: sub_0040C398
// Address: 0x40c398 - 0x40c3f8
void sub_0040C398_0x40c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C398_0x40c398");
#endif

    switch (ctx->pc) {
        case 0x40c398u: goto label_40c398;
        case 0x40c39cu: goto label_40c39c;
        case 0x40c3a0u: goto label_40c3a0;
        case 0x40c3a4u: goto label_40c3a4;
        case 0x40c3a8u: goto label_40c3a8;
        case 0x40c3acu: goto label_40c3ac;
        case 0x40c3b0u: goto label_40c3b0;
        case 0x40c3b4u: goto label_40c3b4;
        case 0x40c3b8u: goto label_40c3b8;
        case 0x40c3bcu: goto label_40c3bc;
        case 0x40c3c0u: goto label_40c3c0;
        case 0x40c3c4u: goto label_40c3c4;
        case 0x40c3c8u: goto label_40c3c8;
        case 0x40c3ccu: goto label_40c3cc;
        case 0x40c3d0u: goto label_40c3d0;
        case 0x40c3d4u: goto label_40c3d4;
        case 0x40c3d8u: goto label_40c3d8;
        case 0x40c3dcu: goto label_40c3dc;
        case 0x40c3e0u: goto label_40c3e0;
        case 0x40c3e4u: goto label_40c3e4;
        case 0x40c3e8u: goto label_40c3e8;
        case 0x40c3ecu: goto label_40c3ec;
        case 0x40c3f0u: goto label_40c3f0;
        case 0x40c3f4u: goto label_40c3f4;
        default: break;
    }

    ctx->pc = 0x40c398u;

label_40c398:
    // 0x40c398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40c39c:
    // 0x40c39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40c3a0:
    // 0x40c3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40c3a4:
    // 0x40c3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c3a8:
    // 0x40c3a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c3ac:
    // 0x40c3ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40c3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40c3b0:
    // 0x40c3b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_40c3b4:
    if (ctx->pc == 0x40C3B4u) {
        ctx->pc = 0x40C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3B0u;
        // 0x40c3b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3B8u;
        goto label_40c3b8;
    }
    ctx->pc = 0x40C3B0u;
    {
        const bool branch_taken_0x40c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c3b0) {
            ctx->pc = 0x40C3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C3B0u;
            // 0x40c3b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C3C4u;
            goto label_40c3c4;
        }
    }
    ctx->pc = 0x40C3B8u;
label_40c3b8:
    // 0x40c3b8: 0xc103da2  jal         func_40F688
label_40c3bc:
    if (ctx->pc == 0x40C3BCu) {
        ctx->pc = 0x40C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3B8u;
        // 0x40c3bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3C0u;
        goto label_40c3c0;
    }
    ctx->pc = 0x40C3B8u;
    SET_GPR_U32(ctx, 31, 0x40C3C0u);
    ctx->pc = 0x40C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3B8u;
    // 0x40c3bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x40C3B8u, 0x40C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C3C0u;
label_40c3c0:
    // 0x40c3c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c3c4:
    // 0x40c3c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40c3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_40c3c8:
    // 0x40c3c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_40c3cc:
    if (ctx->pc == 0x40C3CCu) {
        ctx->pc = 0x40C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3C8u;
        // 0x40c3cc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3D0u;
        goto label_40c3d0;
    }
    ctx->pc = 0x40C3C8u;
    {
        const bool branch_taken_0x40c3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3C8u;
        // 0x40c3cc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c3c8) {
            ctx->pc = 0x40C3DCu;
            goto label_40c3dc;
        }
    }
    ctx->pc = 0x40C3D0u;
label_40c3d0:
    // 0x40c3d0: 0xc103da2  jal         func_40F688
label_40c3d4:
    if (ctx->pc == 0x40C3D4u) {
        ctx->pc = 0x40C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3D0u;
        // 0x40c3d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3D8u;
        goto label_40c3d8;
    }
    ctx->pc = 0x40C3D0u;
    SET_GPR_U32(ctx, 31, 0x40C3D8u);
    ctx->pc = 0x40C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3D0u;
    // 0x40c3d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x40C3D0u, 0x40C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C3D8u;
label_40c3d8:
    // 0x40c3d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40c3dc:
    // 0x40c3dc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x40c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_40c3e0:
    // 0x40c3e0: 0x40f809  jalr        $v0
label_40c3e4:
    if (ctx->pc == 0x40C3E4u) {
        ctx->pc = 0x40C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3E0u;
        // 0x40c3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3E8u;
        goto label_40c3e8;
    }
    ctx->pc = 0x40C3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C3E8u);
        ctx->pc = 0x40C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3E0u;
        // 0x40c3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C3E0u, 0x40C3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C3E8u;
label_40c3e8:
    // 0x40c3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40c3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c3ec:
    // 0x40c3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40c3f0:
    // 0x40c3f0: 0x3e00008  jr          $ra
label_40c3f4:
    if (ctx->pc == 0x40C3F4u) {
        ctx->pc = 0x40C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3F0u;
        // 0x40c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C3F8u;
        goto label_fallthrough_0x40c3f0;
    }
    ctx->pc = 0x40C3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3F0u;
        // 0x40c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40c3f0:
    ctx->pc = 0x40C3F8u;
}
