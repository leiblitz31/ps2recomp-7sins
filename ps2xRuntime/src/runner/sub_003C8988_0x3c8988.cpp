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

// Function: sub_003C8988
// Address: 0x3c8988 - 0x3c8e28
void sub_003C8988_0x3c8988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8988_0x3c8988");
#endif

    switch (ctx->pc) {
        case 0x3c89c8u: goto label_3c89c8;
        case 0x3c89d4u: goto label_3c89d4;
        case 0x3c89e0u: goto label_3c89e0;
        case 0x3c8ae0u: goto label_3c8ae0;
        case 0x3c8bc8u: goto label_3c8bc8;
        case 0x3c8cb0u: goto label_3c8cb0;
        case 0x3c8d90u: goto label_3c8d90;
        case 0x3c8d98u: goto label_3c8d98;
        case 0x3c8ddcu: goto label_3c8ddc;
        case 0x3c8e10u: goto label_3c8e10;
        default: break;
    }

    ctx->pc = 0x3c8988u;

    // 0x3c8988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c8988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c898c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c8990: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c8990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c8994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c8994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c899c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c89a0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3c89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c89a4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x3c89a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x3c89a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3c89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3c89ac: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x3c89acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x3c89b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C89B0u;
    {
        const bool branch_taken_0x3c89b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B0u;
        // 0x3c89b4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89b0) {
            ctx->pc = 0x3C89BCu;
            goto label_3c89bc;
        }
    }
    ctx->pc = 0x3C89B8u;
    // 0x3c89b8: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x3c89b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c89bc:
    // 0x3c89bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3c89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c89c0: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3C89C0u;
    SET_GPR_U32(ctx, 31, 0x3C89C8u);
    ctx->pc = 0x3C89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C89C0u;
    // 0x3c89c4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3C89C0u, 0x3C89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C89C8u;
label_3c89c8:
    // 0x3c89c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c89c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c89cc: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3C89CCu;
    SET_GPR_U32(ctx, 31, 0x3C89D4u);
    ctx->pc = 0x3C89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C89CCu;
    // 0x3c89d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3C89CCu, 0x3C89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C89D4u;
label_3c89d4:
    // 0x3c89d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c89d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c89d8: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x3C89D8u;
    SET_GPR_U32(ctx, 31, 0x3C89E0u);
    ctx->pc = 0x3C89DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C89D8u;
    // 0x3c89dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3C89D8u, 0x3C89E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C89E0u;
label_3c89e0:
    // 0x3c89e0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x3c89e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3c89e4: 0x10c00070  beqz        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x3C89E4u;
    {
        const bool branch_taken_0x3c89e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89E4u;
        // 0x3c89e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89e4) {
            ctx->pc = 0x3C8BA8u;
            goto label_3c8ba8;
        }
    }
    ctx->pc = 0x3C89ECu;
    // 0x3c89ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3c89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c89f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c89f4: 0x835804  sllv        $t3, $v1, $a0
    ctx->pc = 0x3c89f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3c89f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c89f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c89fc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3c89fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3c8a00: 0x116200e0  beq         $t3, $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x3C8A00u;
    {
        const bool branch_taken_0x3c8a00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A00u;
        // 0x3c8a04: 0xb1027  nor         $v0, $zero, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a00) {
            ctx->pc = 0x3C8D84u;
            goto label_3c8d84;
        }
    }
    ctx->pc = 0x3C8A08u;
    // 0x3c8a08: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x3c8a08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8a0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3c8a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3c8a10: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3c8a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c8a14: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3c8a14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x3c8a18: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3C8A18u;
    {
        const bool branch_taken_0x3c8a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A18u;
        // 0x3c8a1c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a18) {
            ctx->pc = 0x3C8AC8u;
            goto label_3c8ac8;
        }
    }
    ctx->pc = 0x3C8A20u;
    // 0x3c8a20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c8a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c8a24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C8A24u;
    {
        const bool branch_taken_0x3c8a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A24u;
        // 0x3c8a28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a24) {
            ctx->pc = 0x3C8A94u;
            goto label_3c8a94;
        }
    }
    ctx->pc = 0x3C8A2Cu;
    // 0x3c8a2c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C8A2Cu;
    {
        const bool branch_taken_0x3c8a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8a2c) {
            ctx->pc = 0x3C8A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8A2Cu;
            // 0x3c8a30: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8A68u;
            goto label_3c8a68;
        }
    }
    ctx->pc = 0x3C8A34u;
    // 0x3c8a34: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3c8a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c8a38: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3c8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3c8a3c: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3c8a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3c8a40: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3c8a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3c8a44: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3c8a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3c8a48: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8a4c: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x3c8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3c8a50: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c8a50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8a54: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8a58: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3c8a58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8a5c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3c8a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8a60: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x3c8a60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8a64: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c8a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c8a68:
    // 0x3c8a68: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3c8a68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3c8a6c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3c8a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3c8a70: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3c8a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3c8a74: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8a78: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8a7c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c8a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8a80: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x3c8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3c8a84: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3c8a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8a88: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x3c8a88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8a8c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x3c8a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8a90: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3c8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3c8a94:
    // 0x3c8a94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c8a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c8a98: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3c8a98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3c8a9c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3c8a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3c8aa0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3c8aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3c8aa4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8aa8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8aac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8ab0: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x3c8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3c8ab4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3c8ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8ab8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x3c8ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8abc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x3c8abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8ac0: 0x116c00b0  beq         $t3, $t4, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3C8AC0u;
    {
        const bool branch_taken_0x3c8ac0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 12));
        ctx->pc = 0x3C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC0u;
        // 0x3c8ac4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ac0) {
            ctx->pc = 0x3C8D84u;
            goto label_3c8d84;
        }
    }
    ctx->pc = 0x3C8AC8u;
