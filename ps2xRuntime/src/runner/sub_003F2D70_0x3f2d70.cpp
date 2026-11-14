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

// Function: sub_003F2D70
// Address: 0x3f2d70 - 0x3f31a0
void sub_003F2D70_0x3f2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2D70_0x3f2d70");
#endif

    switch (ctx->pc) {
        case 0x3f2db0u: goto label_3f2db0;
        case 0x3f2dd8u: goto label_3f2dd8;
        case 0x3f2df0u: goto label_3f2df0;
        case 0x3f2e08u: goto label_3f2e08;
        case 0x3f2e18u: goto label_3f2e18;
        case 0x3f2e24u: goto label_3f2e24;
        case 0x3f2e3cu: goto label_3f2e3c;
        case 0x3f2e4cu: goto label_3f2e4c;
        case 0x3f2e54u: goto label_3f2e54;
        case 0x3f2e98u: goto label_3f2e98;
        case 0x3f2ee0u: goto label_3f2ee0;
        case 0x3f2ef8u: goto label_3f2ef8;
        case 0x3f2f10u: goto label_3f2f10;
        case 0x3f2f20u: goto label_3f2f20;
        case 0x3f2f54u: goto label_3f2f54;
        case 0x3f2f68u: goto label_3f2f68;
        case 0x3f2f80u: goto label_3f2f80;
        case 0x3f2f90u: goto label_3f2f90;
        case 0x3f2fb4u: goto label_3f2fb4;
        case 0x3f2fc4u: goto label_3f2fc4;
        case 0x3f2fccu: goto label_3f2fcc;
        case 0x3f3014u: goto label_3f3014;
        case 0x3f3028u: goto label_3f3028;
        case 0x3f3040u: goto label_3f3040;
        case 0x3f3050u: goto label_3f3050;
        case 0x3f3058u: goto label_3f3058;
        case 0x3f30a4u: goto label_3f30a4;
        case 0x3f30b8u: goto label_3f30b8;
        case 0x3f3104u: goto label_3f3104;
        case 0x3f313cu: goto label_3f313c;
        case 0x3f314cu: goto label_3f314c;
        case 0x3f3160u: goto label_3f3160;
        case 0x3f3170u: goto label_3f3170;
        case 0x3f3180u: goto label_3f3180;
        default: break;
    }

    ctx->pc = 0x3f2d70u;

    // 0x3f2d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f2d74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f2d78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f2d7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f2d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2d80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f2d84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f2d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f2d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f2d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2d8c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f2d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2d94: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f2d94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f2d98: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f2d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f2d9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2D9Cu;
    {
        const bool branch_taken_0x3f2d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D9Cu;
        // 0x3f2da0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d9c) {
            ctx->pc = 0x3F2DB8u;
            goto label_3f2db8;
        }
    }
    ctx->pc = 0x3F2DA4u;
    // 0x3f2da4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2da8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F2DA8u;
    SET_GPR_U32(ctx, 31, 0x3F2DB0u);
    ctx->pc = 0x3F2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DA8u;
    // 0x3f2dac: 0x24a5ec20  addiu       $a1, $a1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F2DA8u, 0x3F2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DB0u;
label_3f2db0:
    // 0x3f2db0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3F2DB0u;
    {
        const bool branch_taken_0x3f2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DB0u;
        // 0x3f2db4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2db0) {
            ctx->pc = 0x3F2F38u;
            goto label_3f2f38;
        }
    }
    ctx->pc = 0x3F2DB8u;
label_3f2db8:
    // 0x3f2db8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f2dbc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F2DBCu;
    {
        const bool branch_taken_0x3f2dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DBCu;
        // 0x3f2dc0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2dbc) {
            ctx->pc = 0x3F2E80u;
            goto label_3f2e80;
        }
    }
    ctx->pc = 0x3F2DC4u;
    // 0x3f2dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2dc8: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f2dc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f2dcc: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f2dccu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f2dd0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2DD0u;
    SET_GPR_U32(ctx, 31, 0x3F2DD8u);
    ctx->pc = 0x3F2DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DD0u;
    // 0x3f2dd4: 0x24a5ec40  addiu       $a1, $a1, -0x13C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2DD0u, 0x3F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DD8u;
