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

// Function: sub_003F5F10
// Address: 0x3f5f10 - 0x3f62b0
void sub_003F5F10_0x3f5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5F10_0x3f5f10");
#endif

    switch (ctx->pc) {
        case 0x3f5f50u: goto label_3f5f50;
        case 0x3f5f78u: goto label_3f5f78;
        case 0x3f5f90u: goto label_3f5f90;
        case 0x3f5fa8u: goto label_3f5fa8;
        case 0x3f5fb8u: goto label_3f5fb8;
        case 0x3f5fc4u: goto label_3f5fc4;
        case 0x3f5fdcu: goto label_3f5fdc;
        case 0x3f5fecu: goto label_3f5fec;
        case 0x3f5ff4u: goto label_3f5ff4;
        case 0x3f604cu: goto label_3f604c;
        case 0x3f6060u: goto label_3f6060;
        case 0x3f6078u: goto label_3f6078;
        case 0x3f6088u: goto label_3f6088;
        case 0x3f60bcu: goto label_3f60bc;
        case 0x3f60d0u: goto label_3f60d0;
        case 0x3f60e8u: goto label_3f60e8;
        case 0x3f60f8u: goto label_3f60f8;
        case 0x3f611cu: goto label_3f611c;
        case 0x3f612cu: goto label_3f612c;
        case 0x3f6134u: goto label_3f6134;
        case 0x3f617cu: goto label_3f617c;
        case 0x3f6190u: goto label_3f6190;
        case 0x3f61a8u: goto label_3f61a8;
        case 0x3f61b8u: goto label_3f61b8;
        case 0x3f61c0u: goto label_3f61c0;
        case 0x3f620cu: goto label_3f620c;
        case 0x3f6220u: goto label_3f6220;
        case 0x3f628cu: goto label_3f628c;
        default: break;
    }

    ctx->pc = 0x3f5f10u;

    // 0x3f5f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f5f14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f5f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f5f18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f5f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f5f1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f5f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f5f24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f5f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f5f28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f5f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f5f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f5f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f5f34: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f5f34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f5f38: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f5f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f5f3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5F3Cu;
    {
        const bool branch_taken_0x3f5f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F3Cu;
        // 0x3f5f40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f3c) {
            ctx->pc = 0x3F5F58u;
            goto label_3f5f58;
        }
    }
    ctx->pc = 0x3F5F44u;
    // 0x3f5f44: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f5f48: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F5F48u;
    SET_GPR_U32(ctx, 31, 0x3F5F50u);
    ctx->pc = 0x3F5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F48u;
    // 0x3f5f4c: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F5F48u, 0x3F5F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F50u;
label_3f5f50:
    // 0x3f5f50: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3F5F50u;
    {
        const bool branch_taken_0x3f5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F50u;
        // 0x3f5f54: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f50) {
            ctx->pc = 0x3F60A0u;
            goto label_3f60a0;
        }
    }
    ctx->pc = 0x3F5F58u;
label_3f5f58:
    // 0x3f5f58: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f5f5c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F5F5Cu;
    {
        const bool branch_taken_0x3f5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F5Cu;
        // 0x3f5f60: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f5c) {
            ctx->pc = 0x3F6020u;
            goto label_3f6020;
        }
    }
    ctx->pc = 0x3F5F64u;
    // 0x3f5f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f68: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f5f68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f5f6c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5f6cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5f70: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5F70u;
    SET_GPR_U32(ctx, 31, 0x3F5F78u);
    ctx->pc = 0x3F5F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F70u;
    // 0x3f5f74: 0x24a5f320  addiu       $a1, $a1, -0xCE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5F70u, 0x3F5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F78u;
label_3f5f78:
    // 0x3f5f78: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5f78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5f7c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5f80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F5F80u;
    {
        const bool branch_taken_0x3f5f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5f80) {
            ctx->pc = 0x3F5FC4u;
            goto label_3f5fc4;
        }
    }
    ctx->pc = 0x3F5F88u;
    // 0x3f5f88: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5f8c: 0x0  nop
    ctx->pc = 0x3f5f8cu;
    // NOP
label_3f5f90:
    // 0x3f5f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f94: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5f98: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5f98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fa0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5FA0u;
    SET_GPR_U32(ctx, 31, 0x3F5FA8u);
    ctx->pc = 0x3F5FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FA0u;
    // 0x3f5fa4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5FA0u, 0x3F5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FA8u;