label_3c8ac8:
    // 0x3c8ac8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3c8ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8acc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3c8accu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ad0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3c8ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ad4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ad8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3c8ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8adc: 0x0  nop
    ctx->pc = 0x3c8adcu;
    // NOP
label_3c8ae0:
    // 0x3c8ae0: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x3c8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8ae4: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x3c8ae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x3c8ae8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c8ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c8aec: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8af0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c8af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8af4: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3c8af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3c8af8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8afc: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3c8afcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8b00: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x3c8b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3c8b04: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b08: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3c8b08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b0c: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x3c8b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8b10: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3c8b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c8b14: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b18: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3c8b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b1c: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x3c8b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x3c8b20: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8b24: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x3c8b24u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8b28: 0x91420006  lbu         $v0, 0x6($t2)
    ctx->pc = 0x3c8b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x3c8b2c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b30: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3c8b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b34: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x3c8b34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8b38: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x3c8b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c8b3c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b40: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x3c8b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b44: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x3c8b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x3c8b48: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3c8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c8b4c: 0xa1230009  sb          $v1, 0x9($t1)
    ctx->pc = 0x3c8b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8b50: 0x9142000a  lbu         $v0, 0xA($t2)
    ctx->pc = 0x3c8b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x3c8b54: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b58: 0xa0a2000a  sb          $v0, 0xA($a1)
    ctx->pc = 0x3c8b58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b5c: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x3c8b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8b60: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3c8b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3c8b64: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x3c8b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3c8b68: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b6c: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3c8b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3c8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3c8b74: 0x9102000d  lbu         $v0, 0xD($t0)
    ctx->pc = 0x3c8b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x3c8b78: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3c8b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3c8b7c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b80: 0xa122000d  sb          $v0, 0xD($t1)
    ctx->pc = 0x3c8b80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b84: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3c8b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3c8b88: 0x9142000e  lbu         $v0, 0xE($t2)
    ctx->pc = 0x3c8b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x3c8b8c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3c8b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3c8b90: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3c8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c8b94: 0xa0a2000e  sb          $v0, 0xE($a1)
    ctx->pc = 0x3c8b94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8b98: 0x156cffd1  bne         $t3, $t4, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3C8B98u;
    {
        const bool branch_taken_0x3c8b98 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        ctx->pc = 0x3C8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B98u;
        // 0x3c8b9c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b98) {
            ctx->pc = 0x3C8AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8ae0;
        }
    }
    ctx->pc = 0x3C8BA0u;
    // 0x3c8ba0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x3C8BA0u;
    {
        const bool branch_taken_0x3c8ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BA0u;
        // 0x3c8ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ba0) {
            ctx->pc = 0x3C8D88u;
            goto label_3c8d88;
        }
    }
    ctx->pc = 0x3C8BA8u;
label_3c8ba8:
    // 0x3c8ba8: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x3c8ba8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c8bac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c8bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8bb0: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c8bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3c8bb4: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x3c8bb4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c8bb8: 0x11e00072  beqz        $t7, . + 4 + (0x72 << 2)
    ctx->pc = 0x3C8BB8u;
    {
        const bool branch_taken_0x3c8bb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BB8u;
        // 0x3c8bbc: 0x8e180010  lw          $t8, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8bb8) {
            ctx->pc = 0x3C8D84u;
            goto label_3c8d84;
        }
    }
    ctx->pc = 0x3C8BC0u;
    // 0x3c8bc0: 0x781018  mult        $v0, $v1, $t8
    ctx->pc = 0x3c8bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c8bc4: 0x0  nop
    ctx->pc = 0x3c8bc4u;
    // NOP