label_3f2dd8:
    // 0x3f2dd8: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f2dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2ddc: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2de0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2DE0u;
    {
        const bool branch_taken_0x3f2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2de0) {
            ctx->pc = 0x3F2E24u;
            goto label_3f2e24;
        }
    }
    ctx->pc = 0x3F2DE8u;
    // 0x3f2de8: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f2de8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f2dec: 0x0  nop
    ctx->pc = 0x3f2decu;
    // NOP
label_3f2df0:
    // 0x3f2df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2df4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2df8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2df8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f2dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e00: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2E00u;
    SET_GPR_U32(ctx, 31, 0x3F2E08u);
    ctx->pc = 0x3F2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E00u;
    // 0x3f2e04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2E00u, 0x3F2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E08u;
label_3f2e08:
    // 0x3f2e08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f2e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e10: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2E10u;
    SET_GPR_U32(ctx, 31, 0x3F2E18u);
    ctx->pc = 0x3F2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E10u;
    // 0x3f2e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2E10u, 0x3F2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E18u;
label_3f2e18:
    // 0x3f2e18: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2e1c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F2E1Cu;
    {
        const bool branch_taken_0x3f2e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2e1c) {
            ctx->pc = 0x3F2E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2E1Cu;
            // 0x3f2e20: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2df0;
        }
    }
    ctx->pc = 0x3F2E24u;
label_3f2e24:
    // 0x3f2e24: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2E24u;
    {
        const bool branch_taken_0x3f2e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E24u;
        // 0x3f2e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e24) {
            ctx->pc = 0x3F2E4Cu;
            goto label_3f2e4c;
        }
    }
    ctx->pc = 0x3F2E2Cu;
    // 0x3f2e2c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f2e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f2e30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e34: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2E34u;
    SET_GPR_U32(ctx, 31, 0x3F2E3Cu);
    ctx->pc = 0x3F2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E34u;
    // 0x3f2e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2E34u, 0x3F2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E3Cu;
label_3f2e3c:
    // 0x3f2e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e44: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2E44u;
    SET_GPR_U32(ctx, 31, 0x3F2E4Cu);
    ctx->pc = 0x3F2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E44u;
    // 0x3f2e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2E44u, 0x3F2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E4Cu;
label_3f2e4c:
    // 0x3f2e4c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F2E4Cu;
    SET_GPR_U32(ctx, 31, 0x3F2E54u);
    ctx->pc = 0x3F2E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E4Cu;
    // 0x3f2e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F2E4Cu, 0x3F2E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E54u;
label_3f2e54:
    // 0x3f2e54: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x3F2E54u;
    {
        const bool branch_taken_0x3f2e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E54u;
        // 0x3f2e58: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e54) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F2E5Cu;
    // 0x3f2e5c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f2e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f2e60: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f2e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f2e64: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3F2E64u;
    {
        const bool branch_taken_0x3f2e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E64u;
        // 0x3f2e68: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e64) {
            ctx->pc = 0x3F2FE4u;
            goto label_3f2fe4;
        }
    }
    ctx->pc = 0x3F2E6Cu;
    // 0x3f2e6c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f2e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f2e70: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x3F2E70u;
    {
        const bool branch_taken_0x3f2e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E70u;
        // 0x3f2e74: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e70) {
            ctx->pc = 0x3F3008u;
            goto label_3f3008;
        }
    }
    ctx->pc = 0x3F2E78u;
    // 0x3f2e78: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3F2E78u;
    {
        const bool branch_taken_0x3f2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E78u;
        // 0x3f2e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e78) {
            ctx->pc = 0x3F3020u;
            goto label_3f3020;
        }
    }
    ctx->pc = 0x3F2E80u;
label_3f2e80:
    // 0x3f2e80: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f2e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2E84u;
    {
        const bool branch_taken_0x3f2e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E84u;
        // 0x3f2e88: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e84) {
            ctx->pc = 0x3F2EA0u;
            goto label_3f2ea0;
        }
    }
    ctx->pc = 0x3F2E8Cu;
    // 0x3f2e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2e90: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2E90u;
    SET_GPR_U32(ctx, 31, 0x3F2E98u);
    ctx->pc = 0x3F2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E90u;
    // 0x3f2e94: 0x24a5ec58  addiu       $a1, $a1, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2E90u, 0x3F2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E98u;
