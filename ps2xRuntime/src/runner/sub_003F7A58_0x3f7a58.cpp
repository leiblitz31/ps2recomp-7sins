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

// Function: sub_003F7A58
// Address: 0x3f7a58 - 0x3f81f0
void sub_003F7A58_0x3f7a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7A58_0x3f7a58");
#endif

    switch (ctx->pc) {
        case 0x3f7aa4u: goto label_3f7aa4;
        case 0x3f7abcu: goto label_3f7abc;
        case 0x3f7be0u: goto label_3f7be0;
        case 0x3f7d90u: goto label_3f7d90;
        case 0x3f7f40u: goto label_3f7f40;
        case 0x3f8070u: goto label_3f8070;
        case 0x3f8098u: goto label_3f8098;
        case 0x3f80ccu: goto label_3f80cc;
        case 0x3f80f8u: goto label_3f80f8;
        case 0x3f810cu: goto label_3f810c;
        case 0x3f813cu: goto label_3f813c;
        case 0x3f816cu: goto label_3f816c;
        case 0x3f819cu: goto label_3f819c;
        default: break;
    }

    ctx->pc = 0x3f7a58u;

    // 0x3f7a58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f7a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3f7a5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3f7a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7a60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f7a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3f7a64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3f7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f7a68: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3f7a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3f7a6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f7a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7a70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f7a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3f7a74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3f7a74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7a78: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f7a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3f7a7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f7a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3f7a80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f7a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3f7a84: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3f7a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3f7a88: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3f7a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3f7a8c: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F7A8Cu;
    {
        const bool branch_taken_0x3f7a8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7A8Cu;
        // 0x3f7a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7a8c) {
            ctx->pc = 0x3F7AC4u;
            goto label_3f7ac4;
        }
    }
    ctx->pc = 0x3F7A94u;
    // 0x3f7a94: 0x90e501e3  lbu         $a1, 0x1E3($a3)
    ctx->pc = 0x3f7a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 483)));
    // 0x3f7a98: 0xdce40178  ld          $a0, 0x178($a3)
    ctx->pc = 0x3f7a98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x3f7a9c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F7A9Cu;
    SET_GPR_U32(ctx, 31, 0x3F7AA4u);
    ctx->pc = 0x3F7AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7A9Cu;
    // 0x3f7aa0: 0x8cf001bc  lw          $s0, 0x1BC($a3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F7A9Cu, 0x3F7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7AA4u;
label_3f7aa4:
    // 0x3f7aa4: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f7aa4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f7aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7aac: 0x23778  dsll        $a2, $v0, 29
    ctx->pc = 0x3f7aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 29);
    // 0x3f7ab0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3f7ab0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3f7ab4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F7AB4u;
    SET_GPR_U32(ctx, 31, 0x3F7ABCu);
    ctx->pc = 0x3F7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7AB4u;
    // 0x3f7ab8: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F7AB4u, 0x3F7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7ABCu;
label_3f7abc:
    // 0x3f7abc: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x3F7ABCu;
    {
        const bool branch_taken_0x3f7abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7ABCu;
        // 0x3f7ac0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7abc) {
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7AC4u;
label_3f7ac4:
    // 0x3f7ac4: 0x90e301e3  lbu         $v1, 0x1E3($a3)
    ctx->pc = 0x3f7ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 483)));
    // 0x3f7ac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f7acc: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3F7ACCu;
    {
        const bool branch_taken_0x3f7acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7ACCu;
        // 0x3f7ad0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7acc) {
            ctx->pc = 0x3F7CACu;
            goto label_3f7cac;
        }
    }
    ctx->pc = 0x3F7AD4u;
    // 0x3f7ad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7AD4u;
    {
        const bool branch_taken_0x3f7ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AD4u;
        // 0x3f7ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ad4) {
            ctx->pc = 0x3F7AECu;
            goto label_3f7aec;
        }
    }
    ctx->pc = 0x3F7ADCu;
    // 0x3f7adc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F7ADCu;
    {
        const bool branch_taken_0x3f7adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f7adc) {
            ctx->pc = 0x3F7AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7ADCu;
            // 0x3f7ae0: 0xdce20108  ld          $v0, 0x108($a3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7B00u;
            goto label_3f7b00;
        }
    }
    ctx->pc = 0x3F7AE4u;
    // 0x3f7ae4: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x3F7AE4u;
    {
        const bool branch_taken_0x3f7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AE4u;
        // 0x3f7ae8: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ae4) {
            ctx->pc = 0x3F800Cu;
            goto label_3f800c;
        }
    }
    ctx->pc = 0x3F7AECu;
label_3f7aec:
    // 0x3f7aec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f7af0: 0x506200da  beql        $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x3F7AF0u;
    {
        const bool branch_taken_0x3f7af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f7af0) {
            ctx->pc = 0x3F7AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7AF0u;
            // 0x3f7af4: 0xdce20108  ld          $v0, 0x108($a3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7E5Cu;
            goto label_3f7e5c;
        }
    }
    ctx->pc = 0x3F7AF8u;
    // 0x3f7af8: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x3F7AF8u;
    {
        const bool branch_taken_0x3f7af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7AF8u;
        // 0x3f7afc: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7af8) {
            ctx->pc = 0x3F800Cu;
            goto label_3f800c;
        }
    }
    ctx->pc = 0x3F7B00u;
