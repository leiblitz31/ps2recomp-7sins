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

// Function: sub_003F4A40
// Address: 0x3f4a40 - 0x3f4ef0
void sub_003F4A40_0x3f4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4A40_0x3f4a40");
#endif

    switch (ctx->pc) {
        case 0x3f4a8cu: goto label_3f4a8c;
        case 0x3f4ab4u: goto label_3f4ab4;
        case 0x3f4ac8u: goto label_3f4ac8;
        case 0x3f4ae0u: goto label_3f4ae0;
        case 0x3f4af0u: goto label_3f4af0;
        case 0x3f4b14u: goto label_3f4b14;
        case 0x3f4b24u: goto label_3f4b24;
        case 0x3f4b2cu: goto label_3f4b2c;
        case 0x3f4b74u: goto label_3f4b74;
        case 0x3f4b88u: goto label_3f4b88;
        case 0x3f4b9cu: goto label_3f4b9c;
        case 0x3f4bb8u: goto label_3f4bb8;
        case 0x3f4bd4u: goto label_3f4bd4;
        case 0x3f4be8u: goto label_3f4be8;
        case 0x3f4c00u: goto label_3f4c00;
        case 0x3f4c10u: goto label_3f4c10;
        case 0x3f4c34u: goto label_3f4c34;
        case 0x3f4c44u: goto label_3f4c44;
        case 0x3f4c4cu: goto label_3f4c4c;
        case 0x3f4c94u: goto label_3f4c94;
        case 0x3f4ca8u: goto label_3f4ca8;
        case 0x3f4cbcu: goto label_3f4cbc;
        case 0x3f4ce0u: goto label_3f4ce0;
        case 0x3f4d14u: goto label_3f4d14;
        case 0x3f4d24u: goto label_3f4d24;
        case 0x3f4d7cu: goto label_3f4d7c;
        case 0x3f4d8cu: goto label_3f4d8c;
        case 0x3f4db4u: goto label_3f4db4;
        case 0x3f4dd8u: goto label_3f4dd8;
        case 0x3f4eacu: goto label_3f4eac;
        case 0x3f4eb8u: goto label_3f4eb8;
        case 0x3f4ec4u: goto label_3f4ec4;
        default: break;
    }

    ctx->pc = 0x3f4a40u;

    // 0x3f4a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3f4a44: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3f4a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3f4a48: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3f4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3f4a4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f4a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4a50: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3f4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3f4a54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f4a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4a58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3f4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3f4a5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3f4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3f4a60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3f4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3f4a64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f4a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3f4a68: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3f4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3f4a6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f4a70: 0xde6300f8  ld          $v1, 0xF8($s3)
    ctx->pc = 0x3f4a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x3f4a74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f4a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f4a78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4A78u;
    {
        const bool branch_taken_0x3f4a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A78u;
        // 0x3f4a7c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a78) {
            ctx->pc = 0x3F4A94u;
            goto label_3f4a94;
        }
    }
    ctx->pc = 0x3F4A80u;
    // 0x3f4a80: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4a84: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F4A84u;
    SET_GPR_U32(ctx, 31, 0x3F4A8Cu);
    ctx->pc = 0x3F4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4A84u;
    // 0x3f4a88: 0x24a5f070  addiu       $a1, $a1, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F4A84u, 0x3F4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4A8Cu;
label_3f4a8c:
    // 0x3f4a8c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3F4A8Cu;
    {
        const bool branch_taken_0x3f4a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A8Cu;
        // 0x3f4a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a8c) {
            ctx->pc = 0x3F4B94u;
            goto label_3f4b94;
        }
    }
    ctx->pc = 0x3F4A94u;
label_3f4a94:
    // 0x3f4a94: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f4a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f4a98: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F4A98u;
    {
        const bool branch_taken_0x3f4a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A98u;
        // 0x3f4a9c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a98) {
            ctx->pc = 0x3F4B90u;
            goto label_3f4b90;
        }
    }
    ctx->pc = 0x3F4AA0u;
    // 0x3f4aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4aa4: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f4aa4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f4aa8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f4aa8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f4aac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4AACu;
    SET_GPR_U32(ctx, 31, 0x3F4AB4u);
    ctx->pc = 0x3F4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4AACu;
    // 0x3f4ab0: 0x24a5f090  addiu       $a1, $a1, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4AACu, 0x3F4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4AB4u;