label_3f2e98:
    // 0x3f2e98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3F2E98u;
    {
        const bool branch_taken_0x3f2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E98u;
        // 0x3f2e9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e98) {
            ctx->pc = 0x3F2F38u;
            goto label_3f2f38;
        }
    }
    ctx->pc = 0x3F2EA0u;
label_3f2ea0:
    // 0x3f2ea0: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F2EA0u;
    {
        const bool branch_taken_0x3f2ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2EA0u;
        // 0x3f2ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ea0) {
            ctx->pc = 0x3F2F38u;
            goto label_3f2f38;
        }
    }
    ctx->pc = 0x3F2EA8u;
    // 0x3f2ea8: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x3f2ea8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f2eac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f2eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f2eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f2eb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f2eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f2eb8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3F2EB8u;
    {
        const bool branch_taken_0x3f2eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2EB8u;
        // 0x3f2ebc: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2eb8) {
            ctx->pc = 0x3F2F34u;
            goto label_3f2f34;
        }
    }
    ctx->pc = 0x3F2EC0u;
    // 0x3f2ec0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F2EC0u;
    {
        const bool branch_taken_0x3f2ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2EC0u;
        // 0x3f2ec4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ec0) {
            ctx->pc = 0x3F2F38u;
            goto label_3f2f38;
        }
    }
    ctx->pc = 0x3F2EC8u;
    // 0x3f2ec8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2ed0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f2ed0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f2ed4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f2ed4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f2ed8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2ED8u;
    SET_GPR_U32(ctx, 31, 0x3F2EE0u);
    ctx->pc = 0x3F2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2ED8u;
    // 0x3f2edc: 0x24a5ec70  addiu       $a1, $a1, -0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2ED8u, 0x3F2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2EE0u;
label_3f2ee0:
    // 0x3f2ee0: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f2ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2ee4: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2ee8: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3F2EE8u;
    {
        const bool branch_taken_0x3f2ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2ee8) {
            ctx->pc = 0x3F2E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2e24;
        }
    }
    ctx->pc = 0x3F2EF0u;
    // 0x3f2ef0: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f2ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f2ef4: 0x0  nop
    ctx->pc = 0x3f2ef4u;
    // NOP
label_3f2ef8:
    // 0x3f2ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2efc: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2efcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2f00: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2f00u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f2f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f08: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2F08u;
    SET_GPR_U32(ctx, 31, 0x3F2F10u);
    ctx->pc = 0x3F2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F08u;
    // 0x3f2f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2F08u, 0x3F2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F10u;
label_3f2f10:
    // 0x3f2f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f2f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f18: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2F18u;
    SET_GPR_U32(ctx, 31, 0x3F2F20u);
    ctx->pc = 0x3F2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F18u;
    // 0x3f2f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2F18u, 0x3F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F20u;
label_3f2f20:
    // 0x3f2f20: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2f24: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F2F24u;
    {
        const bool branch_taken_0x3f2f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f24) {
            ctx->pc = 0x3F2F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2F24u;
            // 0x3f2f28: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2ef8;
        }
    }
    ctx->pc = 0x3F2F2Cu;
    // 0x3f2f2c: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x3F2F2Cu;
    {
        const bool branch_taken_0x3f2f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f2c) {
            ctx->pc = 0x3F2E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2e24;
        }
    }
    ctx->pc = 0x3F2F34u;
label_3f2f34:
    // 0x3f2f34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f2f38:
    // 0x3f2f38: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F2F38u;
    {
        const bool branch_taken_0x3f2f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F38u;
        // 0x3f2f3c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2f38) {
            ctx->pc = 0x3F3030u;
            goto label_3f3030;
        }
    }
    ctx->pc = 0x3F2F40u;
    // 0x3f2f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f44: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f2f44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f2f48: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f2f48u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f2f4c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F2F4Cu;
    SET_GPR_U32(ctx, 31, 0x3F2F54u);
    ctx->pc = 0x3F2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F4Cu;
    // 0x3f2f50: 0x24a5ec88  addiu       $a1, $a1, -0x1378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F2F4Cu, 0x3F2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F54u;