label_3f5fa8:
    // 0x3f5fa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fb0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5FB0u;
    SET_GPR_U32(ctx, 31, 0x3F5FB8u);
    ctx->pc = 0x3F5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FB0u;
    // 0x3f5fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5FB0u, 0x3F5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FB8u;
label_3f5fb8:
    // 0x3f5fb8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5fbc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5FBCu;
    {
        const bool branch_taken_0x3f5fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5fbc) {
            ctx->pc = 0x3F5FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5FBCu;
            // 0x3f5fc0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5f90;
        }
    }
    ctx->pc = 0x3F5FC4u;
label_3f5fc4:
    // 0x3f5fc4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F5FC4u;
    {
        const bool branch_taken_0x3f5fc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FC4u;
        // 0x3f5fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5fc4) {
            ctx->pc = 0x3F5FECu;
            goto label_3f5fec;
        }
    }
    ctx->pc = 0x3F5FCCu;
    // 0x3f5fcc: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f5fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5fd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fd4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5FD4u;
    SET_GPR_U32(ctx, 31, 0x3F5FDCu);
    ctx->pc = 0x3F5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FD4u;
    // 0x3f5fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5FD4u, 0x3F5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FDCu;
label_3f5fdc:
    // 0x3f5fdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fe0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5fe4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5FE4u;
    SET_GPR_U32(ctx, 31, 0x3F5FECu);
    ctx->pc = 0x3F5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FE4u;
    // 0x3f5fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5FE4u, 0x3F5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FECu;
label_3f5fec:
    // 0x3f5fec: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5FECu;
    SET_GPR_U32(ctx, 31, 0x3F5FF4u);
    ctx->pc = 0x3F5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FECu;
    // 0x3f5ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5FECu, 0x3F5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FF4u;
label_3f5ff4:
    // 0x3f5ff4: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3F5FF4u;
    {
        const bool branch_taken_0x3f5ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FF4u;
        // 0x3f5ff8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ff4) {
            ctx->pc = 0x3F6290u;
            goto label_3f6290;
        }
    }
    ctx->pc = 0x3F5FFCu;
    // 0x3f5ffc: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f6000: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6004: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3F6004u;
    {
        const bool branch_taken_0x3f6004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6004u;
        // 0x3f6008: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6004) {
            ctx->pc = 0x3F614Cu;
            goto label_3f614c;
        }
    }
    ctx->pc = 0x3F600Cu;
    // 0x3f600c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6010: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3F6010u;
    {
        const bool branch_taken_0x3f6010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6010u;
        // 0x3f6014: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6010) {
            ctx->pc = 0x3F6170u;
            goto label_3f6170;
        }
    }
    ctx->pc = 0x3F6018u;
    // 0x3f6018: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F6018u;
    {
        const bool branch_taken_0x3f6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6018u;
        // 0x3f601c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6018) {
            ctx->pc = 0x3F6188u;
            goto label_3f6188;
        }
    }
    ctx->pc = 0x3F6020u;
label_3f6020:
    // 0x3f6020: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F6020u;
    {
        const bool branch_taken_0x3f6020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6020u;
        // 0x3f6024: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6020) {
            ctx->pc = 0x3F60A0u;
            goto label_3f60a0;
        }
    }
    ctx->pc = 0x3F6028u;
    // 0x3f6028: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3f6028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f602c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3f602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3f6030: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F6030u;
    {
        const bool branch_taken_0x3f6030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6030u;
        // 0x3f6034: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6030) {
            ctx->pc = 0x3F609Cu;
            goto label_3f609c;
        }
    }
    ctx->pc = 0x3F6038u;
    // 0x3f6038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f603c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f603cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6040: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f6040u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f6044: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6044u;
    SET_GPR_U32(ctx, 31, 0x3F604Cu);
    ctx->pc = 0x3F6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6044u;
    // 0x3f6048: 0x24a5f338  addiu       $a1, $a1, -0xCC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6044u, 0x3F604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F604Cu;