label_3f4ab4:
    // 0x3f4ab4: 0x8e74015c  lw          $s4, 0x15C($s3)
    ctx->pc = 0x3f4ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f4ab8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f4ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f4abc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F4ABCu;
    {
        const bool branch_taken_0x3f4abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4abc) {
            ctx->pc = 0x3F4AFCu;
            goto label_3f4afc;
        }
    }
    ctx->pc = 0x3F4AC4u;
    // 0x3f4ac4: 0x8e710158  lw          $s1, 0x158($s3)
    ctx->pc = 0x3f4ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_3f4ac8:
    // 0x3f4ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4acc: 0x8e70015c  lw          $s0, 0x15C($s3)
    ctx->pc = 0x3f4accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f4ad0: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x3f4ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f4ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ad8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4AD8u;
    SET_GPR_U32(ctx, 31, 0x3F4AE0u);
    ctx->pc = 0x3F4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4AD8u;
    // 0x3f4adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4AD8u, 0x3F4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4AE0u;
label_3f4ae0:
    // 0x3f4ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ae4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f4ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ae8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4AE8u;
    SET_GPR_U32(ctx, 31, 0x3F4AF0u);
    ctx->pc = 0x3F4AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4AE8u;
    // 0x3f4aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4AE8u, 0x3F4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4AF0u;
label_3f4af0:
    // 0x3f4af0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f4af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f4af4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F4AF4u;
    {
        const bool branch_taken_0x3f4af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4af4) {
            ctx->pc = 0x3F4AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4AF4u;
            // 0x3f4af8: 0x8e710158  lw          $s1, 0x158($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4ac8;
        }
    }
    ctx->pc = 0x3F4AFCu;
label_3f4afc:
    // 0x3f4afc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4AFCu;
    {
        const bool branch_taken_0x3f4afc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4AFCu;
        // 0x3f4b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4afc) {
            ctx->pc = 0x3F4B24u;
            goto label_3f4b24;
        }
    }
    ctx->pc = 0x3F4B04u;
    // 0x3f4b04: 0x8e700158  lw          $s0, 0x158($s3)
    ctx->pc = 0x3f4b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x3f4b08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f4b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b0c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4B0Cu;
    SET_GPR_U32(ctx, 31, 0x3F4B14u);
    ctx->pc = 0x3F4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B0Cu;
    // 0x3f4b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4B0Cu, 0x3F4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B14u;
label_3f4b14:
    // 0x3f4b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f4b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b1c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4B1Cu;
    SET_GPR_U32(ctx, 31, 0x3F4B24u);
    ctx->pc = 0x3F4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B1Cu;
    // 0x3f4b20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4B1Cu, 0x3F4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B24u;
label_3f4b24:
    // 0x3f4b24: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F4B24u;
    SET_GPR_U32(ctx, 31, 0x3F4B2Cu);
    ctx->pc = 0x3F4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B24u;
    // 0x3f4b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F4B24u, 0x3F4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B2Cu;
label_3f4b2c:
    // 0x3f4b2c: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3F4B2Cu;
    {
        const bool branch_taken_0x3f4b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B2Cu;
        // 0x3f4b30: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b2c) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4B34u;
    // 0x3f4b34: 0x92620200  lbu         $v0, 0x200($s3)
    ctx->pc = 0x3f4b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x3f4b38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f4b3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4B3Cu;
    {
        const bool branch_taken_0x3f4b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B3Cu;
        // 0x3f4b40: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b3c) {
            ctx->pc = 0x3F4B58u;
            goto label_3f4b58;
        }
    }
    ctx->pc = 0x3F4B44u;
    // 0x3f4b44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f4b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f4b48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4B48u;
    {
        const bool branch_taken_0x3f4b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B48u;
        // 0x3f4b4c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b48) {
            ctx->pc = 0x3F4B64u;
            goto label_3f4b64;
        }
    }
    ctx->pc = 0x3F4B50u;
    // 0x3f4b50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F4B50u;
    {
        const bool branch_taken_0x3f4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B50u;
        // 0x3f4b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b50) {
            ctx->pc = 0x3F4B80u;
            goto label_3f4b80;
        }
    }
    ctx->pc = 0x3F4B58u;
label_3f4b58:
    // 0x3f4b58: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4b5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4B5Cu;
    {
        const bool branch_taken_0x3f4b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B5Cu;
        // 0x3f4b60: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b5c) {
            ctx->pc = 0x3F4B7Cu;
            goto label_3f4b7c;
        }
    }
    ctx->pc = 0x3F4B64u;