label_3f7b00:
    // 0x3f7b00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f7b04: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x3f7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x3f7b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f7b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f7b10: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7b10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f7b14: 0x248c0001  addiu       $t4, $a0, 0x1
    ctx->pc = 0x3f7b14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f7b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7B18u;
    {
        const bool branch_taken_0x3f7b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B18u;
        // 0x3f7b1c: 0xdcee0178  ld          $t6, 0x178($a3) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 7), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b18) {
            ctx->pc = 0x3F7B30u;
            goto label_3f7b30;
        }
    }
    ctx->pc = 0x3F7B20u;
    // 0x3f7b20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f7b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b24: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x3f7b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f7b28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7B28u;
    {
        const bool branch_taken_0x3f7b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B28u;
        // 0x3f7b2c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b28) {
            ctx->pc = 0x3F7B3Cu;
            goto label_3f7b3c;
        }
    }
    ctx->pc = 0x3F7B30u;
label_3f7b30:
    // 0x3f7b30: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x3f7b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f7b34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f7b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b38: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x3f7b38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f7b3c:
    // 0x3f7b3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b40: 0x11c001a0  beqz        $t6, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x3F7B40u;
    {
        const bool branch_taken_0x3f7b40 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B40u;
        // 0x3f7b44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b40) {
            ctx->pc = 0x3F81C4u;
            goto label_3f81c4;
        }
    }
    ctx->pc = 0x3F7B48u;
    // 0x3f7b48: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3f7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3f7b4c: 0x24147f7f  addiu       $s4, $zero, 0x7F7F
    ctx->pc = 0x3f7b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32639));
    // 0x3f7b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b54: 0x24470007  addiu       $a3, $v0, 0x7
    ctx->pc = 0x3f7b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3f7b58: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3f7b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f7b5c: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x3f7b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f7b60: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f7b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b64: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3f7b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7b68: 0x19c00003  blez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F7B68u;
    {
        const bool branch_taken_0x3f7b68 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B68u;
        // 0x3f7b6c: 0x31c20001  andi        $v0, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b68) {
            ctx->pc = 0x3F7B78u;
            goto label_3f7b78;
        }
    }
    ctx->pc = 0x3F7B70u;
    // 0x3f7b70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F7B70u;
    {
        const bool branch_taken_0x3f7b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B70u;
        // 0x3f7b74: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b70) {
            ctx->pc = 0x3F7BE0u;
            goto label_3f7be0;
        }
    }
    ctx->pc = 0x3F7B78u;
label_3f7b78:
    // 0x3f7b78: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7b7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7B7Cu;
    {
        const bool branch_taken_0x3f7b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7B7Cu;
        // 0x3f7b80: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7b7c) {
            ctx->pc = 0x3F7BA8u;
            goto label_3f7ba8;
        }
    }
    ctx->pc = 0x3F7B84u;
    // 0x3f7b84: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3f7b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3f7b88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f7b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f7b8c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7b90: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7b94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f7b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f7b98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7b9c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7ba0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7ba4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f7ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7ba8:
    // 0x3f7ba8: 0x54d10004  bnel        $a2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7BA8u;
    {
        const bool branch_taken_0x3f7ba8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x3f7ba8) {
            ctx->pc = 0x3F7BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7BA8u;
            // 0x3f7bac: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7BBCu;
            goto label_3f7bbc;
        }
    }
    ctx->pc = 0x3F7BB0u;
    // 0x3f7bb0: 0x25890001  addiu       $t1, $t4, 0x1
    ctx->pc = 0x3f7bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3f7bb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7BB4u;
    {
        const bool branch_taken_0x3f7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BB4u;
        // 0x3f7bb8: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7bb4) {
            ctx->pc = 0x3F7BC0u;
            goto label_3f7bc0;
        }
    }
    ctx->pc = 0x3F7BBCu;
label_3f7bbc:
    // 0x3f7bbc: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7bc0:
    // 0x3f7bc0: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7BC0u;
    {
        const bool branch_taken_0x3f7bc0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BC0u;
        // 0x3f7bc4: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7bc0) {
            ctx->pc = 0x3F7BCCu;
            goto label_3f7bcc;
        }
    }
    ctx->pc = 0x3F7BC8u;
    // 0x3f7bc8: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7bcc:
    // 0x3f7bcc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f7bccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f7bd0: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7bd4: 0x5040017c  beql        $v0, $zero, . + 4 + (0x17C << 2)
    ctx->pc = 0x3F7BD4u;
    {
        const bool branch_taken_0x3f7bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7bd4) {
            ctx->pc = 0x3F7BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7BD4u;
            // 0x3f7bd8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7BDCu;
    // 0x3f7bdc: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
label_3f7be0:
    // 0x3f7be0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7BE0u;
    {
        const bool branch_taken_0x3f7be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7BE0u;
        // 0x3f7be4: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7be0) {
            ctx->pc = 0x3F7C0Cu;
            goto label_3f7c0c;
        }
    }
    ctx->pc = 0x3F7BE8u;
    // 0x3f7be8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7bec: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7bf0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7bf4: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7bf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f7bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f7bfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7c00: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7c04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7c08: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7c08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7c0c:
    // 0x3f7c0c: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7C0Cu;
    {
        const bool branch_taken_0x3f7c0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C0Cu;
        // 0x3f7c10: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c0c) {
            ctx->pc = 0x3F7C28u;
            goto label_3f7c28;
        }
    }
    ctx->pc = 0x3F7C14u;
    // 0x3f7c14: 0x26070007  addiu       $a3, $s0, 0x7
    ctx->pc = 0x3f7c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x3f7c18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7c1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7C20u;
    {
        const bool branch_taken_0x3f7c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C20u;
        // 0x3f7c24: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c20) {
            ctx->pc = 0x3F7C2Cu;
            goto label_3f7c2c;
        }
    }
    ctx->pc = 0x3F7C28u;