label_3f2f54:
    // 0x3f2f54: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f2f54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2f58: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2f5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F2F5Cu;
    {
        const bool branch_taken_0x3f2f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f5c) {
            ctx->pc = 0x3F2F9Cu;
            goto label_3f2f9c;
        }
    }
    ctx->pc = 0x3F2F64u;
    // 0x3f2f64: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f2f64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f2f68:
    // 0x3f2f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f6c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f2f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f2f70: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f2f70u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f2f74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f78: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2F78u;
    SET_GPR_U32(ctx, 31, 0x3F2F80u);
    ctx->pc = 0x3F2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F78u;
    // 0x3f2f7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2F78u, 0x3F2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F80u;
label_3f2f80:
    // 0x3f2f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f2f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f88: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2F88u;
    SET_GPR_U32(ctx, 31, 0x3F2F90u);
    ctx->pc = 0x3F2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F88u;
    // 0x3f2f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2F88u, 0x3F2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F90u;
label_3f2f90:
    // 0x3f2f90: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f2f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f2f94: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F2F94u;
    {
        const bool branch_taken_0x3f2f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f94) {
            ctx->pc = 0x3F2F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2F94u;
            // 0x3f2f98: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2f68;
        }
    }
    ctx->pc = 0x3F2F9Cu;
label_3f2f9c:
    // 0x3f2f9c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2F9Cu;
    {
        const bool branch_taken_0x3f2f9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F9Cu;
        // 0x3f2fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2f9c) {
            ctx->pc = 0x3F2FC4u;
            goto label_3f2fc4;
        }
    }
    ctx->pc = 0x3F2FA4u;
    // 0x3f2fa4: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f2fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f2fa8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2fac: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F2FACu;
    SET_GPR_U32(ctx, 31, 0x3F2FB4u);
    ctx->pc = 0x3F2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2FACu;
    // 0x3f2fb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F2FACu, 0x3F2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2FB4u;
label_3f2fb4:
    // 0x3f2fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2fb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2fbc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F2FBCu;
    SET_GPR_U32(ctx, 31, 0x3F2FC4u);
    ctx->pc = 0x3F2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2FBCu;
    // 0x3f2fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F2FBCu, 0x3F2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2FC4u;
label_3f2fc4:
    // 0x3f2fc4: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F2FC4u;
    SET_GPR_U32(ctx, 31, 0x3F2FCCu);
    ctx->pc = 0x3F2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2FC4u;
    // 0x3f2fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F2FC4u, 0x3F2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2FCCu;
label_3f2fcc:
    // 0x3f2fcc: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x3F2FCCu;
    {
        const bool branch_taken_0x3f2fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FCCu;
        // 0x3f2fd0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fcc) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F2FD4u;
    // 0x3f2fd4: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f2fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f2fd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f2fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f2fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2FDCu;
    {
        const bool branch_taken_0x3f2fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FDCu;
        // 0x3f2fe0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fdc) {
            ctx->pc = 0x3F2FF8u;
            goto label_3f2ff8;
        }
    }
    ctx->pc = 0x3F2FE4u;
label_3f2fe4:
    // 0x3f2fe4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f2fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f2fe8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F2FE8u;
    {
        const bool branch_taken_0x3f2fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FE8u;
        // 0x3f2fec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fe8) {
            ctx->pc = 0x3F3004u;
            goto label_3f3004;
        }
    }
    ctx->pc = 0x3F2FF0u;
    // 0x3f2ff0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F2FF0u;
    {
        const bool branch_taken_0x3f2ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FF0u;
        // 0x3f2ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ff0) {
            ctx->pc = 0x3F3020u;
            goto label_3f3020;
        }
    }
    ctx->pc = 0x3F2FF8u;
label_3f2ff8:
    // 0x3f2ff8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f2ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f2ffc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2FFCu;
    {
        const bool branch_taken_0x3f2ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FFCu;
        // 0x3f3000: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ffc) {
            ctx->pc = 0x3F301Cu;
            goto label_3f301c;
        }
    }
    ctx->pc = 0x3F3004u;
label_3f3004:
    // 0x3f3004: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f3008:
    // 0x3f3008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f300c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F300Cu;
    SET_GPR_U32(ctx, 31, 0x3F3014u);
    ctx->pc = 0x3F3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F300Cu;
    // 0x3f3010: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F300Cu, 0x3F3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3014u;
