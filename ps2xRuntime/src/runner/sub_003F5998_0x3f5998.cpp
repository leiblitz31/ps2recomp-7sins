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

// Function: sub_003F5998
// Address: 0x3f5998 - 0x3f5f10
void sub_003F5998_0x3f5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5998_0x3f5998");
#endif

    switch (ctx->pc) {
        case 0x3f59d8u: goto label_3f59d8;
        case 0x3f5a00u: goto label_3f5a00;
        case 0x3f5a18u: goto label_3f5a18;
        case 0x3f5a30u: goto label_3f5a30;
        case 0x3f5a40u: goto label_3f5a40;
        case 0x3f5a4cu: goto label_3f5a4c;
        case 0x3f5a64u: goto label_3f5a64;
        case 0x3f5a74u: goto label_3f5a74;
        case 0x3f5a7cu: goto label_3f5a7c;
        case 0x3f5ac8u: goto label_3f5ac8;
        case 0x3f5ae0u: goto label_3f5ae0;
        case 0x3f5af8u: goto label_3f5af8;
        case 0x3f5b08u: goto label_3f5b08;
        case 0x3f5b48u: goto label_3f5b48;
        case 0x3f5b60u: goto label_3f5b60;
        case 0x3f5b78u: goto label_3f5b78;
        case 0x3f5b88u: goto label_3f5b88;
        case 0x3f5bccu: goto label_3f5bcc;
        case 0x3f5be0u: goto label_3f5be0;
        case 0x3f5bf8u: goto label_3f5bf8;
        case 0x3f5c08u: goto label_3f5c08;
        case 0x3f5c2cu: goto label_3f5c2c;
        case 0x3f5c3cu: goto label_3f5c3c;
        case 0x3f5c44u: goto label_3f5c44;
        case 0x3f5c8cu: goto label_3f5c8c;
        case 0x3f5ca0u: goto label_3f5ca0;
        case 0x3f5ce8u: goto label_3f5ce8;
        case 0x3f5cf8u: goto label_3f5cf8;
        case 0x3f5d24u: goto label_3f5d24;
        case 0x3f5d34u: goto label_3f5d34;
        case 0x3f5d60u: goto label_3f5d60;
        case 0x3f5d70u: goto label_3f5d70;
        case 0x3f5d90u: goto label_3f5d90;
        case 0x3f5da4u: goto label_3f5da4;
        case 0x3f5db4u: goto label_3f5db4;
        case 0x3f5dd8u: goto label_3f5dd8;
        case 0x3f5de8u: goto label_3f5de8;
        case 0x3f5e0cu: goto label_3f5e0c;
        case 0x3f5e1cu: goto label_3f5e1c;
        case 0x3f5e40u: goto label_3f5e40;
        case 0x3f5e50u: goto label_3f5e50;
        case 0x3f5e74u: goto label_3f5e74;
        case 0x3f5ebcu: goto label_3f5ebc;
        case 0x3f5ed0u: goto label_3f5ed0;
        case 0x3f5eecu: goto label_3f5eec;
        default: break;
    }

    ctx->pc = 0x3f5998u;

    // 0x3f5998: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x3f5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x3f599c: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x3f599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x3f59a0: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x3f59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x3f59a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f59a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f59a8: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x3f59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x3f59ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f59acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f59b0: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x3f59b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x3f59b4: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x3f59b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x3f59b8: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x3f59b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x3f59bc: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f59bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f59c0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f59c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f59c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F59C4u;
    {
        const bool branch_taken_0x3f59c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59C4u;
        // 0x3f59c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59c4) {
            ctx->pc = 0x3F59E0u;
            goto label_3f59e0;
        }
    }
    ctx->pc = 0x3F59CCu;
    // 0x3f59cc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f59ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f59d0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F59D0u;
    SET_GPR_U32(ctx, 31, 0x3F59D8u);
    ctx->pc = 0x3F59D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F59D0u;
    // 0x3f59d4: 0x24a5f270  addiu       $a1, $a1, -0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F59D0u, 0x3F59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F59D8u;