label_3f604c:
    // 0x3f604c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f604cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6050: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6054: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3F6054u;
    {
        const bool branch_taken_0x3f6054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6054) {
            ctx->pc = 0x3F5FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5fc4;
        }
    }
    ctx->pc = 0x3F605Cu;
    // 0x3f605c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f605cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f6060:
    // 0x3f6060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6064: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6068: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6068u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f606c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f606cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6070: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6070u;
    SET_GPR_U32(ctx, 31, 0x3F6078u);
    ctx->pc = 0x3F6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6070u;
    // 0x3f6074: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6070u, 0x3F6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6078u;
label_3f6078:
    // 0x3f6078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f607c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6080: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6080u;
    SET_GPR_U32(ctx, 31, 0x3F6088u);
    ctx->pc = 0x3F6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6080u;
    // 0x3f6084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6080u, 0x3F6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6088u;
label_3f6088:
    // 0x3f6088: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f608c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F608Cu;
    {
        const bool branch_taken_0x3f608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f608c) {
            ctx->pc = 0x3F6090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F608Cu;
            // 0x3f6090: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6060;
        }
    }
    ctx->pc = 0x3F6094u;
    // 0x3f6094: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F6094u;
    {
        const bool branch_taken_0x3f6094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6094) {
            ctx->pc = 0x3F5FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5fc4;
        }
    }
    ctx->pc = 0x3F609Cu;
label_3f609c:
    // 0x3f609c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3f609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3f60a0:
    // 0x3f60a0: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F60A0u;
    {
        const bool branch_taken_0x3f60a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60A0u;
        // 0x3f60a4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f60a0) {
            ctx->pc = 0x3F6198u;
            goto label_3f6198;
        }
    }
    ctx->pc = 0x3F60A8u;
    // 0x3f60a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f60a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f60ac: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f60acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f60b0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f60b0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f60b4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F60B4u;
    SET_GPR_U32(ctx, 31, 0x3F60BCu);
    ctx->pc = 0x3F60B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60B4u;
    // 0x3f60b8: 0x24a5f350  addiu       $a1, $a1, -0xCB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F60B4u, 0x3F60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60BCu;
label_3f60bc:
    // 0x3f60bc: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f60bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f60c0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f60c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f60c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F60C4u;
    {
        const bool branch_taken_0x3f60c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f60c4) {
            ctx->pc = 0x3F6104u;
            goto label_3f6104;
        }
    }
    ctx->pc = 0x3F60CCu;
    // 0x3f60cc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f60ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f60d0:
    // 0x3f60d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f60d4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f60d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f60d8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f60d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f60dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f60dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f60e0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F60E0u;
    SET_GPR_U32(ctx, 31, 0x3F60E8u);
    ctx->pc = 0x3F60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60E0u;
    // 0x3f60e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F60E0u, 0x3F60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60E8u;
label_3f60e8:
    // 0x3f60e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f60e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f60ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f60ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f60f0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F60F0u;
    SET_GPR_U32(ctx, 31, 0x3F60F8u);
    ctx->pc = 0x3F60F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60F0u;
    // 0x3f60f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F60F0u, 0x3F60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60F8u;
label_3f60f8:
    // 0x3f60f8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f60f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f60fc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F60FCu;
    {
        const bool branch_taken_0x3f60fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f60fc) {
            ctx->pc = 0x3F6100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F60FCu;
            // 0x3f6100: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F60D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f60d0;
        }
    }
    ctx->pc = 0x3F6104u;
label_3f6104:
    // 0x3f6104: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6104u;
    {
        const bool branch_taken_0x3f6104 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6104u;
        // 0x3f6108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6104) {
            ctx->pc = 0x3F612Cu;
            goto label_3f612c;
        }
    }
    ctx->pc = 0x3F610Cu;
    // 0x3f610c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f610cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f6110: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6114: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6114u;
    SET_GPR_U32(ctx, 31, 0x3F611Cu);
    ctx->pc = 0x3F6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6114u;
    // 0x3f6118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6114u, 0x3F611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F611Cu;
label_3f611c:
    // 0x3f611c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f611cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6124: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6124u;
    SET_GPR_U32(ctx, 31, 0x3F612Cu);
    ctx->pc = 0x3F6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6124u;
    // 0x3f6128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6124u, 0x3F612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F612Cu;
label_3f612c:
    // 0x3f612c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F612Cu;
    SET_GPR_U32(ctx, 31, 0x3F6134u);
    ctx->pc = 0x3F6130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F612Cu;
    // 0x3f6130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F612Cu, 0x3F6134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6134u;