label_3f3014:
    // 0x3f3014: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F3014u;
    {
        const bool branch_taken_0x3f3014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3014u;
        // 0x3f3018: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3014) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F301Cu;
label_3f301c:
    // 0x3f301c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3020:
    // 0x3f3020: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F3020u;
    SET_GPR_U32(ctx, 31, 0x3F3028u);
    ctx->pc = 0x3F3024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3020u;
    // 0x3f3024: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F3020u, 0x3F3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3028u;
label_3f3028:
    // 0x3f3028: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3F3028u;
    {
        const bool branch_taken_0x3f3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3028u;
        // 0x3f302c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3028) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F3030u;
label_3f3030:
    // 0x3f3030: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f3030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3038: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3038u;
    SET_GPR_U32(ctx, 31, 0x3F3040u);
    ctx->pc = 0x3F303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3038u;
    // 0x3f303c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3038u, 0x3F3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3040u;
label_3f3040:
    // 0x3f3040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3044: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f3044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3048: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3048u;
    SET_GPR_U32(ctx, 31, 0x3F3050u);
    ctx->pc = 0x3F304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3048u;
    // 0x3f304c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3048u, 0x3F3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3050u;
label_3f3050:
    // 0x3f3050: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F3050u;
    SET_GPR_U32(ctx, 31, 0x3F3058u);
    ctx->pc = 0x3F3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3050u;
    // 0x3f3054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F3050u, 0x3F3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3058u;
label_3f3058:
    // 0x3f3058: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F3058u;
    {
        const bool branch_taken_0x3f3058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3058u;
        // 0x3f305c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3058) {
            ctx->pc = 0x3F30BCu;
            goto label_3f30bc;
        }
    }
    ctx->pc = 0x3F3060u;
    // 0x3f3060: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f3060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f3064: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f3068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3068u;
    {
        const bool branch_taken_0x3f3068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3068u;
        // 0x3f306c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3068) {
            ctx->pc = 0x3F3088u;
            goto label_3f3088;
        }
    }
    ctx->pc = 0x3F3070u;
    // 0x3f3070: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f3074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3074u;
    {
        const bool branch_taken_0x3f3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3074u;
        // 0x3f3078: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3074) {
            ctx->pc = 0x3F3094u;
            goto label_3f3094;
        }
    }
    ctx->pc = 0x3F307Cu;
    // 0x3f307c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F307Cu;
    {
        const bool branch_taken_0x3f307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F307Cu;
        // 0x3f3080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f307c) {
            ctx->pc = 0x3F30B0u;
            goto label_3f30b0;
        }
    }
    ctx->pc = 0x3F3084u;
    // 0x3f3084: 0x0  nop
    ctx->pc = 0x3f3084u;
    // NOP
label_3f3088:
    // 0x3f3088: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f308c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F308Cu;
    {
        const bool branch_taken_0x3f308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F308Cu;
        // 0x3f3090: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f308c) {
            ctx->pc = 0x3F30ACu;
            goto label_3f30ac;
        }
    }
    ctx->pc = 0x3F3094u;
label_3f3094:
    // 0x3f3094: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f3098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f309c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F309Cu;
    SET_GPR_U32(ctx, 31, 0x3F30A4u);
    ctx->pc = 0x3F30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F309Cu;
    // 0x3f30a0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F309Cu, 0x3F30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F30A4u;
label_3f30a4:
    // 0x3f30a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F30A4u;
    {
        const bool branch_taken_0x3f30a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F30A4u;
        // 0x3f30a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f30a4) {
            ctx->pc = 0x3F30BCu;
            goto label_3f30bc;
        }
    }
    ctx->pc = 0x3F30ACu;
label_3f30ac:
    // 0x3f30ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f30acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f30b0:
    // 0x3f30b0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F30B0u;
    SET_GPR_U32(ctx, 31, 0x3F30B8u);
    ctx->pc = 0x3F30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F30B0u;
    // 0x3f30b4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F30B0u, 0x3F30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F30B8u;