label_3f59d8:
    // 0x3f59d8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3F59D8u;
    {
        const bool branch_taken_0x3f59d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f59d8) {
            ctx->pc = 0x3F5B9Cu;
            goto label_3f5b9c;
        }
    }
    ctx->pc = 0x3F59E0u;
label_3f59e0:
    // 0x3f59e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f59e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f59e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F59E4u;
    {
        const bool branch_taken_0x3f59e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59E4u;
        // 0x3f59e8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59e4) {
            ctx->pc = 0x3F5AA8u;
            goto label_3f5aa8;
        }
    }
    ctx->pc = 0x3F59ECu;
    // 0x3f59ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f59ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f59f0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f59f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f59f4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f59f4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f59f8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F59F8u;
    SET_GPR_U32(ctx, 31, 0x3F5A00u);
    ctx->pc = 0x3F59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F59F8u;
    // 0x3f59fc: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F59F8u, 0x3F5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A00u;
label_3f5a00:
    // 0x3f5a00: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5a00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5a04: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5a08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F5A08u;
    {
        const bool branch_taken_0x3f5a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5a08) {
            ctx->pc = 0x3F5A4Cu;
            goto label_3f5a4c;
        }
    }
    ctx->pc = 0x3F5A10u;
    // 0x3f5a10: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5a10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5a14: 0x0  nop
    ctx->pc = 0x3f5a14u;
    // NOP
label_3f5a18:
    // 0x3f5a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a1c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5a20: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5a20u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a28: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5A28u;
    SET_GPR_U32(ctx, 31, 0x3F5A30u);
    ctx->pc = 0x3F5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A28u;
    // 0x3f5a2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5A28u, 0x3F5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A30u;
label_3f5a30:
    // 0x3f5a30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a38: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5A38u;
    SET_GPR_U32(ctx, 31, 0x3F5A40u);
    ctx->pc = 0x3F5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A38u;
    // 0x3f5a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5A38u, 0x3F5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A40u;
label_3f5a40:
    // 0x3f5a40: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5a44: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5A44u;
    {
        const bool branch_taken_0x3f5a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5a44) {
            ctx->pc = 0x3F5A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5A44u;
            // 0x3f5a48: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5a18;
        }
    }
    ctx->pc = 0x3F5A4Cu;
label_3f5a4c:
    // 0x3f5a4c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F5A4Cu;
    {
        const bool branch_taken_0x3f5a4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A4Cu;
        // 0x3f5a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a4c) {
            ctx->pc = 0x3F5A74u;
            goto label_3f5a74;
        }
    }
    ctx->pc = 0x3F5A54u;
    // 0x3f5a54: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f5a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5a58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a5c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5A5Cu;
    SET_GPR_U32(ctx, 31, 0x3F5A64u);
    ctx->pc = 0x3F5A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A5Cu;
    // 0x3f5a60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5A5Cu, 0x3F5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A64u;
label_3f5a64:
    // 0x3f5a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a6c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5A6Cu;
    SET_GPR_U32(ctx, 31, 0x3F5A74u);
    ctx->pc = 0x3F5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A6Cu;
    // 0x3f5a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5A6Cu, 0x3F5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A74u;
label_3f5a74:
    // 0x3f5a74: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5A74u;
    SET_GPR_U32(ctx, 31, 0x3F5A7Cu);
    ctx->pc = 0x3F5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A74u;
    // 0x3f5a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5A74u, 0x3F5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A7Cu;
