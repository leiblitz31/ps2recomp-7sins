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

// Function: sub_002E8A40
// Address: 0x2e8a40 - 0x2e8d50
void sub_002E8A40_0x2e8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8A40_0x2e8a40");
#endif

    switch (ctx->pc) {
        case 0x2e8af8u: goto label_2e8af8;
        case 0x2e8b40u: goto label_2e8b40;
        case 0x2e8bb8u: goto label_2e8bb8;
        case 0x2e8bc4u: goto label_2e8bc4;
        case 0x2e8bd4u: goto label_2e8bd4;
        case 0x2e8bf4u: goto label_2e8bf4;
        case 0x2e8c00u: goto label_2e8c00;
        case 0x2e8c0cu: goto label_2e8c0c;
        case 0x2e8c34u: goto label_2e8c34;
        case 0x2e8c50u: goto label_2e8c50;
        case 0x2e8c90u: goto label_2e8c90;
        case 0x2e8c9cu: goto label_2e8c9c;
        case 0x2e8cacu: goto label_2e8cac;
        case 0x2e8cb4u: goto label_2e8cb4;
        case 0x2e8cecu: goto label_2e8cec;
        default: break;
    }

    ctx->pc = 0x2e8a40u;

    // 0x2e8a40: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x2e8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x2e8a44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e8a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e8a48: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e8a4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e8a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e8a50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e8a54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e8a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e8a58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e8a5c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e8a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e8a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e8a64: 0x27b500b8  addiu       $s5, $sp, 0xB8
    ctx->pc = 0x2e8a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2e8a68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e8a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e8a6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e8a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8a74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e8a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8a7c: 0x26880020  addiu       $t0, $s4, 0x20
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e8a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8a84: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2e8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2e8a88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8a8c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e8a90: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e8a94: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2e8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2e8a98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2e8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e8a9c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2e8aa0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e8aa4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2e8aa8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2e8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e8aac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2e8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2e8ab0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2e8ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8ab4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e8ab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8abc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2e8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2e8ac0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e8ac4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2e8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2e8ac8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e8acc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2e8accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2e8ad0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8ad4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2e8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2e8ad8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e8adc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2e8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2e8ae0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2e8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e8ae4: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2e8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2e8ae8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e8aec: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2e8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2e8af0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2e8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2e8af4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2e8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_2e8af8:
    // 0x2e8af8: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x2e8af8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e8afc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e8afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e8b00: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x2e8b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e8b04: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2e8b04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2e8b08: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2e8b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2e8b0c: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x2e8b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x2e8b10: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E8B10u;
    {
        const bool branch_taken_0x2e8b10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2E8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B10u;
        // 0x2e8b14: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b10) {
            ctx->pc = 0x2E8AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8af8;
        }
    }
    ctx->pc = 0x2E8B18u;
    // 0x2e8b18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e8b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8B1Cu;
    {
        const bool branch_taken_0x2e8b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b1c) {
            ctx->pc = 0x2E8B30u;
            goto label_2e8b30;
        }
    }
    ctx->pc = 0x2E8B24u;
    // 0x2e8b24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e8b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8B28u;
    {
        const bool branch_taken_0x2e8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B28u;
        // 0x2e8b2c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b28) {
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8B30u;
label_2e8b30:
    // 0x2e8b30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b34:
    // 0x2e8b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e8b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e8b38: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x2e8b38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2e8b3c: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x2e8b3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2e8b40:
    // 0x2e8b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e8b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e8b44: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2e8b44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e8b48: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x2E8B48u;
    {
        const bool branch_taken_0x2e8b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B48u;
        // 0x2e8b4c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b48) {
            ctx->pc = 0x2E8CA4u;
            goto label_2e8ca4;
        }
    }
    ctx->pc = 0x2E8B50u;
    // 0x2e8b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e8b54: 0x24638df0  addiu       $v1, $v1, -0x7210
    ctx->pc = 0x2e8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938096));
    // 0x2e8b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8b60: 0x400008  jr          $v0
    ctx->pc = 0x2E8B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8B68u: goto label_2e8b68;
            case 0x2E8BE4u: goto label_2e8be4;
            case 0x2E8C90u: goto label_2e8c90;
            case 0x2E8CA4u: goto label_2e8ca4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E8B68u;