label_3f4b64:
    // 0x3f4b64: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4b68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b6c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4B6Cu;
    SET_GPR_U32(ctx, 31, 0x3F4B74u);
    ctx->pc = 0x3F4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B6Cu;
    // 0x3f4b70: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4B6Cu, 0x3F4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B74u;
label_3f4b74:
    // 0x3f4b74: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3F4B74u;
    {
        const bool branch_taken_0x3f4b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B74u;
        // 0x3f4b78: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b74) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4B7Cu;
label_3f4b7c:
    // 0x3f4b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f4b80:
    // 0x3f4b80: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F4B80u;
    SET_GPR_U32(ctx, 31, 0x3F4B88u);
    ctx->pc = 0x3F4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B80u;
    // 0x3f4b84: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F4B80u, 0x3F4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B88u;
label_3f4b88:
    // 0x3f4b88: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x3F4B88u;
    {
        const bool branch_taken_0x3f4b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B88u;
        // 0x3f4b8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b88) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4B90u;
label_3f4b90:
    // 0x3f4b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f4b94:
    // 0x3f4b94: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F4B94u;
    SET_GPR_U32(ctx, 31, 0x3F4B9Cu);
    ctx->pc = 0x3F4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B94u;
    // 0x3f4b98: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F4B94u, 0x3F4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B9Cu;
label_3f4b9c:
    // 0x3f4b9c: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x3f4b9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f4ba0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3f4ba0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3f4ba4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f4ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bb0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4BB0u;
    SET_GPR_U32(ctx, 31, 0x3F4BB8u);
    ctx->pc = 0x3F4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BB0u;
    // 0x3f4bb4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4BB0u, 0x3F4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4BB8u;
label_3f4bb8:
    // 0x3f4bb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f4bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bc0: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3f4bc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f4bc4: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f4bc4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f4bc8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bcc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4BCCu;
    SET_GPR_U32(ctx, 31, 0x3F4BD4u);
    ctx->pc = 0x3F4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BCCu;
    // 0x3f4bd0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4BCCu, 0x3F4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4BD4u;
label_3f4bd4:
    // 0x3f4bd4: 0x8e74015c  lw          $s4, 0x15C($s3)
    ctx->pc = 0x3f4bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f4bd8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f4bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f4bdc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F4BDCu;
    {
        const bool branch_taken_0x3f4bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4bdc) {
            ctx->pc = 0x3F4C1Cu;
            goto label_3f4c1c;
        }
    }
    ctx->pc = 0x3F4BE4u;
    // 0x3f4be4: 0x8e710158  lw          $s1, 0x158($s3)
    ctx->pc = 0x3f4be4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_3f4be8:
    // 0x3f4be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bec: 0x8e70015c  lw          $s0, 0x15C($s3)
    ctx->pc = 0x3f4becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f4bf0: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x3f4bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f4bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bf8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4BF8u;
    SET_GPR_U32(ctx, 31, 0x3F4C00u);
    ctx->pc = 0x3F4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BF8u;
    // 0x3f4bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4BF8u, 0x3F4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C00u;
label_3f4c00:
    // 0x3f4c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f4c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c08: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4C08u;
    SET_GPR_U32(ctx, 31, 0x3F4C10u);
    ctx->pc = 0x3F4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C08u;
    // 0x3f4c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4C08u, 0x3F4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C10u;
label_3f4c10:
    // 0x3f4c10: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f4c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f4c14: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F4C14u;
    {
        const bool branch_taken_0x3f4c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4c14) {
            ctx->pc = 0x3F4C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4C14u;
            // 0x3f4c18: 0x8e710158  lw          $s1, 0x158($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4be8;
        }
    }
    ctx->pc = 0x3F4C1Cu;
label_3f4c1c:
    // 0x3f4c1c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4C1Cu;
    {
        const bool branch_taken_0x3f4c1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C1Cu;
        // 0x3f4c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c1c) {
            ctx->pc = 0x3F4C44u;
            goto label_3f4c44;
        }
    }
    ctx->pc = 0x3F4C24u;
    // 0x3f4c24: 0x8e700158  lw          $s0, 0x158($s3)
    ctx->pc = 0x3f4c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x3f4c28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f4c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c2c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4C2Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C34u);
    ctx->pc = 0x3F4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C2Cu;
    // 0x3f4c30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4C2Cu, 0x3F4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C34u;
