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

// Function: sub_003F9E98
// Address: 0x3f9e98 - 0x3f9ff8
void sub_003F9E98_0x3f9e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9E98_0x3f9e98");
#endif

    switch (ctx->pc) {
        case 0x3f9ed8u: goto label_3f9ed8;
        case 0x3f9efcu: goto label_3f9efc;
        case 0x3f9f18u: goto label_3f9f18;
        case 0x3f9f30u: goto label_3f9f30;
        case 0x3f9f40u: goto label_3f9f40;
        case 0x3f9f64u: goto label_3f9f64;
        case 0x3f9f74u: goto label_3f9f74;
        case 0x3f9f7cu: goto label_3f9f7c;
        case 0x3f9fc0u: goto label_3f9fc0;
        case 0x3f9fd4u: goto label_3f9fd4;
        default: break;
    }

    ctx->pc = 0x3f9e98u;

    // 0x3f9e98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f9e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f9e9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f9ea0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f9ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3f9ea4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f9ea8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f9eac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f9eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9eb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3f9eb4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3f9eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3f9eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f9ebc: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f9ebcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f9ec0: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x3f9ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x3f9ec4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9EC4u;
    {
        const bool branch_taken_0x3f9ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9EC4u;
        // 0x3f9ec8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ec4) {
            ctx->pc = 0x3F9ED8u;
            goto label_3f9ed8;
        }
    }
    ctx->pc = 0x3F9ECCu;
    // 0x3f9ecc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f9ed0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F9ED0u;
    SET_GPR_U32(ctx, 31, 0x3F9ED8u);
    ctx->pc = 0x3F9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9ED0u;
    // 0x3f9ed4: 0x24a5ebe8  addiu       $a1, $a1, -0x1418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F9ED0u, 0x3F9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9ED8u;
label_3f9ed8:
    // 0x3f9ed8: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f9ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f9edc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3f9ee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f9ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f9ee4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F9EE4u;
    {
        const bool branch_taken_0x3f9ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9EE4u;
        // 0x3f9ee8: 0xfe4200f8  sd          $v0, 0xF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ee4) {
            ctx->pc = 0x3F9EFCu;
            goto label_3f9efc;
        }
    }
    ctx->pc = 0x3F9EECu;
    // 0x3f9eec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f9ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9ef4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F9EF4u;
    SET_GPR_U32(ctx, 31, 0x3F9EFCu);
    ctx->pc = 0x3F9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9EF4u;
    // 0x3f9ef8: 0x24a5ec00  addiu       $a1, $a1, -0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F9EF4u, 0x3F9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9EFCu;
label_3f9efc:
    // 0x3f9efc: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f9efcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f9f00: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f9f00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f9f04: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f9f04u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f9f08: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f9f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f9f0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F9F0Cu;
    {
        const bool branch_taken_0x3f9f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9f0c) {
            ctx->pc = 0x3F9F4Cu;
            goto label_3f9f4c;
        }
    }
    ctx->pc = 0x3F9F14u;
    // 0x3f9f14: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f9f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f9f18:
    // 0x3f9f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f1c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f9f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f9f20: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f9f20u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f9f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f28: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9F28u;
    SET_GPR_U32(ctx, 31, 0x3F9F30u);
    ctx->pc = 0x3F9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F28u;
    // 0x3f9f2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9F28u, 0x3F9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F30u;
label_3f9f30:
    // 0x3f9f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f9f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f38: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F9F38u;
    SET_GPR_U32(ctx, 31, 0x3F9F40u);
    ctx->pc = 0x3F9F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F38u;
    // 0x3f9f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F9F38u, 0x3F9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F40u;
label_3f9f40:
    // 0x3f9f40: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f9f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f9f44: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F9F44u;
    {
        const bool branch_taken_0x3f9f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9f44) {
            ctx->pc = 0x3F9F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9F44u;
            // 0x3f9f48: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9f18;
        }
    }
    ctx->pc = 0x3F9F4Cu;