label_3f7c28:
    // 0x3f7c28: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7c2c:
    // 0x3f7c2c: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7C2Cu;
    {
        const bool branch_taken_0x3f7c2c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C2Cu;
        // 0x3f7c30: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c2c) {
            ctx->pc = 0x3F7C38u;
            goto label_3f7c38;
        }
    }
    ctx->pc = 0x3F7C34u;
    // 0x3f7c34: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7c34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7c38:
    // 0x3f7c38: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7c3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7C3Cu;
    {
        const bool branch_taken_0x3f7c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C3Cu;
        // 0x3f7c40: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c3c) {
            ctx->pc = 0x3F7C68u;
            goto label_3f7c68;
        }
    }
    ctx->pc = 0x3F7C44u;
    // 0x3f7c44: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7c48: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7c4c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7c50: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7c50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f7c58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7c5c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7c60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7c64: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7c64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7c68:
    // 0x3f7c68: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7C68u;
    {
        const bool branch_taken_0x3f7c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C68u;
        // 0x3f7c6c: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c68) {
            ctx->pc = 0x3F7C84u;
            goto label_3f7c84;
        }
    }
    ctx->pc = 0x3F7C70u;
    // 0x3f7c70: 0x26070007  addiu       $a3, $s0, 0x7
    ctx->pc = 0x3f7c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x3f7c74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7c78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7c7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7C7Cu;
    {
        const bool branch_taken_0x3f7c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C7Cu;
        // 0x3f7c80: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c7c) {
            ctx->pc = 0x3F7C88u;
            goto label_3f7c88;
        }
    }
    ctx->pc = 0x3F7C84u;
label_3f7c84:
    // 0x3f7c84: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7c88:
    // 0x3f7c88: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7C88u;
    {
        const bool branch_taken_0x3f7c88 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C88u;
        // 0x3f7c8c: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c88) {
            ctx->pc = 0x3F7C94u;
            goto label_3f7c94;
        }
    }
    ctx->pc = 0x3F7C90u;
    // 0x3f7c90: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7c90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7c94:
    // 0x3f7c94: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x3f7c94u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3f7c98: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7c9c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3F7C9Cu;
    {
        const bool branch_taken_0x3f7c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7C9Cu;
        // 0x3f7ca0: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c9c) {
            ctx->pc = 0x3F7BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7be0;
        }
    }
    ctx->pc = 0x3F7CA4u;
    // 0x3f7ca4: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x3F7CA4u;
    {
        const bool branch_taken_0x3f7ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CA4u;
        // 0x3f7ca8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ca4) {
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7CACu;
label_3f7cac:
    // 0x3f7cac: 0xdce20108  ld          $v0, 0x108($a3)
    ctx->pc = 0x3f7cacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x3f7cb0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f7cb4: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x3f7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x3f7cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7cbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f7cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f7cc0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f7cc4: 0x248c0001  addiu       $t4, $a0, 0x1
    ctx->pc = 0x3f7cc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f7cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7CC8u;
    {
        const bool branch_taken_0x3f7cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CC8u;
        // 0x3f7ccc: 0xdcee0178  ld          $t6, 0x178($a3) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 7), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7cc8) {
            ctx->pc = 0x3F7CE0u;
            goto label_3f7ce0;
        }
    }
    ctx->pc = 0x3F7CD0u;
    // 0x3f7cd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f7cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7cd4: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x3f7cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f7cd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7CD8u;
    {
        const bool branch_taken_0x3f7cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CD8u;
        // 0x3f7cdc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7cd8) {
            ctx->pc = 0x3F7CECu;
            goto label_3f7cec;
        }
    }
    ctx->pc = 0x3F7CE0u;
label_3f7ce0:
    // 0x3f7ce0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x3f7ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f7ce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f7ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7ce8: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x3f7ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3f7cec:
    // 0x3f7cec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7cf0: 0x11c00134  beqz        $t6, . + 4 + (0x134 << 2)
    ctx->pc = 0x3F7CF0u;
    {
        const bool branch_taken_0x3f7cf0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CF0u;
        // 0x3f7cf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7cf0) {
            ctx->pc = 0x3F81C4u;
            goto label_3f81c4;
        }
    }
    ctx->pc = 0x3F7CF8u;
    // 0x3f7cf8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3f7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3f7cfc: 0x24143f3f  addiu       $s4, $zero, 0x3F3F
    ctx->pc = 0x3f7cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16191));
    // 0x3f7d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7d04: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x3f7d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x3f7d08: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3f7d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f7d0c: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x3f7d0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f7d10: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f7d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7d14: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3f7d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7d18: 0x19c00003  blez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F7D18u;
    {
        const bool branch_taken_0x3f7d18 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3F7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D18u;
        // 0x3f7d1c: 0x31c20001  andi        $v0, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d18) {
            ctx->pc = 0x3F7D28u;
            goto label_3f7d28;
        }
    }
    ctx->pc = 0x3F7D20u;
    // 0x3f7d20: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F7D20u;
    {
        const bool branch_taken_0x3f7d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D20u;
        // 0x3f7d24: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d20) {
            ctx->pc = 0x3F7D90u;
            goto label_3f7d90;
        }
    }
    ctx->pc = 0x3F7D28u;