label_3f4c34:
    // 0x3f4c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f4c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c3c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4C3Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C44u);
    ctx->pc = 0x3F4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C3Cu;
    // 0x3f4c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4C3Cu, 0x3F4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C44u;
label_3f4c44:
    // 0x3f4c44: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F4C44u;
    SET_GPR_U32(ctx, 31, 0x3F4C4Cu);
    ctx->pc = 0x3F4C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C44u;
    // 0x3f4c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F4C44u, 0x3F4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C4Cu;
label_3f4c4c:
    // 0x3f4c4c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F4C4Cu;
    {
        const bool branch_taken_0x3f4c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C4Cu;
        // 0x3f4c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c4c) {
            ctx->pc = 0x3F4CACu;
            goto label_3f4cac;
        }
    }
    ctx->pc = 0x3F4C54u;
    // 0x3f4c54: 0x92620200  lbu         $v0, 0x200($s3)
    ctx->pc = 0x3f4c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x3f4c58: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f4c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4C5Cu;
    {
        const bool branch_taken_0x3f4c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C5Cu;
        // 0x3f4c60: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c5c) {
            ctx->pc = 0x3F4C78u;
            goto label_3f4c78;
        }
    }
    ctx->pc = 0x3F4C64u;
    // 0x3f4c64: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f4c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f4c68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4C68u;
    {
        const bool branch_taken_0x3f4c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C68u;
        // 0x3f4c6c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c68) {
            ctx->pc = 0x3F4C84u;
            goto label_3f4c84;
        }
    }
    ctx->pc = 0x3F4C70u;
    // 0x3f4c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F4C70u;
    {
        const bool branch_taken_0x3f4c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C70u;
        // 0x3f4c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c70) {
            ctx->pc = 0x3F4CA0u;
            goto label_3f4ca0;
        }
    }
    ctx->pc = 0x3F4C78u;
label_3f4c78:
    // 0x3f4c78: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4C7Cu;
    {
        const bool branch_taken_0x3f4c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C7Cu;
        // 0x3f4c80: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c7c) {
            ctx->pc = 0x3F4C9Cu;
            goto label_3f4c9c;
        }
    }
    ctx->pc = 0x3F4C84u;
label_3f4c84:
    // 0x3f4c84: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c8c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4C8Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C94u);
    ctx->pc = 0x3F4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C8Cu;
    // 0x3f4c90: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4C8Cu, 0x3F4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C94u;
label_3f4c94:
    // 0x3f4c94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4C94u;
    {
        const bool branch_taken_0x3f4c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C94u;
        // 0x3f4c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c94) {
            ctx->pc = 0x3F4CACu;
            goto label_3f4cac;
        }
    }
    ctx->pc = 0x3F4C9Cu;
label_3f4c9c:
    // 0x3f4c9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ca0:
    // 0x3f4ca0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F4CA0u;
    SET_GPR_U32(ctx, 31, 0x3F4CA8u);
    ctx->pc = 0x3F4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4CA0u;
    // 0x3f4ca4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F4CA0u, 0x3F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4CA8u;
label_3f4ca8:
    // 0x3f4ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4cac:
    // 0x3f4cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4CACu;
    {
        const bool branch_taken_0x3f4cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CACu;
        // 0x3f4cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cac) {
            ctx->pc = 0x3F4CC4u;
            goto label_3f4cc4;
        }
    }
    ctx->pc = 0x3F4CB4u;
    // 0x3f4cb4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4CB4u;
    SET_GPR_U32(ctx, 31, 0x3F4CBCu);
    ctx->pc = 0x3F4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4CB4u;
    // 0x3f4cb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4CB4u, 0x3F4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4CBCu;
label_3f4cbc:
    // 0x3f4cbc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x3F4CBCu;
    {
        const bool branch_taken_0x3f4cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CBCu;
        // 0x3f4cc0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cbc) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4CC4u;
label_3f4cc4:
    // 0x3f4cc4: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x3f4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x3f4cc8: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3f4cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ccc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f4cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4cd0: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x3f4cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f4cd4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4CD4u;
    {
        const bool branch_taken_0x3f4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CD4u;
        // 0x3f4cd8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cd4) {
            ctx->pc = 0x3F4CFCu;
            goto label_3f4cfc;
        }
    }
    ctx->pc = 0x3F4CDCu;
    // 0x3f4cdc: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x3f4cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ce0:
    // 0x3f4ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4ce4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f4ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f4ce8: 0x0  nop
    ctx->pc = 0x3f4ce8u;
    // NOP
    // 0x3f4cec: 0x0  nop
    ctx->pc = 0x3f4cecu;
    // NOP
    // 0x3f4cf0: 0x0  nop
    ctx->pc = 0x3f4cf0u;
    // NOP
    // 0x3f4cf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F4CF4u;
    {
        const bool branch_taken_0x3f4cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CF4u;
        // 0x3f4cf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cf4) {
            ctx->pc = 0x3F4CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4ce0;
        }
    }
    ctx->pc = 0x3F4CFCu;