label_2e8b68:
    // 0x2e8b68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e8b6c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x2e8b6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e8b70: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x2e8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2e8b74: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e8b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2e8b78: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e8b78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2e8b7c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2e8b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e8b80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8b84: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2e8b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e8b88: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e8b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2e8b8c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8b90: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B98u;
    {
        const bool branch_taken_0x2e8b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B98u;
        // 0x2e8b9c: 0xafa203a0  sw          $v0, 0x3A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b98) {
            ctx->pc = 0x2E8BA8u;
            goto label_2e8ba8;
        }
    }
    ctx->pc = 0x2E8BA0u;
    // 0x2e8ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8BA0u;
    {
        const bool branch_taken_0x2e8ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BA0u;
        // 0x2e8ba4: 0xafa203a0  sw          $v0, 0x3A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ba0) {
            ctx->pc = 0x2E8BB0u;
            goto label_2e8bb0;
        }
    }
    ctx->pc = 0x2E8BA8u;
label_2e8ba8:
    // 0x2e8ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bac: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x2e8bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_2e8bb0:
    // 0x2e8bb0: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8BB0u;
    SET_GPR_U32(ctx, 31, 0x2E8BB8u);
    ctx->pc = 0x2E8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BB0u;
    // 0x2e8bb4: 0x27a503a4  addiu       $a1, $sp, 0x3A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8BB0u, 0x2E8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BB8u;
label_2e8bb8:
    // 0x2e8bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bbc: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E8BBCu;
    SET_GPR_U32(ctx, 31, 0x2E8BC4u);
    ctx->pc = 0x2E8BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BBCu;
    // 0x2e8bc0: 0x27a503a8  addiu       $a1, $sp, 0x3A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E8BBCu, 0x2E8BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BC4u;
label_2e8bc4:
    // 0x2e8bc4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e8bc8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x2e8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x2e8bcc: 0xc0ba0f4  jal         func_2E83D0
    ctx->pc = 0x2E8BCCu;
    SET_GPR_U32(ctx, 31, 0x2E8BD4u);
    ctx->pc = 0x2E8BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BCCu;
    // 0x2e8bd0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D0u, 0x2E8BCCu, 0x2E8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BD4u;
label_2e8bd4:
    // 0x2e8bd4: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E8BD4u;
    {
        const bool branch_taken_0x2e8bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8bd4) {
            ctx->pc = 0x2E8CACu;
            goto label_2e8cac;
        }
    }
    ctx->pc = 0x2E8BDCu;
    // 0x2e8bdc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2E8BDCu;
    {
        const bool branch_taken_0x2e8bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BDCu;
        // 0x2e8be0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bdc) {
            ctx->pc = 0x2E8C94u;
            goto label_2e8c94;
        }
    }
    ctx->pc = 0x2E8BE4u;
label_2e8be4:
    // 0x2e8be4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e8be8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e8bec: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8BECu;
    SET_GPR_U32(ctx, 31, 0x2E8BF4u);
    ctx->pc = 0x2E8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BECu;
    // 0x2e8bf0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8BECu, 0x2E8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BF4u;
label_2e8bf4:
    // 0x2e8bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bf8: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8BF8u;
    SET_GPR_U32(ctx, 31, 0x2E8C00u);
    ctx->pc = 0x2E8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BF8u;
    // 0x2e8bfc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8BF8u, 0x2E8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C00u;
label_2e8c00:
    // 0x2e8c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c04: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E8C04u;
    SET_GPR_U32(ctx, 31, 0x2E8C0Cu);
    ctx->pc = 0x2E8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C04u;
    // 0x2e8c08: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E8C04u, 0x2E8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C0Cu;
label_2e8c0c:
    // 0x2e8c0c: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x2e8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2e8c10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e8c14: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e8c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c18: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2e8c18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e8c1c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e8c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8c20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2e8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8c24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8c28: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E8C28u;
    {
        const bool branch_taken_0x2e8c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C28u;
        // 0x2e8c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c28) {
            ctx->pc = 0x2E8CB4u;
            goto label_2e8cb4;
        }
    }
    ctx->pc = 0x2E8C30u;
    // 0x2e8c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c34:
    // 0x2e8c34: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E8C34u;
    {
        const bool branch_taken_0x2e8c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c34) {
            ctx->pc = 0x2E8C90u;
            goto label_2e8c90;
        }
    }
    ctx->pc = 0x2E8C3Cu;
    // 0x2e8c3c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2e8c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e8c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e8c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c48: 0xc0ba448  jal         func_2E9120
    ctx->pc = 0x2E8C48u;
    SET_GPR_U32(ctx, 31, 0x2E8C50u);
    ctx->pc = 0x2E8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C48u;
    // 0x2e8c4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9120u, 0x2E8C48u, 0x2E8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C50u;