label_3f7d28:
    // 0x3f7d28: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7d2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7D2Cu;
    {
        const bool branch_taken_0x3f7d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D2Cu;
        // 0x3f7d30: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d2c) {
            ctx->pc = 0x3F7D58u;
            goto label_3f7d58;
        }
    }
    ctx->pc = 0x3F7D34u;
    // 0x3f7d34: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3f7d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3f7d38: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f7d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f7d3c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7d40: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7d44: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3f7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f7d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7d4c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7d50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7d54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f7d54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7d58:
    // 0x3f7d58: 0x54d10004  bnel        $a2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7D58u;
    {
        const bool branch_taken_0x3f7d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x3f7d58) {
            ctx->pc = 0x3F7D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7D58u;
            // 0x3f7d5c: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7D6Cu;
            goto label_3f7d6c;
        }
    }
    ctx->pc = 0x3F7D60u;
    // 0x3f7d60: 0x25890001  addiu       $t1, $t4, 0x1
    ctx->pc = 0x3f7d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3f7d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7D64u;
    {
        const bool branch_taken_0x3f7d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D64u;
        // 0x3f7d68: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d64) {
            ctx->pc = 0x3F7D70u;
            goto label_3f7d70;
        }
    }
    ctx->pc = 0x3F7D6Cu;
label_3f7d6c:
    // 0x3f7d6c: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7d70:
    // 0x3f7d70: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7D70u;
    {
        const bool branch_taken_0x3f7d70 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D70u;
        // 0x3f7d74: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d70) {
            ctx->pc = 0x3F7D7Cu;
            goto label_3f7d7c;
        }
    }
    ctx->pc = 0x3F7D78u;
    // 0x3f7d78: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7d78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7d7c:
    // 0x3f7d7c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f7d7cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f7d80: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7d84: 0x50400110  beql        $v0, $zero, . + 4 + (0x110 << 2)
    ctx->pc = 0x3F7D84u;
    {
        const bool branch_taken_0x3f7d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7d84) {
            ctx->pc = 0x3F7D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7D84u;
            // 0x3f7d88: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7D8Cu;
    // 0x3f7d8c: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
label_3f7d90:
    // 0x3f7d90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7D90u;
    {
        const bool branch_taken_0x3f7d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7D90u;
        // 0x3f7d94: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d90) {
            ctx->pc = 0x3F7DBCu;
            goto label_3f7dbc;
        }
    }
    ctx->pc = 0x3F7D98u;
    // 0x3f7d98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7d9c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7da0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7da4: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7da4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7da8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3f7da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f7dac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7db0: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7db8: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7db8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7dbc:
    // 0x3f7dbc: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7DBCu;
    {
        const bool branch_taken_0x3f7dbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7DBCu;
        // 0x3f7dc0: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7dbc) {
            ctx->pc = 0x3F7DD8u;
            goto label_3f7dd8;
        }
    }
    ctx->pc = 0x3F7DC4u;
    // 0x3f7dc4: 0x26070006  addiu       $a3, $s0, 0x6
    ctx->pc = 0x3f7dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x3f7dc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7dcc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7DD0u;
    {
        const bool branch_taken_0x3f7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7DD0u;
        // 0x3f7dd4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7dd0) {
            ctx->pc = 0x3F7DDCu;
            goto label_3f7ddc;
        }
    }
    ctx->pc = 0x3F7DD8u;
label_3f7dd8:
    // 0x3f7dd8: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7ddc:
    // 0x3f7ddc: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7DDCu;
    {
        const bool branch_taken_0x3f7ddc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7DDCu;
        // 0x3f7de0: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ddc) {
            ctx->pc = 0x3F7DE8u;
            goto label_3f7de8;
        }
    }
    ctx->pc = 0x3F7DE4u;
    // 0x3f7de4: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7de4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7de8:
    // 0x3f7de8: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7dec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7DECu;
    {
        const bool branch_taken_0x3f7dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7DECu;
        // 0x3f7df0: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7dec) {
            ctx->pc = 0x3F7E18u;
            goto label_3f7e18;
        }
    }
    ctx->pc = 0x3F7DF4u;
    // 0x3f7df4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7df8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7dfc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7e00: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7e00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7e04: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3f7e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f7e08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7e0c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7e10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7e14: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7e18:
    // 0x3f7e18: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7E18u;
    {
        const bool branch_taken_0x3f7e18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E18u;
        // 0x3f7e1c: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e18) {
            ctx->pc = 0x3F7E34u;
            goto label_3f7e34;
        }
    }
    ctx->pc = 0x3F7E20u;
    // 0x3f7e20: 0x26070006  addiu       $a3, $s0, 0x6
    ctx->pc = 0x3f7e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x3f7e24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7e28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7e2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7E2Cu;
    {
        const bool branch_taken_0x3f7e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E2Cu;
        // 0x3f7e30: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e2c) {
            ctx->pc = 0x3F7E38u;
            goto label_3f7e38;
        }
    }
    ctx->pc = 0x3F7E34u;