label_3f9f4c:
    // 0x3f9f4c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F9F4Cu;
    {
        const bool branch_taken_0x3f9f4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F4Cu;
        // 0x3f9f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9f4c) {
            ctx->pc = 0x3F9F74u;
            goto label_3f9f74;
        }
    }
    ctx->pc = 0x3F9F54u;
    // 0x3f9f54: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f9f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f9f58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f5c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9F5Cu;
    SET_GPR_U32(ctx, 31, 0x3F9F64u);
    ctx->pc = 0x3F9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F5Cu;
    // 0x3f9f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9F5Cu, 0x3F9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F64u;
label_3f9f64:
    // 0x3f9f64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f9f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9f6c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F9F6Cu;
    SET_GPR_U32(ctx, 31, 0x3F9F74u);
    ctx->pc = 0x3F9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F6Cu;
    // 0x3f9f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F9F6Cu, 0x3F9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F74u;
label_3f9f74:
    // 0x3f9f74: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F9F74u;
    SET_GPR_U32(ctx, 31, 0x3F9F7Cu);
    ctx->pc = 0x3F9F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F74u;
    // 0x3f9f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F9F74u, 0x3F9F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F7Cu;
label_3f9f7c:
    // 0x3f9f7c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F9F7Cu;
    {
        const bool branch_taken_0x3f9f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F7Cu;
        // 0x3f9f80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9f7c) {
            ctx->pc = 0x3F9FD8u;
            goto label_3f9fd8;
        }
    }
    ctx->pc = 0x3F9F84u;
    // 0x3f9f84: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f9f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f9f88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f9f8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9F8Cu;
    {
        const bool branch_taken_0x3f9f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F8Cu;
        // 0x3f9f90: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9f8c) {
            ctx->pc = 0x3F9FA8u;
            goto label_3f9fa8;
        }
    }
    ctx->pc = 0x3F9F94u;
    // 0x3f9f94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f9f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f9f98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9F98u;
    {
        const bool branch_taken_0x3f9f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F98u;
        // 0x3f9f9c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9f98) {
            ctx->pc = 0x3F9FB4u;
            goto label_3f9fb4;
        }
    }
    ctx->pc = 0x3F9FA0u;
    // 0x3f9fa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F9FA0u;
    {
        const bool branch_taken_0x3f9fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9FA0u;
        // 0x3f9fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9fa0) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9FA8u;
label_3f9fa8:
    // 0x3f9fa8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f9fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f9fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9FACu;
    {
        const bool branch_taken_0x3f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9FACu;
        // 0x3f9fb0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9fac) {
            ctx->pc = 0x3F9FC8u;
            goto label_3f9fc8;
        }
    }
    ctx->pc = 0x3F9FB4u;
label_3f9fb4:
    // 0x3f9fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9fb8: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F9FB8u;
    SET_GPR_U32(ctx, 31, 0x3F9FC0u);
    ctx->pc = 0x3F9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9FB8u;
    // 0x3f9fbc: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F9FB8u, 0x3F9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9FC0u;
label_3f9fc0:
    // 0x3f9fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F9FC0u;
    {
        const bool branch_taken_0x3f9fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9FC0u;
        // 0x3f9fc4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9fc0) {
            ctx->pc = 0x3F9FD8u;
            goto label_3f9fd8;
        }
    }
    ctx->pc = 0x3F9FC8u;
label_3f9fc8:
    // 0x3f9fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9fcc:
    // 0x3f9fcc: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F9FCCu;
    SET_GPR_U32(ctx, 31, 0x3F9FD4u);
    ctx->pc = 0x3F9FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9FCCu;
    // 0x3f9fd0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F9FCCu, 0x3F9FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9FD4u;
label_3f9fd4:
    // 0x3f9fd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f9fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9fd8:
    // 0x3f9fd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f9fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f9fdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f9fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f9fe0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f9fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9fe4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3f9fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f9fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9FECu;
        // 0x3f9ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9FF4u;
    // 0x3f9ff4: 0x0  nop
    ctx->pc = 0x3f9ff4u;
    // NOP
    ctx->pc = 0x3f9ff8u;
}