label_3f30b8:
    // 0x3f30b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f30bc:
    // 0x3f30bc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3F30BCu;
    {
        const bool branch_taken_0x3f30bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F30BCu;
        // 0x3f30c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f30bc) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F30C4u;
    // 0x3f30c4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3f30c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f30c8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f30c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f30cc: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x3f30ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f30d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f30d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f30d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f30d8: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x3f30d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f30dc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f30dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f30e0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f30e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f30e4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f30e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f30e8: 0x45802d  daddu       $s0, $v0, $a1
    ctx->pc = 0x3f30e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f30ec: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F30ECu;
    {
        const bool branch_taken_0x3f30ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f30ec) {
            ctx->pc = 0x3F30F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F30ECu;
            // 0x3f30f0: 0xde220010  ld          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F310Cu;
            goto label_3f310c;
        }
    }
    ctx->pc = 0x3F30F4u;
    // 0x3f30f4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f30f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f30f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f30f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f30fc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F30FCu;
    SET_GPR_U32(ctx, 31, 0x3F3104u);
    ctx->pc = 0x3F3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F30FCu;
    // 0x3f3100: 0x24a5eca8  addiu       $a1, $a1, -0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F30FCu, 0x3F3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3104u;
label_3f3104:
    // 0x3f3104: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3F3104u;
    {
        const bool branch_taken_0x3f3104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3104u;
        // 0x3f3108: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3104) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F310Cu;
label_3f310c:
    // 0x3f310c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3f310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3f3110: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F3110u;
    {
        const bool branch_taken_0x3f3110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3110) {
            ctx->pc = 0x3F3144u;
            goto label_3f3144;
        }
    }
    ctx->pc = 0x3F3118u;
    // 0x3f3118: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f311c: 0x34425038  ori         $v0, $v0, 0x5038
    ctx->pc = 0x3f311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20536);
    // 0x3f3120: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3f3120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f3124: 0x2c4203e9  sltiu       $v0, $v0, 0x3E9
    ctx->pc = 0x3f3124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3128: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3128u;
    {
        const bool branch_taken_0x3f3128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3128u;
        // 0x3f312c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3128) {
            ctx->pc = 0x3F3144u;
            goto label_3f3144;
        }
    }
    ctx->pc = 0x3F3130u;
    // 0x3f3130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3134: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3134u;
    SET_GPR_U32(ctx, 31, 0x3F313Cu);
    ctx->pc = 0x3F3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3134u;
    // 0x3f3138: 0x24a5ecd0  addiu       $a1, $a1, -0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3134u, 0x3F313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F313Cu;
label_3f313c:
    // 0x3f313c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3F313Cu;
    {
        const bool branch_taken_0x3f313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F313Cu;
        // 0x3f3140: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f313c) {
            ctx->pc = 0x3F3184u;
            goto label_3f3184;
        }
    }
    ctx->pc = 0x3F3144u;
label_3f3144:
    // 0x3f3144: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3144u;
    SET_GPR_U32(ctx, 31, 0x3F314Cu);
    ctx->pc = 0x3F3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3144u;
    // 0x3f3148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3144u, 0x3F314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F314Cu;
label_3f314c:
    // 0x3f314c: 0xc7818130  lwc1        $f1, -0x7ED0($gp)
    ctx->pc = 0x3f314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3150: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f3150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3f3154: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3f3154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3f3158: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3158u;
    SET_GPR_U32(ctx, 31, 0x3F3160u);
    ctx->pc = 0x3F315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3158u;
    // 0x3f315c: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3158u, 0x3F3160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3160u;
label_3f3160:
    // 0x3f3160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f3160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3168: 0xc0fec26  jal         func_3FB098
    ctx->pc = 0x3F3168u;
    SET_GPR_U32(ctx, 31, 0x3F3170u);
    ctx->pc = 0x3F316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3168u;
    // 0x3f316c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB098u, 0x3F3168u, 0x3F3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3170u;
label_3f3170:
    // 0x3f3170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3178: 0xc0fec54  jal         func_3FB150
    ctx->pc = 0x3F3178u;
    SET_GPR_U32(ctx, 31, 0x3F3180u);
    ctx->pc = 0x3F317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3178u;
    // 0x3f317c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB150u, 0x3F3178u, 0x3F3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3180u;
label_3f3180:
    // 0x3f3180: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f3180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3184:
    // 0x3f3184: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f3184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3188: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f3188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f318c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f318cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f3190: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f3190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f3194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3198: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3198u;
        // 0x3f319c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F31A0u;
}