label_3f7e34:
    // 0x3f7e34: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7e38:
    // 0x3f7e38: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7E38u;
    {
        const bool branch_taken_0x3f7e38 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E38u;
        // 0x3f7e3c: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e38) {
            ctx->pc = 0x3F7E44u;
            goto label_3f7e44;
        }
    }
    ctx->pc = 0x3F7E40u;
    // 0x3f7e40: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7e44:
    // 0x3f7e44: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x3f7e44u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3f7e48: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7e4c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3F7E4Cu;
    {
        const bool branch_taken_0x3f7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E4Cu;
        // 0x3f7e50: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e4c) {
            ctx->pc = 0x3F7D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7d90;
        }
    }
    ctx->pc = 0x3F7E54u;
    // 0x3f7e54: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x3F7E54u;
    {
        const bool branch_taken_0x3f7e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E54u;
        // 0x3f7e58: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e54) {
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7E5Cu;
label_3f7e5c:
    // 0x3f7e5c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f7e60: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x3f7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x3f7e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7e68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f7e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f7e6c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f7e70: 0x248c0001  addiu       $t4, $a0, 0x1
    ctx->pc = 0x3f7e70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f7e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7E74u;
    {
        const bool branch_taken_0x3f7e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E74u;
        // 0x3f7e78: 0xdcee0178  ld          $t6, 0x178($a3) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 7), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e74) {
            ctx->pc = 0x3F7E8Cu;
            goto label_3f7e8c;
        }
    }
    ctx->pc = 0x3F7E7Cu;
    // 0x3f7e7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f7e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7e80: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x3f7e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f7e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7E84u;
    {
        const bool branch_taken_0x3f7e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E84u;
        // 0x3f7e88: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e84) {
            ctx->pc = 0x3F7E98u;
            goto label_3f7e98;
        }
    }
    ctx->pc = 0x3F7E8Cu;
label_3f7e8c:
    // 0x3f7e8c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x3f7e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f7e90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f7e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7e94: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x3f7e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_3f7e98:
    // 0x3f7e98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7e9c: 0x11c000c9  beqz        $t6, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3F7E9Cu;
    {
        const bool branch_taken_0x3f7e9c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E9Cu;
        // 0x3f7ea0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e9c) {
            ctx->pc = 0x3F81C4u;
            goto label_3f81c4;
        }
    }
    ctx->pc = 0x3F7EA4u;
    // 0x3f7ea4: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3f7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3f7ea8: 0x24140f0f  addiu       $s4, $zero, 0xF0F
    ctx->pc = 0x3f7ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x3f7eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7eb0: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x3f7eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3f7eb4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3f7eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f7eb8: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x3f7eb8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f7ebc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f7ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7ec0: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3f7ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7ec4: 0x19c00003  blez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F7EC4u;
    {
        const bool branch_taken_0x3f7ec4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3F7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EC4u;
        // 0x3f7ec8: 0x31c20001  andi        $v0, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ec4) {
            ctx->pc = 0x3F7ED4u;
            goto label_3f7ed4;
        }
    }
    ctx->pc = 0x3F7ECCu;
    // 0x3f7ecc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F7ECCu;
    {
        const bool branch_taken_0x3f7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7ECCu;
        // 0x3f7ed0: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ecc) {
            ctx->pc = 0x3F7F40u;
            goto label_3f7f40;
        }
    }
    ctx->pc = 0x3F7ED4u;
label_3f7ed4:
    // 0x3f7ed4: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7ed8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7ED8u;
    {
        const bool branch_taken_0x3f7ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7ED8u;
        // 0x3f7edc: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ed8) {
            ctx->pc = 0x3F7F04u;
            goto label_3f7f04;
        }
    }
    ctx->pc = 0x3F7EE0u;
    // 0x3f7ee0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3f7ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3f7ee4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f7ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f7ee8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7eec: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7eecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7ef0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3f7ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3f7ef4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7ef8: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7efc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7f00: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f7f00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7f04:
    // 0x3f7f04: 0x54d10004  bnel        $a2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7F04u;
    {
        const bool branch_taken_0x3f7f04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x3f7f04) {
            ctx->pc = 0x3F7F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7F04u;
            // 0x3f7f08: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7F18u;
            goto label_3f7f18;
        }
    }
    ctx->pc = 0x3F7F0Cu;
    // 0x3f7f0c: 0x25890001  addiu       $t1, $t4, 0x1
    ctx->pc = 0x3f7f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3f7f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7F10u;
    {
        const bool branch_taken_0x3f7f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F10u;
        // 0x3f7f14: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f10) {
            ctx->pc = 0x3F7F1Cu;
            goto label_3f7f1c;
        }
    }
    ctx->pc = 0x3F7F18u;