label_3f5a7c:
    // 0x3f5a7c: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x3F5A7Cu;
    {
        const bool branch_taken_0x3f5a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A7Cu;
        // 0x3f5a80: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a7c) {
            ctx->pc = 0x3F5EF0u;
            goto label_3f5ef0;
        }
    }
    ctx->pc = 0x3F5A84u;
    // 0x3f5a84: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5a88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f5a8c: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x3F5A8Cu;
    {
        const bool branch_taken_0x3f5a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A8Cu;
        // 0x3f5a90: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a8c) {
            ctx->pc = 0x3F5C5Cu;
            goto label_3f5c5c;
        }
    }
    ctx->pc = 0x3F5A94u;
    // 0x3f5a94: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f5a98: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x3F5A98u;
    {
        const bool branch_taken_0x3f5a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A98u;
        // 0x3f5a9c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a98) {
            ctx->pc = 0x3F5C80u;
            goto label_3f5c80;
        }
    }
    ctx->pc = 0x3F5AA0u;
    // 0x3f5aa0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3F5AA0u;
    {
        const bool branch_taken_0x3f5aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AA0u;
        // 0x3f5aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5aa0) {
            ctx->pc = 0x3F5C98u;
            goto label_3f5c98;
        }
    }
    ctx->pc = 0x3F5AA8u;
label_3f5aa8:
    // 0x3f5aa8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f5aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f5aac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F5AACu;
    {
        const bool branch_taken_0x3f5aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AACu;
        // 0x3f5ab0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5aac) {
            ctx->pc = 0x3F5B1Cu;
            goto label_3f5b1c;
        }
    }
    ctx->pc = 0x3F5AB4u;
    // 0x3f5ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5ab8: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f5ab8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f5abc: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5abcu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5ac0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5AC0u;
    SET_GPR_U32(ctx, 31, 0x3F5AC8u);
    ctx->pc = 0x3F5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5AC0u;
    // 0x3f5ac4: 0x24a5f2a8  addiu       $a1, $a1, -0xD58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5AC0u, 0x3F5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5AC8u;
label_3f5ac8:
    // 0x3f5ac8: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5acc: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5ad0: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3F5AD0u;
    {
        const bool branch_taken_0x3f5ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5ad0) {
            ctx->pc = 0x3F5A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5a4c;
        }
    }
    ctx->pc = 0x3F5AD8u;
    // 0x3f5ad8: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5adc: 0x0  nop
    ctx->pc = 0x3f5adcu;
    // NOP
label_3f5ae0:
    // 0x3f5ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5ae4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5ae8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5af0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5AF0u;
    SET_GPR_U32(ctx, 31, 0x3F5AF8u);
    ctx->pc = 0x3F5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5AF0u;
    // 0x3f5af4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5AF0u, 0x3F5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5AF8u;
label_3f5af8:
    // 0x3f5af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5afc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b00: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5B00u;
    SET_GPR_U32(ctx, 31, 0x3F5B08u);
    ctx->pc = 0x3F5B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B00u;
    // 0x3f5b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5B00u, 0x3F5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B08u;
label_3f5b08:
    // 0x3f5b08: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5b0c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5B0Cu;
    {
        const bool branch_taken_0x3f5b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b0c) {
            ctx->pc = 0x3F5B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5B0Cu;
            // 0x3f5b10: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5ae0;
        }
    }
    ctx->pc = 0x3F5B14u;
    // 0x3f5b14: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x3F5B14u;
    {
        const bool branch_taken_0x3f5b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b14) {
            ctx->pc = 0x3F5A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5a4c;
        }
    }
    ctx->pc = 0x3F5B1Cu;
label_3f5b1c:
    // 0x3f5b1c: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F5B1Cu;
    {
        const bool branch_taken_0x3f5b1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b1c) {
            ctx->pc = 0x3F5B9Cu;
            goto label_3f5b9c;
        }
    }
    ctx->pc = 0x3F5B24u;
    // 0x3f5b24: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x3f5b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3f5b28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3f5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3f5b2c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F5B2Cu;
    {
        const bool branch_taken_0x3f5b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B2Cu;
        // 0x3f5b30: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5b2c) {
            ctx->pc = 0x3F5B9Cu;
            goto label_3f5b9c;
        }
    }
    ctx->pc = 0x3F5B34u;
    // 0x3f5b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b38: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f5b38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f5b3c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5b3cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5b40: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5B40u;
    SET_GPR_U32(ctx, 31, 0x3F5B48u);
    ctx->pc = 0x3F5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B40u;
    // 0x3f5b44: 0x24a5f2c8  addiu       $a1, $a1, -0xD38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5B40u, 0x3F5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B48u;
