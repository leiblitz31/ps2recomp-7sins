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

// Function: sub_00365F40
// Address: 0x365f40 - 0x368c38
void sub_00365F40_0x365f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365F40_0x365f40");
#endif

    switch (ctx->pc) {
        case 0x365fb8u: goto label_365fb8;
        case 0x365fe4u: goto label_365fe4;
        case 0x366030u: goto label_366030;
        case 0x366058u: goto label_366058;
        case 0x36610cu: goto label_36610c;
        case 0x366218u: goto label_366218;
        case 0x3662d8u: goto label_3662d8;
        case 0x3662f8u: goto label_3662f8;
        case 0x36635cu: goto label_36635c;
        case 0x366380u: goto label_366380;
        case 0x3663e4u: goto label_3663e4;
        case 0x366408u: goto label_366408;
        case 0x366470u: goto label_366470;
        case 0x366498u: goto label_366498;
        case 0x3664fcu: goto label_3664fc;
        case 0x366520u: goto label_366520;
        case 0x366568u: goto label_366568;
        case 0x366598u: goto label_366598;
        case 0x36670cu: goto label_36670c;
        case 0x366880u: goto label_366880;
        case 0x3669f4u: goto label_3669f4;
        case 0x366b70u: goto label_366b70;
        case 0x366bacu: goto label_366bac;
        case 0x366bd0u: goto label_366bd0;
        case 0x366c90u: goto label_366c90;
        case 0x366cf4u: goto label_366cf4;
        case 0x366d18u: goto label_366d18;
        case 0x366db8u: goto label_366db8;
        case 0x366de0u: goto label_366de0;
        case 0x366e74u: goto label_366e74;
        case 0x366e98u: goto label_366e98;
        case 0x366f24u: goto label_366f24;
        case 0x366f48u: goto label_366f48;
        case 0x366fd0u: goto label_366fd0;
        case 0x367154u: goto label_367154;
        case 0x3672b8u: goto label_3672b8;
        case 0x3672e8u: goto label_3672e8;
        case 0x36745cu: goto label_36745c;
        case 0x3675d0u: goto label_3675d0;
        case 0x367744u: goto label_367744;
        case 0x3678ccu: goto label_3678cc;
        case 0x367914u: goto label_367914;
        case 0x367938u: goto label_367938;
        case 0x367a50u: goto label_367a50;
        case 0x367b84u: goto label_367b84;
        case 0x367cb0u: goto label_367cb0;
        case 0x367db0u: goto label_367db0;
        case 0x367de0u: goto label_367de0;
        case 0x367f08u: goto label_367f08;
        case 0x368030u: goto label_368030;
        case 0x368158u: goto label_368158;
        case 0x3682d4u: goto label_3682d4;
        case 0x3683e0u: goto label_3683e0;
        case 0x368478u: goto label_368478;
        case 0x368598u: goto label_368598;
        case 0x3686b0u: goto label_3686b0;
        case 0x3687b0u: goto label_3687b0;
        case 0x3687d0u: goto label_3687d0;
        case 0x3688e4u: goto label_3688e4;
        case 0x3689f8u: goto label_3689f8;
        case 0x368b0cu: goto label_368b0c;
        default: break;
    }

    ctx->pc = 0x365f40u;

    // 0x365f40: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x365f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x365f44: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x365f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x365f48: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x365f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x365f4c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x365f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f50: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x365f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x365f54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x365f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f58: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x365f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x365f5c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x365f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f60: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x365f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x365f64: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x365f64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f68: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x365f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x365f6c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x365f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x365f70: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x365f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x365f74: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x365f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x365f78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x365f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x365f7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x365f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x365f80: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x365f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x365f84: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x365f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x365f88: 0x8e560008  lw          $s6, 0x8($s2)
    ctx->pc = 0x365f88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x365f8c: 0x8e5e0038  lw          $fp, 0x38($s2)
    ctx->pc = 0x365f8cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x365f90: 0x8e570020  lw          $s7, 0x20($s2)
    ctx->pc = 0x365f90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x365f94: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x365f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x365f98: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x365f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x365f9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x365f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x365fa0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x365fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x365fa4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x365fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x365fa8: 0x16c308ad  bne         $s6, $v1, . + 4 + (0x8AD << 2)
    ctx->pc = 0x365FA8u;
    {
        const bool branch_taken_0x365fa8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x365FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FA8u;
        // 0x365fac: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fa8) {
            ctx->pc = 0x368260u;
            goto label_368260;
        }
    }
    ctx->pc = 0x365FB0u;
    // 0x365fb0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x365FB0u;
    SET_GPR_U32(ctx, 31, 0x365FB8u);
    ctx->pc = 0x365FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FB0u;
    // 0x365fb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x365FB0u, 0x365FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FB8u;
label_365fb8:
    // 0x365fb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x365fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x365fbc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x365fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x365fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x365fc4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x365fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x365fc8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x365FC8u;
    {
        const bool branch_taken_0x365fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x365FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FC8u;
        // 0x365fcc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fc8) {
            ctx->pc = 0x366000u;
            goto label_366000;
        }
    }
    ctx->pc = 0x365FD0u;
    // 0x365fd0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x365fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365fd4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x365fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x365fd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x365fd8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x365fdc: 0xf  sync
    ctx->pc = 0x365fdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365fe0: 0x40f  sync.p
    ctx->pc = 0x365fe0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_365fe4:
    // 0x365fe4: 0x0  nop
    ctx->pc = 0x365fe4u;
    // NOP
    // 0x365fe8: 0x0  nop
    ctx->pc = 0x365fe8u;
    // NOP
    // 0x365fec: 0x0  nop
    ctx->pc = 0x365fecu;
    // NOP
    // 0x365ff0: 0x0  nop
    ctx->pc = 0x365ff0u;
    // NOP
    // 0x365ff4: 0x0  nop
    ctx->pc = 0x365ff4u;
    // NOP
    // 0x365ff8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x365FF8u;
    {
        const bool branch_taken_0x365ff8 = (false);
        if (branch_taken_0x365ff8) {
            ctx->pc = 0x365FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365fe4;
        }
    }
    ctx->pc = 0x366000u;
label_366000:
    // 0x366000: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366004: 0x2aa800b0  slti        $t0, $s5, 0xB0
    ctx->pc = 0x366004u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x366008: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36600c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366010: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366014: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x366014u;
    {
        const bool branch_taken_0x366014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366014u;
        // 0x366018: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366014) {
            ctx->pc = 0x366074u;
            goto label_366074;
        }
    }
    ctx->pc = 0x36601Cu;
    // 0x36601c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x366020: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366024u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x366028: 0xf  sync
    ctx->pc = 0x366028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36602c: 0x40f  sync.p
    ctx->pc = 0x36602cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366030:
    // 0x366030: 0x0  nop
    ctx->pc = 0x366030u;
    // NOP
    // 0x366034: 0x0  nop
    ctx->pc = 0x366034u;
    // NOP
    // 0x366038: 0x0  nop
    ctx->pc = 0x366038u;
    // NOP
    // 0x36603c: 0x0  nop
    ctx->pc = 0x36603cu;
    // NOP
    // 0x366040: 0x0  nop
    ctx->pc = 0x366040u;
    // NOP
    // 0x366044: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366044u;
    {
        const bool branch_taken_0x366044 = (false);
        if (branch_taken_0x366044) {
            ctx->pc = 0x366030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366030;
        }
    }
    ctx->pc = 0x36604Cu;
    // 0x36604c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366050: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x366054: 0x0  nop
    ctx->pc = 0x366054u;
    // NOP
label_366058:
    // 0x366058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366058u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36605c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366060: 0x0  nop
    ctx->pc = 0x366060u;
    // NOP
    // 0x366064: 0x0  nop
    ctx->pc = 0x366064u;
    // NOP
    // 0x366068: 0x0  nop
    ctx->pc = 0x366068u;
    // NOP
    // 0x36606c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36606Cu;
    {
        const bool branch_taken_0x36606c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36606c) {
            ctx->pc = 0x366058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366058;
        }
    }
    ctx->pc = 0x366074u;
label_366074:
    // 0x366074: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x366074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x366078: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x366078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36607c: 0x34423f60  ori         $v0, $v0, 0x3F60
    ctx->pc = 0x36607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16224);
    // 0x366080: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x366080u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x366084: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x366084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x366088: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x366088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x36608c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x366090: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x366090u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x366094: 0x34e73f40  ori         $a3, $a3, 0x3F40
    ctx->pc = 0x366094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16192);
    // 0x366098: 0x34c63f50  ori         $a2, $a2, 0x3F50
    ctx->pc = 0x366098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16208);
    // 0x36609c: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x36609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3660a0: 0x37183fa0  ori         $t8, $t8, 0x3FA0
    ctx->pc = 0x3660a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)16288);
    // 0x3660a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3660a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x3660a8: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3660a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3660ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3660acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x3660b0: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x3660b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3660b4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x3660b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
    // 0x3660b8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3660b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3660bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3660bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3660c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3660c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3660c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3660c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3660c8: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x3660c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F40u, bits); }
    // 0x3660cc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3660ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3660d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3660d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3660d4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3660d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F44u, bits); }
    // 0x3660d8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3660d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3660dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3660dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3660e0: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3660e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F48u, bits); }
    // 0x3660e4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3660e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3660e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3660e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3660ec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3660ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F50u, bits); }
    // 0x3660f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3660f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3660f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3660f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3660f8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x3660f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F54u, bits); }
    // 0x3660fc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3660fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366100: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x366100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x366104: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x366104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F58u, bits); }
    // 0x366108: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_36610c:
    // 0x36610c: 0x42000039  di
    ctx->pc = 0x36610cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x366110: 0x40f  sync.p
    ctx->pc = 0x366110u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366114: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x366114u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x366118: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x366118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36611c: 0x0  nop
    ctx->pc = 0x36611cu;
    // NOP
    // 0x366120: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366120u;
    {
        const bool branch_taken_0x366120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366120) {
            ctx->pc = 0x36610Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36610c;
        }
    }
    ctx->pc = 0x366128u;
    // 0x366128: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x366128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x36612c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x36612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x366130: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366130u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x366134: 0x4a0002ff  vnop
    ctx->pc = 0x366134u;
    // NOP operation, no action needed for VU0
    // 0x366138: 0x4a0002ff  vnop
    ctx->pc = 0x366138u;
    // NOP operation, no action needed for VU0
    // 0x36613c: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x36613cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x366140: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x366140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x366144: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x366144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x366148: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366148u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36614c: 0x4a0002ff  vnop
    ctx->pc = 0x36614cu;
    // NOP operation, no action needed for VU0
    // 0x366150: 0x4a0002ff  vnop
    ctx->pc = 0x366150u;
    // NOP operation, no action needed for VU0
    // 0x366154: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x366154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x366158: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x366158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x36615c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x36615cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x366160: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366160u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x366164: 0x4a0002ff  vnop
    ctx->pc = 0x366164u;
    // NOP operation, no action needed for VU0
    // 0x366168: 0x4a0002ff  vnop
    ctx->pc = 0x366168u;
    // NOP operation, no action needed for VU0
    // 0x36616c: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x36616cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x366170: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x366170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x366174: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x366174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x366178: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366178u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36617c: 0x4a0002ff  vnop
    ctx->pc = 0x36617cu;
    // NOP operation, no action needed for VU0
    // 0x366180: 0x4a0002ff  vnop
    ctx->pc = 0x366180u;
    // NOP operation, no action needed for VU0
    // 0x366184: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x366184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x366188: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x366188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x36618c: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x36618cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x366190: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366190u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x366194: 0x4a0002ff  vnop
    ctx->pc = 0x366194u;
    // NOP operation, no action needed for VU0
    // 0x366198: 0x4a0002ff  vnop
    ctx->pc = 0x366198u;
    // NOP operation, no action needed for VU0
    // 0x36619c: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x36619cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3661a0: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x3661a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x3661a4: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x3661a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x3661a8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3661a8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3661ac: 0x4a0002ff  vnop
    ctx->pc = 0x3661acu;
    // NOP operation, no action needed for VU0
    // 0x3661b0: 0x4a0002ff  vnop
    ctx->pc = 0x3661b0u;
    // NOP operation, no action needed for VU0
    // 0x3661b4: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x3661b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3661b8: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x3661b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x3661bc: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x3661bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x3661c0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3661c0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3661c4: 0x4a0002ff  vnop
    ctx->pc = 0x3661c4u;
    // NOP operation, no action needed for VU0
    // 0x3661c8: 0x4a0002ff  vnop
    ctx->pc = 0x3661c8u;
    // NOP operation, no action needed for VU0
    // 0x3661cc: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x3661ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3661d0: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x3661d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x3661d4: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x3661d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x3661d8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3661d8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3661dc: 0x4a0002ff  vnop
    ctx->pc = 0x3661dcu;
    // NOP operation, no action needed for VU0
    // 0x3661e0: 0x4a0002ff  vnop
    ctx->pc = 0x3661e0u;
    // NOP operation, no action needed for VU0
    // 0x3661e4: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x3661e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3661e8: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x3661e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x3661ec: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x3661ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x3661f0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3661f0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3661f4: 0x4a0002ff  vnop
    ctx->pc = 0x3661f4u;
    // NOP operation, no action needed for VU0
    // 0x3661f8: 0x4a0002ff  vnop
    ctx->pc = 0x3661f8u;
    // NOP operation, no action needed for VU0
    // 0x3661fc: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x3661fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x366200: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x366200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x366204: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x366204u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x366208: 0x4a0002ff  vnop
    ctx->pc = 0x366208u;
    // NOP operation, no action needed for VU0
    // 0x36620c: 0x4a0002ff  vnop
    ctx->pc = 0x36620cu;
    // NOP operation, no action needed for VU0
    // 0x366210: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x366210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x366214: 0x42000038  ei
    ctx->pc = 0x366214u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_366218:
    // 0x366218: 0x42000039  di
    ctx->pc = 0x366218u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36621c: 0x40f  sync.p
    ctx->pc = 0x36621cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366220: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x366220u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x366224: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x366224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x366228: 0x0  nop
    ctx->pc = 0x366228u;
    // NOP
    // 0x36622c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36622Cu;
    {
        const bool branch_taken_0x36622c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36622c) {
            ctx->pc = 0x366218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366218;
        }
    }
    ctx->pc = 0x366234u;
    // 0x366234: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x366234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x366238: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x366238u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36623c: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x36623cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x366240: 0xd84f0000  lqc2        $vf15, 0x0($v0)
    ctx->pc = 0x366240u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366244: 0x42000038  ei
    ctx->pc = 0x366244u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x366248: 0x1500027f  bnez        $t0, . + 4 + (0x27F << 2)
    ctx->pc = 0x366248u;
    {
        const bool branch_taken_0x366248 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x36624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366248u;
        // 0x36624c: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366248) {
            ctx->pc = 0x366C48u;
            goto label_366c48;
        }
    }
    ctx->pc = 0x366250u;
    // 0x366250: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x366254: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x366254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x366258: 0xafb90054  sw          $t9, 0x54($sp)
    ctx->pc = 0x366258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 25));
    // 0x36625c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366260: 0xafb90058  sw          $t9, 0x58($sp)
    ctx->pc = 0x366260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 25));
    // 0x366264: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x366264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x366268: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x366268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x36626c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x36626cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x366270: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x366270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
    // 0x366274: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x366274u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x366278: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x366278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x36627c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x36627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x366280: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x366280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x366284: 0x35efe020  ori         $t7, $t7, 0xE020
    ctx->pc = 0x366284u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)57376);
    // 0x366288: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x366288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36628c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x36628cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366290: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x366290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x366294: 0x35add400  ori         $t5, $t5, 0xD400
    ctx->pc = 0x366294u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)54272);
    // 0x366298: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x366298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x36629c: 0x3463d410  ori         $v1, $v1, 0xD410
    ctx->pc = 0x36629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54288);
    // 0x3662a0: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x3662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
    // 0x3662a4: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x3662a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x3662a8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x3662a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x3662ac: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x3662acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3662b0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x3662b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x3662b4: 0x3739e010  ori         $t9, $t9, 0xE010
    ctx->pc = 0x3662b4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)57360);
    // 0x3662b8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x3662b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3662bc: 0x34e7d420  ori         $a3, $a3, 0xD420
    ctx->pc = 0x3662bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54304);
    // 0x3662c0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3662c4: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x3662c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x3662c8: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x3662c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x3662cc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x3662ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x3662d0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3662d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3662d4: 0x0  nop
    ctx->pc = 0x3662d4u;
    // NOP