label_3f7f18:
    // 0x3f7f18: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7f1c:
    // 0x3f7f1c: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7F1Cu;
    {
        const bool branch_taken_0x3f7f1c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F1Cu;
        // 0x3f7f20: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f1c) {
            ctx->pc = 0x3F7F28u;
            goto label_3f7f28;
        }
    }
    ctx->pc = 0x3F7F24u;
    // 0x3f7f24: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7f24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7f28:
    // 0x3f7f28: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f7f28u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f7f2c: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7f30: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x3F7F30u;
    {
        const bool branch_taken_0x3f7f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7f30) {
            ctx->pc = 0x3F7F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7F30u;
            // 0x3f7f34: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F7F38u;
    // 0x3f7f38: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7f3c: 0x0  nop
    ctx->pc = 0x3f7f3cu;
    // NOP
label_3f7f40:
    // 0x3f7f40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7F40u;
    {
        const bool branch_taken_0x3f7f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F40u;
        // 0x3f7f44: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f40) {
            ctx->pc = 0x3F7F6Cu;
            goto label_3f7f6c;
        }
    }
    ctx->pc = 0x3F7F48u;
    // 0x3f7f48: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7f4c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7f50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7f54: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7f58: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3f7f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3f7f5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7f60: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7f64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7f68: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7f68u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7f6c:
    // 0x3f7f6c: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7F6Cu;
    {
        const bool branch_taken_0x3f7f6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F6Cu;
        // 0x3f7f70: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f6c) {
            ctx->pc = 0x3F7F88u;
            goto label_3f7f88;
        }
    }
    ctx->pc = 0x3F7F74u;
    // 0x3f7f74: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x3f7f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3f7f78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7f7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7F80u;
    {
        const bool branch_taken_0x3f7f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F80u;
        // 0x3f7f84: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f80) {
            ctx->pc = 0x3F7F8Cu;
            goto label_3f7f8c;
        }
    }
    ctx->pc = 0x3F7F88u;
label_3f7f88:
    // 0x3f7f88: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7f8c:
    // 0x3f7f8c: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7F8Cu;
    {
        const bool branch_taken_0x3f7f8c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F8Cu;
        // 0x3f7f90: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f8c) {
            ctx->pc = 0x3F7F98u;
            goto label_3f7f98;
        }
    }
    ctx->pc = 0x3F7F94u;
    // 0x3f7f94: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7f94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7f98:
    // 0x3f7f98: 0x1751024  and         $v0, $t3, $s5
    ctx->pc = 0x3f7f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
    // 0x3f7f9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F7F9Cu;
    {
        const bool branch_taken_0x3f7f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F9Cu;
        // 0x3f7fa0: 0xf42007  srav        $a0, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f9c) {
            ctx->pc = 0x3F7FC8u;
            goto label_3f7fc8;
        }
    }
    ctx->pc = 0x3F7FA4u;
    // 0x3f7fa4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f7fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f7fa8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3f7fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f7fac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f7facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f7fb0: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3f7fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7fb4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3f7fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3f7fb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f7fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f7fbc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f7fc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f7fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7fc4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3f7fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f7fc8:
    // 0x3f7fc8: 0x14d10006  bne         $a2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7FC8u;
    {
        const bool branch_taken_0x3f7fc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x3F7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7FC8u;
        // 0x3f7fcc: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7fc8) {
            ctx->pc = 0x3F7FE4u;
            goto label_3f7fe4;
        }
    }
    ctx->pc = 0x3F7FD0u;
    // 0x3f7fd0: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x3f7fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3f7fd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f7fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7fd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f7fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f7fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7FDCu;
    {
        const bool branch_taken_0x3f7fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7FDCu;
        // 0x3f7fe0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7fdc) {
            ctx->pc = 0x3F7FE8u;
            goto label_3f7fe8;
        }
    }
    ctx->pc = 0x3F7FE4u;
label_3f7fe4:
    // 0x3f7fe4: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3f7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_3f7fe8:
    // 0x3f7fe8: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F7FE8u;
    {
        const bool branch_taken_0x3f7fe8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x3F7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7FE8u;
        // 0x3f7fec: 0xb5843  sra         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7fe8) {
            ctx->pc = 0x3F7FF4u;
            goto label_3f7ff4;
        }
    }
    ctx->pc = 0x3F7FF0u;
    // 0x3f7ff0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3f7ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3f7ff4:
    // 0x3f7ff4: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x3f7ff4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3f7ff8: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x3f7ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3f7ffc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3F7FFCu;
    {
        const bool branch_taken_0x3f7ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7FFCu;
        // 0x3f8000: 0x1751024  and         $v0, $t3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ffc) {
            ctx->pc = 0x3F7F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7f40;
        }
    }
    ctx->pc = 0x3F8004u;
    // 0x3f8004: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3F8004u;
    {
        const bool branch_taken_0x3f8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8004u;
        // 0x3f8008: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8004) {
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F800Cu;
label_3f800c:
    // 0x3f800c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3f800cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8010: 0x90e201e3  lbu         $v0, 0x1E3($a3)
    ctx->pc = 0x3f8010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 483)));
    // 0x3f8014: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x3f8014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f8018: 0xdcf70178  ld          $s7, 0x178($a3)
    ctx->pc = 0x3f8018u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x3f801c: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x3f801cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f8020: 0x280c2  srl         $s0, $v0, 3
    ctx->pc = 0x3f8020u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3f8024: 0x12e00067  beqz        $s7, . + 4 + (0x67 << 2)
    ctx->pc = 0x3F8024u;
    {
        const bool branch_taken_0x3f8024 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8024u;
        // 0x3f8028: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8024) {
            ctx->pc = 0x3F81C4u;
            goto label_3f81c4;
        }
    }
    ctx->pc = 0x3F802Cu;
    // 0x3f802c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3f802cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8030: 0x1ae00020  blez        $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F8030u;
    {
        const bool branch_taken_0x3f8030 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3F8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8030u;
        // 0x3f8034: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8030) {
            ctx->pc = 0x3F80B4u;
            goto label_3f80b4;
        }
    }
    ctx->pc = 0x3F8038u;
    // 0x3f8038: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F8038u;
    {
        const bool branch_taken_0x3f8038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8038u;
        // 0x3f803c: 0x2751024  and         $v0, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8038) {
            ctx->pc = 0x3F80F8u;
            goto label_3f80f8;
        }
    }
    ctx->pc = 0x3F8040u;
    // 0x3f8040: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3f8040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f8044: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F8044u;
    {
        const bool branch_taken_0x3f8044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8044u;
        // 0x3f8048: 0x2751024  and         $v0, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8044) {
            ctx->pc = 0x3F80B8u;
            goto label_3f80b8;
        }
    }
    ctx->pc = 0x3F804Cu;
    // 0x3f804c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f804cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f8050: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F8050u;
    {
        const bool branch_taken_0x3f8050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8050u;
        // 0x3f8054: 0x2751024  and         $v0, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8050) {
            ctx->pc = 0x3F8084u;
            goto label_3f8084;
        }
    }
    ctx->pc = 0x3F8058u;
    // 0x3f8058: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x3f8058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
    // 0x3f805c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F805Cu;
    {
        const bool branch_taken_0x3f805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F805Cu;
        // 0x3f8060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f805c) {
            ctx->pc = 0x3F8070u;
            goto label_3f8070;
        }
    }
    ctx->pc = 0x3F8064u;
    // 0x3f8064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8068: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8068u;
    SET_GPR_U32(ctx, 31, 0x3F8070u);
    ctx->pc = 0x3F806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8068u;
    // 0x3f806c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8068u, 0x3F8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8070u;