label_3f5b48:
    // 0x3f5b48: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5b4c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5b50: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3F5B50u;
    {
        const bool branch_taken_0x3f5b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b50) {
            ctx->pc = 0x3F5A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5a4c;
        }
    }
    ctx->pc = 0x3F5B58u;
    // 0x3f5b58: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5b5c: 0x0  nop
    ctx->pc = 0x3f5b5cu;
    // NOP
label_3f5b60:
    // 0x3f5b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b64: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5b68: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5b68u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b70: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5B70u;
    SET_GPR_U32(ctx, 31, 0x3F5B78u);
    ctx->pc = 0x3F5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B70u;
    // 0x3f5b74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5B70u, 0x3F5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B78u;
label_3f5b78:
    // 0x3f5b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b80: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5B80u;
    SET_GPR_U32(ctx, 31, 0x3F5B88u);
    ctx->pc = 0x3F5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B80u;
    // 0x3f5b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5B80u, 0x3F5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B88u;
label_3f5b88:
    // 0x3f5b88: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5b8c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5B8Cu;
    {
        const bool branch_taken_0x3f5b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b8c) {
            ctx->pc = 0x3F5B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5B8Cu;
            // 0x3f5b90: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5b60;
        }
    }
    ctx->pc = 0x3F5B94u;
    // 0x3f5b94: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x3F5B94u;
    {
        const bool branch_taken_0x3f5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b94) {
            ctx->pc = 0x3F5A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5a4c;
        }
    }
    ctx->pc = 0x3F5B9Cu;
label_3f5b9c:
    // 0x3f5b9c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3f5b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f5ba0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f5ba0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f5ba4: 0x964301fc  lhu         $v1, 0x1FC($s2)
    ctx->pc = 0x3f5ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x3f5ba8: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x3f5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x3f5bac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3f5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3f5bb0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f5bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f5bb4: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F5BB4u;
    {
        const bool branch_taken_0x3f5bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BB4u;
        // 0x3f5bb8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5bb4) {
            ctx->pc = 0x3F5CA8u;
            goto label_3f5ca8;
        }
    }
    ctx->pc = 0x3F5BBCu;
    // 0x3f5bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5bc0: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x3f5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
    // 0x3f5bc4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5BC4u;
    SET_GPR_U32(ctx, 31, 0x3F5BCCu);
    ctx->pc = 0x3F5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5BC4u;
    // 0x3f5bc8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5BC4u, 0x3F5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5BCCu;
label_3f5bcc:
    // 0x3f5bcc: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5bccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5bd0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5bd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F5BD4u;
    {
        const bool branch_taken_0x3f5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5bd4) {
            ctx->pc = 0x3F5C14u;
            goto label_3f5c14;
        }
    }
    ctx->pc = 0x3F5BDCu;
    // 0x3f5bdc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f5be0:
    // 0x3f5be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5be4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5be8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5be8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5bf0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5BF0u;
    SET_GPR_U32(ctx, 31, 0x3F5BF8u);
    ctx->pc = 0x3F5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5BF0u;
    // 0x3f5bf4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5BF0u, 0x3F5BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5BF8u;
label_3f5bf8:
    // 0x3f5bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5bfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c00: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5C00u;
    SET_GPR_U32(ctx, 31, 0x3F5C08u);
    ctx->pc = 0x3F5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C00u;
    // 0x3f5c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5C00u, 0x3F5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C08u;