label_3662d8:
    // 0x3662d8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3662d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3662dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3662dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3662e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3662e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3662e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3662E4u;
    {
        const bool branch_taken_0x3662e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3662e4) {
            ctx->pc = 0x366318u;
            goto label_366318;
        }
    }
    ctx->pc = 0x3662ECu;
    // 0x3662ec: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x3662ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x3662f0: 0xf  sync
    ctx->pc = 0x3662f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3662f4: 0x40f  sync.p
    ctx->pc = 0x3662f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3662f8:
    // 0x3662f8: 0x0  nop
    ctx->pc = 0x3662f8u;
    // NOP
    // 0x3662fc: 0x0  nop
    ctx->pc = 0x3662fcu;
    // NOP
    // 0x366300: 0x0  nop
    ctx->pc = 0x366300u;
    // NOP
    // 0x366304: 0x0  nop
    ctx->pc = 0x366304u;
    // NOP
    // 0x366308: 0x0  nop
    ctx->pc = 0x366308u;
    // NOP
    // 0x36630c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36630Cu;
    {
        const bool branch_taken_0x36630c = (false);
        if (branch_taken_0x36630c) {
            ctx->pc = 0x3662F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3662f8;
        }
    }
    ctx->pc = 0x366314u;
    // 0x366314: 0x0  nop
    ctx->pc = 0x366314u;
    // NOP
label_366318:
    // 0x366318: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x366318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36631c: 0x26232c00  addiu       $v1, $s1, 0x2C00
    ctx->pc = 0x36631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11264));
    // 0x366320: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x366320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x366324: 0x26b5ff50  addiu       $s5, $s5, -0xB0
    ctx->pc = 0x366324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967120));
    // 0x366328: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x366328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36632c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366330: 0xafb50068  sw          $s5, 0x68($sp)
    ctx->pc = 0x366330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 21));
    // 0x366334: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x366334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x366338: 0x26150b00  addiu       $s5, $s0, 0xB00
    ctx->pc = 0x366338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
    // 0x36633c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x36633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x366340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366344: 0x24630580  addiu       $v1, $v1, 0x580
    ctx->pc = 0x366344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x366348: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x366348u;
    {
        const bool branch_taken_0x366348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366348u;
        // 0x36634c: 0xafa3006c  sw          $v1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366348) {
            ctx->pc = 0x36639Cu;
            goto label_36639c;
        }
    }
    ctx->pc = 0x366350u;
    // 0x366350: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x366350u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x366354: 0xf  sync
    ctx->pc = 0x366354u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366358: 0x40f  sync.p
    ctx->pc = 0x366358u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36635c:
    // 0x36635c: 0x0  nop
    ctx->pc = 0x36635cu;
    // NOP
    // 0x366360: 0x0  nop
    ctx->pc = 0x366360u;
    // NOP
    // 0x366364: 0x0  nop
    ctx->pc = 0x366364u;
    // NOP
    // 0x366368: 0x0  nop
    ctx->pc = 0x366368u;
    // NOP
    // 0x36636c: 0x0  nop
    ctx->pc = 0x36636cu;
    // NOP
    // 0x366370: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366370u;
    {
        const bool branch_taken_0x366370 = (false);
        if (branch_taken_0x366370) {
            ctx->pc = 0x36635Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36635c;
        }
    }
    ctx->pc = 0x366378u;
    // 0x366378: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36637c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366380:
    // 0x366380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366380u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366384: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366388: 0x0  nop
    ctx->pc = 0x366388u;
    // NOP
    // 0x36638c: 0x0  nop
    ctx->pc = 0x36638cu;
    // NOP
    // 0x366390: 0x0  nop
    ctx->pc = 0x366390u;
    // NOP
    // 0x366394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366394u;
    {
        const bool branch_taken_0x366394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366394) {
            ctx->pc = 0x366380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366380;
        }
    }
    ctx->pc = 0x36639Cu;
label_36639c:
    // 0x36639c: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x36639cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x3663a0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3663a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3663a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3663a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3663a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3663ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3663acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3663b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3663b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3663b4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x3663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3663b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3663b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3663bc: 0xadb40000  sw          $s4, 0x0($t5)
    ctx->pc = 0x3663bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 20));
    // 0x3663c0: 0xf  sync
    ctx->pc = 0x3663c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3663c4: 0x40f  sync.p
    ctx->pc = 0x3663c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3663c8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x3663c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3663cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3663ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3663d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3663D0u;
    {
        const bool branch_taken_0x3663d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3663d0) {
            ctx->pc = 0x366424u;
            goto label_366424;
        }
    }
    ctx->pc = 0x3663D8u;
    // 0x3663d8: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x3663d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x3663dc: 0xf  sync
    ctx->pc = 0x3663dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3663e0: 0x40f  sync.p
    ctx->pc = 0x3663e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3663e4:
    // 0x3663e4: 0x0  nop
    ctx->pc = 0x3663e4u;
    // NOP
    // 0x3663e8: 0x0  nop
    ctx->pc = 0x3663e8u;
    // NOP
    // 0x3663ec: 0x0  nop
    ctx->pc = 0x3663ecu;
    // NOP
    // 0x3663f0: 0x0  nop
    ctx->pc = 0x3663f0u;
    // NOP
    // 0x3663f4: 0x0  nop
    ctx->pc = 0x3663f4u;
    // NOP
    // 0x3663f8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3663F8u;
    {
        const bool branch_taken_0x3663f8 = (false);
        if (branch_taken_0x3663f8) {
            ctx->pc = 0x3663E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3663e4;
        }
    }
    ctx->pc = 0x366400u;
    // 0x366400: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366404: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366408:
    // 0x366408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366408u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36640c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366410: 0x0  nop
    ctx->pc = 0x366410u;
    // NOP
    // 0x366414: 0x0  nop
    ctx->pc = 0x366414u;
    // NOP
    // 0x366418: 0x0  nop
    ctx->pc = 0x366418u;
    // NOP
    // 0x36641c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36641Cu;
    {
        const bool branch_taken_0x36641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36641c) {
            ctx->pc = 0x366408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366408;
        }
    }
    ctx->pc = 0x366424u;
label_366424:
    // 0x366424: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x366424u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x366428: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x366428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x36642c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x36642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x366430: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x366434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x366434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x366438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36643c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36643cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x366440: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x366440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x366444: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x366444u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x366448: 0xadb40000  sw          $s4, 0x0($t5)
    ctx->pc = 0x366448u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 20));
    // 0x36644c: 0xf  sync
    ctx->pc = 0x36644cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366450: 0x40f  sync.p
    ctx->pc = 0x366450u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366454: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x366458: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x36645c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36645Cu;
    {
        const bool branch_taken_0x36645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36645c) {
            ctx->pc = 0x3664B4u;
            goto label_3664b4;
        }
    }
    ctx->pc = 0x366464u;
    // 0x366464: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x366464u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x366468: 0xf  sync
    ctx->pc = 0x366468u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36646c: 0x40f  sync.p
    ctx->pc = 0x36646cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366470:
    // 0x366470: 0x0  nop
    ctx->pc = 0x366470u;
    // NOP
    // 0x366474: 0x0  nop
    ctx->pc = 0x366474u;
    // NOP
    // 0x366478: 0x0  nop
    ctx->pc = 0x366478u;
    // NOP
    // 0x36647c: 0x0  nop
    ctx->pc = 0x36647cu;
    // NOP
    // 0x366480: 0x0  nop
    ctx->pc = 0x366480u;
    // NOP
    // 0x366484: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366484u;
    {
        const bool branch_taken_0x366484 = (false);
        if (branch_taken_0x366484) {
            ctx->pc = 0x366470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366470;
        }
    }
    ctx->pc = 0x36648Cu;
    // 0x36648c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366490: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x366494: 0x0  nop
    ctx->pc = 0x366494u;
    // NOP
label_366498:
    // 0x366498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366498u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36649c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3664a0: 0x0  nop
    ctx->pc = 0x3664a0u;
    // NOP
    // 0x3664a4: 0x0  nop
    ctx->pc = 0x3664a4u;
    // NOP
    // 0x3664a8: 0x0  nop
    ctx->pc = 0x3664a8u;
    // NOP
    // 0x3664ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3664ACu;
    {
        const bool branch_taken_0x3664ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3664ac) {
            ctx->pc = 0x366498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366498;
        }
    }
    ctx->pc = 0x3664B4u;
label_3664b4:
    // 0x3664b4: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x3664b4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x3664b8: 0x24020840  addiu       $v0, $zero, 0x840
    ctx->pc = 0x3664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x3664bc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x3664bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3664c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3664c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3664c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3664c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3664c8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x3664c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x3664cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3664ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3664d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3664d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3664d4: 0xadb40000  sw          $s4, 0x0($t5)
    ctx->pc = 0x3664d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 20));
    // 0x3664d8: 0xf  sync
    ctx->pc = 0x3664d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3664dc: 0x40f  sync.p
    ctx->pc = 0x3664dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3664e0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x3664e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3664e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3664e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3664e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3664E8u;
    {
        const bool branch_taken_0x3664e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3664ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664E8u;
        // 0x3664ec: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664e8) {
            ctx->pc = 0x36653Cu;
            goto label_36653c;
        }
    }
    ctx->pc = 0x3664F0u;
    // 0x3664f0: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x3664f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x3664f4: 0xf  sync
    ctx->pc = 0x3664f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3664f8: 0x40f  sync.p
    ctx->pc = 0x3664f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3664fc:
    // 0x3664fc: 0x0  nop
    ctx->pc = 0x3664fcu;
    // NOP
    // 0x366500: 0x0  nop
    ctx->pc = 0x366500u;
    // NOP
    // 0x366504: 0x0  nop
    ctx->pc = 0x366504u;
    // NOP
    // 0x366508: 0x0  nop
    ctx->pc = 0x366508u;
    // NOP
    // 0x36650c: 0x0  nop
    ctx->pc = 0x36650cu;
    // NOP
    // 0x366510: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366510u;
    {
        const bool branch_taken_0x366510 = (false);
        if (branch_taken_0x366510) {
            ctx->pc = 0x3664FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3664fc;
        }
    }
    ctx->pc = 0x366518u;
    // 0x366518: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36651c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366520:
    // 0x366520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366520u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366524: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366528: 0x0  nop
    ctx->pc = 0x366528u;
    // NOP
    // 0x36652c: 0x0  nop
    ctx->pc = 0x36652cu;
    // NOP
    // 0x366530: 0x0  nop
    ctx->pc = 0x366530u;
    // NOP
    // 0x366534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366534u;
    {
        const bool branch_taken_0x366534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366534u;
        // 0x366538: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366534) {
            ctx->pc = 0x366520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366520;
        }
    }
    ctx->pc = 0x36653Cu;
label_36653c:
    // 0x36653c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x36653cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x366540: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x366540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x366544: 0x352902c0  ori         $t1, $t1, 0x2C0
    ctx->pc = 0x366544u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)704);
    // 0x366548: 0x35080840  ori         $t0, $t0, 0x840
    ctx->pc = 0x366548u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2112);
    // 0x36654c: 0x34c61340  ori         $a2, $a2, 0x1340
    ctx->pc = 0x36654cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4928);
    // 0x366550: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x366550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366554: 0x3c0e0001  lui         $t6, 0x1
    ctx->pc = 0x366554u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1 << 16));
    // 0x366558: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x36655c: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x36655cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x366560: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x366560u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x366564: 0x0  nop
    ctx->pc = 0x366564u;
    // NOP