label_3c8bc8:
    // 0x3c8bc8: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x3c8bc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c8bcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c8bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8bd0: 0x11a00068  beqz        $t5, . + 4 + (0x68 << 2)
    ctx->pc = 0x3C8BD0u;
    {
        const bool branch_taken_0x3c8bd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BD0u;
        // 0x3c8bd4: 0x593021  addu        $a2, $v0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8bd0) {
            ctx->pc = 0x3C8D74u;
            goto label_3c8d74;
        }
    }
    ctx->pc = 0x3C8BD8u;
    // 0x3c8bd8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x3c8bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c8bdc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c8bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8be0: 0x19a00020  blez        $t5, . + 4 + (0x20 << 2)
    ctx->pc = 0x3C8BE0u;
    {
        const bool branch_taken_0x3c8be0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3C8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BE0u;
        // 0x3c8be4: 0x31a30003  andi        $v1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8be0) {
            ctx->pc = 0x3C8C64u;
            goto label_3c8c64;
        }
    }
    ctx->pc = 0x3C8BE8u;
    // 0x3c8be8: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3C8BE8u;
    {
        const bool branch_taken_0x3c8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BE8u;
        // 0x3c8bec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8be8) {
            ctx->pc = 0x3C8C9Cu;
            goto label_3c8c9c;
        }
    }
    ctx->pc = 0x3C8BF0u;
    // 0x3c8bf0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C8BF0u;
    {
        const bool branch_taken_0x3c8bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8bf0) {
            ctx->pc = 0x3C8BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8BF0u;
            // 0x3c8bf4: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8C68u;
            goto label_3c8c68;
        }
    }
    ctx->pc = 0x3C8BF8u;
    // 0x3c8bf8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c8bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c8bfc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C8BFCu;
    {
        const bool branch_taken_0x3c8bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8bfc) {
            ctx->pc = 0x3C8C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8BFCu;
            // 0x3c8c00: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8C38u;
            goto label_3c8c38;
        }
    }
    ctx->pc = 0x3C8C04u;
    // 0x3c8c04: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3c8c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c8c08: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3c8c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3c8c0c: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3c8c0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3c8c10: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3c8c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8c14: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3c8c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3c8c18: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8c1c: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x3c8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x3c8c20: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c8c20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8c24: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8c28: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3c8c28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8c2c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3c8c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8c30: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x3c8c30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8c34: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c8c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c8c38:
    // 0x3c8c38: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3c8c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3c8c3c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3c8c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3c8c40: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3c8c40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3c8c44: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8c48: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8c4c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8c50: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x3c8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x3c8c54: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3c8c54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8c58: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x3c8c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8c5c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x3c8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8c60: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3c8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3c8c64:
    // 0x3c8c64: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c8c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c8c68:
    // 0x3c8c68: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3c8c68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3c8c6c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3c8c6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3c8c70: 0x16d602b  sltu        $t4, $t3, $t5
    ctx->pc = 0x3c8c70u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3c8c74: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3c8c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3c8c78: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8c7c: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x3c8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x3c8c80: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c8c80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8c84: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8c88: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x3c8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8c8c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3c8c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8c90: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x3c8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8c94: 0x11800037  beqz        $t4, . + 4 + (0x37 << 2)
    ctx->pc = 0x3C8C94u;
    {
        const bool branch_taken_0x3c8c94 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C94u;
        // 0x3c8c98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c94) {
            ctx->pc = 0x3C8D74u;
            goto label_3c8d74;
        }
    }
    ctx->pc = 0x3C8C9Cu;