label_3f5c08:
    // 0x3f5c08: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5c0c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5C0Cu;
    {
        const bool branch_taken_0x3f5c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5c0c) {
            ctx->pc = 0x3F5C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5C0Cu;
            // 0x3f5c10: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5be0;
        }
    }
    ctx->pc = 0x3F5C14u;
label_3f5c14:
    // 0x3f5c14: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F5C14u;
    {
        const bool branch_taken_0x3f5c14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C14u;
        // 0x3f5c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c14) {
            ctx->pc = 0x3F5C3Cu;
            goto label_3f5c3c;
        }
    }
    ctx->pc = 0x3F5C1Cu;
    // 0x3f5c1c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5c20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c24: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5C24u;
    SET_GPR_U32(ctx, 31, 0x3F5C2Cu);
    ctx->pc = 0x3F5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C24u;
    // 0x3f5c28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5C24u, 0x3F5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C2Cu;
label_3f5c2c:
    // 0x3f5c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c34: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5C34u;
    SET_GPR_U32(ctx, 31, 0x3F5C3Cu);
    ctx->pc = 0x3F5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C34u;
    // 0x3f5c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5C34u, 0x3F5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C3Cu;
label_3f5c3c:
    // 0x3f5c3c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5C3Cu;
    SET_GPR_U32(ctx, 31, 0x3F5C44u);
    ctx->pc = 0x3F5C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C3Cu;
    // 0x3f5c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5C3Cu, 0x3F5C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C44u;
label_3f5c44:
    // 0x3f5c44: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x3F5C44u;
    {
        const bool branch_taken_0x3f5c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C44u;
        // 0x3f5c48: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c44) {
            ctx->pc = 0x3F5EF0u;
            goto label_3f5ef0;
        }
    }
    ctx->pc = 0x3F5C4Cu;
    // 0x3f5c4c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5c50: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f5c54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5C54u;
    {
        const bool branch_taken_0x3f5c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C54u;
        // 0x3f5c58: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c54) {
            ctx->pc = 0x3F5C70u;
            goto label_3f5c70;
        }
    }
    ctx->pc = 0x3F5C5Cu;
label_3f5c5c:
    // 0x3f5c5c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f5c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f5c60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5C60u;
    {
        const bool branch_taken_0x3f5c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C60u;
        // 0x3f5c64: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c60) {
            ctx->pc = 0x3F5C7Cu;
            goto label_3f5c7c;
        }
    }
    ctx->pc = 0x3F5C68u;
    // 0x3f5c68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F5C68u;
    {
        const bool branch_taken_0x3f5c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C68u;
        // 0x3f5c6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c68) {
            ctx->pc = 0x3F5C98u;
            goto label_3f5c98;
        }
    }
    ctx->pc = 0x3F5C70u;
label_3f5c70:
    // 0x3f5c70: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f5c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f5c74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5C74u;
    {
        const bool branch_taken_0x3f5c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C74u;
        // 0x3f5c78: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c74) {
            ctx->pc = 0x3F5C94u;
            goto label_3f5c94;
        }
    }
    ctx->pc = 0x3F5C7Cu;
label_3f5c7c:
    // 0x3f5c7c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f5c80:
    // 0x3f5c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c84: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F5C84u;
    SET_GPR_U32(ctx, 31, 0x3F5C8Cu);
    ctx->pc = 0x3F5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C84u;
    // 0x3f5c88: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F5C84u, 0x3F5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C8Cu;
label_3f5c8c:
    // 0x3f5c8c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3F5C8Cu;
    {
        const bool branch_taken_0x3f5c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C8Cu;
        // 0x3f5c90: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c8c) {
            ctx->pc = 0x3F5EF0u;
            goto label_3f5ef0;
        }
    }
    ctx->pc = 0x3F5C94u;