label_366568:
    // 0x366568: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x366568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36656c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366570: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x366570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x366574: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x366574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366578: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36657c: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x36657cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x366580: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x366580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366584: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366588: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x366588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x36658c: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x36658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366590: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366594: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x366594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_366598:
    // 0x366598: 0x42000039  di
    ctx->pc = 0x366598u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36659c: 0x40f  sync.p
    ctx->pc = 0x36659cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3665a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3665a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3665a4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x3665a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3665a8: 0x0  nop
    ctx->pc = 0x3665a8u;
    // NOP
    // 0x3665ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3665ACu;
    {
        const bool branch_taken_0x3665ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3665ac) {
            ctx->pc = 0x366598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366598;
        }
    }
    ctx->pc = 0x3665B4u;
    // 0x3665b4: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x3665b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3665b8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3665b8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3665bc: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3665bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3665c0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3665c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3665c4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3665c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3665c8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3665c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3665cc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3665ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3665d0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3665d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3665d4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3665d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3665d8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3665d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3665dc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3665dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3665e0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3665e0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3665e4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3665e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3665e8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3665e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3665ec: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3665ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3665f0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3665f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3665f4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3665f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3665f8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3665f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3665fc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3665fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366600: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x366600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x366604: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x366604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366608: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x366608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36660c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36660cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366610: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x366610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366614: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x366614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366618: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x366618u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36661c: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x36661cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x366620: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x366620u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x366624: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x366624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366628: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x366628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36662c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x36662cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366630: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x366630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x366634: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x366634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366638: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x366638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x36663c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x36663cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366640: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x366640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x366644: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x366644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366648: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x366648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36664c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36664cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366650: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x366650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366654: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x366654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366658: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x366658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36665c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36665cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366660: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x366660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x366664: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x366664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366668: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x366668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36666c: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x36666cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366670: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x366670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x366674: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x366674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366678: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x366678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36667c: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x36667cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366680: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x366680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x366684: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x366684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366688: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x366688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36668c: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x36668cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366690: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x366690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x366694: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x366694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x366698: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x366698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36669c: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x36669cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3666a0: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x3666a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3666a4: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x3666a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3666a8: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x3666a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3666ac: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x3666acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3666b0: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x3666b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3666b4: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x3666b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3666b8: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x3666b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3666bc: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x3666bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3666c0: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x3666c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3666c4: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x3666c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3666c8: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x3666c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3666cc: 0x42000038  ei
    ctx->pc = 0x3666ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3666d0: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x3666d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x3666d4: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x3666d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3666d8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x3666d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3666dc: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3666dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3666e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3666e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3666e4: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x3666e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x3666e8: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x3666e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3666ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3666ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3666f0: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x3666f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x3666f4: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3666f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3666f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3666f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3666fc: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x3666fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x366700: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x366700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366704: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366708: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x366708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_36670c:
    // 0x36670c: 0x42000039  di
    ctx->pc = 0x36670cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x366710: 0x40f  sync.p
    ctx->pc = 0x366710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366714: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x366714u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x366718: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x366718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x36671c: 0x0  nop
    ctx->pc = 0x36671cu;
    // NOP
    // 0x366720: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366720u;
    {
        const bool branch_taken_0x366720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366720) {
            ctx->pc = 0x36670Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36670c;
        }
    }
    ctx->pc = 0x366728u;
    // 0x366728: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x366728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x36672c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36672cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366730: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x366730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366734: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x366734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366738: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x366738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36673c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36673cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x366740: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x366740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366744: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x366744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x366748: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x366748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36674c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36674cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x366750: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x366750u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366754: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x366754u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366758: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x366758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36675c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x36675cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x366760: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x366760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x366764: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x366764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x366768: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x366768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36676c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x36676cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x366770: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x366770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366774: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x366774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x366778: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x366778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36677c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x36677cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366780: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x366780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366784: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x366784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366788: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x366788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36678c: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x36678cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366790: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x366790u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x366794: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x366794u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x366798: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x366798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36679c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x36679cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3667a0: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3667a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3667a4: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3667a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3667a8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3667a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667ac: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3667acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3667b0: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x3667b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667b4: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x3667b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3667b8: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3667b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667bc: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x3667bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3667c0: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3667c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667c4: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x3667c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3667c8: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3667c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667cc: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x3667ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3667d0: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3667d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667d4: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x3667d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3667d8: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3667d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667dc: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3667dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3667e0: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3667e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667e4: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x3667e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3667e8: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3667e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667ec: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x3667ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3667f0: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3667f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667f4: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x3667f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3667f8: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3667f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3667fc: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x3667fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366800: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x366800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366804: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x366804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x366808: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x366808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36680c: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x36680cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x366810: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x366810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x366814: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x366814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x366818: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x366818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36681c: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x36681cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366820: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x366820u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x366824: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x366824u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x366828: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x366828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x36682c: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x36682cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x366830: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x366830u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x366834: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x366834u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x366838: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x366838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x36683c: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x36683cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x366840: 0x42000038  ei
    ctx->pc = 0x366840u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x366844: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x366844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x366848: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x366848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x36684c: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x36684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x366850: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x366850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366854: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366858: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x366858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x36685c: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x36685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366860: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366864: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x366864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x366868: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x366868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36686c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366870: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x366870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x366874: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x366874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366878: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36687c: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x36687cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_366880:
    // 0x366880: 0x42000039  di
    ctx->pc = 0x366880u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x366884: 0x40f  sync.p
    ctx->pc = 0x366884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366888: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x366888u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36688c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x36688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x366890: 0x0  nop
    ctx->pc = 0x366890u;
    // NOP
    // 0x366894: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366894u;
    {
        const bool branch_taken_0x366894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366894) {
            ctx->pc = 0x366880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366880;
        }
    }
    ctx->pc = 0x36689Cu;
    // 0x36689c: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x36689cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3668a0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3668a0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3668a4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3668a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3668a8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3668a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3668ac: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3668acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3668b0: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3668b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3668b4: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3668b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3668b8: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3668b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3668bc: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3668bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3668c0: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3668c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3668c4: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3668c4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3668c8: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3668c8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3668cc: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3668ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3668d0: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3668d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3668d4: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3668d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3668d8: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3668d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3668dc: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3668dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3668e0: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3668e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3668e4: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3668e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3668e8: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3668e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3668ec: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3668ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3668f0: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3668f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3668f4: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3668f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3668f8: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3668f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3668fc: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3668fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366900: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x366900u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366904: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x366904u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x366908: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x366908u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36690c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366910: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x366910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x366914: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x366914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366918: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x366918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36691c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36691cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366920: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x366920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x366924: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x366924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366928: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x366928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x36692c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x36692cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366930: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x366930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x366934: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x366934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366938: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x366938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36693c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36693cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366940: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x366940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x366944: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x366944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366948: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x366948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36694c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36694cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366950: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x366950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x366954: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x366954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366958: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x366958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36695c: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x36695cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366960: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x366960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x366964: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x366964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366968: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x366968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36696c: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x36696cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366970: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x366970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366974: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x366974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366978: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x366978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36697c: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x36697cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x366980: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x366980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x366984: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x366984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x366988: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x366988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36698c: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x36698cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x366990: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x366990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366994: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x366994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x366998: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x366998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x36699c: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x36699cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3669a0: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x3669a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3669a4: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x3669a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3669a8: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x3669a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3669ac: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x3669acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3669b0: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x3669b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3669b4: 0x42000038  ei
    ctx->pc = 0x3669b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3669b8: 0x25050060  addiu       $a1, $t0, 0x60
    ctx->pc = 0x3669b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x3669bc: 0x25240030  addiu       $a0, $t1, 0x30
    ctx->pc = 0x3669bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x3669c0: 0x24c30180  addiu       $v1, $a2, 0x180
    ctx->pc = 0x3669c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x3669c4: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x3669c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3669c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3669c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3669cc: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x3669ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x3669d0: 0xc561001c  lwc1        $f1, 0x1C($t3)
    ctx->pc = 0x3669d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3669d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3669d8: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x3669d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x3669dc: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x3669dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3669e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3669e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3669e4: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x3669e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x3669e8: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x3669e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3669ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3669f0: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x3669f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_3669f4:
    // 0x3669f4: 0x42000039  di
    ctx->pc = 0x3669f4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3669f8: 0x40f  sync.p
    ctx->pc = 0x3669f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3669fc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3669fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x366a00: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x366a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x366a04: 0x0  nop
    ctx->pc = 0x366a04u;
    // NOP
    // 0x366a08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366A08u;
    {
        const bool branch_taken_0x366a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366a08) {
            ctx->pc = 0x3669F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3669f4;
        }
    }
    ctx->pc = 0x366A10u;
    // 0x366a10: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x366a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x366a14: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x366a14u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366a18: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x366a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a1c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x366a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366a20: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x366a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x366a24: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x366a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x366a28: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x366a28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366a2c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x366a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x366a30: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x366a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x366a34: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x366a34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x366a38: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x366a38u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366a3c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x366a3cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366a40: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x366a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366a44: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x366a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x366a48: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x366a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x366a4c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x366a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x366a50: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x366a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x366a54: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x366a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x366a58: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x366a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a5c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x366a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x366a60: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x366a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366a64: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x366a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a68: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x366a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a6c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x366a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a70: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x366a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366a74: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x366a74u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a78: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x366a78u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x366a7c: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x366a7cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x366a80: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x366a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a84: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x366a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x366a88: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x366a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x366a8c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x366a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x366a90: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x366a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a94: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x366a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x366a98: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x366a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366a9c: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x366a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x366aa0: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x366aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366aa4: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x366aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x366aa8: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x366aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366aac: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x366aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366ab0: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x366ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366ab4: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x366ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x366ab8: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x366ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366abc: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x366abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x366ac0: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x366ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366ac4: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x366ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x366ac8: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x366ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366acc: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x366accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x366ad0: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x366ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366ad4: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x366ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x366ad8: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x366ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366adc: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x366adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x366ae0: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x366ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366ae4: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x366ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366ae8: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x366ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x366aec: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x366aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x366af0: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x366af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x366af4: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x366af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x366af8: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x366af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x366afc: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x366afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x366b00: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x366b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x366b04: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x366b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x366b08: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x366b08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x366b0c: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x366b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x366b10: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x366b10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x366b14: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x366b14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x366b18: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x366b18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x366b1c: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x366b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x366b20: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x366b20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x366b24: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x366b24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x366b28: 0x42000038  ei
    ctx->pc = 0x366b28u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x366b2c: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x366b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x366b30: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x366b34: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x366b34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x366b38: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x366b38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x366b3c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x366b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x366b40: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x366b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x366b44: 0x2a4200b0  slti        $v0, $s2, 0xB0
    ctx->pc = 0x366b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x366b48: 0x1440fe87  bnez        $v0, . + 4 + (-0x179 << 2)
    ctx->pc = 0x366B48u;
    {
        const bool branch_taken_0x366b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B48u;
        // 0x366b4c: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b48) {
            ctx->pc = 0x366568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366568;
        }
    }
    ctx->pc = 0x366B50u;
    // 0x366b50: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x366b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366b54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366b58: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366b5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x366B5Cu;
    {
        const bool branch_taken_0x366b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b5c) {
            ctx->pc = 0x366B90u;
            goto label_366b90;
        }
    }
    ctx->pc = 0x366B64u;
    // 0x366b64: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x366b64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x366b68: 0xf  sync
    ctx->pc = 0x366b68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366b6c: 0x40f  sync.p
    ctx->pc = 0x366b6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366b70:
    // 0x366b70: 0x0  nop
    ctx->pc = 0x366b70u;
    // NOP
    // 0x366b74: 0x0  nop
    ctx->pc = 0x366b74u;
    // NOP
    // 0x366b78: 0x0  nop
    ctx->pc = 0x366b78u;
    // NOP
    // 0x366b7c: 0x0  nop
    ctx->pc = 0x366b7cu;
    // NOP
    // 0x366b80: 0x0  nop
    ctx->pc = 0x366b80u;
    // NOP
    // 0x366b84: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366B84u;
    {
        const bool branch_taken_0x366b84 = (false);
        if (branch_taken_0x366b84) {
            ctx->pc = 0x366B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366b70;
        }
    }
    ctx->pc = 0x366B8Cu;
    // 0x366b8c: 0x0  nop
    ctx->pc = 0x366b8cu;
    // NOP
label_366b90:
    // 0x366b90: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x366b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x366b94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366b98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x366B98u;
    {
        const bool branch_taken_0x366b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b98) {
            ctx->pc = 0x366BECu;
            goto label_366bec;
        }
    }
    ctx->pc = 0x366BA0u;
    // 0x366ba0: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x366ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x366ba4: 0xf  sync
    ctx->pc = 0x366ba4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366ba8: 0x40f  sync.p
    ctx->pc = 0x366ba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366bac:
    // 0x366bac: 0x0  nop
    ctx->pc = 0x366bacu;
    // NOP
    // 0x366bb0: 0x0  nop
    ctx->pc = 0x366bb0u;
    // NOP
    // 0x366bb4: 0x0  nop
    ctx->pc = 0x366bb4u;
    // NOP
    // 0x366bb8: 0x0  nop
    ctx->pc = 0x366bb8u;
    // NOP
    // 0x366bbc: 0x0  nop
    ctx->pc = 0x366bbcu;
    // NOP
    // 0x366bc0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366BC0u;
    {
        const bool branch_taken_0x366bc0 = (false);
        if (branch_taken_0x366bc0) {
            ctx->pc = 0x366BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366bac;
        }
    }
    ctx->pc = 0x366BC8u;
    // 0x366bc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366bcc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366bd0:
    // 0x366bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366bd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366bd8: 0x0  nop
    ctx->pc = 0x366bd8u;
    // NOP
    // 0x366bdc: 0x0  nop
    ctx->pc = 0x366bdcu;
    // NOP
    // 0x366be0: 0x0  nop
    ctx->pc = 0x366be0u;
    // NOP
    // 0x366be4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366BE4u;
    {
        const bool branch_taken_0x366be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366be4) {
            ctx->pc = 0x366BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366bd0;
        }
    }
    ctx->pc = 0x366BECu;
