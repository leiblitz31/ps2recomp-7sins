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

// Function: sub_002E8FB0
// Address: 0x2e8fb0 - 0x2e9120
void sub_002E8FB0_0x2e8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8FB0_0x2e8fb0");
#endif

    switch (ctx->pc) {
        case 0x2e904cu: goto label_2e904c;
        case 0x2e908cu: goto label_2e908c;
        case 0x2e90c0u: goto label_2e90c0;
        case 0x2e90d0u: goto label_2e90d0;
        case 0x2e9100u: goto label_2e9100;
        default: break;
    }

    ctx->pc = 0x2e8fb0u;

    // 0x2e8fb0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2e8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x2e8fb4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2e8fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2e8fb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8fbc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2e8fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e8fc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8fc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8fc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8fd0: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x2e8fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e8fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8fd8: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2e8fdc: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e8fe0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2e8fe4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e8fe8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2e8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2e8fec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2e8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e8ff0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e8ff4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e8ff8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2e8ffc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2e8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e9000: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2e9000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2e9004: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2e9004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9008: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e900c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9010: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2e9010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2e9014: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e9018: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2e9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2e901c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e9020: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2e9020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2e9024: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e9028: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2e9028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2e902c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e9030: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2e9030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2e9034: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2e9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e9038: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2e903c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9040: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e9040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e9044: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2e9044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2e9048: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2e9048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2e904c:
    // 0x2e904c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x2e904cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9050: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e9050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e9054: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x2e9054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e9058: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2e9058u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2e905c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2e905cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2e9060: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x2e9060u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x2e9064: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E9064u;
    {
        const bool branch_taken_0x2e9064 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2E9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9064u;
        // 0x2e9068: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9064) {
            ctx->pc = 0x2E904Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e904c;
        }
    }
    ctx->pc = 0x2E906Cu;
    // 0x2e906c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e9070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9070u;
    {
        const bool branch_taken_0x2e9070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9070) {
            ctx->pc = 0x2E9084u;
            goto label_2e9084;
        }
    }
    ctx->pc = 0x2E9078u;
    // 0x2e9078: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e9078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e907c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E907Cu;
    {
        const bool branch_taken_0x2e907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E907Cu;
        // 0x2e9080: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e907c) {
            ctx->pc = 0x2E9088u;
            goto label_2e9088;
        }
    }
    ctx->pc = 0x2E9084u;
label_2e9084:
    // 0x2e9084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9088:
    // 0x2e9088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e908c:
    // 0x2e908c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9090: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2e9090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e9094: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9094u;
    {
        const bool branch_taken_0x2e9094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9094u;
        // 0x2e9098: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9094) {
            ctx->pc = 0x2E90B8u;
            goto label_2e90b8;
        }
    }
    ctx->pc = 0x2E909Cu;
    // 0x2e909c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e90a0: 0x24638e80  addiu       $v1, $v1, -0x7180
    ctx->pc = 0x2e90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938240));
    // 0x2e90a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e90a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e90ac: 0x400008  jr          $v0
    ctx->pc = 0x2E90ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E90B8u: goto label_2e90b8;
            case 0x2E90C0u: goto label_2e90c0;
            case 0x2E90F8u: goto label_2e90f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E90ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E90B4u;
    // 0x2e90b4: 0x0  nop
    ctx->pc = 0x2e90b4u;
    // NOP
label_2e90b8:
    // 0x2e90b8: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E90B8u;
    SET_GPR_U32(ctx, 31, 0x2E90C0u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E90B8u, 0x2E90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90C0u;
label_2e90c0:
    // 0x2e90c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e90c4: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x2e90c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x2e90c8: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E90C8u;
    SET_GPR_U32(ctx, 31, 0x2E90D0u);
    ctx->pc = 0x2E90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90C8u;
    // 0x2e90cc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E90C8u, 0x2E90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90D0u;
label_2e90d0:
    // 0x2e90d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e90d4: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x2e90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x2e90d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e90dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e90e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2e90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2e90e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e90e8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2e90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2e90ec: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2e90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2e90f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E90F0u;
    {
        const bool branch_taken_0x2e90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90F0u;
        // 0x2e90f4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90f0) {
            ctx->pc = 0x2E9108u;
            goto label_2e9108;
        }
    }
    ctx->pc = 0x2E90F8u;
label_2e90f8:
    // 0x2e90f8: 0xc0ba660  jal         func_2E9980
    ctx->pc = 0x2E90F8u;
    SET_GPR_U32(ctx, 31, 0x2E9100u);
    ctx->pc = 0x2E90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90F8u;
    // 0x2e90fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9980u, 0x2E90F8u, 0x2E9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9100u;
label_2e9100:
    // 0x2e9100: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E9100u;
    {
        const bool branch_taken_0x2e9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9100u;
        // 0x2e9104: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9100) {
            ctx->pc = 0x2E908Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e908c;
        }
    }
    ctx->pc = 0x2E9108u;
label_2e9108:
    // 0x2e9108: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e910c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e910cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9118: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9118u;
        // 0x2e911c: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9120u;
}