label_3f5c94:
    // 0x3f5c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c98:
    // 0x3f5c98: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F5C98u;
    SET_GPR_U32(ctx, 31, 0x3F5CA0u);
    ctx->pc = 0x3F5C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C98u;
    // 0x3f5c9c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F5C98u, 0x3F5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CA0u;
label_3f5ca0:
    // 0x3f5ca0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3F5CA0u;
    {
        const bool branch_taken_0x3f5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CA0u;
        // 0x3f5ca4: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ca0) {
            ctx->pc = 0x3F5EF0u;
            goto label_3f5ef0;
        }
    }
    ctx->pc = 0x3F5CA8u;
label_3f5ca8:
    // 0x3f5ca8: 0x18400070  blez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3F5CA8u;
    {
        const bool branch_taken_0x3f5ca8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f5ca8) {
            ctx->pc = 0x3F5E6Cu;
            goto label_3f5e6c;
        }
    }
    ctx->pc = 0x3F5CB0u;
    // 0x3f5cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f5cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5cb4: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3f5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x3f5cb8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f5cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f5cbc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3F5CBCu;
    {
        const bool branch_taken_0x3f5cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CBCu;
        // 0x3f5cc0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cbc) {
            ctx->pc = 0x3F5D90u;
            goto label_3f5d90;
        }
    }
    ctx->pc = 0x3F5CC4u;
    // 0x3f5cc4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f5cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f5cc8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F5CC8u;
    {
        const bool branch_taken_0x3f5cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CC8u;
        // 0x3f5ccc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cc8) {
            ctx->pc = 0x3F5D4Cu;
            goto label_3f5d4c;
        }
    }
    ctx->pc = 0x3F5CD0u;
    // 0x3f5cd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F5CD0u;
    {
        const bool branch_taken_0x3f5cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CD0u;
        // 0x3f5cd4: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cd0) {
            ctx->pc = 0x3F5D10u;
            goto label_3f5d10;
        }
    }
    ctx->pc = 0x3F5CD8u;
    // 0x3f5cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5cdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5ce0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5CE0u;
    SET_GPR_U32(ctx, 31, 0x3F5CE8u);
    ctx->pc = 0x3F5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CE0u;
    // 0x3f5ce4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5CE0u, 0x3F5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CE8u;
label_3f5ce8:
    // 0x3f5ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5cec: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5cf0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5CF0u;
    SET_GPR_U32(ctx, 31, 0x3F5CF8u);
    ctx->pc = 0x3F5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CF0u;
    // 0x3f5cf4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5CF0u, 0x3F5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CF8u;
label_3f5cf8:
    // 0x3f5cf8: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5cfc: 0x37b00002  ori         $s0, $sp, 0x2
    ctx->pc = 0x3f5cfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x3f5d00: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5d04: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5d08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f5d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5d0c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x3f5d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
label_3f5d10:
    // 0x3f5d10: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5d1c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5D1Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D24u);
    ctx->pc = 0x3F5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D1Cu;
    // 0x3f5d20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5D1Cu, 0x3F5D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D24u;
label_3f5d24:
    // 0x3f5d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d28: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5d2c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5D2Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D34u);
    ctx->pc = 0x3F5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D2Cu;
    // 0x3f5d30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5D2Cu, 0x3F5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D34u;
label_3f5d34:
    // 0x3f5d34: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5d38: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5d3c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5d40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f5d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5d44: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3f5d44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f5d48: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3f5d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3f5d4c:
    // 0x3f5d4c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5d58: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5D58u;
    SET_GPR_U32(ctx, 31, 0x3F5D60u);
    ctx->pc = 0x3F5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D58u;
    // 0x3f5d5c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5D58u, 0x3F5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D60u;
label_3f5d60:
    // 0x3f5d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d64: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5d68: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5D68u;
    SET_GPR_U32(ctx, 31, 0x3F5D70u);
    ctx->pc = 0x3F5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D68u;
    // 0x3f5d6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5D68u, 0x3F5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D70u;