label_366bec:
    // 0x366bec: 0xaf340000  sw          $s4, 0x0($t9)
    ctx->pc = 0x366becu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 20));
    // 0x366bf0: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x366bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x366bf4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x366bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x366bf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x366bfc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x366bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366c00: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x366c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x366c04: 0x240202c0  addiu       $v0, $zero, 0x2C0
    ctx->pc = 0x366c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x366c08: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x366c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x366c0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x366c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x366c10: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x366c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366c14: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x366c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x366c18: 0xf  sync
    ctx->pc = 0x366c18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366c1c: 0x40f  sync.p
    ctx->pc = 0x366c1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366c20: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x366c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c24: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x366c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x366c28: 0x8fb50068  lw          $s5, 0x68($sp)
    ctx->pc = 0x366c28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x366c2c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x366c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x366c30: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x366c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x366c34: 0x8fb10074  lw          $s1, 0x74($sp)
    ctx->pc = 0x366c34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x366c38: 0x2aa200b0  slti        $v0, $s5, 0xB0
    ctx->pc = 0x366c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x366c3c: 0x1040fda6  beqz        $v0, . + 4 + (-0x25A << 2)
    ctx->pc = 0x366C3Cu;
    {
        const bool branch_taken_0x366c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C3Cu;
        // 0x366c40: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c3c) {
            ctx->pc = 0x3662D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3662d8;
        }
    }
    ctx->pc = 0x366C44u;
    // 0x366c44: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x366c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_366c48:
    // 0x366c48: 0x14400365  bnez        $v0, . + 4 + (0x365 << 2)
    ctx->pc = 0x366C48u;
    {
        const bool branch_taken_0x366c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C48u;
        // 0x366c4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c48) {
            ctx->pc = 0x3679E0u;
            goto label_3679e0;
        }
    }
    ctx->pc = 0x366C50u;
    // 0x366c50: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x366c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x366c54: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x366c58: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x366c58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x366c5c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x366c5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x366c60: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x366c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x366c64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366c68: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x366c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x366c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x366c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x366c70: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x366c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x366c74: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x366C74u;
    {
        const bool branch_taken_0x366c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C74u;
        // 0x366c78: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c74) {
            ctx->pc = 0x366CB0u;
            goto label_366cb0;
        }
    }
    ctx->pc = 0x366C7Cu;
    // 0x366c7c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x366c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366c80: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366c84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366c84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x366c88: 0xf  sync
    ctx->pc = 0x366c88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366c8c: 0x40f  sync.p
    ctx->pc = 0x366c8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366c90:
    // 0x366c90: 0x0  nop
    ctx->pc = 0x366c90u;
    // NOP
    // 0x366c94: 0x0  nop
    ctx->pc = 0x366c94u;
    // NOP
    // 0x366c98: 0x0  nop
    ctx->pc = 0x366c98u;
    // NOP
    // 0x366c9c: 0x0  nop
    ctx->pc = 0x366c9cu;
    // NOP
    // 0x366ca0: 0x0  nop
    ctx->pc = 0x366ca0u;
    // NOP
    // 0x366ca4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366CA4u;
    {
        const bool branch_taken_0x366ca4 = (false);
        if (branch_taken_0x366ca4) {
            ctx->pc = 0x366C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366c90;
        }
    }
    ctx->pc = 0x366CACu;
    // 0x366cac: 0x0  nop
    ctx->pc = 0x366cacu;
    // NOP
label_366cb0:
    // 0x366cb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366cb4: 0x2ad3823  subu        $a3, $s5, $t5
    ctx->pc = 0x366cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x366cb8: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x366cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x366cbc: 0x4ca00  sll         $t9, $a0, 8
    ctx->pc = 0x366cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x366cc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x366cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366cc4: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x366cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x366cc8: 0xda7c3  sra         $s4, $t5, 31
    ctx->pc = 0x366cc8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 13), 31));
    // 0x366ccc: 0x49900  sll         $s3, $a0, 4
    ctx->pc = 0x366cccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x366cd0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x366cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x366cd4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x366CD4u;
    {
        const bool branch_taken_0x366cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366CD4u;
        // 0x366cd8: 0x4a980  sll         $s5, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366cd4) {
            ctx->pc = 0x366D34u;
            goto label_366d34;
        }
    }
    ctx->pc = 0x366CDCu;
    // 0x366cdc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366ce0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x366ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x366ce4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366ce8u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x366cec: 0xf  sync
    ctx->pc = 0x366cecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366cf0: 0x40f  sync.p
    ctx->pc = 0x366cf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366cf4:
    // 0x366cf4: 0x0  nop
    ctx->pc = 0x366cf4u;
    // NOP
    // 0x366cf8: 0x0  nop
    ctx->pc = 0x366cf8u;
    // NOP
    // 0x366cfc: 0x0  nop
    ctx->pc = 0x366cfcu;
    // NOP
    // 0x366d00: 0x0  nop
    ctx->pc = 0x366d00u;
    // NOP
    // 0x366d04: 0x0  nop
    ctx->pc = 0x366d04u;
    // NOP
    // 0x366d08: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366D08u;
    {
        const bool branch_taken_0x366d08 = (false);
        if (branch_taken_0x366d08) {
            ctx->pc = 0x366CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366cf4;
        }
    }
    ctx->pc = 0x366D10u;
    // 0x366d10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366d14: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366d18:
    // 0x366d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366d18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366d1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366d20: 0x0  nop
    ctx->pc = 0x366d20u;
    // NOP
    // 0x366d24: 0x0  nop
    ctx->pc = 0x366d24u;
    // NOP
    // 0x366d28: 0x0  nop
    ctx->pc = 0x366d28u;
    // NOP
    // 0x366d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366D2Cu;
    {
        const bool branch_taken_0x366d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366d2c) {
            ctx->pc = 0x366D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366d18;
        }
    }
    ctx->pc = 0x366D34u;
label_366d34:
    // 0x366d34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366d38: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x366d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x366d3c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x366d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x366d40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366d44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x366d44u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x366d48: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x366d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x366d4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x366d4cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x366d50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366d54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x366d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366d58: 0x8d202a  slt         $a0, $a0, $t5
    ctx->pc = 0x366d58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x366d5c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x366d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366d64: 0x1a4280b  movn        $a1, $t5, $a0
    ctx->pc = 0x366d64u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x366d68: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x366d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x366d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x366d70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x366d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x366d74: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x366d74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x366d78: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x366d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x366d7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366d80: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366d84: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x366d88: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x366d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366d8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x366d8cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x366d90: 0xf  sync
    ctx->pc = 0x366d90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366d94: 0x40f  sync.p
    ctx->pc = 0x366d94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366d9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366da0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x366DA0u;
    {
        const bool branch_taken_0x366da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366DA0u;
        // 0x366da4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366da0) {
            ctx->pc = 0x366DFCu;
            goto label_366dfc;
        }
    }
    ctx->pc = 0x366DA8u;
    // 0x366da8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366dac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x366dacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x1000e020
    // 0x366db0: 0xf  sync
    ctx->pc = 0x366db0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366db4: 0x40f  sync.p
    ctx->pc = 0x366db4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366db8:
    // 0x366db8: 0x0  nop
    ctx->pc = 0x366db8u;
    // NOP
    // 0x366dbc: 0x0  nop
    ctx->pc = 0x366dbcu;
    // NOP
    // 0x366dc0: 0x0  nop
    ctx->pc = 0x366dc0u;
    // NOP
    // 0x366dc4: 0x0  nop
    ctx->pc = 0x366dc4u;
    // NOP
    // 0x366dc8: 0x0  nop
    ctx->pc = 0x366dc8u;
    // NOP
    // 0x366dcc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366DCCu;
    {
        const bool branch_taken_0x366dcc = (false);
        if (branch_taken_0x366dcc) {
            ctx->pc = 0x366DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366db8;
        }
    }
    ctx->pc = 0x366DD4u;
    // 0x366dd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366dd8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x366ddc: 0x0  nop
    ctx->pc = 0x366ddcu;
    // NOP
label_366de0:
    // 0x366de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366de0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366de4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366de8: 0x0  nop
    ctx->pc = 0x366de8u;
    // NOP
    // 0x366dec: 0x0  nop
    ctx->pc = 0x366decu;
    // NOP
    // 0x366df0: 0x0  nop
    ctx->pc = 0x366df0u;
    // NOP
    // 0x366df4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366DF4u;
    {
        const bool branch_taken_0x366df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366df4) {
            ctx->pc = 0x366DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366de0;
        }
    }
    ctx->pc = 0x366DFCu;
label_366dfc:
    // 0x366dfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366e00: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x366e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x366e04: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x366e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x366e08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366e0c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x366e0cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x366e10: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x366e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x366e14: 0x240402c0  addiu       $a0, $zero, 0x2C0
    ctx->pc = 0x366e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x366e18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x366e18u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x366e1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366e24: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x366e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x366e28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x366e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x366e2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x366e2cu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 3)); // MMIO: 0x1000d410
    // 0x366e30: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x366e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x366e34: 0xd1043  sra         $v0, $t5, 1
    ctx->pc = 0x366e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 13), 1));
    // 0x366e38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366e3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x366e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x366e40: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x366e44: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x366e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366e48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x366e48u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x366e4c: 0xf  sync
    ctx->pc = 0x366e4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366e50: 0x40f  sync.p
    ctx->pc = 0x366e50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366e58: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366e5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x366E5Cu;
    {
        const bool branch_taken_0x366e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E5Cu;
        // 0x366e60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e5c) {
            ctx->pc = 0x366EB4u;
            goto label_366eb4;
        }
    }
    ctx->pc = 0x366E64u;
    // 0x366e64: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366e68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x366e68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x366e6c: 0xf  sync
    ctx->pc = 0x366e6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366e70: 0x40f  sync.p
    ctx->pc = 0x366e70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366e74:
    // 0x366e74: 0x0  nop
    ctx->pc = 0x366e74u;
    // NOP
    // 0x366e78: 0x0  nop
    ctx->pc = 0x366e78u;
    // NOP
    // 0x366e7c: 0x0  nop
    ctx->pc = 0x366e7cu;
    // NOP
    // 0x366e80: 0x0  nop
    ctx->pc = 0x366e80u;
    // NOP
    // 0x366e84: 0x0  nop
    ctx->pc = 0x366e84u;
    // NOP
    // 0x366e88: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366E88u;
    {
        const bool branch_taken_0x366e88 = (false);
        if (branch_taken_0x366e88) {
            ctx->pc = 0x366E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366e74;
        }
    }
    ctx->pc = 0x366E90u;
    // 0x366e90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366e94: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366e98:
    // 0x366e98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366e98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366e9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366ea0: 0x0  nop
    ctx->pc = 0x366ea0u;
    // NOP
    // 0x366ea4: 0x0  nop
    ctx->pc = 0x366ea4u;
    // NOP
    // 0x366ea8: 0x0  nop
    ctx->pc = 0x366ea8u;
    // NOP
    // 0x366eac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366EACu;
    {
        const bool branch_taken_0x366eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366eac) {
            ctx->pc = 0x366E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366e98;
        }
    }
    ctx->pc = 0x366EB4u;
label_366eb4:
    // 0x366eb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366eb8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x366eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x366ebc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x366ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x366ec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366ec4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x366ec4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x366ec8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x366ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x366ecc: 0x24040840  addiu       $a0, $zero, 0x840
    ctx->pc = 0x366eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x366ed0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x366ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x366ed4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x366ed4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x366ed8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x366ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x366edc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366ee0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x366ee0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x366ee4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x366ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x366ee8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x366ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x366eec: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x366eecu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 13)); // MMIO: 0x1000d420
    // 0x366ef0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x366ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x366ef4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x366ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366ef8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x366ef8u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x366efc: 0xf  sync
    ctx->pc = 0x366efcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366f00: 0x40f  sync.p
    ctx->pc = 0x366f00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366f04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x366f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x366f08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366f0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x366F0Cu;
    {
        const bool branch_taken_0x366f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F0Cu;
        // 0x366f10: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f0c) {
            ctx->pc = 0x366F64u;
            goto label_366f64;
        }
    }
    ctx->pc = 0x366F14u;
    // 0x366f14: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x366f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x366f18: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x366f18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x366f1c: 0xf  sync
    ctx->pc = 0x366f1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366f20: 0x40f  sync.p
    ctx->pc = 0x366f20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_366f24:
    // 0x366f24: 0x0  nop
    ctx->pc = 0x366f24u;
    // NOP
    // 0x366f28: 0x0  nop
    ctx->pc = 0x366f28u;
    // NOP
    // 0x366f2c: 0x0  nop
    ctx->pc = 0x366f2cu;
    // NOP
    // 0x366f30: 0x0  nop
    ctx->pc = 0x366f30u;
    // NOP
    // 0x366f34: 0x0  nop
    ctx->pc = 0x366f34u;
    // NOP
    // 0x366f38: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x366F38u;
    {
        const bool branch_taken_0x366f38 = (false);
        if (branch_taken_0x366f38) {
            ctx->pc = 0x366F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366f24;
        }
    }
    ctx->pc = 0x366F40u;
    // 0x366f40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x366f44: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x366f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_366f48:
    // 0x366f48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x366f48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x366f4c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x366f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x366f50: 0x0  nop
    ctx->pc = 0x366f50u;
    // NOP
    // 0x366f54: 0x0  nop
    ctx->pc = 0x366f54u;
    // NOP
    // 0x366f58: 0x0  nop
    ctx->pc = 0x366f58u;
    // NOP
    // 0x366f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366F5Cu;
    {
        const bool branch_taken_0x366f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366f5c) {
            ctx->pc = 0x366F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366f48;
        }
    }
    ctx->pc = 0x366F64u;