label_3f6134:
    // 0x3f6134: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3F6134u;
    {
        const bool branch_taken_0x3f6134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6134u;
        // 0x3f6138: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6134) {
            ctx->pc = 0x3F6290u;
            goto label_3f6290;
        }
    }
    ctx->pc = 0x3F613Cu;
    // 0x3f613c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f613cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f6140: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6144: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6144u;
    {
        const bool branch_taken_0x3f6144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6144u;
        // 0x3f6148: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6144) {
            ctx->pc = 0x3F6160u;
            goto label_3f6160;
        }
    }
    ctx->pc = 0x3F614Cu;
label_3f614c:
    // 0x3f614c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f6150: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6150u;
    {
        const bool branch_taken_0x3f6150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6150u;
        // 0x3f6154: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6150) {
            ctx->pc = 0x3F616Cu;
            goto label_3f616c;
        }
    }
    ctx->pc = 0x3F6158u;
    // 0x3f6158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F6158u;
    {
        const bool branch_taken_0x3f6158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6158u;
        // 0x3f615c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6158) {
            ctx->pc = 0x3F6188u;
            goto label_3f6188;
        }
    }
    ctx->pc = 0x3F6160u;
label_3f6160:
    // 0x3f6160: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6164: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6164u;
    {
        const bool branch_taken_0x3f6164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6164u;
        // 0x3f6168: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6164) {
            ctx->pc = 0x3F6184u;
            goto label_3f6184;
        }
    }
    ctx->pc = 0x3F616Cu;
label_3f616c:
    // 0x3f616c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f616cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f6170:
    // 0x3f6170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6174: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6174u;
    SET_GPR_U32(ctx, 31, 0x3F617Cu);
    ctx->pc = 0x3F6178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6174u;
    // 0x3f6178: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6174u, 0x3F617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F617Cu;
label_3f617c:
    // 0x3f617c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3F617Cu;
    {
        const bool branch_taken_0x3f617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F617Cu;
        // 0x3f6180: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f617c) {
            ctx->pc = 0x3F6290u;
            goto label_3f6290;
        }
    }
    ctx->pc = 0x3F6184u;
label_3f6184:
    // 0x3f6184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6188:
    // 0x3f6188: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6188u;
    SET_GPR_U32(ctx, 31, 0x3F6190u);
    ctx->pc = 0x3F618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6188u;
    // 0x3f618c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6188u, 0x3F6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6190u;
label_3f6190:
    // 0x3f6190: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3F6190u;
    {
        const bool branch_taken_0x3f6190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6190u;
        // 0x3f6194: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6190) {
            ctx->pc = 0x3F6290u;
            goto label_3f6290;
        }
    }
    ctx->pc = 0x3F6198u;
label_3f6198:
    // 0x3f6198: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f6198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f619c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f61a0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F61A0u;
    SET_GPR_U32(ctx, 31, 0x3F61A8u);
    ctx->pc = 0x3F61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F61A0u;
    // 0x3f61a4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F61A0u, 0x3F61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F61A8u;
label_3f61a8:
    // 0x3f61a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f61a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f61ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f61acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f61b0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F61B0u;
    SET_GPR_U32(ctx, 31, 0x3F61B8u);
    ctx->pc = 0x3F61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F61B0u;
    // 0x3f61b4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F61B0u, 0x3F61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F61B8u;
label_3f61b8:
    // 0x3f61b8: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F61B8u;
    SET_GPR_U32(ctx, 31, 0x3F61C0u);
    ctx->pc = 0x3F61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F61B8u;
    // 0x3f61bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F61B8u, 0x3F61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F61C0u;