label_3f5d70:
    // 0x3f5d70: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5d74: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5d78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5d7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5d80: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3f5d80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f5d84: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F5D84u;
    {
        const bool branch_taken_0x3f5d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D84u;
        // 0x3f5d88: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5d84) {
            ctx->pc = 0x3F5E6Cu;
            goto label_3f5e6c;
        }
    }
    ctx->pc = 0x3F5D8Cu;
    // 0x3f5d8c: 0x0  nop
    ctx->pc = 0x3f5d8cu;
    // NOP
label_3f5d90:
    // 0x3f5d90: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5d9c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5D9Cu;
    SET_GPR_U32(ctx, 31, 0x3F5DA4u);
    ctx->pc = 0x3F5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D9Cu;
    // 0x3f5da0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5D9Cu, 0x3F5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DA4u;
label_3f5da4:
    // 0x3f5da4: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5dac: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5DACu;
    SET_GPR_U32(ctx, 31, 0x3F5DB4u);
    ctx->pc = 0x3F5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5DACu;
    // 0x3f5db0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5DACu, 0x3F5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DB4u;
label_3f5db4:
    // 0x3f5db4: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5db8: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5dbc: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5dc4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5dc8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5dcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5dd0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5DD0u;
    SET_GPR_U32(ctx, 31, 0x3F5DD8u);
    ctx->pc = 0x3F5DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5DD0u;
    // 0x3f5dd4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5DD0u, 0x3F5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DD8u;
label_3f5dd8:
    // 0x3f5dd8: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5de0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5DE0u;
    SET_GPR_U32(ctx, 31, 0x3F5DE8u);
    ctx->pc = 0x3F5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5DE0u;
    // 0x3f5de4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5DE0u, 0x3F5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DE8u;
label_3f5de8:
    // 0x3f5de8: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5dec: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5df0: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5df8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5dfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5e00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f5e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f5e04: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5E04u;
    SET_GPR_U32(ctx, 31, 0x3F5E0Cu);
    ctx->pc = 0x3F5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E04u;
    // 0x3f5e08: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5E04u, 0x3F5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E0Cu;
label_3f5e0c:
    // 0x3f5e0c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5e14: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5E14u;
    SET_GPR_U32(ctx, 31, 0x3F5E1Cu);
    ctx->pc = 0x3F5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E14u;
    // 0x3f5e18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5E14u, 0x3F5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E1Cu;
label_3f5e1c:
    // 0x3f5e1c: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5e20: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5e24: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5e2c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5e30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f5e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5e34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f5e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f5e38: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5E38u;
    SET_GPR_U32(ctx, 31, 0x3F5E40u);
    ctx->pc = 0x3F5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E38u;
    // 0x3f5e3c: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5E38u, 0x3F5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E40u;
label_3f5e40:
    // 0x3f5e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5e44: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3f5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3f5e48: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5E48u;
    SET_GPR_U32(ctx, 31, 0x3F5E50u);
    ctx->pc = 0x3F5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E48u;
    // 0x3f5e4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5E48u, 0x3F5E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E50u;
label_3f5e50:
    // 0x3f5e50: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x3f5e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3f5e54: 0x93a30201  lbu         $v1, 0x201($sp)
    ctx->pc = 0x3f5e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 513)));
    // 0x3f5e58: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5e5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f5e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f5e60: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3f5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f5e64: 0x1620ffca  bnez        $s1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3F5E64u;
    {
        const bool branch_taken_0x3f5e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E64u;
        // 0x3f5e68: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e64) {
            ctx->pc = 0x3F5D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5d90;
        }
    }
    ctx->pc = 0x3F5E6Cu;
label_3f5e6c:
    // 0x3f5e6c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5E6Cu;
    SET_GPR_U32(ctx, 31, 0x3F5E74u);
    ctx->pc = 0x3F5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5E6Cu;
    // 0x3f5e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5E6Cu, 0x3F5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5E74u;