label_3c8c9c:
    // 0x3c8c9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3c8c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ca0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3c8ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ca4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3c8ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ca8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c8ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8cac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3c8cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8cb0:
    // 0x3c8cb0: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x3c8cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8cb4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3c8cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3c8cb8: 0x16d602b  sltu        $t4, $t3, $t5
    ctx->pc = 0x3c8cb8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3c8cbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c8cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c8cc0: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8cc4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c8cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8cc8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3c8cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3c8ccc: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8cd0: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x3c8cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8cd4: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x3c8cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3c8cd8: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8cdc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3c8cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8ce0: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x3c8ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8ce4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3c8ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c8ce8: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8cec: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3c8cecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8cf0: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x3c8cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3c8cf4: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8cf8: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x3c8cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8cfc: 0x91220006  lbu         $v0, 0x6($t1)
    ctx->pc = 0x3c8cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x3c8d00: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d04: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3c8d04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d08: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x3c8d08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8d0c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x3c8d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c8d10: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d14: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x3c8d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d18: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x3c8d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x3c8d1c: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x3c8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c8d20: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x3c8d20u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8d24: 0x9122000a  lbu         $v0, 0xA($t1)
    ctx->pc = 0x3c8d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x3c8d28: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d2c: 0xa0a2000a  sb          $v0, 0xA($a1)
    ctx->pc = 0x3c8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d30: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x3c8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8d34: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3c8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3c8d38: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x3c8d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3c8d3c: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d40: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3c8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d44: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3c8d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3c8d48: 0x90e2000d  lbu         $v0, 0xD($a3)
    ctx->pc = 0x3c8d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x3c8d4c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3c8d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3c8d50: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d54: 0xa102000d  sb          $v0, 0xD($t0)
    ctx->pc = 0x3c8d54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3c8d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3c8d5c: 0x9122000e  lbu         $v0, 0xE($t1)
    ctx->pc = 0x3c8d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x3c8d60: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3c8d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3c8d64: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3c8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3c8d68: 0xa0a2000e  sb          $v0, 0xE($a1)
    ctx->pc = 0x3c8d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c8d6c: 0x1580ffd0  bnez        $t4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3C8D6Cu;
    {
        const bool branch_taken_0x3c8d6c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D6Cu;
        // 0x3c8d70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d6c) {
            ctx->pc = 0x3C8CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8D74u;
label_3c8d74:
    // 0x3c8d74: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x3c8d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d78: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x3c8d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x3c8d7c: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3C8D7Cu;
    {
        const bool branch_taken_0x3c8d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D7Cu;
        // 0x3c8d80: 0x781018  mult        $v0, $v1, $t8 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d7c) {
            ctx->pc = 0x3C8BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8bc8;
        }
    }
    ctx->pc = 0x3C8D84u;
label_3c8d84:
    // 0x3c8d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c8d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d88:
    // 0x3c8d88: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x3C8D88u;
    SET_GPR_U32(ctx, 31, 0x3C8D90u);
    ctx->pc = 0x3C8D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D88u;
    // 0x3c8d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C8D88u, 0x3C8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D90u;
label_3c8d90:
    // 0x3c8d90: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3C8D90u;
    SET_GPR_U32(ctx, 31, 0x3C8D98u);
    ctx->pc = 0x3C8D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D90u;
    // 0x3c8d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C8D90u, 0x3C8D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D98u;
label_3c8d98:
    // 0x3c8d98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c8d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c8d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c8da0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c8da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8da4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c8da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8dac: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DACu;
        // 0x3c8db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8DB4u;
    // 0x3c8db4: 0x0  nop
    ctx->pc = 0x3c8db4u;
    // NOP
    // 0x3c8db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c8dbc: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3c8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3c8dc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c8dc4: 0x24a594c8  addiu       $a1, $a1, -0x6B38
    ctx->pc = 0x3c8dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939848));
    // 0x3c8dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c8dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c8dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8dd4: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x3C8DD4u;
    SET_GPR_U32(ctx, 31, 0x3C8DDCu);
    ctx->pc = 0x3C8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8DD4u;
    // 0x3c8dd8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x3C8DD4u, 0x3C8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8DDCu;
label_3c8ddc:
    // 0x3c8ddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c8ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8de4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c8de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8de8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DE8u;
        // 0x3c8dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8DF0u;
    // 0x3c8df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c8df4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3c8df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3c8df8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c8df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c8dfc: 0x24a59528  addiu       $a1, $a1, -0x6AD8
    ctx->pc = 0x3c8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939944));
    // 0x3c8e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c8e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c8e08: 0xc0e6390  jal         func_398E40
    ctx->pc = 0x3C8E08u;
    SET_GPR_U32(ctx, 31, 0x3C8E10u);
    ctx->pc = 0x3C8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E08u;
    // 0x3c8e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x3C8E08u, 0x3C8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E10u;
label_3c8e10:
    // 0x3c8e10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c8e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c8e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E1Cu;
        // 0x3c8e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8E24u;
    // 0x3c8e24: 0x0  nop
    ctx->pc = 0x3c8e24u;
    // NOP
    ctx->pc = 0x3c8e28u;
}