label_3f4cfc:
    // 0x3f4cfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f4cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f4d00: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3f4d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f4d04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4D04u;
    {
        const bool branch_taken_0x3f4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D04u;
        // 0x3f4d08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d04) {
            ctx->pc = 0x3F4D2Cu;
            goto label_3f4d2c;
        }
    }
    ctx->pc = 0x3F4D0Cu;
    // 0x3f4d0c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4D0Cu;
    SET_GPR_U32(ctx, 31, 0x3F4D14u);
    ctx->pc = 0x3F4D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D0Cu;
    // 0x3f4d10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4D0Cu, 0x3F4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D14u;
label_3f4d14:
    // 0x3f4d14: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d1c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4D1Cu;
    SET_GPR_U32(ctx, 31, 0x3F4D24u);
    ctx->pc = 0x3F4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D1Cu;
    // 0x3f4d20: 0x24a5f0a8  addiu       $a1, $a1, -0xF58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4D1Cu, 0x3F4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D24u;
label_3f4d24:
    // 0x3f4d24: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3F4D24u;
    {
        const bool branch_taken_0x3f4d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D24u;
        // 0x3f4d28: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d24) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4D2Cu;
label_3f4d2c:
    // 0x3f4d2c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x3f4d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f4d30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3f4d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3f4d34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f4d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f4d38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3f4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f4d3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3f4d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d40: 0x2151823  subu        $v1, $s0, $s5
    ctx->pc = 0x3f4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3f4d44: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x3f4d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x3f4d48: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x3f4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3f4d4c: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x3f4d4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3f4d50: 0xa3a50004  sb          $a1, 0x4($sp)
    ctx->pc = 0x3f4d50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f4d54: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x3f4d54u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f4d58: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F4D58u;
    {
        const bool branch_taken_0x3f4d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d58) {
            ctx->pc = 0x3F4D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4D58u;
            // 0x3f4d5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4D60u;
            goto label_3f4d60;
        }
    }
    ctx->pc = 0x3F4D60u;
label_3f4d60:
    // 0x3f4d60: 0x1812  mflo        $v1
    ctx->pc = 0x3f4d60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3f4d64: 0x1010  mfhi        $v0
    ctx->pc = 0x3f4d64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3f4d68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F4D68u;
    {
        const bool branch_taken_0x3f4d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D68u;
        // 0x3f4d6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d68) {
            ctx->pc = 0x3F4D94u;
            goto label_3f4d94;
        }
    }
    ctx->pc = 0x3F4D70u;
    // 0x3f4d70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d74: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4D74u;
    SET_GPR_U32(ctx, 31, 0x3F4D7Cu);
    ctx->pc = 0x3F4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D74u;
    // 0x3f4d78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4D74u, 0x3F4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D7Cu;
label_3f4d7c:
    // 0x3f4d7c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4d80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d84: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4D84u;
    SET_GPR_U32(ctx, 31, 0x3F4D8Cu);
    ctx->pc = 0x3F4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D84u;
    // 0x3f4d88: 0x24a5f0c0  addiu       $a1, $a1, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4D84u, 0x3F4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D8Cu;
label_3f4d8c:
    // 0x3f4d8c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3F4D8Cu;
    {
        const bool branch_taken_0x3f4d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D8Cu;
        // 0x3f4d90: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d8c) {
            ctx->pc = 0x3F4EC8u;
            goto label_3f4ec8;
        }
    }
    ctx->pc = 0x3F4D94u;
label_3f4d94:
    // 0x3f4d94: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F4D94u;
    {
        const bool branch_taken_0x3f4d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d94) {
            ctx->pc = 0x3F4D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4D94u;
            // 0x3f4d98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4D9Cu;
            goto label_3f4d9c;
        }
    }
    ctx->pc = 0x3F4D9Cu;