label_3f5e74:
    // 0x3f5e74: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F5E74u;
    {
        const bool branch_taken_0x3f5e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E74u;
        // 0x3f5e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e74) {
            ctx->pc = 0x3F5ED4u;
            goto label_3f5ed4;
        }
    }
    ctx->pc = 0x3F5E7Cu;
    // 0x3f5e7c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5e80: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f5e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5E84u;
    {
        const bool branch_taken_0x3f5e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E84u;
        // 0x3f5e88: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e84) {
            ctx->pc = 0x3F5EA0u;
            goto label_3f5ea0;
        }
    }
    ctx->pc = 0x3F5E8Cu;
    // 0x3f5e8c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f5e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f5e90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5E90u;
    {
        const bool branch_taken_0x3f5e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E90u;
        // 0x3f5e94: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e90) {
            ctx->pc = 0x3F5EACu;
            goto label_3f5eac;
        }
    }
    ctx->pc = 0x3F5E98u;
    // 0x3f5e98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F5E98u;
    {
        const bool branch_taken_0x3f5e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E98u;
        // 0x3f5e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e98) {
            ctx->pc = 0x3F5EC8u;
            goto label_3f5ec8;
        }
    }
    ctx->pc = 0x3F5EA0u;
label_3f5ea0:
    // 0x3f5ea0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f5ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f5ea4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5EA4u;
    {
        const bool branch_taken_0x3f5ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5EA4u;
        // 0x3f5ea8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ea4) {
            ctx->pc = 0x3F5EC4u;
            goto label_3f5ec4;
        }
    }
    ctx->pc = 0x3F5EACu;
label_3f5eac:
    // 0x3f5eac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f5eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5eb4: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F5EB4u;
    SET_GPR_U32(ctx, 31, 0x3F5EBCu);
    ctx->pc = 0x3F5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5EB4u;
    // 0x3f5eb8: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F5EB4u, 0x3F5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5EBCu;
label_3f5ebc:
    // 0x3f5ebc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5EBCu;
    {
        const bool branch_taken_0x3f5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5EBCu;
        // 0x3f5ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ebc) {
            ctx->pc = 0x3F5ED4u;
            goto label_3f5ed4;
        }
    }
    ctx->pc = 0x3F5EC4u;
label_3f5ec4:
    // 0x3f5ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ec8:
    // 0x3f5ec8: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F5EC8u;
    SET_GPR_U32(ctx, 31, 0x3F5ED0u);
    ctx->pc = 0x3F5ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5EC8u;
    // 0x3f5ecc: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F5EC8u, 0x3F5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5ED0u;
label_3f5ed0:
    // 0x3f5ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5ed4:
    // 0x3f5ed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5ED4u;
    {
        const bool branch_taken_0x3f5ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5ED4u;
        // 0x3f5ed8: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ed4) {
            ctx->pc = 0x3F5EF0u;
            goto label_3f5ef0;
        }
    }
    ctx->pc = 0x3F5EDCu;
    // 0x3f5edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5ee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5ee4: 0xc0fec78  jal         func_3FB1E0
    ctx->pc = 0x3F5EE4u;
    SET_GPR_U32(ctx, 31, 0x3F5EECu);
    ctx->pc = 0x3F5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5EE4u;
    // 0x3f5ee8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB1E0u, 0x3F5EE4u, 0x3F5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5EECu;
label_3f5eec:
    // 0x3f5eec: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x3f5eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_3f5ef0:
    // 0x3f5ef0: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x3f5ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3f5ef4: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x3f5ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3f5ef8: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x3f5ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3f5efc: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x3f5efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3f5f00: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x3f5f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3f5f04: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F04u;
        // 0x3f5f08: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5F0Cu;
    // 0x3f5f0c: 0x0  nop
    ctx->pc = 0x3f5f0cu;
    // NOP
    ctx->pc = 0x3f5f10u;
}