label_366f64:
    // 0x366f64: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x366f64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x366f68: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x366f6c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x366f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x366f70: 0x352902c0  ori         $t1, $t1, 0x2C0
    ctx->pc = 0x366f70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)704);
    // 0x366f74: 0x35080840  ori         $t0, $t0, 0x840
    ctx->pc = 0x366f74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2112);
    // 0x366f78: 0x34c61340  ori         $a2, $a2, 0x1340
    ctx->pc = 0x366f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4928);
    // 0x366f7c: 0x19a00248  blez        $t5, . + 4 + (0x248 << 2)
    ctx->pc = 0x366F7Cu;
    {
        const bool branch_taken_0x366f7c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x366F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F7Cu;
        // 0x366f80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f7c) {
            ctx->pc = 0x3678A0u;
            goto label_3678a0;
        }
    }
    ctx->pc = 0x366F84u;
    // 0x366f84: 0x3c0e0001  lui         $t6, 0x1
    ctx->pc = 0x366f84u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1 << 16));
    // 0x366f88: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x366f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x366f8c: 0x19a00064  blez        $t5, . + 4 + (0x64 << 2)
    ctx->pc = 0x366F8Cu;
    {
        const bool branch_taken_0x366f8c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x366F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F8Cu;
        // 0x366f90: 0x31a20007  andi        $v0, $t5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f8c) {
            ctx->pc = 0x367120u;
            goto label_367120;
        }
    }
    ctx->pc = 0x366F94u;
    // 0x366f94: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x366F94u;
    {
        const bool branch_taken_0x366f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f94) {
            ctx->pc = 0x366F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366F94u;
            // 0x366f98: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3672ACu;
            goto label_3672ac;
        }
    }
    ctx->pc = 0x366F9Cu;
    // 0x366f9c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x366F9Cu;
    {
        const bool branch_taken_0x366f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F9Cu;
        // 0x366fa0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f9c) {
            ctx->pc = 0x367128u;
            goto label_367128;
        }
    }
    ctx->pc = 0x366FA4u;
    // 0x366fa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366fa8: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x366fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x366fac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x366facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366fb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366fb4: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x366fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x366fb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x366fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366fbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366fc0: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x366fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x366fc4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x366fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366fc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x366fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x366fcc: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x366fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_366fd0:
    // 0x366fd0: 0x42000039  di
    ctx->pc = 0x366fd0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x366fd4: 0x40f  sync.p
    ctx->pc = 0x366fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x366fd8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x366fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x366fdc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x366fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x366fe0: 0x0  nop
    ctx->pc = 0x366fe0u;
    // NOP
    // 0x366fe4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366FE4u;
    {
        const bool branch_taken_0x366fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366fe4) {
            ctx->pc = 0x366FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366fd0;
        }
    }
    ctx->pc = 0x366FECu;
    // 0x366fec: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x366fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x366ff0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x366ff0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366ff4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x366ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x366ff8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x366ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x366ffc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x366ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367000: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367004: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367008: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36700c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x36700cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367010: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367014: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367014u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367018: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367018u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36701c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x36701cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367020: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367024: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367028: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36702c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36702cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367030: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367034: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367038: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36703c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36703cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367040: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367044: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367048: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36704c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36704cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367050: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x367050u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x367054: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x367054u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x367058: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x367058u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36705c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36705cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367060: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367064: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367068: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36706c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36706cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367070: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367074: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x367074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367078: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x367078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x36707c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x36707cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367080: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x367080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x367084: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367088: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36708c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36708cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367090: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367094: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367098: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36709c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36709cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3670a0: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3670a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3670a4: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3670a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3670a8: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x3670a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3670ac: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3670acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3670b0: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x3670b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3670b4: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3670b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3670b8: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x3670b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3670bc: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3670bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3670c0: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x3670c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3670c4: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x3670c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3670c8: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x3670c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3670cc: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x3670ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3670d0: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x3670d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3670d4: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x3670d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3670d8: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x3670d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3670dc: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x3670dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3670e0: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x3670e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3670e4: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x3670e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3670e8: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x3670e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3670ec: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x3670ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3670f0: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x3670f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3670f4: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x3670f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3670f8: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x3670f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3670fc: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x3670fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x367100: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x367100u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x367104: 0x42000038  ei
    ctx->pc = 0x367104u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367108: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x367108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x36710c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x36710cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x367110: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x367110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x367114: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x367114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x367118: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x367118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x36711c: 0x0  nop
    ctx->pc = 0x36711cu;
    // NOP
label_367120:
    // 0x367120: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367124: 0x0  nop
    ctx->pc = 0x367124u;
    // NOP
label_367128:
    // 0x367128: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36712c: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x36712cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367130: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x367130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367134: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367138: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x367138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x36713c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367140: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367144: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x367144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367148: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x367148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36714c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36714cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367150: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x367150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_367154:
    // 0x367154: 0x42000039  di
    ctx->pc = 0x367154u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367158: 0x40f  sync.p
    ctx->pc = 0x367158u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36715c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367160: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x367160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x367164: 0x0  nop
    ctx->pc = 0x367164u;
    // NOP
    // 0x367168: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367168u;
    {
        const bool branch_taken_0x367168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367168) {
            ctx->pc = 0x367154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367154;
        }
    }
    ctx->pc = 0x367170u;
    // 0x367170: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367174: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367174u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367178: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36717c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36717cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367180: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367184: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367188: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36718c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36718cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367190: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367194: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367198: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367198u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36719c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36719cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3671a0: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3671a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3671a4: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3671a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3671a8: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3671a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3671ac: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3671acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3671b0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3671b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3671b4: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3671b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3671b8: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3671b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671bc: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3671bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3671c0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3671c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3671c4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3671c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671c8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3671c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671cc: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3671ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671d0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3671d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3671d4: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x3671d4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3671d8: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x3671d8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3671dc: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x3671dcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3671e0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3671e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671e4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3671e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3671e8: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3671e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3671ec: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3671ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3671f0: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3671f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671f4: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3671f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3671f8: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x3671f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3671fc: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x3671fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x367200: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x367200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367204: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x367204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x367208: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36720c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x36720cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367210: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367214: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367218: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36721c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x36721cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367220: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367224: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367228: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36722c: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x36722cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x367230: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367234: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x367234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367238: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36723c: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x36723cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x367240: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367244: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x367244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367248: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36724c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x36724cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367250: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367254: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367258: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x367258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36725c: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x36725cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367260: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x367260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x367264: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x367264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367268: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x367268u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x36726c: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x36726cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367270: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x367270u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367274: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x367274u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367278: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x367278u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x36727c: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x36727cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x367280: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x367280u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x367284: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x367284u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x367288: 0x42000038  ei
    ctx->pc = 0x367288u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36728c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x36728cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x367290: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x367290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x367294: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x367294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x367298: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x367298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x36729c: 0x24d102a  slt         $v0, $s2, $t5
    ctx->pc = 0x36729cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3672a0: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x3672A0u;
    {
        const bool branch_taken_0x3672a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672A0u;
        // 0x3672a4: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3672a0) {
            ctx->pc = 0x3678A0u;
            goto label_3678a0;
        }
    }
    ctx->pc = 0x3672A8u;
    // 0x3672a8: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x3672a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3672ac:
    // 0x3672ac: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3672acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672b0: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3672b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672b4: 0x0  nop
    ctx->pc = 0x3672b4u;
    // NOP
label_3672b8:
    // 0x3672b8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3672b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3672bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3672bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3672c0: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x3672c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x3672c4: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x3672c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3672c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3672c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3672cc: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x3672ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x3672d0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3672d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3672d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3672d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3672d8: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x3672d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x3672dc: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x3672dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3672e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3672e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3672e4: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x3672e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_3672e8:
    // 0x3672e8: 0x42000039  di
    ctx->pc = 0x3672e8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3672ec: 0x40f  sync.p
    ctx->pc = 0x3672ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3672f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3672f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3672f4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x3672f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3672f8: 0x0  nop
    ctx->pc = 0x3672f8u;
    // NOP
    // 0x3672fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3672FCu;
    {
        const bool branch_taken_0x3672fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3672fc) {
            ctx->pc = 0x3672E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3672e8;
        }
    }
    ctx->pc = 0x367304u;
    // 0x367304: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367308: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367308u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36730c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x36730cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367310: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367314: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367318: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36731c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x36731cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367320: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367324: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367328: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36732c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x36732cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367330: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367330u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367334: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367338: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36733c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x36733cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367340: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367344: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367348: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36734c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x36734cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367350: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367354: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367358: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36735c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36735cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367360: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367364: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367368: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x367368u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36736c: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x36736cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x367370: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x367370u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367374: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367378: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36737c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x36737cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367380: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367384: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367388: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x36738c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x36738cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367390: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x367390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x367394: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x367394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367398: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x367398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36739c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36739cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673a0: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x3673a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3673a4: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3673a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673a8: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x3673a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3673ac: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3673acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673b0: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x3673b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3673b4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3673b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673b8: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3673b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3673bc: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3673bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673c0: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x3673c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3673c4: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3673c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673c8: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x3673c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3673cc: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3673ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673d0: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x3673d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3673d4: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3673d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3673d8: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x3673d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3673dc: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x3673dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3673e0: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x3673e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3673e4: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x3673e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3673e8: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x3673e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3673ec: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x3673ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3673f0: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x3673f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3673f4: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x3673f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3673f8: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x3673f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3673fc: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x3673fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367400: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x367400u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367404: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x367404u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367408: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x367408u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x36740c: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x36740cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x367410: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x367410u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x367414: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x367414u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x367418: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x367418u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x36741c: 0x42000038  ei
    ctx->pc = 0x36741cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367420: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x367420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x367424: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x367424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x367428: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x367428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x36742c: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x36742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367434: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367438: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x367438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36743c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36743cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367440: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x367440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x367444: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x367444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367448: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36744c: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x36744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367450: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x367450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367454: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367458: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x367458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_36745c:
    // 0x36745c: 0x42000039  di
    ctx->pc = 0x36745cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367460: 0x40f  sync.p
    ctx->pc = 0x367460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367464: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367464u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367468: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x367468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x36746c: 0x0  nop
    ctx->pc = 0x36746cu;
    // NOP
    // 0x367470: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367470u;
    {
        const bool branch_taken_0x367470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367470) {
            ctx->pc = 0x36745Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36745c;
        }
    }
    ctx->pc = 0x367478u;
    // 0x367478: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x36747c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36747cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367480: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367484: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367488: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36748c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36748cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367490: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367494: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367498: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36749c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36749cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3674a0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3674a0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3674a4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3674a4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3674a8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3674a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3674ac: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3674acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3674b0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3674b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3674b4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3674b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3674b8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3674b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3674bc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3674bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3674c0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3674c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674c4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3674c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3674c8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3674c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3674cc: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3674ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674d0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3674d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674d4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3674d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674d8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3674d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3674dc: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x3674dcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3674e0: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x3674e0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3674e4: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x3674e4u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3674e8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3674e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674ec: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3674ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3674f0: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3674f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3674f4: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3674f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3674f8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3674f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3674fc: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3674fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367500: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x367500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367504: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x367504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x367508: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x367508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36750c: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x36750cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x367510: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367514: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367518: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36751c: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x36751cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367520: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367524: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367528: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36752c: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x36752cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367530: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367534: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x367534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x367538: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36753c: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x36753cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367540: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367544: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x367544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x367548: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36754c: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x36754cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367550: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367554: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367558: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36755c: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x36755cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367560: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x367560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x367564: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x367564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367568: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x367568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36756c: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x36756cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367570: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x367570u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367574: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x367574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367578: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x367578u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x36757c: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x36757cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367580: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x367580u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x367584: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x367584u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x367588: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x367588u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x36758c: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x36758cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x367590: 0x42000038  ei
    ctx->pc = 0x367590u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367594: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x367594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x367598: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x367598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x36759c: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x36759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x3675a0: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x3675a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3675a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3675a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3675a8: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x3675a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x3675ac: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x3675acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3675b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3675b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3675b4: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x3675b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x3675b8: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x3675b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3675bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3675bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3675c0: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x3675c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x3675c4: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x3675c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3675c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3675c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3675cc: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x3675ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_3675d0:
    // 0x3675d0: 0x42000039  di
    ctx->pc = 0x3675d0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3675d4: 0x40f  sync.p
    ctx->pc = 0x3675d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3675d8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3675dc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x3675dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3675e0: 0x0  nop
    ctx->pc = 0x3675e0u;
    // NOP
    // 0x3675e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3675E4u;
    {
        const bool branch_taken_0x3675e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3675e4) {
            ctx->pc = 0x3675D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3675d0;
        }
    }
    ctx->pc = 0x3675ECu;
    // 0x3675ec: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x3675ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3675f0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3675f0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3675f4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3675f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3675f8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3675f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3675fc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3675fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367600: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367604: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367608: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36760c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x36760cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367610: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367614: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367614u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367618: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367618u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36761c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x36761cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367620: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367624: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367628: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36762c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36762cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367630: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367634: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367638: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36763c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36763cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367640: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367644: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367648: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36764c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36764cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367650: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x367650u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x367654: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x367654u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x367658: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x367658u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36765c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36765cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367660: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367664: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367668: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36766c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36766cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367670: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367674: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x367674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367678: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x367678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x36767c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x36767cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367680: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x367680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x367684: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367688: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36768c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36768cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367690: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367694: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367698: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36769c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36769cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3676a0: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3676a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3676a4: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3676a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3676a8: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x3676a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3676ac: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3676acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3676b0: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x3676b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3676b4: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x3676b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3676b8: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x3676b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3676bc: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x3676bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3676c0: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x3676c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3676c4: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x3676c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3676c8: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x3676c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3676cc: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x3676ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3676d0: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x3676d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3676d4: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x3676d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3676d8: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x3676d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3676dc: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x3676dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3676e0: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x3676e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3676e4: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x3676e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3676e8: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x3676e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3676ec: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x3676ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3676f0: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x3676f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3676f4: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x3676f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3676f8: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x3676f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3676fc: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x3676fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x367700: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x367700u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x367704: 0x42000038  ei
    ctx->pc = 0x367704u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367708: 0x25050060  addiu       $a1, $t0, 0x60
    ctx->pc = 0x367708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x36770c: 0x25240030  addiu       $a0, $t1, 0x30
    ctx->pc = 0x36770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x367710: 0x24c30180  addiu       $v1, $a2, 0x180
    ctx->pc = 0x367710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x367714: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x367714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367718: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36771c: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x36771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367720: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x367720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367724: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367728: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x367728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x36772c: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x36772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367730: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367734: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x367734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367738: 0xc561001c  lwc1        $f1, 0x1C($t3)
    ctx->pc = 0x367738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36773c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36773cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367740: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x367740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_367744:
    // 0x367744: 0x42000039  di
    ctx->pc = 0x367744u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367748: 0x40f  sync.p
    ctx->pc = 0x367748u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36774c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367750: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x367750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x367754: 0x0  nop
    ctx->pc = 0x367754u;
    // NOP
    // 0x367758: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367758u;
    {
        const bool branch_taken_0x367758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367758) {
            ctx->pc = 0x367744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367744;
        }
    }
    ctx->pc = 0x367760u;
    // 0x367760: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367764: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367764u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367768: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36776c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36776cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367770: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367774: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367778: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36777c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36777cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367780: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367784: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367788: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367788u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36778c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36778cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367790: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367794: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367798: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36779c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x36779cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3677a0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3677a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3677a4: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3677a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3677a8: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3677a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677ac: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3677acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3677b0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3677b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3677b4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3677b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677b8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3677b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677bc: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3677bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677c0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3677c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3677c4: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x3677c4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3677c8: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x3677c8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3677cc: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x3677ccu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3677d0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3677d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677d4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3677d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3677d8: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3677d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3677dc: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3677dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3677e0: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3677e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677e4: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3677e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3677e8: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x3677e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677ec: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x3677ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3677f0: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3677f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677f4: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x3677f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3677f8: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3677f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3677fc: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x3677fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367800: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367804: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367808: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36780c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x36780cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367810: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367814: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367818: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36781c: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x36781cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x367820: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367824: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x367824u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367828: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x367828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36782c: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x36782cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x367830: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x367830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367834: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x367834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367838: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36783c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x36783cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367840: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367844: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367848: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x367848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36784c: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x36784cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x367850: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x367850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x367854: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x367854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x367858: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x367858u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x36785c: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x36785cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367860: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x367860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367864: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x367864u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367868: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x367868u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x36786c: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x36786cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x367870: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x367870u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x367874: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x367874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x367878: 0x42000038  ei
    ctx->pc = 0x367878u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36787c: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x36787cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x367880: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x367880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x367884: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x367884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x367888: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x367888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x36788c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x36788cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x367890: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x367890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x367894: 0x24d102a  slt         $v0, $s2, $t5
    ctx->pc = 0x367894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x367898: 0x1440fe87  bnez        $v0, . + 4 + (-0x179 << 2)
    ctx->pc = 0x367898u;
    {
        const bool branch_taken_0x367898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367898u;
        // 0x36789c: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367898) {
            ctx->pc = 0x3672B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3672b8;
        }
    }
    ctx->pc = 0x3678A0u;