label_3f4d9c:
    // 0x3f4d9c: 0x228b8  dsll        $a1, $v0, 2
    ctx->pc = 0x3f4d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 2);
    // 0x3f4da0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3f4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3f4da4: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x3f4da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f4da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4dac: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F4DACu;
    SET_GPR_U32(ctx, 31, 0x3F4DB4u);
    ctx->pc = 0x3F4DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4DACu;
    // 0x3f4db0: 0x52878  dsll        $a1, $a1, 1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F4DACu, 0x3F4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4DB4u;
label_3f4db4:
    // 0x3f4db4: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x3f4db4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f4db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4dbc: 0x18600035  blez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3F4DBCu;
    {
        const bool branch_taken_0x3f4dbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4DBCu;
        // 0x3f4dc0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4dbc) {
            ctx->pc = 0x3F4E94u;
            goto label_3f4e94;
        }
    }
    ctx->pc = 0x3F4DC4u;
    // 0x3f4dc4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3f4dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4dc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f4dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4dd0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x3f4dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f4dd4: 0x0  nop
    ctx->pc = 0x3f4dd4u;
    // NOP
label_3f4dd8:
    // 0x3f4dd8: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x3f4dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f4ddc: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x3F4DDCu;
    {
        const bool branch_taken_0x3f4ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3F4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4DDCu;
        // 0x3f4de0: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ddc) {
            ctx->pc = 0x3F4E10u;
            goto label_3f4e10;
        }
    }
    ctx->pc = 0x3F4DE4u;
    // 0x3f4de4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f4de8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3f4de8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f4dec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f4decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4df0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f4df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f4df4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x3f4df4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4df8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f4df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4dfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f4e00: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x3f4e00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f4e04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f4e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4e08: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3F4E08u;
    {
        const bool branch_taken_0x3f4e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E08u;
        // 0x3f4e0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e08) {
            ctx->pc = 0x3F4E68u;
            goto label_3f4e68;
        }
    }
    ctx->pc = 0x3F4E10u;
label_3f4e10:
    // 0x3f4e10: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3f4e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f4e14: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f4e18: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f4e1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4e20: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3f4e20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4e24: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f4e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4e28: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3f4e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f4e2c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f4e30: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f4e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f4e34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4e38: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x3f4e38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4e3c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f4e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4e40: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3f4e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f4e44: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f4e48: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f4e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4e50: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x3f4e50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4e54: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f4e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4e58: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3f4e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f4e5c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f4e60: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f4e64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f4e68:
    // 0x3f4e68: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x3f4e68u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4e6c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f4e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4e70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3f4e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3f4e74: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3f4e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3f4e78: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x3f4e78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3f4e7c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f4e80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3f4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3f4e84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4e88: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x3f4e88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4e8c: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3F4E8Cu;
    {
        const bool branch_taken_0x3f4e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E8Cu;
        // 0x3f4e90: 0x24c6000a  addiu       $a2, $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e8c) {
            ctx->pc = 0x3F4DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4dd8;
        }
    }
    ctx->pc = 0x3F4E94u;
label_3f4e94:
    // 0x3f4e94: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3f4e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4e98: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3f4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x3f4e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ea0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4ea4: 0xc0fea96  jal         func_3FAA58
    ctx->pc = 0x3F4EA4u;
    SET_GPR_U32(ctx, 31, 0x3F4EACu);
    ctx->pc = 0x3F4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4EA4u;
    // 0x3f4ea8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FAA58u, 0x3F4EA4u, 0x3F4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EACu;
label_3f4eac:
    // 0x3f4eac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4eb0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4EB0u;
    SET_GPR_U32(ctx, 31, 0x3F4EB8u);
    ctx->pc = 0x3F4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4EB0u;
    // 0x3f4eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4EB0u, 0x3F4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EB8u;
label_3f4eb8:
    // 0x3f4eb8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3f4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3f4ebc: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4EBCu;
    SET_GPR_U32(ctx, 31, 0x3F4EC4u);
    ctx->pc = 0x3F4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4EBCu;
    // 0x3f4ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4EBCu, 0x3F4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EC4u;
label_3f4ec4:
    // 0x3f4ec4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3f4ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f4ec8:
    // 0x3f4ec8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3f4ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f4ecc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3f4eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f4ed0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3f4ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f4ed4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3f4ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f4ed8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f4ed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4edc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3f4edcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f4ee0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3f4ee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f4ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f4ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4EE8u;
        // 0x3f4eec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4EF0u;
}