label_3f61c0:
    // 0x3f61c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F61C0u;
    {
        const bool branch_taken_0x3f61c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61C0u;
        // 0x3f61c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61c0) {
            ctx->pc = 0x3F6224u;
            goto label_3f6224;
        }
    }
    ctx->pc = 0x3F61C8u;
    // 0x3f61c8: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f61c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f61cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f61ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f61d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F61D0u;
    {
        const bool branch_taken_0x3f61d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61D0u;
        // 0x3f61d4: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61d0) {
            ctx->pc = 0x3F61F0u;
            goto label_3f61f0;
        }
    }
    ctx->pc = 0x3F61D8u;
    // 0x3f61d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f61d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f61dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F61DCu;
    {
        const bool branch_taken_0x3f61dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61DCu;
        // 0x3f61e0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61dc) {
            ctx->pc = 0x3F61FCu;
            goto label_3f61fc;
        }
    }
    ctx->pc = 0x3F61E4u;
    // 0x3f61e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F61E4u;
    {
        const bool branch_taken_0x3f61e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61E4u;
        // 0x3f61e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61e4) {
            ctx->pc = 0x3F6218u;
            goto label_3f6218;
        }
    }
    ctx->pc = 0x3F61ECu;
    // 0x3f61ec: 0x0  nop
    ctx->pc = 0x3f61ecu;
    // NOP
label_3f61f0:
    // 0x3f61f0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f61f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f61f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F61F4u;
    {
        const bool branch_taken_0x3f61f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61F4u;
        // 0x3f61f8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61f4) {
            ctx->pc = 0x3F6214u;
            goto label_3f6214;
        }
    }
    ctx->pc = 0x3F61FCu;
label_3f61fc:
    // 0x3f61fc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6204: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6204u;
    SET_GPR_U32(ctx, 31, 0x3F620Cu);
    ctx->pc = 0x3F6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6204u;
    // 0x3f6208: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6204u, 0x3F620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F620Cu;
label_3f620c:
    // 0x3f620c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F620Cu;
    {
        const bool branch_taken_0x3f620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F620Cu;
        // 0x3f6210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f620c) {
            ctx->pc = 0x3F6224u;
            goto label_3f6224;
        }
    }
    ctx->pc = 0x3F6214u;
label_3f6214:
    // 0x3f6214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6218:
    // 0x3f6218: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6218u;
    SET_GPR_U32(ctx, 31, 0x3F6220u);
    ctx->pc = 0x3F621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6218u;
    // 0x3f621c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6218u, 0x3F6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6220u;
label_3f6220:
    // 0x3f6220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f6220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6224:
    // 0x3f6224: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F6224u;
    {
        const bool branch_taken_0x3f6224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6224u;
        // 0x3f6228: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6224) {
            ctx->pc = 0x3F6290u;
            goto label_3f6290;
        }
    }
    ctx->pc = 0x3F622Cu;
    // 0x3f622c: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x3f622cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6234: 0x93a90001  lbu         $t1, 0x1($sp)
    ctx->pc = 0x3f6234u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f6238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f623c: 0x93a70004  lbu         $a3, 0x4($sp)
    ctx->pc = 0x3f623cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f6240: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x3f6240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x3f6244: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x3f6244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3f6248: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3f6248u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3f624c: 0x93a80006  lbu         $t0, 0x6($sp)
    ctx->pc = 0x3f624cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3f6250: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x3f6250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x3f6254: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3f6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3f6258: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x3f6258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f625c: 0xc9302d  daddu       $a2, $a2, $t1
    ctx->pc = 0x3f625cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 9));
    // 0x3f6260: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x3f6260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f6264: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x3f6264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x3f6268: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x3f6268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x3f626c: 0xe8382d  daddu       $a3, $a3, $t0
    ctx->pc = 0x3f626cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 8));
    // 0x3f6270: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x3f6270u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f6274: 0x93a20007  lbu         $v0, 0x7($sp)
    ctx->pc = 0x3f6274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x3f6278: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x3f6278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f627c: 0x93a80008  lbu         $t0, 0x8($sp)
    ctx->pc = 0x3f627cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3f6280: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x3f6280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x3f6284: 0xc0feda4  jal         func_3FB690
    ctx->pc = 0x3F6284u;
    SET_GPR_U32(ctx, 31, 0x3F628Cu);
    ctx->pc = 0x3F6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6284u;
    // 0x3f6288: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB690u, 0x3F6284u, 0x3F628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F628Cu;
label_3f628c:
    // 0x3f628c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f628cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f6290:
    // 0x3f6290: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f6290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f6294: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f6294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6298: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f6298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f629c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f629cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f62a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f62a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f62a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F62A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62A4u;
        // 0x3f62a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F62A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F62ACu;
    // 0x3f62ac: 0x0  nop
    ctx->pc = 0x3f62acu;
    // NOP
    ctx->pc = 0x3f62b0u;
}