label_3678a0:
    // 0x3678a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3678a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3678a4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3678a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3678a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3678a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3678ac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3678acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3678b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3678B0u;
    {
        const bool branch_taken_0x3678b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678B0u;
        // 0x3678b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678b0) {
            ctx->pc = 0x3678E8u;
            goto label_3678e8;
        }
    }
    ctx->pc = 0x3678B8u;
    // 0x3678b8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3678b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3678bc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3678bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3678c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3678c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3678c4: 0xf  sync
    ctx->pc = 0x3678c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3678c8: 0x40f  sync.p
    ctx->pc = 0x3678c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3678cc:
    // 0x3678cc: 0x0  nop
    ctx->pc = 0x3678ccu;
    // NOP
    // 0x3678d0: 0x0  nop
    ctx->pc = 0x3678d0u;
    // NOP
    // 0x3678d4: 0x0  nop
    ctx->pc = 0x3678d4u;
    // NOP
    // 0x3678d8: 0x0  nop
    ctx->pc = 0x3678d8u;
    // NOP
    // 0x3678dc: 0x0  nop
    ctx->pc = 0x3678dcu;
    // NOP
    // 0x3678e0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3678E0u;
    {
        const bool branch_taken_0x3678e0 = (false);
        if (branch_taken_0x3678e0) {
            ctx->pc = 0x3678CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3678cc;
        }
    }
    ctx->pc = 0x3678E8u;
label_3678e8:
    // 0x3678e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3678e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3678ec: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x3678ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x3678f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3678f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x3678f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3678f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3678f8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3678F8u;
    {
        const bool branch_taken_0x3678f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678F8u;
        // 0x3678fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678f8) {
            ctx->pc = 0x367954u;
            goto label_367954;
        }
    }
    ctx->pc = 0x367900u;
    // 0x367900: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x367900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x367904: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x367904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x367908: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x367908u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36790c: 0xf  sync
    ctx->pc = 0x36790cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367910: 0x40f  sync.p
    ctx->pc = 0x367910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_367914:
    // 0x367914: 0x0  nop
    ctx->pc = 0x367914u;
    // NOP
    // 0x367918: 0x0  nop
    ctx->pc = 0x367918u;
    // NOP
    // 0x36791c: 0x0  nop
    ctx->pc = 0x36791cu;
    // NOP
    // 0x367920: 0x0  nop
    ctx->pc = 0x367920u;
    // NOP
    // 0x367924: 0x0  nop
    ctx->pc = 0x367924u;
    // NOP
    // 0x367928: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x367928u;
    {
        const bool branch_taken_0x367928 = (false);
        if (branch_taken_0x367928) {
            ctx->pc = 0x367914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367914;
        }
    }
    ctx->pc = 0x367930u;
    // 0x367930: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x367930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x367934: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x367934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_367938:
    // 0x367938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x367938u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36793c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x367940: 0x0  nop
    ctx->pc = 0x367940u;
    // NOP
    // 0x367944: 0x0  nop
    ctx->pc = 0x367944u;
    // NOP
    // 0x367948: 0x0  nop
    ctx->pc = 0x367948u;
    // NOP
    // 0x36794c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36794Cu;
    {
        const bool branch_taken_0x36794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36794c) {
            ctx->pc = 0x367938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367938;
        }
    }
    ctx->pc = 0x367954u;
label_367954:
    // 0x367954: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x367954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x367958: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x367958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36795c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x367960: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x367960u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x367964: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x367964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x367968: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x367968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x36796c: 0x24041340  addiu       $a0, $zero, 0x1340
    ctx->pc = 0x36796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x367970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x367970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x367974: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x367974u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x367978: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x367978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x36797c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36797cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x367980: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x367980u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x367984: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x367984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x367988: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x367988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36798c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x36798cu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 19)); // MMIO: 0x1000d020
    // 0x367990: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x367990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x367994: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x367994u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x367998: 0xf  sync
    ctx->pc = 0x367998u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36799c: 0x40f  sync.p
    ctx->pc = 0x36799cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3679a0: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x3679a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3679a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3679a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3679a8: 0xd18c0  sll         $v1, $t5, 3
    ctx->pc = 0x3679a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x3679ac: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x3679acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3679b0: 0x2398821  addu        $s1, $s1, $t9
    ctx->pc = 0x3679b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x3679b4: 0x1a2780b  movn        $t7, $t5, $v0
    ctx->pc = 0x3679b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x3679b8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3679b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3679bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3679c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3679c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3679c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3679c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x3679c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3679c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3679cc: 0xf1083  sra         $v0, $t7, 2
    ctx->pc = 0x3679ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), 2));
    // 0x3679d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3679d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3679d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3679d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3679d8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3679d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x3679dc: 0x0  nop
    ctx->pc = 0x3679dcu;
    // NOP
label_3679e0:
    // 0x3679e0: 0x1aa00489  blez        $s5, . + 4 + (0x489 << 2)
    ctx->pc = 0x3679E0u;
    {
        const bool branch_taken_0x3679e0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679E0u;
        // 0x3679e4: 0x151023  negu        $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679e0) {
            ctx->pc = 0x368C08u;
            goto label_368c08;
        }
    }
    ctx->pc = 0x3679E8u;
    // 0x3679e8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3679e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3679ec: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3679ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3679f0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x3679f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x3679f4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x3679f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3679f8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3679f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367a00: 0x10a000eb  beqz        $a1, . + 4 + (0xEB << 2)
    ctx->pc = 0x367A00u;
    {
        const bool branch_taken_0x367a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A00u;
        // 0x367a04: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a00) {
            ctx->pc = 0x367DB0u;
            goto label_367db0;
        }
    }
    ctx->pc = 0x367A08u;
    // 0x367a08: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x367a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x367a0c: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x367A0Cu;
    {
        const bool branch_taken_0x367a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A0Cu;
        // 0x367a10: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a0c) {
            ctx->pc = 0x367C80u;
            goto label_367c80;
        }
    }
    ctx->pc = 0x367A14u;
    // 0x367a14: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x367A14u;
    {
        const bool branch_taken_0x367a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A14u;
        // 0x367a18: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a14) {
            ctx->pc = 0x367B58u;
            goto label_367b58;
        }
    }
    ctx->pc = 0x367A1Cu;
    // 0x367a1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367a20: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367a24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x367a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367a28: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x367a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367a2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367a30: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x367a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367a34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x367a38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367a3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367a40: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x367a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x367a44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x367a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367a48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367a4c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x367a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_367a50:
    // 0x367a50: 0x42000039  di
    ctx->pc = 0x367a50u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367a54: 0x40f  sync.p
    ctx->pc = 0x367a54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367a58: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367a5c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x367a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x367a60: 0x0  nop
    ctx->pc = 0x367a60u;
    // NOP
    // 0x367a64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367A64u;
    {
        const bool branch_taken_0x367a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367a64) {
            ctx->pc = 0x367A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367a50;
        }
    }
    ctx->pc = 0x367A6Cu;
    // 0x367a6c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x367a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x367a70: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367a74: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367a74u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367a78: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367a7c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367a7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367a80: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367a84: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367a88: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367a8c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367a90: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367a94: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367a98: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367a98u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367a9c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367a9cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367aa0: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367aa4: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367aa8: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367aac: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367ab0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367ab4: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367ab8: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367abc: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367ac0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367ac4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367ac8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367acc: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367ad0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367ad4: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x367ad4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x367ad8: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x367ad8u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367adc: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367ae0: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367ae4: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367ae8: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367ae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367aec: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367af0: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367af4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367af8: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367afc: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367b00: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367b04: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367b08: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367b08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367b0c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367b10: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367b10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367b14: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367b18: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367b1c: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367b20: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367b24: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x367b24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367b28: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x367b28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367b2c: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x367b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367b30: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x367b30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367b34: 0x42000038  ei
    ctx->pc = 0x367b34u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367b38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x367b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367b3c: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x367b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x367b40: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x367b44: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x367b48: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x367b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x367b4c: 0x26b2ffff  addiu       $s2, $s5, -0x1
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x367b50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367b54: 0x0  nop
    ctx->pc = 0x367b54u;
    // NOP
label_367b58:
    // 0x367b58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367b5c: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367b60: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x367b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367b64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367b68: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x367b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367b6c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x367b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367b70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367b74: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x367b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x367b78: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x367b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367b7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367b80: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x367b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_367b84:
    // 0x367b84: 0x42000039  di
    ctx->pc = 0x367b84u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367b88: 0x40f  sync.p
    ctx->pc = 0x367b88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367b8c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367b90: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x367b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x367b94: 0x0  nop
    ctx->pc = 0x367b94u;
    // NOP
    // 0x367b98: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367B98u;
    {
        const bool branch_taken_0x367b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367b98) {
            ctx->pc = 0x367B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367b84;
        }
    }
    ctx->pc = 0x367BA0u;
    // 0x367ba0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x367ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x367ba4: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367ba8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367ba8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367bac: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367bb0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367bb4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367bb8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367bbc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367bc0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367bc4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367bc8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367bcc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367bccu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367bd0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367bd0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367bd4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367bd8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367bdc: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367be0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367be4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367be8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367bec: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367bf0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367bf4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367bf8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367bfc: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c00: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367c00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c04: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367c08: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x367c08u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x367c0c: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x367c0cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367c10: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c14: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367c14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367c18: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367c1c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367c1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367c20: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c24: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367c28: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367c28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c2c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367c2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367c30: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c34: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367c34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367c38: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c3c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367c3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367c40: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367c40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367c44: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367c44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367c48: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367c4c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367c50: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367c54: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367c58: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x367c58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367c5c: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x367c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367c60: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x367c60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367c64: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x367c64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367c68: 0x42000038  ei
    ctx->pc = 0x367c68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367c6c: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x367c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x367c70: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x367c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x367c74: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x367c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x367c78: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x367c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x367c7c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x367c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_367c80:
    // 0x367c80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367c84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367c88: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367c8c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x367c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367c90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367c94: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x367c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367c98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x367c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367c9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367ca0: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x367ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x367ca4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x367ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367ca8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367cac: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x367cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_367cb0:
    // 0x367cb0: 0x42000039  di
    ctx->pc = 0x367cb0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367cb4: 0x40f  sync.p
    ctx->pc = 0x367cb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367cb8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367cbc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x367cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x367cc0: 0x0  nop
    ctx->pc = 0x367cc0u;
    // NOP
    // 0x367cc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367CC4u;
    {
        const bool branch_taken_0x367cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367cc4) {
            ctx->pc = 0x367CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367cb0;
        }
    }
    ctx->pc = 0x367CCCu;
    // 0x367ccc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x367cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x367cd0: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367cd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367cd4: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367cd4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367cd8: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367cdc: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367cdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367ce0: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367ce4: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367ce8: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367cec: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367cf0: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367cf4: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367cf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367cf8: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367cf8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367cfc: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367cfcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367d00: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367d00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367d04: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367d08: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367d0c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367d10: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367d14: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367d18: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d1c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367d20: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367d24: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d28: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d2c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367d2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d30: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367d34: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x367d34u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x367d38: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x367d38u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367d3c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d40: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367d44: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367d48: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367d4c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d50: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367d54: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d58: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367d5c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d60: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367d60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367d64: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d68: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367d68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367d6c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367d70: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367d74: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367d78: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367d7c: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367d7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367d80: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367d84: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x367d84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367d88: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x367d88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367d8c: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x367d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367d90: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x367d90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367d94: 0x42000038  ei
    ctx->pc = 0x367d94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367d98: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x367d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x367d9c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x367d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x367da0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x367da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x367da4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x367da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x367da8: 0x12400397  beqz        $s2, . + 4 + (0x397 << 2)
    ctx->pc = 0x367DA8u;
    {
        const bool branch_taken_0x367da8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x367DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367DA8u;
        // 0x367dac: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367da8) {
            ctx->pc = 0x368C08u;
            goto label_368c08;
        }
    }
    ctx->pc = 0x367DB0u;