label_3f8070:
    // 0x3f8070: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f8070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f8074: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3f8074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3f8078: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x3f8078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3f807c: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x3f807cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x3f8080: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f8080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
label_3f8084:
    // 0x3f8084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8084u;
    {
        const bool branch_taken_0x3f8084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8084u;
        // 0x3f8088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8084) {
            ctx->pc = 0x3F8098u;
            goto label_3f8098;
        }
    }
    ctx->pc = 0x3F808Cu;
    // 0x3f808c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8090: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8090u;
    SET_GPR_U32(ctx, 31, 0x3F8098u);
    ctx->pc = 0x3F8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8090u;
    // 0x3f8094: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8090u, 0x3F8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8098u;
label_3f8098:
    // 0x3f8098: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f8098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f809c: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F809Cu;
    {
        const bool branch_taken_0x3f809c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F809Cu;
        // 0x3f80a0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f809c) {
            ctx->pc = 0x3F80ACu;
            goto label_3f80ac;
        }
    }
    ctx->pc = 0x3F80A4u;
    // 0x3f80a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F80A4u;
    {
        const bool branch_taken_0x3f80a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80A4u;
        // 0x3f80a8: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80a4) {
            ctx->pc = 0x3F80B0u;
            goto label_3f80b0;
        }
    }
    ctx->pc = 0x3F80ACu;
label_3f80ac:
    // 0x3f80ac: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f80acu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f80b0:
    // 0x3f80b0: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x3f80b0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
label_3f80b4:
    // 0x3f80b4: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f80b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
label_3f80b8:
    // 0x3f80b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F80B8u;
    {
        const bool branch_taken_0x3f80b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80B8u;
        // 0x3f80bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80b8) {
            ctx->pc = 0x3F80CCu;
            goto label_3f80cc;
        }
    }
    ctx->pc = 0x3F80C0u;
    // 0x3f80c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f80c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f80c4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F80C4u;
    SET_GPR_U32(ctx, 31, 0x3F80CCu);
    ctx->pc = 0x3F80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F80C4u;
    // 0x3f80c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F80C4u, 0x3F80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F80CCu;
label_3f80cc:
    // 0x3f80cc: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f80ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f80d0: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F80D0u;
    {
        const bool branch_taken_0x3f80d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80D0u;
        // 0x3f80d4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80d0) {
            ctx->pc = 0x3F80E0u;
            goto label_3f80e0;
        }
    }
    ctx->pc = 0x3F80D8u;
    // 0x3f80d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F80D8u;
    {
        const bool branch_taken_0x3f80d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80D8u;
        // 0x3f80dc: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80d8) {
            ctx->pc = 0x3F80E4u;
            goto label_3f80e4;
        }
    }
    ctx->pc = 0x3F80E0u;
label_3f80e0:
    // 0x3f80e0: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f80e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f80e4:
    // 0x3f80e4: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x3f80e4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x3f80e8: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x3f80e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3f80ec: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F80ECu;
    {
        const bool branch_taken_0x3f80ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f80ec) {
            ctx->pc = 0x3F80F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F80ECu;
            // 0x3f80f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F81C8u;
            goto label_3f81c8;
        }
    }
    ctx->pc = 0x3F80F4u;
    // 0x3f80f4: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f80f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
label_3f80f8:
    // 0x3f80f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F80F8u;
    {
        const bool branch_taken_0x3f80f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F80F8u;
        // 0x3f80fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f80f8) {
            ctx->pc = 0x3F810Cu;
            goto label_3f810c;
        }
    }
    ctx->pc = 0x3F8100u;
    // 0x3f8100: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8104: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8104u;
    SET_GPR_U32(ctx, 31, 0x3F810Cu);
    ctx->pc = 0x3F8108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8104u;
    // 0x3f8108: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8104u, 0x3F810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F810Cu;