label_2e8c50:
    // 0x2e8c50: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x2e8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2e8c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c58: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2e8c5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c60: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2e8c64: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e8c68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e8c6c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e8c70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e8c74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2e8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e8c78: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e8c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e8c7c: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x2e8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x2e8c80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e8c84: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2e8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e8c88: 0xc0ba7a0  jal         func_2E9E80
    ctx->pc = 0x2E8C88u;
    SET_GPR_U32(ctx, 31, 0x2E8C90u);
    ctx->pc = 0x2E8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C88u;
    // 0x2e8c8c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9E80u, 0x2E8C88u, 0x2E8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C90u;
label_2e8c90:
    // 0x2e8c90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e8c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e8c94:
    // 0x2e8c94: 0xc0ba660  jal         func_2E9980
    ctx->pc = 0x2E8C94u;
    SET_GPR_U32(ctx, 31, 0x2E8C9Cu);
    ctx->pc = 0x2E9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9980u, 0x2E8C94u, 0x2E8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C9Cu;
label_2e8c9c:
    // 0x2e8c9c: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
    ctx->pc = 0x2E8C9Cu;
    {
        const bool branch_taken_0x2e8c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C9Cu;
        // 0x2e8ca0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c9c) {
            ctx->pc = 0x2E8B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8b40;
        }
    }
    ctx->pc = 0x2E8CA4u;
label_2e8ca4:
    // 0x2e8ca4: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E8CA4u;
    SET_GPR_U32(ctx, 31, 0x2E8CACu);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E8CA4u, 0x2E8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CACu;
label_2e8cac:
    // 0x2e8cac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8CACu;
    {
        const bool branch_taken_0x2e8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CACu;
        // 0x2e8cb0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cac) {
            ctx->pc = 0x2E8D20u;
            goto label_2e8d20;
        }
    }
    ctx->pc = 0x2E8CB4u;
label_2e8cb4:
    // 0x2e8cb4: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x2e8cb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2e8cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cbc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2e8cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e8cc0: 0x27a60398  addiu       $a2, $sp, 0x398
    ctx->pc = 0x2e8cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    // 0x2e8cc4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e8cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e8cc8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2e8cc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e8ccc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e8cccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e8cd0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8cd4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8cd8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2e8cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2e8cdc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8ce0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2e8ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8ce4: 0xc0ba0f4  jal         func_2E83D0
    ctx->pc = 0x2E8CE4u;
    SET_GPR_U32(ctx, 31, 0x2E8CECu);
    ctx->pc = 0x2E8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8CE4u;
    // 0x2e8ce8: 0xafa503ac  sw          $a1, 0x3AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D0u, 0x2E8CE4u, 0x2E8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CECu;
label_2e8cec:
    // 0x2e8cec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8cf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e8cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e8cf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8CF4u;
    {
        const bool branch_taken_0x2e8cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cf4) {
            ctx->pc = 0x2E8D04u;
            goto label_2e8d04;
        }
    }
    ctx->pc = 0x2E8CFCu;
    // 0x2e8cfc: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x2E8CFCu;
    {
        const bool branch_taken_0x2e8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CFCu;
        // 0x2e8d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cfc) {
            ctx->pc = 0x2E8C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8D04u;
label_2e8d04:
    // 0x2e8d04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2e8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e8d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e8d0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e8d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8d10: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E8D10u;
    {
        const bool branch_taken_0x2e8d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D10u;
        // 0x2e8d14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d10) {
            ctx->pc = 0x2E8CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8cb4;
        }
    }
    ctx->pc = 0x2E8D18u;
    // 0x2e8d18: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x2E8D18u;
    {
        const bool branch_taken_0x2e8d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D18u;
        // 0x2e8d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d18) {
            ctx->pc = 0x2E8C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8D20u;
label_2e8d20:
    // 0x2e8d20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e8d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8d24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e8d24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8d28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e8d28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8d2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e8d2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8d30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e8d30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8d34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e8d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8d38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D48u;
        // 0x2e8d4c: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8D50u;
}