label_367db0:
    // 0x367db0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367db4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367db8: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367dbc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x367dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367dc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367dc4: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x367dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367dc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x367dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367dcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367dd0: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x367dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x367dd4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x367dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367dd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367ddc: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x367ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_367de0:
    // 0x367de0: 0x42000039  di
    ctx->pc = 0x367de0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367de4: 0x40f  sync.p
    ctx->pc = 0x367de4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367de8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367dec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x367decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x367df0: 0x0  nop
    ctx->pc = 0x367df0u;
    // NOP
    // 0x367df4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367DF4u;
    {
        const bool branch_taken_0x367df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367df4) {
            ctx->pc = 0x367DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367de0;
        }
    }
    ctx->pc = 0x367DFCu;
    // 0x367dfc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x367dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x367e00: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367e04: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367e04u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367e08: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e0c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367e0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367e10: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367e14: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367e18: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367e18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367e1c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367e20: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367e24: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367e24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367e28: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367e28u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367e2c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367e2cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367e30: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367e34: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367e38: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367e3c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367e40: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367e44: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367e48: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367e48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e4c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367e50: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367e54: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367e54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e58: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e5c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367e5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e60: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367e60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367e64: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x367e64u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x367e68: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x367e68u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367e6c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e70: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367e74: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367e78: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367e78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367e7c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e80: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367e80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367e84: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e88: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367e8c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e90: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367e94: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367e98: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367e9c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367ea0: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367ea4: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367ea8: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367eac: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367eb0: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367eb4: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x367eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367eb8: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x367eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367ebc: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x367ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367ec0: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x367ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367ec4: 0x42000038  ei
    ctx->pc = 0x367ec4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367ec8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x367ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x367ecc: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x367eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x367ed0: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x367ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x367ed4: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x367ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x367ed8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x367ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367edc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367ee0: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x367ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x367ee4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x367ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367ee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367eec: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x367eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x367ef0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x367ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367ef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367ef8: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x367ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x367efc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x367efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367f00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x367f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x367f04: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x367f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_367f08:
    // 0x367f08: 0x42000039  di
    ctx->pc = 0x367f08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x367f0c: 0x40f  sync.p
    ctx->pc = 0x367f0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x367f10: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x367f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x367f14: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x367f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x367f18: 0x0  nop
    ctx->pc = 0x367f18u;
    // NOP
    // 0x367f1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x367F1Cu;
    {
        const bool branch_taken_0x367f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367f1c) {
            ctx->pc = 0x367F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367f08;
        }
    }
    ctx->pc = 0x367F24u;
    // 0x367f24: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x367f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x367f28: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x367f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x367f2c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x367f2cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367f30: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x367f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f34: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x367f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367f38: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x367f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367f3c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x367f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367f40: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x367f40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367f44: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x367f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x367f48: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x367f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x367f4c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x367f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367f50: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x367f50u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367f54: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x367f54u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367f58: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x367f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367f5c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x367f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367f60: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x367f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367f64: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x367f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x367f68: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x367f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367f6c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x367f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x367f70: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x367f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f74: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x367f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x367f78: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x367f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367f7c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x367f7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f80: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x367f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f84: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x367f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f88: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x367f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x367f8c: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x367f8cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x367f90: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x367f90u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367f94: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x367f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367f98: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x367f98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x367f9c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x367f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x367fa0: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x367fa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x367fa4: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x367fa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367fa8: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x367fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x367fac: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367fb0: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x367fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367fb4: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367fb8: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x367fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367fbc: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x367fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367fc0: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x367fc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367fc4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x367fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x367fc8: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x367fc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367fcc: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x367fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x367fd0: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x367fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x367fd4: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x367fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x367fd8: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x367fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x367fdc: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x367fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x367fe0: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x367fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x367fe4: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x367fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x367fe8: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x367fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x367fec: 0x42000038  ei
    ctx->pc = 0x367fecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x367ff0: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x367ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x367ff4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x367ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x367ff8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x367ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x367ffc: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x367ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x368000: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368004: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368008: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x368008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x36800c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x36800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368010: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368014: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x368014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x368018: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x368018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36801c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368020: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x368020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x368024: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x368024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368028: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36802c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x36802cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_368030:
    // 0x368030: 0x42000039  di
    ctx->pc = 0x368030u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368034: 0x40f  sync.p
    ctx->pc = 0x368034u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368038: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368038u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36803c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x368040: 0x0  nop
    ctx->pc = 0x368040u;
    // NOP
    // 0x368044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368044u;
    {
        const bool branch_taken_0x368044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368044) {
            ctx->pc = 0x368030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368030;
        }
    }
    ctx->pc = 0x36804Cu;
    // 0x36804c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x36804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x368050: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x368050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x368054: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x368054u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368058: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x368058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36805c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36805cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368060: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x368060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368064: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x368064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368068: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36806c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36806cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368070: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x368070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368074: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x368074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368078: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x368078u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36807c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36807cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368080: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x368080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368084: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368088: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36808c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x36808cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x368090: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x368090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368094: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368098: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36809c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x36809cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3680a0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3680a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3680a4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3680a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680a8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3680a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680ac: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3680acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680b0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3680b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3680b4: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x3680b4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3680b8: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x3680b8u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3680bc: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3680bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680c0: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3680c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3680c4: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3680c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3680c8: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3680c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3680cc: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3680ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680d0: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3680d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3680d4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3680d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680d8: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x3680d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3680dc: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3680dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680e0: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x3680e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3680e4: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x3680e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680e8: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x3680e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3680ec: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3680ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3680f0: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3680f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3680f4: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x3680f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3680f8: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x3680f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3680fc: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x3680fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368100: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368104: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368104u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x368108: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x368108u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x36810c: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x36810cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368110: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368110u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368114: 0x42000038  ei
    ctx->pc = 0x368114u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368118: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x36811c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x36811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x368120: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x368120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x368124: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x368124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x368128: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36812c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368130: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x368130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x368134: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x368134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368138: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36813c: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x36813cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x368140: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x368140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368144: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368148: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x368148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x36814c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368150: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x368150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x368154: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x368154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_368158:
    // 0x368158: 0x42000039  di
    ctx->pc = 0x368158u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36815c: 0x40f  sync.p
    ctx->pc = 0x36815cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368160: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368160u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368164: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x368164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x368168: 0x0  nop
    ctx->pc = 0x368168u;
    // NOP
    // 0x36816c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36816Cu;
    {
        const bool branch_taken_0x36816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36816c) {
            ctx->pc = 0x368158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368158;
        }
    }
    ctx->pc = 0x368174u;
    // 0x368174: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x368174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x368178: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x368178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x36817c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36817cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368180: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x368180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368184: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x368184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368188: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x368188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36818c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36818cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368190: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368194: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x368194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368198: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x368198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36819c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36819cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3681a0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3681a0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3681a4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3681a4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3681a8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3681a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3681ac: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3681acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3681b0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3681b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3681b4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3681b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3681b8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3681b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3681bc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3681bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3681c0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3681c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681c4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3681c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3681c8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3681c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3681cc: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3681ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681d0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3681d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681d4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3681d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681d8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3681d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3681dc: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x3681dcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3681e0: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x3681e0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3681e4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3681e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681e8: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3681e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3681ec: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x3681ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3681f0: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x3681f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3681f4: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3681f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3681f8: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3681f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3681fc: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x3681fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368200: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368204: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368208: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368208u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36820c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36820cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368210: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368214: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368218: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x368218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36821c: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x36821cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368220: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x368220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368224: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368228: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36822c: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x36822cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x368230: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x368230u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368234: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368234u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368238: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368238u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x36823c: 0x42000038  ei
    ctx->pc = 0x36823cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368240: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368244: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x368244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x368248: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x368248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x36824c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x36824cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x368250: 0x1640fed7  bnez        $s2, . + 4 + (-0x129 << 2)
    ctx->pc = 0x368250u;
    {
        const bool branch_taken_0x368250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x368254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368250u;
        // 0x368254: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368250) {
            ctx->pc = 0x367DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367db0;
        }
    }
    ctx->pc = 0x368258u;
    // 0x368258: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x368258u;
    {
        const bool branch_taken_0x368258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368258u;
        // 0x36825c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368258) {
            ctx->pc = 0x368C0Cu;
            goto label_368c0c;
        }
    }
    ctx->pc = 0x368260u;
label_368260:
    // 0x368260: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x368260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368264: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x368264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368268: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x368268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x36826c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36826cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x368270: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x368270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x368274: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x368274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x368278: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x368278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36827c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x36827cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x368280: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x368280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368284: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x368284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x368288: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x368288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36828c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x36828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368290: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x368290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368294: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x368294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x368298: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x368298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36829c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x36829cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3682a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3682a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3682a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3682a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3682a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3682a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3682ac: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x3682acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3682b0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x3682b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3682b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3682b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3682b8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3682b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3682bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3682bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3682c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3682c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3682c4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3682c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3682c8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3682c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3682cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3682ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3682d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3682d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3682d4:
    // 0x3682d4: 0x42000039  di
    ctx->pc = 0x3682d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3682d8: 0x40f  sync.p
    ctx->pc = 0x3682d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3682dc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3682e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3682e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3682e4: 0x0  nop
    ctx->pc = 0x3682e4u;
    // NOP
    // 0x3682e8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3682E8u;
    {
        const bool branch_taken_0x3682e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3682e8) {
            ctx->pc = 0x3682D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3682d4;
        }
    }
    ctx->pc = 0x3682F0u;
    // 0x3682f0: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x3682f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x3682f4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x3682f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x3682f8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3682f8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3682fc: 0x4a0002ff  vnop
    ctx->pc = 0x3682fcu;
    // NOP operation, no action needed for VU0
    // 0x368300: 0x4a0002ff  vnop
    ctx->pc = 0x368300u;
    // NOP operation, no action needed for VU0
    // 0x368304: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x368304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x368308: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x368308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x36830c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x36830cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x368310: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368310u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x368314: 0x4a0002ff  vnop
    ctx->pc = 0x368314u;
    // NOP operation, no action needed for VU0
    // 0x368318: 0x4a0002ff  vnop
    ctx->pc = 0x368318u;
    // NOP operation, no action needed for VU0
    // 0x36831c: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x36831cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x368320: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x368320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x368324: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x368324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x368328: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368328u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36832c: 0x4a0002ff  vnop
    ctx->pc = 0x36832cu;
    // NOP operation, no action needed for VU0
    // 0x368330: 0x4a0002ff  vnop
    ctx->pc = 0x368330u;
    // NOP operation, no action needed for VU0
    // 0x368334: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x368334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x368338: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x368338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x36833c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x36833cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x368340: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368340u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x368344: 0x4a0002ff  vnop
    ctx->pc = 0x368344u;
    // NOP operation, no action needed for VU0
    // 0x368348: 0x4a0002ff  vnop
    ctx->pc = 0x368348u;
    // NOP operation, no action needed for VU0
    // 0x36834c: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x36834cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x368350: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x368350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x368354: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x368354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x368358: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368358u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36835c: 0x4a0002ff  vnop
    ctx->pc = 0x36835cu;
    // NOP operation, no action needed for VU0
    // 0x368360: 0x4a0002ff  vnop
    ctx->pc = 0x368360u;
    // NOP operation, no action needed for VU0
    // 0x368364: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x368364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x368368: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x368368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x36836c: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x36836cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x368370: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368370u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x368374: 0x4a0002ff  vnop
    ctx->pc = 0x368374u;
    // NOP operation, no action needed for VU0
    // 0x368378: 0x4a0002ff  vnop
    ctx->pc = 0x368378u;
    // NOP operation, no action needed for VU0
    // 0x36837c: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x36837cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x368380: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x368380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x368384: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x368384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x368388: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x368388u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36838c: 0x4a0002ff  vnop
    ctx->pc = 0x36838cu;
    // NOP operation, no action needed for VU0
    // 0x368390: 0x4a0002ff  vnop
    ctx->pc = 0x368390u;
    // NOP operation, no action needed for VU0
    // 0x368394: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x368394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x368398: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x36839c: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x36839cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x3683a0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3683a0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3683a4: 0x4a0002ff  vnop
    ctx->pc = 0x3683a4u;
    // NOP operation, no action needed for VU0
    // 0x3683a8: 0x4a0002ff  vnop
    ctx->pc = 0x3683a8u;
    // NOP operation, no action needed for VU0
    // 0x3683ac: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x3683acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3683b0: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x3683b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x3683b4: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x3683b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x3683b8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3683b8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3683bc: 0x4a0002ff  vnop
    ctx->pc = 0x3683bcu;
    // NOP operation, no action needed for VU0
    // 0x3683c0: 0x4a0002ff  vnop
    ctx->pc = 0x3683c0u;
    // NOP operation, no action needed for VU0
    // 0x3683c4: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x3683c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3683c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3683c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3683cc: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3683ccu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3683d0: 0x4a0002ff  vnop
    ctx->pc = 0x3683d0u;
    // NOP operation, no action needed for VU0
    // 0x3683d4: 0x4a0002ff  vnop
    ctx->pc = 0x3683d4u;
    // NOP operation, no action needed for VU0
    // 0x3683d8: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x3683d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3683dc: 0x42000038  ei
    ctx->pc = 0x3683dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3683e0:
    // 0x3683e0: 0x42000039  di
    ctx->pc = 0x3683e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3683e4: 0x40f  sync.p
    ctx->pc = 0x3683e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3683e8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3683e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3683ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3683ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3683f0: 0x0  nop
    ctx->pc = 0x3683f0u;
    // NOP
    // 0x3683f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3683F4u;
    {
        const bool branch_taken_0x3683f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3683f4) {
            ctx->pc = 0x3683E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3683e0;
        }
    }
    ctx->pc = 0x3683FCu;
    // 0x3683fc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3683fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368400: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x368400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368404: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x368404u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368408: 0xd8690000  lqc2        $vf9, 0x0($v1)
    ctx->pc = 0x368408u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36840c: 0xd88f0000  lqc2        $vf15, 0x0($a0)
    ctx->pc = 0x36840cu;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x368410: 0x42000038  ei
    ctx->pc = 0x368410u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368414: 0x1aa001fc  blez        $s5, . + 4 + (0x1FC << 2)
    ctx->pc = 0x368414u;
    {
        const bool branch_taken_0x368414 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x368418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368414u;
        // 0x368418: 0x151023  negu        $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368414) {
            ctx->pc = 0x368C08u;
            goto label_368c08;
        }
    }
    ctx->pc = 0x36841Cu;
    // 0x36841c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x36841cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368420: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x368420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x368424: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x368424u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x368428: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x368428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x36842c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36842cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368430: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x368430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368434: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x368434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368438: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x368438u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36843c: 0x10a000dc  beqz        $a1, . + 4 + (0xDC << 2)
    ctx->pc = 0x36843Cu;
    {
        const bool branch_taken_0x36843c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x368440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36843Cu;
        // 0x368440: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36843c) {
            ctx->pc = 0x3687B0u;
            goto label_3687b0;
        }
    }
    ctx->pc = 0x368444u;
    // 0x368444: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x368444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368448: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x368448u;
    {
        const bool branch_taken_0x368448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368448u;
        // 0x36844c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368448) {
            ctx->pc = 0x368690u;
            goto label_368690;
        }
    }
    ctx->pc = 0x368450u;
    // 0x368450: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x368450u;
    {
        const bool branch_taken_0x368450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368450u;
        // 0x368454: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368450) {
            ctx->pc = 0x368578u;
            goto label_368578;
        }
    }
    ctx->pc = 0x368458u;
    // 0x368458: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36845c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36845cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368460: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x368460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368464: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x368464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368468: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x368468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36846c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x368470: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x368470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368474: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x368474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_368478:
    // 0x368478: 0x42000039  di
    ctx->pc = 0x368478u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36847c: 0x40f  sync.p
    ctx->pc = 0x36847cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368480: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368480u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368484: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x368484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x368488: 0x0  nop
    ctx->pc = 0x368488u;
    // NOP
    // 0x36848c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36848Cu;
    {
        const bool branch_taken_0x36848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36848c) {
            ctx->pc = 0x368478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368478;
        }
    }
    ctx->pc = 0x368494u;
    // 0x368494: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x368494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x368498: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x368498u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36849c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x36849cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3684a0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3684a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3684a4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3684a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3684a8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3684a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3684ac: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3684acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3684b0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3684b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3684b4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3684b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3684b8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3684b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3684bc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3684bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3684c0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3684c0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3684c4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3684c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3684c8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3684c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3684cc: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3684ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3684d0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3684d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3684d4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3684d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3684d8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3684d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3684dc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3684dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3684e0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3684e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3684e4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3684e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3684e8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3684e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3684ec: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3684ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3684f0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3684f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3684f4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3684f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3684f8: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x3684f8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3684fc: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x3684fcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368500: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368504: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x368504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368508: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36850c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x36850cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368510: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368514: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x368514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368518: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36851c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x36851cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368520: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368524: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368528: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36852c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x36852cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368530: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368534: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x368534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368538: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36853c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x36853cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368540: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368544: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368548: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368548u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x36854c: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x36854cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368550: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368550u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368554: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368554u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368558: 0x42000038  ei
    ctx->pc = 0x368558u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36855c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368560: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368564: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x368564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368568: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x368568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36856c: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x36856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x368570: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x368570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x368574: 0x26b2ffff  addiu       $s2, $s5, -0x1
    ctx->pc = 0x368574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_368578:
    // 0x368578: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36857c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368580: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x368580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368584: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x368584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368588: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x368588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36858c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36858cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x368590: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x368590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368594: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x368594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_368598:
    // 0x368598: 0x42000039  di
    ctx->pc = 0x368598u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36859c: 0x40f  sync.p
    ctx->pc = 0x36859cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3685a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3685a4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3685a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3685a8: 0x0  nop
    ctx->pc = 0x3685a8u;
    // NOP
    // 0x3685ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3685ACu;
    {
        const bool branch_taken_0x3685ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3685ac) {
            ctx->pc = 0x368598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368598;
        }
    }
    ctx->pc = 0x3685B4u;
    // 0x3685b4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3685b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3685b8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3685b8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3685bc: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3685bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3685c0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3685c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3685c4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3685c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3685c8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3685c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3685cc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3685ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3685d0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3685d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3685d4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3685d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3685d8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3685d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3685dc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3685dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3685e0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3685e0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3685e4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3685e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3685e8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3685e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3685ec: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3685ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3685f0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3685f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3685f4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3685f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3685f8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3685f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3685fc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3685fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368600: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x368600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368604: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x368604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368608: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36860c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36860cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368610: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x368610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368614: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x368614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368618: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368618u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36861c: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x36861cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368620: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368624: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x368624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368628: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36862c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x36862cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368630: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368634: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x368634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368638: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36863c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x36863cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368640: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368644: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368648: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36864c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x36864cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368650: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368654: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x368654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368658: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36865c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x36865cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368660: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368664: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368668: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368668u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x36866c: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x36866cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368670: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368670u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368674: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368674u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368678: 0x42000038  ei
    ctx->pc = 0x368678u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36867c: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x36867cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368680: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x368680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x368684: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x368684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x368688: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x368688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x36868c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x36868cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_368690:
    // 0x368690: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368694: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x368694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368698: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x368698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36869c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x36869cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3686a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3686a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3686a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3686a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3686a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3686a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3686ac: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3686acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3686b0:
    // 0x3686b0: 0x42000039  di
    ctx->pc = 0x3686b0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3686b4: 0x40f  sync.p
    ctx->pc = 0x3686b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3686b8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3686b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3686bc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3686bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3686c0: 0x0  nop
    ctx->pc = 0x3686c0u;
    // NOP
    // 0x3686c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3686C4u;
    {
        const bool branch_taken_0x3686c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3686c4) {
            ctx->pc = 0x3686B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3686b0;
        }
    }
    ctx->pc = 0x3686CCu;
    // 0x3686cc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3686ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3686d0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3686d0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3686d4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3686d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3686d8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3686d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3686dc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3686dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3686e0: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3686e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3686e4: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3686e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3686e8: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3686e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3686ec: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3686ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3686f0: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3686f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3686f4: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3686f4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3686f8: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3686f8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3686fc: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3686fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368700: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368704: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368708: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x368708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36870c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36870cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368710: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368714: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368718: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x368718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36871c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36871cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368720: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368724: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x368724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368728: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x368728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36872c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36872cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368730: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368730u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368734: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x368734u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368738: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36873c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x36873cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368740: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368744: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x368744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368748: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36874c: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x36874cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368750: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368754: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368758: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36875c: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x36875cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368760: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368764: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368768: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36876c: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x36876cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368770: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368774: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x368774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368778: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36877c: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x36877cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368780: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368780u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x368784: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x368784u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368788: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368788u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x36878c: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x36878cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368790: 0x42000038  ei
    ctx->pc = 0x368790u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368794: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368798: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x368798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x36879c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x36879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3687a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3687a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3687a4: 0x12400118  beqz        $s2, . + 4 + (0x118 << 2)
    ctx->pc = 0x3687A4u;
    {
        const bool branch_taken_0x3687a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3687A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687A4u;
        // 0x3687a8: 0x2278821  addu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687a4) {
            ctx->pc = 0x368C08u;
            goto label_368c08;
        }
    }
    ctx->pc = 0x3687ACu;
    // 0x3687ac: 0x0  nop
    ctx->pc = 0x3687acu;
    // NOP