label_3f810c:
    // 0x3f810c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f810cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f8110: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8110u;
    {
        const bool branch_taken_0x3f8110 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8110u;
        // 0x3f8114: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8110) {
            ctx->pc = 0x3F8120u;
            goto label_3f8120;
        }
    }
    ctx->pc = 0x3F8118u;
    // 0x3f8118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F8118u;
    {
        const bool branch_taken_0x3f8118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8118u;
        // 0x3f811c: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8118) {
            ctx->pc = 0x3F8124u;
            goto label_3f8124;
        }
    }
    ctx->pc = 0x3F8120u;
label_3f8120:
    // 0x3f8120: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f8120u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f8124:
    // 0x3f8124: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f8124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x3f8128: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8128u;
    {
        const bool branch_taken_0x3f8128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8128u;
        // 0x3f812c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8128) {
            ctx->pc = 0x3F813Cu;
            goto label_3f813c;
        }
    }
    ctx->pc = 0x3F8130u;
    // 0x3f8130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8134: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8134u;
    SET_GPR_U32(ctx, 31, 0x3F813Cu);
    ctx->pc = 0x3F8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8134u;
    // 0x3f8138: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8134u, 0x3F813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F813Cu;
label_3f813c:
    // 0x3f813c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f813cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f8140: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8140u;
    {
        const bool branch_taken_0x3f8140 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8140u;
        // 0x3f8144: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8140) {
            ctx->pc = 0x3F8150u;
            goto label_3f8150;
        }
    }
    ctx->pc = 0x3F8148u;
    // 0x3f8148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F8148u;
    {
        const bool branch_taken_0x3f8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8148u;
        // 0x3f814c: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8148) {
            ctx->pc = 0x3F8154u;
            goto label_3f8154;
        }
    }
    ctx->pc = 0x3F8150u;
label_3f8150:
    // 0x3f8150: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f8150u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f8154:
    // 0x3f8154: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f8154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x3f8158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8158u;
    {
        const bool branch_taken_0x3f8158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8158u;
        // 0x3f815c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8158) {
            ctx->pc = 0x3F816Cu;
            goto label_3f816c;
        }
    }
    ctx->pc = 0x3F8160u;
    // 0x3f8160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8164: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8164u;
    SET_GPR_U32(ctx, 31, 0x3F816Cu);
    ctx->pc = 0x3F8168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8164u;
    // 0x3f8168: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8164u, 0x3F816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F816Cu;
label_3f816c:
    // 0x3f816c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f816cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f8170: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8170u;
    {
        const bool branch_taken_0x3f8170 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8170u;
        // 0x3f8174: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8170) {
            ctx->pc = 0x3F8180u;
            goto label_3f8180;
        }
    }
    ctx->pc = 0x3F8178u;
    // 0x3f8178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F8178u;
    {
        const bool branch_taken_0x3f8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8178u;
        // 0x3f817c: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8178) {
            ctx->pc = 0x3F8184u;
            goto label_3f8184;
        }
    }
    ctx->pc = 0x3F8180u;
label_3f8180:
    // 0x3f8180: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f8180u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f8184:
    // 0x3f8184: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x3f8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x3f8188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F8188u;
    {
        const bool branch_taken_0x3f8188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8188u;
        // 0x3f818c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8188) {
            ctx->pc = 0x3F819Cu;
            goto label_3f819c;
        }
    }
    ctx->pc = 0x3F8190u;
    // 0x3f8190: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8194: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8194u;
    SET_GPR_U32(ctx, 31, 0x3F819Cu);
    ctx->pc = 0x3F8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8194u;
    // 0x3f8198: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8194u, 0x3F819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F819Cu;
label_3f819c:
    // 0x3f819c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3f819cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3f81a0: 0x16760003  bne         $s3, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F81A0u;
    {
        const bool branch_taken_0x3f81a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x3F81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F81A0u;
        // 0x3f81a4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f81a0) {
            ctx->pc = 0x3F81B0u;
            goto label_3f81b0;
        }
    }
    ctx->pc = 0x3F81A8u;
    // 0x3f81a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F81A8u;
    {
        const bool branch_taken_0x3f81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F81A8u;
        // 0x3f81ac: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f81a8) {
            ctx->pc = 0x3F81B4u;
            goto label_3f81b4;
        }
    }
    ctx->pc = 0x3F81B0u;
label_3f81b0:
    // 0x3f81b0: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x3f81b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3f81b4:
    // 0x3f81b4: 0x66940004  daddiu      $s4, $s4, 0x4
    ctx->pc = 0x3f81b4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4);
    // 0x3f81b8: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x3f81b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3f81bc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3F81BCu;
    {
        const bool branch_taken_0x3f81bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F81BCu;
        // 0x3f81c0: 0x2751024  and         $v0, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f81bc) {
            ctx->pc = 0x3F80F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f80f8;
        }
    }
    ctx->pc = 0x3F81C4u;
label_3f81c4:
    // 0x3f81c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f81c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f81c8:
    // 0x3f81c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f81c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f81cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f81ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f81d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f81d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f81d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f81d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f81d8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3f81d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f81dc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3f81dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f81e0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3f81e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f81e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f81e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F81E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F81E8u;
        // 0x3f81ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F81E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F81F0u;
}