label_3687b0:
    // 0x3687b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3687b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3687b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3687b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3687b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3687b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3687bc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3687bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3687c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3687c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3687c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3687c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3687c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3687c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3687cc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3687ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3687d0:
    // 0x3687d0: 0x42000039  di
    ctx->pc = 0x3687d0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3687d4: 0x40f  sync.p
    ctx->pc = 0x3687d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3687d8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3687dc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3687dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3687e0: 0x0  nop
    ctx->pc = 0x3687e0u;
    // NOP
    // 0x3687e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3687E4u;
    {
        const bool branch_taken_0x3687e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3687e4) {
            ctx->pc = 0x3687D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3687d0;
        }
    }
    ctx->pc = 0x3687ECu;
    // 0x3687ec: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3687ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3687f0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3687f0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3687f4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3687f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3687f8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3687f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3687fc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3687fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368800: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x368800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368804: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368808: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x368808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36880c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x36880cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368810: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x368810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368814: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x368814u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368818: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x368818u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36881c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x36881cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368820: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368824: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368828: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x368828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36882c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36882cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368830: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368834: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368838: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x368838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36883c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36883cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368840: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368844: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x368844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368848: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x368848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36884c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36884cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368850: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368850u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368854: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x368854u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368858: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36885c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x36885cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368860: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368864: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x368864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368868: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36886c: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x36886cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368870: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368874: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368878: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36887c: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x36887cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368880: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368884: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368888: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36888c: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x36888cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368890: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368894: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x368894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368898: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36889c: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x36889cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3688a0: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x3688a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3688a4: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x3688a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3688a8: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x3688a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3688ac: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x3688acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3688b0: 0x42000038  ei
    ctx->pc = 0x3688b0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3688b4: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x3688b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x3688b8: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x3688b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x3688bc: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x3688bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3688c0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3688c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3688c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3688c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3688c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3688c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3688cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3688ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3688d0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3688d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3688d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3688d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3688d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3688d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3688dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3688dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3688e0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3688e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3688e4:
    // 0x3688e4: 0x42000039  di
    ctx->pc = 0x3688e4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3688e8: 0x40f  sync.p
    ctx->pc = 0x3688e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3688ec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3688ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3688f0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3688f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3688f4: 0x0  nop
    ctx->pc = 0x3688f4u;
    // NOP
    // 0x3688f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3688F8u;
    {
        const bool branch_taken_0x3688f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3688f8) {
            ctx->pc = 0x3688E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3688e4;
        }
    }
    ctx->pc = 0x368900u;
    // 0x368900: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x368900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x368904: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x368904u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368908: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x368908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36890c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36890cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368910: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x368910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368914: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x368914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368918: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36891c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36891cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368920: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x368920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368924: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x368924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368928: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x368928u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36892c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36892cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368930: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x368930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368934: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368938: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36893c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x36893cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x368940: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x368940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368944: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368948: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36894c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x36894cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368950: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x368950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368954: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368958: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x368958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36895c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x36895cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368960: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x368960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368964: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368964u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368968: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x368968u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36896c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36896cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368970: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x368970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368974: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368978: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x368978u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36897c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36897cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368980: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x368980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368984: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368988: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36898c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x36898cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368990: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368994: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368998: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36899c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x36899cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3689a0: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x3689a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3689a4: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x3689a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3689a8: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x3689a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3689ac: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x3689acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3689b0: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x3689b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3689b4: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x3689b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3689b8: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x3689b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3689bc: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x3689bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3689c0: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x3689c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3689c4: 0x42000038  ei
    ctx->pc = 0x3689c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3689c8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x3689c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x3689cc: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x3689ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x3689d0: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x3689d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3689d4: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3689d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3689d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3689dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3689dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3689e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3689e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3689e4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3689e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3689e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3689e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3689ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3689ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3689f0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3689f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3689f4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3689f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3689f8:
    // 0x3689f8: 0x42000039  di
    ctx->pc = 0x3689f8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3689fc: 0x40f  sync.p
    ctx->pc = 0x3689fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368a00: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368a04: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x368a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x368a08: 0x0  nop
    ctx->pc = 0x368a08u;
    // NOP
    // 0x368a0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368A0Cu;
    {
        const bool branch_taken_0x368a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368a0c) {
            ctx->pc = 0x3689F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3689f8;
        }
    }
    ctx->pc = 0x368A14u;
    // 0x368a14: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x368a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x368a18: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x368a18u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368a1c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x368a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a20: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x368a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368a24: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x368a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368a28: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x368a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368a2c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368a2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368a30: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x368a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368a34: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x368a34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368a38: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x368a38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368a3c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x368a3cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368a40: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x368a40u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368a44: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x368a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368a48: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368a4c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368a50: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x368a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x368a54: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x368a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368a58: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368a5c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a60: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x368a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368a64: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x368a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368a68: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a6c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x368a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a70: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x368a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a74: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x368a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368a78: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368a78u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368a7c: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x368a7cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368a80: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a84: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x368a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368a88: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368a8c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x368a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368a90: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a94: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x368a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368a98: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368a9c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368aa0: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368aa4: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368aa8: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368aac: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368ab0: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368ab4: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x368ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368ab8: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368abc: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x368abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368ac0: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368ac4: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368ac8: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x368acc: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x368accu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368ad0: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368ad4: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368ad8: 0x42000038  ei
    ctx->pc = 0x368ad8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368adc: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368ae0: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x368ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x368ae4: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x368ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x368ae8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x368ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x368aec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x368aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368af0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x368af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368af4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x368af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368af8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x368af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368afc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x368afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368b00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x368b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x368b04: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x368b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b08: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x368b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_368b0c:
    // 0x368b0c: 0x42000039  di
    ctx->pc = 0x368b0cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368b10: 0x40f  sync.p
    ctx->pc = 0x368b10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368b14: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368b18: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x368b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x368b1c: 0x0  nop
    ctx->pc = 0x368b1cu;
    // NOP
    // 0x368b20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368B20u;
    {
        const bool branch_taken_0x368b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368b20) {
            ctx->pc = 0x368B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368b0c;
        }
    }
    ctx->pc = 0x368B28u;
    // 0x368b28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x368b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x368b2c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x368b2cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368b30: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x368b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b34: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x368b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368b38: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x368b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368b3c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x368b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368b40: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x368b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368b44: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x368b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x368b48: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x368b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x368b4c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x368b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368b50: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x368b50u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368b54: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x368b54u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368b58: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x368b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368b5c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x368b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368b60: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x368b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368b64: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x368b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x368b68: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x368b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368b6c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x368b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368b70: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x368b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b74: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x368b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x368b78: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x368b78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368b7c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x368b7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b80: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x368b80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b84: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x368b84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b88: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x368b88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368b8c: 0xda140000  lqc2        $vf20, 0x0($s0)
    ctx->pc = 0x368b8cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368b90: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x368b90u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368b94: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x368b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368b98: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x368b98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x368b9c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x368b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x368ba0: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x368ba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x368ba4: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x368ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368ba8: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x368ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x368bac: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368bb0: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x368bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368bb4: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368bb8: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x368bb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368bbc: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x368bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368bc0: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x368bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368bc4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x368bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x368bc8: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x368bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368bcc: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x368bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x368bd0: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x368bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x368bd4: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x368bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x368bd8: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x368bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x368bdc: 0xfa350000  sqc2        $vf21, 0x0($s1)
    ctx->pc = 0x368bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x368be0: 0xfa360010  sqc2        $vf22, 0x10($s1)
    ctx->pc = 0x368be0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x368be4: 0xfa370020  sqc2        $vf23, 0x20($s1)
    ctx->pc = 0x368be4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x368be8: 0xfa380030  sqc2        $vf24, 0x30($s1)
    ctx->pc = 0x368be8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x368bec: 0x42000038  ei
    ctx->pc = 0x368becu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368bf0: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x368bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x368bf4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x368bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x368bf8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x368bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x368bfc: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x368bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x368c00: 0x1640feeb  bnez        $s2, . + 4 + (-0x115 << 2)
    ctx->pc = 0x368C00u;
    {
        const bool branch_taken_0x368c00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x368C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C00u;
        // 0x368c04: 0x2278821  addu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c00) {
            ctx->pc = 0x3687B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3687b0;
        }
    }
    ctx->pc = 0x368C08u;
label_368c08:
    // 0x368c08: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x368c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_368c0c:
    // 0x368c0c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x368c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x368c10: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x368c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x368c14: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x368c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x368c18: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x368c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368c1c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x368c1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x368c20: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x368c20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x368c24: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x368c24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368c28: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x368c28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x368c2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x368c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368c30: 0x3e00008  jr          $ra
    ctx->pc = 0x368C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C30u;
        // 0x368c34: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368C38u;
}
