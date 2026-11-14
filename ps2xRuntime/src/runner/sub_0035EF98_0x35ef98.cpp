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

// Function: sub_0035EF98
// Address: 0x35ef98 - 0x361a50
void sub_0035EF98_0x35ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF98_0x35ef98");
#endif

    switch (ctx->pc) {
        case 0x35f004u: goto label_35f004;
        case 0x35f030u: goto label_35f030;
        case 0x35f080u: goto label_35f080;
        case 0x35f0a8u: goto label_35f0a8;
        case 0x35f130u: goto label_35f130;
        case 0x35f23cu: goto label_35f23c;
        case 0x35f2f8u: goto label_35f2f8;
        case 0x35f318u: goto label_35f318;
        case 0x35f378u: goto label_35f378;
        case 0x35f3a0u: goto label_35f3a0;
        case 0x35f408u: goto label_35f408;
        case 0x35f430u: goto label_35f430;
        case 0x35f498u: goto label_35f498;
        case 0x35f4c0u: goto label_35f4c0;
        case 0x35f528u: goto label_35f528;
        case 0x35f550u: goto label_35f550;
        case 0x35f598u: goto label_35f598;
        case 0x35f5c8u: goto label_35f5c8;
        case 0x35f724u: goto label_35f724;
        case 0x35f880u: goto label_35f880;
        case 0x35f9dcu: goto label_35f9dc;
        case 0x35fb40u: goto label_35fb40;
        case 0x35fb7cu: goto label_35fb7c;
        case 0x35fba0u: goto label_35fba0;
        case 0x35fc60u: goto label_35fc60;
        case 0x35fcc8u: goto label_35fcc8;
        case 0x35fcf0u: goto label_35fcf0;
        case 0x35fd90u: goto label_35fd90;
        case 0x35fdb8u: goto label_35fdb8;
        case 0x35fe48u: goto label_35fe48;
        case 0x35fe70u: goto label_35fe70;
        case 0x35fefcu: goto label_35fefc;
        case 0x35ff20u: goto label_35ff20;
        case 0x35ffa8u: goto label_35ffa8;
        case 0x360114u: goto label_360114;
        case 0x360260u: goto label_360260;
        case 0x360290u: goto label_360290;
        case 0x3603ecu: goto label_3603ec;
        case 0x360548u: goto label_360548;
        case 0x3606a4u: goto label_3606a4;
        case 0x360814u: goto label_360814;
        case 0x36085cu: goto label_36085c;
        case 0x360880u: goto label_360880;
        case 0x36098cu: goto label_36098c;
        case 0x360aacu: goto label_360aac;
        case 0x360bc4u: goto label_360bc4;
        case 0x360cb0u: goto label_360cb0;
        case 0x360ce0u: goto label_360ce0;
        case 0x360df4u: goto label_360df4;
        case 0x360f08u: goto label_360f08;
        case 0x36101cu: goto label_36101c;
        case 0x361164u: goto label_361164;
        case 0x361270u: goto label_361270;
        case 0x3612fcu: goto label_3612fc;
        case 0x361410u: goto label_361410;
        case 0x361518u: goto label_361518;
        case 0x361608u: goto label_361608;
        case 0x361628u: goto label_361628;
        case 0x36172cu: goto label_36172c;
        case 0x361830u: goto label_361830;
        case 0x361934u: goto label_361934;
        default: break;
    }

    ctx->pc = 0x35ef98u;

    // 0x35ef98: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x35ef9c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x35ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x35efa0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x35efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x35efa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35efa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efa8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x35efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x35efac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35efacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efb0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x35efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x35efb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x35efb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efb8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x35efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x35efbc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x35efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x35efc0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x35efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x35efc4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x35efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x35efc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x35efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x35efcc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x35efd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35efd4: 0x8d150020  lw          $s5, 0x20($t0)
    ctx->pc = 0x35efd4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35efd8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x35efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x35efdc: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x35efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x35efe0: 0x8d170008  lw          $s7, 0x8($t0)
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35efe4: 0x8d1e0038  lw          $fp, 0x38($t0)
    ctx->pc = 0x35efe4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x35efe8: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x35efe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35efec: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x35efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x35eff0: 0x8d10001c  lw          $s0, 0x1C($t0)
    ctx->pc = 0x35eff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x35eff4: 0x16e20846  bne         $s7, $v0, . + 4 + (0x846 << 2)
    ctx->pc = 0x35EFF4u;
    {
        const bool branch_taken_0x35eff4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x35EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFF4u;
        // 0x35eff8: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eff4) {
            ctx->pc = 0x361110u;
            goto label_361110;
        }
    }
    ctx->pc = 0x35EFFCu;
    // 0x35effc: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x35EFFCu;
    SET_GPR_U32(ctx, 31, 0x35F004u);
    ctx->pc = 0x35F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFFCu;
    // 0x35f000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x35EFFCu, 0x35F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F004u;
label_35f004:
    // 0x35f004: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35f008: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35f00c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35f010: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35f010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35f014: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35F014u;
    {
        const bool branch_taken_0x35f014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F014u;
        // 0x35f018: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f014) {
            ctx->pc = 0x35F050u;
            goto label_35f050;
        }
    }
    ctx->pc = 0x35F01Cu;
    // 0x35f01c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35f020: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35f024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35f024u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35f028: 0xf  sync
    ctx->pc = 0x35f028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f02c: 0x40f  sync.p
    ctx->pc = 0x35f02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f030:
    // 0x35f030: 0x0  nop
    ctx->pc = 0x35f030u;
    // NOP
    // 0x35f034: 0x0  nop
    ctx->pc = 0x35f034u;
    // NOP
    // 0x35f038: 0x0  nop
    ctx->pc = 0x35f038u;
    // NOP
    // 0x35f03c: 0x0  nop
    ctx->pc = 0x35f03cu;
    // NOP
    // 0x35f040: 0x0  nop
    ctx->pc = 0x35f040u;
    // NOP
    // 0x35f044: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F044u;
    {
        const bool branch_taken_0x35f044 = (false);
        if (branch_taken_0x35f044) {
            ctx->pc = 0x35F030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f030;
        }
    }
    ctx->pc = 0x35F04Cu;
    // 0x35f04c: 0x0  nop
    ctx->pc = 0x35f04cu;
    // NOP
label_35f050:
    // 0x35f050: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f054: 0x2ac800b0  slti        $t0, $s6, 0xB0
    ctx->pc = 0x35f054u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x35f058: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f05c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f060: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f064: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35F064u;
    {
        const bool branch_taken_0x35f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F064u;
        // 0x35f068: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f064) {
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35F06Cu;
    // 0x35f06c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35f070: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35f074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35f074u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35f078: 0xf  sync
    ctx->pc = 0x35f078u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f07c: 0x40f  sync.p
    ctx->pc = 0x35f07cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f080:
    // 0x35f080: 0x0  nop
    ctx->pc = 0x35f080u;
    // NOP
    // 0x35f084: 0x0  nop
    ctx->pc = 0x35f084u;
    // NOP
    // 0x35f088: 0x0  nop
    ctx->pc = 0x35f088u;
    // NOP
    // 0x35f08c: 0x0  nop
    ctx->pc = 0x35f08cu;
    // NOP
    // 0x35f090: 0x0  nop
    ctx->pc = 0x35f090u;
    // NOP
    // 0x35f094: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F094u;
    {
        const bool branch_taken_0x35f094 = (false);
        if (branch_taken_0x35f094) {
            ctx->pc = 0x35F080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f080;
        }
    }
    ctx->pc = 0x35F09Cu;
    // 0x35f09c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f0a0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f0a4: 0x0  nop
    ctx->pc = 0x35f0a4u;
    // NOP
label_35f0a8:
    // 0x35f0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35f0ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f0b0: 0x0  nop
    ctx->pc = 0x35f0b0u;
    // NOP
    // 0x35f0b4: 0x0  nop
    ctx->pc = 0x35f0b4u;
    // NOP
    // 0x35f0b8: 0x0  nop
    ctx->pc = 0x35f0b8u;
    // NOP
    // 0x35f0bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F0BCu;
    {
        const bool branch_taken_0x35f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f0bc) {
            ctx->pc = 0x35F0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f0a8;
        }
    }
    ctx->pc = 0x35F0C4u;
label_35f0c4:
    // 0x35f0c4: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x35f0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x35f0c8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35f0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35f0cc: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x35f0ccu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x35f0d0: 0x34e73f40  ori         $a3, $a3, 0x3F40
    ctx->pc = 0x35f0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16192);
    // 0x35f0d4: 0x34c63f50  ori         $a2, $a2, 0x3F50
    ctx->pc = 0x35f0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16208);
    // 0x35f0d8: 0x37183f60  ori         $t8, $t8, 0x3F60
    ctx->pc = 0x35f0d8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)16224);
    // 0x35f0dc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x35f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f0e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35f0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x35f0e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35f0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35f0e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35f0e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35f0ec: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x35f0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F40u, bits); }
    // 0x35f0f0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x35f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f0f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x35f0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35f0f8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x35f0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F44u, bits); }
    // 0x35f0fc: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x35f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f100: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35f100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35f104: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x35f104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F48u, bits); }
    // 0x35f108: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x35f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f10c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x35f10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35f110: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x35f110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F50u, bits); }
    // 0x35f114: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x35f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f118: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35f118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35f11c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x35f11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F54u, bits); }
    // 0x35f120: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x35f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f124: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x35f124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35f128: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x35f128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F58u, bits); }
    // 0x35f12c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x35f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_35f130:
    // 0x35f130: 0x42000039  di
    ctx->pc = 0x35f130u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f134: 0x40f  sync.p
    ctx->pc = 0x35f134u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f138: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x35f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x35f13c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x35f13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f140: 0x0  nop
    ctx->pc = 0x35f140u;
    // NOP
    // 0x35f144: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F144u;
    {
        const bool branch_taken_0x35f144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f144) {
            ctx->pc = 0x35F130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f130;
        }
    }
    ctx->pc = 0x35F14Cu;
    // 0x35f14c: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x35f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x35f150: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x35f150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x35f154: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f154u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f158: 0x4a0002ff  vnop
    ctx->pc = 0x35f158u;
    // NOP operation, no action needed for VU0
    // 0x35f15c: 0x4a0002ff  vnop
    ctx->pc = 0x35f15cu;
    // NOP operation, no action needed for VU0
    // 0x35f160: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x35f160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35f164: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x35f164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x35f168: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x35f168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x35f16c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f16cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f170: 0x4a0002ff  vnop
    ctx->pc = 0x35f170u;
    // NOP operation, no action needed for VU0
    // 0x35f174: 0x4a0002ff  vnop
    ctx->pc = 0x35f174u;
    // NOP operation, no action needed for VU0
    // 0x35f178: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x35f178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35f17c: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x35f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x35f180: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x35f180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x35f184: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f184u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f188: 0x4a0002ff  vnop
    ctx->pc = 0x35f188u;
    // NOP operation, no action needed for VU0
    // 0x35f18c: 0x4a0002ff  vnop
    ctx->pc = 0x35f18cu;
    // NOP operation, no action needed for VU0
    // 0x35f190: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x35f190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35f194: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x35f194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x35f198: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x35f198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x35f19c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f19cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f1a0: 0x4a0002ff  vnop
    ctx->pc = 0x35f1a0u;
    // NOP operation, no action needed for VU0
    // 0x35f1a4: 0x4a0002ff  vnop
    ctx->pc = 0x35f1a4u;
    // NOP operation, no action needed for VU0
    // 0x35f1a8: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x35f1a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35f1ac: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x35f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x35f1b0: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x35f1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x35f1b4: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f1b4u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f1b8: 0x4a0002ff  vnop
    ctx->pc = 0x35f1b8u;
    // NOP operation, no action needed for VU0
    // 0x35f1bc: 0x4a0002ff  vnop
    ctx->pc = 0x35f1bcu;
    // NOP operation, no action needed for VU0
    // 0x35f1c0: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x35f1c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35f1c4: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x35f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x35f1c8: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x35f1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x35f1cc: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f1ccu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f1d0: 0x4a0002ff  vnop
    ctx->pc = 0x35f1d0u;
    // NOP operation, no action needed for VU0
    // 0x35f1d4: 0x4a0002ff  vnop
    ctx->pc = 0x35f1d4u;
    // NOP operation, no action needed for VU0
    // 0x35f1d8: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x35f1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35f1dc: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x35f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x35f1e0: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x35f1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x35f1e4: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f1e4u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f1e8: 0x4a0002ff  vnop
    ctx->pc = 0x35f1e8u;
    // NOP operation, no action needed for VU0
    // 0x35f1ec: 0x4a0002ff  vnop
    ctx->pc = 0x35f1ecu;
    // NOP operation, no action needed for VU0
    // 0x35f1f0: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x35f1f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35f1f4: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x35f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x35f1f8: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x35f1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x35f1fc: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f1fcu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f200: 0x4a0002ff  vnop
    ctx->pc = 0x35f200u;
    // NOP operation, no action needed for VU0
    // 0x35f204: 0x4a0002ff  vnop
    ctx->pc = 0x35f204u;
    // NOP operation, no action needed for VU0
    // 0x35f208: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x35f208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35f20c: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x35f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x35f210: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x35f210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x35f214: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f214u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f218: 0x4a0002ff  vnop
    ctx->pc = 0x35f218u;
    // NOP operation, no action needed for VU0
    // 0x35f21c: 0x4a0002ff  vnop
    ctx->pc = 0x35f21cu;
    // NOP operation, no action needed for VU0
    // 0x35f220: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x35f220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35f224: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x35f224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x35f228: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x35f228u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35f22c: 0x4a0002ff  vnop
    ctx->pc = 0x35f22cu;
    // NOP operation, no action needed for VU0
    // 0x35f230: 0x4a0002ff  vnop
    ctx->pc = 0x35f230u;
    // NOP operation, no action needed for VU0
    // 0x35f234: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x35f234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x35f238: 0x42000038  ei
    ctx->pc = 0x35f238u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_35f23c:
    // 0x35f23c: 0x42000039  di
    ctx->pc = 0x35f23cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f240: 0x40f  sync.p
    ctx->pc = 0x35f240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f244: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x35f244u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x35f248: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x35f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f24c: 0x0  nop
    ctx->pc = 0x35f24cu;
    // NOP
    // 0x35f250: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F250u;
    {
        const bool branch_taken_0x35f250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f250) {
            ctx->pc = 0x35F23Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f23c;
        }
    }
    ctx->pc = 0x35F258u;
    // 0x35f258: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x35f258u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35f25c: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x35f25cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35f260: 0x42000038  ei
    ctx->pc = 0x35f260u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35f264: 0x1500026c  bnez        $t0, . + 4 + (0x26C << 2)
    ctx->pc = 0x35F264u;
    {
        const bool branch_taken_0x35f264 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F264u;
        // 0x35f268: 0x2ac20004  slti        $v0, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f264) {
            ctx->pc = 0x35FC18u;
            goto label_35fc18;
        }
    }
    ctx->pc = 0x35F26Cu;
    // 0x35f26c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x35f26cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x35f270: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35f274: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x35f274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x35f278: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35f27c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x35f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x35f280: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x35f280u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x35f284: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x35f284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x35f288: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x35f288u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x35f28c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x35f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35f290: 0x35efe020  ori         $t7, $t7, 0xE020
    ctx->pc = 0x35f290u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)57376);
    // 0x35f294: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x35f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f298: 0x24190100  addiu       $t9, $zero, 0x100
    ctx->pc = 0x35f298u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35f29c: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x35f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x35f2a0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35f2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35f2a4: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x35f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x35f2a8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35f2ac: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x35f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x35f2b0: 0x35add400  ori         $t5, $t5, 0xD400
    ctx->pc = 0x35f2b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)54272);
    // 0x35f2b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x35f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x35f2b8: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x35f2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35f2bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x35f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35f2c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f2c4: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x35f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x35f2c8: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x35f2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x35f2cc: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x35f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x35f2d0: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x35f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x35f2d4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x35f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x35f2d8: 0x34e7e010  ori         $a3, $a3, 0xE010
    ctx->pc = 0x35f2d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57360);
    // 0x35f2dc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x35f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x35f2e0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x35f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x35f2e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x35f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35f2e8: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x35f2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x35f2ec: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x35f2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x35f2f0: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x35f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x35f2f4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x35f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_35f2f8:
    // 0x35f2f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35f2fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f300: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f304: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35F304u;
    {
        const bool branch_taken_0x35f304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f304) {
            ctx->pc = 0x35F338u;
            goto label_35f338;
        }
    }
    ctx->pc = 0x35F30Cu;
    // 0x35f30c: 0xadf90000  sw          $t9, 0x0($t7)
    ctx->pc = 0x35f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 25));
    // 0x35f310: 0xf  sync
    ctx->pc = 0x35f310u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f314: 0x40f  sync.p
    ctx->pc = 0x35f314u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f318:
    // 0x35f318: 0x0  nop
    ctx->pc = 0x35f318u;
    // NOP
    // 0x35f31c: 0x0  nop
    ctx->pc = 0x35f31cu;
    // NOP
    // 0x35f320: 0x0  nop
    ctx->pc = 0x35f320u;
    // NOP
    // 0x35f324: 0x0  nop
    ctx->pc = 0x35f324u;
    // NOP
    // 0x35f328: 0x0  nop
    ctx->pc = 0x35f328u;
    // NOP
    // 0x35f32c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F32Cu;
    {
        const bool branch_taken_0x35f32c = (false);
        if (branch_taken_0x35f32c) {
            ctx->pc = 0x35F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f318;
        }
    }
    ctx->pc = 0x35F334u;
    // 0x35f334: 0x0  nop
    ctx->pc = 0x35f334u;
    // NOP
label_35f338:
    // 0x35f338: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35f33c: 0x26432c00  addiu       $v1, $s2, 0x2C00
    ctx->pc = 0x35f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11264));
    // 0x35f340: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x35f340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x35f344: 0x26d6ff50  addiu       $s6, $s6, -0xB0
    ctx->pc = 0x35f344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967120));
    // 0x35f348: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x35f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f34c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f350: 0xafb60064  sw          $s6, 0x64($sp)
    ctx->pc = 0x35f350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 22));
    // 0x35f354: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x35f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x35f358: 0x26360b00  addiu       $s6, $s1, 0xB00
    ctx->pc = 0x35f358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2816));
    // 0x35f35c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x35f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x35f360: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x35f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x35f364: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F364u;
    {
        const bool branch_taken_0x35f364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F364u;
        // 0x35f368: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f364) {
            ctx->pc = 0x35F3BCu;
            goto label_35f3bc;
        }
    }
    ctx->pc = 0x35F36Cu;
    // 0x35f36c: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x35f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x35f370: 0xf  sync
    ctx->pc = 0x35f370u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f374: 0x40f  sync.p
    ctx->pc = 0x35f374u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f378:
    // 0x35f378: 0x0  nop
    ctx->pc = 0x35f378u;
    // NOP
    // 0x35f37c: 0x0  nop
    ctx->pc = 0x35f37cu;
    // NOP
    // 0x35f380: 0x0  nop
    ctx->pc = 0x35f380u;
    // NOP
    // 0x35f384: 0x0  nop
    ctx->pc = 0x35f384u;
    // NOP
    // 0x35f388: 0x0  nop
    ctx->pc = 0x35f388u;
    // NOP
    // 0x35f38c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F38Cu;
    {
        const bool branch_taken_0x35f38c = (false);
        if (branch_taken_0x35f38c) {
            ctx->pc = 0x35F378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f378;
        }
    }
    ctx->pc = 0x35F394u;
    // 0x35f394: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f398: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f39c: 0x0  nop
    ctx->pc = 0x35f39cu;
    // NOP
label_35f3a0:
    // 0x35f3a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35f3a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f3a8: 0x0  nop
    ctx->pc = 0x35f3a8u;
    // NOP
    // 0x35f3ac: 0x0  nop
    ctx->pc = 0x35f3acu;
    // NOP
    // 0x35f3b0: 0x0  nop
    ctx->pc = 0x35f3b0u;
    // NOP
    // 0x35f3b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F3B4u;
    {
        const bool branch_taken_0x35f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f3b4) {
            ctx->pc = 0x35F3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f3a0;
        }
    }
    ctx->pc = 0x35F3BCu;
label_35f3bc:
    // 0x35f3bc: 0xacf40000  sw          $s4, 0x0($a3)
    ctx->pc = 0x35f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
    // 0x35f3c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x35f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35f3c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35f3c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x35f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f3cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x35f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f3d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f3d4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x35f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35f3d8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x35f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x35f3dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f3e0: 0xadb90000  sw          $t9, 0x0($t5)
    ctx->pc = 0x35f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 25));
    // 0x35f3e4: 0xf  sync
    ctx->pc = 0x35f3e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f3e8: 0x40f  sync.p
    ctx->pc = 0x35f3e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f3ec: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35f3f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f3f4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F3F4u;
    {
        const bool branch_taken_0x35f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f3f4) {
            ctx->pc = 0x35F44Cu;
            goto label_35f44c;
        }
    }
    ctx->pc = 0x35F3FCu;
    // 0x35f3fc: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x35f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x35f400: 0xf  sync
    ctx->pc = 0x35f400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f404: 0x40f  sync.p
    ctx->pc = 0x35f404u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f408:
    // 0x35f408: 0x0  nop
    ctx->pc = 0x35f408u;
    // NOP
    // 0x35f40c: 0x0  nop
    ctx->pc = 0x35f40cu;
    // NOP
    // 0x35f410: 0x0  nop
    ctx->pc = 0x35f410u;
    // NOP
    // 0x35f414: 0x0  nop
    ctx->pc = 0x35f414u;
    // NOP
    // 0x35f418: 0x0  nop
    ctx->pc = 0x35f418u;
    // NOP
    // 0x35f41c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F41Cu;
    {
        const bool branch_taken_0x35f41c = (false);
        if (branch_taken_0x35f41c) {
            ctx->pc = 0x35F408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f408;
        }
    }
    ctx->pc = 0x35F424u;
    // 0x35f424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f428: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f42c: 0x0  nop
    ctx->pc = 0x35f42cu;
    // NOP
label_35f430:
    // 0x35f430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f430u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35f434: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f438: 0x0  nop
    ctx->pc = 0x35f438u;
    // NOP
    // 0x35f43c: 0x0  nop
    ctx->pc = 0x35f43cu;
    // NOP
    // 0x35f440: 0x0  nop
    ctx->pc = 0x35f440u;
    // NOP
    // 0x35f444: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F444u;
    {
        const bool branch_taken_0x35f444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f444) {
            ctx->pc = 0x35F430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f430;
        }
    }
    ctx->pc = 0x35F44Cu;
label_35f44c:
    // 0x35f44c: 0xacf40000  sw          $s4, 0x0($a3)
    ctx->pc = 0x35f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
    // 0x35f450: 0x240202c0  addiu       $v0, $zero, 0x2C0
    ctx->pc = 0x35f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x35f454: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x35f454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35f458: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f45c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x35f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f460: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35f460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x35f464: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x35f464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x35f468: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x35f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35f46c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35f470: 0xadb90000  sw          $t9, 0x0($t5)
    ctx->pc = 0x35f470u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 25));
    // 0x35f474: 0xf  sync
    ctx->pc = 0x35f474u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f478: 0x40f  sync.p
    ctx->pc = 0x35f478u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f47c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35f480: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f484: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F484u;
    {
        const bool branch_taken_0x35f484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f484) {
            ctx->pc = 0x35F4DCu;
            goto label_35f4dc;
        }
    }
    ctx->pc = 0x35F48Cu;
    // 0x35f48c: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x35f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x35f490: 0xf  sync
    ctx->pc = 0x35f490u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f494: 0x40f  sync.p
    ctx->pc = 0x35f494u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f498:
    // 0x35f498: 0x0  nop
    ctx->pc = 0x35f498u;
    // NOP
    // 0x35f49c: 0x0  nop
    ctx->pc = 0x35f49cu;
    // NOP
    // 0x35f4a0: 0x0  nop
    ctx->pc = 0x35f4a0u;
    // NOP
    // 0x35f4a4: 0x0  nop
    ctx->pc = 0x35f4a4u;
    // NOP
    // 0x35f4a8: 0x0  nop
    ctx->pc = 0x35f4a8u;
    // NOP
    // 0x35f4ac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F4ACu;
    {
        const bool branch_taken_0x35f4ac = (false);
        if (branch_taken_0x35f4ac) {
            ctx->pc = 0x35F498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f498;
        }
    }
    ctx->pc = 0x35F4B4u;
    // 0x35f4b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f4b8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f4bc: 0x0  nop
    ctx->pc = 0x35f4bcu;
    // NOP
label_35f4c0:
    // 0x35f4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35f4c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f4c8: 0x0  nop
    ctx->pc = 0x35f4c8u;
    // NOP
    // 0x35f4cc: 0x0  nop
    ctx->pc = 0x35f4ccu;
    // NOP
    // 0x35f4d0: 0x0  nop
    ctx->pc = 0x35f4d0u;
    // NOP
    // 0x35f4d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F4D4u;
    {
        const bool branch_taken_0x35f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f4d4) {
            ctx->pc = 0x35F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f4c0;
        }
    }
    ctx->pc = 0x35F4DCu;
label_35f4dc:
    // 0x35f4dc: 0xacf40000  sw          $s4, 0x0($a3)
    ctx->pc = 0x35f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
    // 0x35f4e0: 0x24030840  addiu       $v1, $zero, 0x840
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x35f4e4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35f4e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35f4ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x35f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f4f0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x35f4f4: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x35f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x35f4f8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x35f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35f4fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f500: 0xadb90000  sw          $t9, 0x0($t5)
    ctx->pc = 0x35f500u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 25));
    // 0x35f504: 0xf  sync
    ctx->pc = 0x35f504u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f508: 0x40f  sync.p
    ctx->pc = 0x35f508u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f50c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35f510: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f514: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F514u;
    {
        const bool branch_taken_0x35f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F514u;
        // 0x35f518: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f514) {
            ctx->pc = 0x35F56Cu;
            goto label_35f56c;
        }
    }
    ctx->pc = 0x35F51Cu;
    // 0x35f51c: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x35f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x35f520: 0xf  sync
    ctx->pc = 0x35f520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f524: 0x40f  sync.p
    ctx->pc = 0x35f524u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35f528:
    // 0x35f528: 0x0  nop
    ctx->pc = 0x35f528u;
    // NOP
    // 0x35f52c: 0x0  nop
    ctx->pc = 0x35f52cu;
    // NOP
    // 0x35f530: 0x0  nop
    ctx->pc = 0x35f530u;
    // NOP
    // 0x35f534: 0x0  nop
    ctx->pc = 0x35f534u;
    // NOP
    // 0x35f538: 0x0  nop
    ctx->pc = 0x35f538u;
    // NOP
    // 0x35f53c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F53Cu;
    {
        const bool branch_taken_0x35f53c = (false);
        if (branch_taken_0x35f53c) {
            ctx->pc = 0x35F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f528;
        }
    }
    ctx->pc = 0x35F544u;
    // 0x35f544: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35f544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35f548: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35f54c: 0x0  nop
    ctx->pc = 0x35f54cu;
    // NOP
label_35f550:
    // 0x35f550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f550u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35f554: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35f558: 0x0  nop
    ctx->pc = 0x35f558u;
    // NOP
    // 0x35f55c: 0x0  nop
    ctx->pc = 0x35f55cu;
    // NOP
    // 0x35f560: 0x0  nop
    ctx->pc = 0x35f560u;
    // NOP
    // 0x35f564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F564u;
    {
        const bool branch_taken_0x35f564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F564u;
        // 0x35f568: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f564) {
            ctx->pc = 0x35F550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f550;
        }
    }
    ctx->pc = 0x35F56Cu;
label_35f56c:
    // 0x35f56c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x35f56cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x35f570: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35f570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35f574: 0x352902c0  ori         $t1, $t1, 0x2C0
    ctx->pc = 0x35f574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)704);
    // 0x35f578: 0x35080840  ori         $t0, $t0, 0x840
    ctx->pc = 0x35f578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2112);
    // 0x35f57c: 0x34c61340  ori         $a2, $a2, 0x1340
    ctx->pc = 0x35f57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4928);
    // 0x35f580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35f580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f584: 0x3c0e0001  lui         $t6, 0x1
    ctx->pc = 0x35f584u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1 << 16));
    // 0x35f588: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x35f58c: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x35f58cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x35f590: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x35f590u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x35f594: 0x0  nop
    ctx->pc = 0x35f594u;
    // NOP
label_35f598:
    // 0x35f598: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x35f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f59c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f5a0: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x35f5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x35f5a4: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x35f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f5a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f5ac: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x35f5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x35f5b0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x35f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f5b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f5b8: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x35f5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x35f5bc: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x35f5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f5c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f5c4: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x35f5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_35f5c8:
    // 0x35f5c8: 0x42000039  di
    ctx->pc = 0x35f5c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f5cc: 0x40f  sync.p
    ctx->pc = 0x35f5ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f5d0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35f5d4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x35f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x35f5d8: 0x0  nop
    ctx->pc = 0x35f5d8u;
    // NOP
    // 0x35f5dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F5DCu;
    {
        const bool branch_taken_0x35f5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f5dc) {
            ctx->pc = 0x35F5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f5c8;
        }
    }
    ctx->pc = 0x35F5E4u;
    // 0x35f5e4: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x35f5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x35f5e8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35f5e8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f5ec: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35f5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f5f0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35f5f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f5f4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35f5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f5f8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35f5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f5fc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35f5fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f600: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35f600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f604: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35f604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f608: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35f608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f60c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35f60cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f610: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35f610u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f614: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35f614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f618: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35f618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f61c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35f61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f620: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35f620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35f624: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35f624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f628: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35f628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f62c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35f62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f630: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35f630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f634: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35f634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f638: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35f638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f63c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35f63cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f640: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35f640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f644: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35f644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f648: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x35f648u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35f64c: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x35f64cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35f650: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x35f650u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35f654: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x35f654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f658: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x35f658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f65c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x35f65cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f660: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x35f660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f664: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x35f664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f668: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x35f668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f66c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x35f66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f670: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x35f670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f674: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x35f674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f678: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x35f678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f67c: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x35f67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f680: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x35f680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f684: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35f684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f688: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35f688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f68c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35f68cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f690: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35f690u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f694: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35f694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f698: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35f698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f69c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35f69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f6a0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35f6a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f6a4: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35f6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f6a8: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35f6a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f6ac: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35f6acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f6b0: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35f6b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f6b4: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35f6b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f6b8: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35f6b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f6bc: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35f6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f6c0: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35f6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f6c4: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x35f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35f6c8: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x35f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35f6cc: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x35f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35f6d0: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x35f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35f6d4: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x35f6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35f6d8: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x35f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35f6dc: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x35f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35f6e0: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x35f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35f6e4: 0x42000038  ei
    ctx->pc = 0x35f6e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35f6e8: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x35f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x35f6ec: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x35f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x35f6f0: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x35f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x35f6f4: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x35f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f6f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f6fc: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x35f6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x35f700: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x35f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f704: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f708: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x35f708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x35f70c: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x35f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f710: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f714: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x35f714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x35f718: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x35f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f71c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f720: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x35f720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_35f724:
    // 0x35f724: 0x42000039  di
    ctx->pc = 0x35f724u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f728: 0x40f  sync.p
    ctx->pc = 0x35f728u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f72c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35f730: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x35f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x35f734: 0x0  nop
    ctx->pc = 0x35f734u;
    // NOP
    // 0x35f738: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F738u;
    {
        const bool branch_taken_0x35f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f738) {
            ctx->pc = 0x35F724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f724;
        }
    }
    ctx->pc = 0x35F740u;
    // 0x35f740: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x35f740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x35f744: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35f744u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f748: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35f748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f74c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35f74cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f750: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35f750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f754: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35f754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f758: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35f758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f75c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35f75cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f760: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35f760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f764: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35f764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f768: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35f768u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f76c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35f76cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f770: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35f770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f774: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35f774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f778: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35f778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f77c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35f77cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35f780: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35f780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f784: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35f784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f788: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35f788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f78c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35f78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f790: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35f790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f794: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35f794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f798: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35f798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f79c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35f79cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f7a0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35f7a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f7a4: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x35f7a4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35f7a8: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x35f7a8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35f7ac: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x35f7acu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f7b0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x35f7b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f7b4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x35f7b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f7b8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x35f7b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f7bc: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x35f7bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f7c0: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x35f7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f7c4: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x35f7c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f7c8: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x35f7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f7cc: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x35f7ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f7d0: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x35f7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f7d4: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x35f7d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f7d8: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x35f7d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f7dc: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x35f7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f7e0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35f7e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f7e4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35f7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f7e8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35f7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f7ec: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35f7ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f7f0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35f7f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f7f4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35f7f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f7f8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35f7f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f7fc: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35f7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f800: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35f800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f804: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35f804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f808: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35f808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f80c: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35f80cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f810: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35f810u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f814: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35f814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f818: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35f818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f81c: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35f81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f820: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35f820u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35f824: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35f824u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35f828: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35f828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35f82c: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35f830: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35f830u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35f834: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35f834u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35f838: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35f838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35f83c: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35f840: 0x42000038  ei
    ctx->pc = 0x35f840u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35f844: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x35f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x35f848: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35f84c: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x35f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35f850: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x35f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f854: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f858: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x35f858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x35f85c: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x35f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f860: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f864: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x35f864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x35f868: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x35f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f86c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f870: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x35f870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x35f874: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x35f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f878: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f87c: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x35f87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_35f880:
    // 0x35f880: 0x42000039  di
    ctx->pc = 0x35f880u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f884: 0x40f  sync.p
    ctx->pc = 0x35f884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f888: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35f88c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x35f88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x35f890: 0x0  nop
    ctx->pc = 0x35f890u;
    // NOP
    // 0x35f894: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F894u;
    {
        const bool branch_taken_0x35f894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f894) {
            ctx->pc = 0x35F880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f880;
        }
    }
    ctx->pc = 0x35F89Cu;
    // 0x35f89c: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x35f89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x35f8a0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35f8a0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f8a4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35f8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f8a8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35f8a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f8ac: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35f8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f8b0: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35f8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f8b4: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35f8b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f8b8: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35f8b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35f8bc: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35f8bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35f8c0: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35f8c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f8c4: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35f8c4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f8c8: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35f8c8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f8cc: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35f8ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f8d0: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35f8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f8d4: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35f8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f8d8: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35f8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35f8dc: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35f8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35f8e0: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35f8e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35f8e4: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35f8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f8e8: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35f8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35f8ec: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35f8ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35f8f0: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35f8f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f8f4: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35f8f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f8f8: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35f8f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f8fc: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35f8fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35f900: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x35f900u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35f904: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x35f904u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35f908: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x35f908u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f90c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x35f90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f910: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x35f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f914: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x35f914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f918: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x35f918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f91c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x35f91cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f920: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x35f920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f924: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x35f924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35f928: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x35f928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f92c: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x35f92cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35f930: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x35f930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35f934: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x35f934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35f938: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x35f938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35f93c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35f93cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f940: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35f940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f944: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35f944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f948: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35f948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f94c: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35f94cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35f950: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35f950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35f954: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35f954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35f958: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35f958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35f95c: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35f95cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f960: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35f960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f964: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35f964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f968: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35f968u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f96c: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35f96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35f970: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35f970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35f974: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35f974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35f978: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35f978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35f97c: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35f980: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35f980u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35f984: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35f984u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35f988: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35f988u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35f98c: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35f990: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35f990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35f994: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35f994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35f998: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35f998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35f99c: 0x42000038  ei
    ctx->pc = 0x35f99cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35f9a0: 0x25050060  addiu       $a1, $t0, 0x60
    ctx->pc = 0x35f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x35f9a4: 0x25240030  addiu       $a0, $t1, 0x30
    ctx->pc = 0x35f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x35f9a8: 0x24c30180  addiu       $v1, $a2, 0x180
    ctx->pc = 0x35f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x35f9ac: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x35f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f9b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f9b4: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x35f9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x35f9b8: 0xc561001c  lwc1        $f1, 0x1C($t3)
    ctx->pc = 0x35f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f9bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f9c0: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x35f9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x35f9c4: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x35f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f9c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f9cc: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x35f9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x35f9d0: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x35f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f9d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35f9d8: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x35f9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_35f9dc:
    // 0x35f9dc: 0x42000039  di
    ctx->pc = 0x35f9dcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35f9e0: 0x40f  sync.p
    ctx->pc = 0x35f9e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35f9e4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35f9e8: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x35f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x35f9ec: 0x0  nop
    ctx->pc = 0x35f9ecu;
    // NOP
    // 0x35f9f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F9F0u;
    {
        const bool branch_taken_0x35f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f9f0) {
            ctx->pc = 0x35F9DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f9dc;
        }
    }
    ctx->pc = 0x35F9F8u;
    // 0x35f9f8: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x35f9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x35f9fc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35f9fcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35fa00: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35fa00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa04: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35fa04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35fa08: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35fa08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35fa0c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35fa0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35fa10: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35fa10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fa14: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35fa14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35fa18: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35fa18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35fa1c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35fa1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35fa20: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35fa20u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fa24: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35fa24u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35fa28: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35fa28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fa2c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35fa2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35fa30: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35fa30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35fa34: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x35fa34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35fa38: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x35fa38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35fa3c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x35fa3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35fa40: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x35fa40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa44: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x35fa44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35fa48: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x35fa48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fa4c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x35fa4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa50: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x35fa50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa54: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x35fa54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa58: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x35fa58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35fa5c: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x35fa5cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35fa60: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x35fa60u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35fa64: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x35fa64u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fa68: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x35fa68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa6c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x35fa6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35fa70: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x35fa70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa74: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x35fa74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35fa78: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x35fa78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa7c: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x35fa7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35fa80: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x35fa80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35fa84: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x35fa84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35fa88: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x35fa88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35fa8c: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x35fa8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35fa90: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x35fa90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35fa94: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x35fa94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35fa98: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x35fa98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35fa9c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x35fa9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35faa0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x35faa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35faa4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x35faa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35faa8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x35faa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35faac: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x35faacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35fab0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x35fab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35fab4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x35fab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35fab8: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x35fab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35fabc: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x35fabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35fac0: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x35fac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35fac4: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x35fac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35fac8: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x35fac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35facc: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x35faccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35fad0: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x35fad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35fad4: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x35fad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35fad8: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x35fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35fadc: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x35fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35fae0: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x35fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35fae4: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x35fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35fae8: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x35fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35faec: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x35faecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35faf0: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x35faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35faf4: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x35faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35faf8: 0x42000038  ei
    ctx->pc = 0x35faf8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35fafc: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x35fafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x35fb00: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x35fb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35fb04: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x35fb04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x35fb08: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x35fb08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x35fb0c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x35fb0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x35fb10: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x35fb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x35fb14: 0x2a6200b0  slti        $v0, $s3, 0xB0
    ctx->pc = 0x35fb14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x35fb18: 0x1440fe9f  bnez        $v0, . + 4 + (-0x161 << 2)
    ctx->pc = 0x35FB18u;
    {
        const bool branch_taken_0x35fb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB18u;
        // 0x35fb1c: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb18) {
            ctx->pc = 0x35F598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f598;
        }
    }
    ctx->pc = 0x35FB20u;
    // 0x35fb20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35fb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fb28: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fb2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35FB2Cu;
    {
        const bool branch_taken_0x35fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb2c) {
            ctx->pc = 0x35FB60u;
            goto label_35fb60;
        }
    }
    ctx->pc = 0x35FB34u;
    // 0x35fb34: 0xadf90000  sw          $t9, 0x0($t7)
    ctx->pc = 0x35fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 25));
    // 0x35fb38: 0xf  sync
    ctx->pc = 0x35fb38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fb3c: 0x40f  sync.p
    ctx->pc = 0x35fb3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fb40:
    // 0x35fb40: 0x0  nop
    ctx->pc = 0x35fb40u;
    // NOP
    // 0x35fb44: 0x0  nop
    ctx->pc = 0x35fb44u;
    // NOP
    // 0x35fb48: 0x0  nop
    ctx->pc = 0x35fb48u;
    // NOP
    // 0x35fb4c: 0x0  nop
    ctx->pc = 0x35fb4cu;
    // NOP
    // 0x35fb50: 0x0  nop
    ctx->pc = 0x35fb50u;
    // NOP
    // 0x35fb54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FB54u;
    {
        const bool branch_taken_0x35fb54 = (false);
        if (branch_taken_0x35fb54) {
            ctx->pc = 0x35FB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fb40;
        }
    }
    ctx->pc = 0x35FB5Cu;
    // 0x35fb5c: 0x0  nop
    ctx->pc = 0x35fb5cu;
    // NOP
label_35fb60:
    // 0x35fb60: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x35fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x35fb64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fb68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35FB68u;
    {
        const bool branch_taken_0x35fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb68) {
            ctx->pc = 0x35FBBCu;
            goto label_35fbbc;
        }
    }
    ctx->pc = 0x35FB70u;
    // 0x35fb70: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x35fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x35fb74: 0xf  sync
    ctx->pc = 0x35fb74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fb78: 0x40f  sync.p
    ctx->pc = 0x35fb78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fb7c:
    // 0x35fb7c: 0x0  nop
    ctx->pc = 0x35fb7cu;
    // NOP
    // 0x35fb80: 0x0  nop
    ctx->pc = 0x35fb80u;
    // NOP
    // 0x35fb84: 0x0  nop
    ctx->pc = 0x35fb84u;
    // NOP
    // 0x35fb88: 0x0  nop
    ctx->pc = 0x35fb88u;
    // NOP
    // 0x35fb8c: 0x0  nop
    ctx->pc = 0x35fb8cu;
    // NOP
    // 0x35fb90: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FB90u;
    {
        const bool branch_taken_0x35fb90 = (false);
        if (branch_taken_0x35fb90) {
            ctx->pc = 0x35FB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fb7c;
        }
    }
    ctx->pc = 0x35FB98u;
    // 0x35fb98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fb9c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35fba0:
    // 0x35fba0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35fba4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fba8: 0x0  nop
    ctx->pc = 0x35fba8u;
    // NOP
    // 0x35fbac: 0x0  nop
    ctx->pc = 0x35fbacu;
    // NOP
    // 0x35fbb0: 0x0  nop
    ctx->pc = 0x35fbb0u;
    // NOP
    // 0x35fbb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FBB4u;
    {
        const bool branch_taken_0x35fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fbb4) {
            ctx->pc = 0x35FBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fba0;
        }
    }
    ctx->pc = 0x35FBBCu;
label_35fbbc:
    // 0x35fbbc: 0xacf90000  sw          $t9, 0x0($a3)
    ctx->pc = 0x35fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 25));
    // 0x35fbc0: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x35fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x35fbc4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35fbcc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x35fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x35fbd0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x35fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x35fbd4: 0x240202c0  addiu       $v0, $zero, 0x2C0
    ctx->pc = 0x35fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x35fbd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x35fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35fbdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35fbe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35fbe4: 0xac790000  sw          $t9, 0x0($v1)
    ctx->pc = 0x35fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 25));
    // 0x35fbe8: 0xf  sync
    ctx->pc = 0x35fbe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fbec: 0x40f  sync.p
    ctx->pc = 0x35fbecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fbf0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x35fbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fbf4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x35fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x35fbf8: 0x8fb60064  lw          $s6, 0x64($sp)
    ctx->pc = 0x35fbf8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x35fbfc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x35fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x35fc00: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x35fc00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35fc04: 0x2ac200b0  slti        $v0, $s6, 0xB0
    ctx->pc = 0x35fc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x35fc08: 0x1040fdbb  beqz        $v0, . + 4 + (-0x245 << 2)
    ctx->pc = 0x35FC08u;
    {
        const bool branch_taken_0x35fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC08u;
        // 0x35fc0c: 0x8fb00054  lw          $s0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc08) {
            ctx->pc = 0x35F2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f2f8;
        }
    }
    ctx->pc = 0x35FC10u;
    // 0x35fc10: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x35fc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35fc14: 0x0  nop
    ctx->pc = 0x35fc14u;
    // NOP
label_35fc18:
    // 0x35fc18: 0x14400341  bnez        $v0, . + 4 + (0x341 << 2)
    ctx->pc = 0x35FC18u;
    {
        const bool branch_taken_0x35fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC18u;
        // 0x35fc1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc18) {
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x35FC20u;
    // 0x35fc20: 0x26c30003  addiu       $v1, $s6, 0x3
    ctx->pc = 0x35fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x35fc24: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x35fc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x35fc28: 0x2c2180b  movn        $v1, $s6, $v0
    ctx->pc = 0x35fc28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
    // 0x35fc2c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x35fc2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35fc30: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x35fc30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35fc34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fc38: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35fc3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35fc40: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35fc44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35FC44u;
    {
        const bool branch_taken_0x35fc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC44u;
        // 0x35fc48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc44) {
            ctx->pc = 0x35FC80u;
            goto label_35fc80;
        }
    }
    ctx->pc = 0x35FC4Cu;
    // 0x35fc4c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35fc50: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35fc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35fc54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35fc54u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35fc58: 0xf  sync
    ctx->pc = 0x35fc58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fc5c: 0x40f  sync.p
    ctx->pc = 0x35fc5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fc60:
    // 0x35fc60: 0x0  nop
    ctx->pc = 0x35fc60u;
    // NOP
    // 0x35fc64: 0x0  nop
    ctx->pc = 0x35fc64u;
    // NOP
    // 0x35fc68: 0x0  nop
    ctx->pc = 0x35fc68u;
    // NOP
    // 0x35fc6c: 0x0  nop
    ctx->pc = 0x35fc6cu;
    // NOP
    // 0x35fc70: 0x0  nop
    ctx->pc = 0x35fc70u;
    // NOP
    // 0x35fc74: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FC74u;
    {
        const bool branch_taken_0x35fc74 = (false);
        if (branch_taken_0x35fc74) {
            ctx->pc = 0x35FC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fc60;
        }
    }
    ctx->pc = 0x35FC7Cu;
    // 0x35fc7c: 0x0  nop
    ctx->pc = 0x35fc7cu;
    // NOP
label_35fc80:
    // 0x35fc80: 0x2cdb023  subu        $s6, $s6, $t5
    ctx->pc = 0x35fc80u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x35fc84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fc88: 0xafb60058  sw          $s6, 0x58($sp)
    ctx->pc = 0x35fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 22));
    // 0x35fc8c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35fc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35fc90: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x35fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35fc94: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x35fc94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x35fc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35fc9c: 0xdb7c3  sra         $s6, $t5, 31
    ctx->pc = 0x35fc9cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 13), 31));
    // 0x35fca0: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x35fca0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35fca4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35fca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35fca8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35FCA8u;
    {
        const bool branch_taken_0x35fca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCA8u;
        // 0x35fcac: 0x4c980  sll         $t9, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fca8) {
            ctx->pc = 0x35FD0Cu;
            goto label_35fd0c;
        }
    }
    ctx->pc = 0x35FCB0u;
    // 0x35fcb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fcb4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35fcb8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35fcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35fcbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35fcbcu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35fcc0: 0xf  sync
    ctx->pc = 0x35fcc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fcc4: 0x40f  sync.p
    ctx->pc = 0x35fcc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fcc8:
    // 0x35fcc8: 0x0  nop
    ctx->pc = 0x35fcc8u;
    // NOP
    // 0x35fccc: 0x0  nop
    ctx->pc = 0x35fcccu;
    // NOP
    // 0x35fcd0: 0x0  nop
    ctx->pc = 0x35fcd0u;
    // NOP
    // 0x35fcd4: 0x0  nop
    ctx->pc = 0x35fcd4u;
    // NOP
    // 0x35fcd8: 0x0  nop
    ctx->pc = 0x35fcd8u;
    // NOP
    // 0x35fcdc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FCDCu;
    {
        const bool branch_taken_0x35fcdc = (false);
        if (branch_taken_0x35fcdc) {
            ctx->pc = 0x35FCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fcc8;
        }
    }
    ctx->pc = 0x35FCE4u;
    // 0x35fce4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fce8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35fcec: 0x0  nop
    ctx->pc = 0x35fcecu;
    // NOP
label_35fcf0:
    // 0x35fcf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35fcf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fcf8: 0x0  nop
    ctx->pc = 0x35fcf8u;
    // NOP
    // 0x35fcfc: 0x0  nop
    ctx->pc = 0x35fcfcu;
    // NOP
    // 0x35fd00: 0x0  nop
    ctx->pc = 0x35fd00u;
    // NOP
    // 0x35fd04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FD04u;
    {
        const bool branch_taken_0x35fd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fd04) {
            ctx->pc = 0x35FCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fcf0;
        }
    }
    ctx->pc = 0x35FD0Cu;
label_35fd0c:
    // 0x35fd0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fd10: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x35fd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35fd14: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35fd18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fd1c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x35fd1cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x35fd20: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35fd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35fd24: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35fd24u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x35fd28: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35fd2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x35fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fd30: 0x8d202a  slt         $a0, $a0, $t5
    ctx->pc = 0x35fd30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x35fd34: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x35fd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fd3c: 0x1a4280b  movn        $a1, $t5, $a0
    ctx->pc = 0x35fd3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x35fd40: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35fd44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35fd48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35fd4c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x35fd4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x35fd50: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x35fd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x35fd54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fd58: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x35fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x35fd5c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35fd60: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35fd64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fd64u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35fd68: 0xf  sync
    ctx->pc = 0x35fd68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fd6c: 0x40f  sync.p
    ctx->pc = 0x35fd6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fd70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fd74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fd78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x35FD78u;
    {
        const bool branch_taken_0x35fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD78u;
        // 0x35fd7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd78) {
            ctx->pc = 0x35FDD4u;
            goto label_35fdd4;
        }
    }
    ctx->pc = 0x35FD80u;
    // 0x35fd80: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35fd84: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x35fd84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x1000e020
    // 0x35fd88: 0xf  sync
    ctx->pc = 0x35fd88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fd8c: 0x40f  sync.p
    ctx->pc = 0x35fd8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fd90:
    // 0x35fd90: 0x0  nop
    ctx->pc = 0x35fd90u;
    // NOP
    // 0x35fd94: 0x0  nop
    ctx->pc = 0x35fd94u;
    // NOP
    // 0x35fd98: 0x0  nop
    ctx->pc = 0x35fd98u;
    // NOP
    // 0x35fd9c: 0x0  nop
    ctx->pc = 0x35fd9cu;
    // NOP
    // 0x35fda0: 0x0  nop
    ctx->pc = 0x35fda0u;
    // NOP
    // 0x35fda4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FDA4u;
    {
        const bool branch_taken_0x35fda4 = (false);
        if (branch_taken_0x35fda4) {
            ctx->pc = 0x35FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fd90;
        }
    }
    ctx->pc = 0x35FDACu;
    // 0x35fdac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fdb0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35fdb4: 0x0  nop
    ctx->pc = 0x35fdb4u;
    // NOP
label_35fdb8:
    // 0x35fdb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35fdbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fdc0: 0x0  nop
    ctx->pc = 0x35fdc0u;
    // NOP
    // 0x35fdc4: 0x0  nop
    ctx->pc = 0x35fdc4u;
    // NOP
    // 0x35fdc8: 0x0  nop
    ctx->pc = 0x35fdc8u;
    // NOP
    // 0x35fdcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FDCCu;
    {
        const bool branch_taken_0x35fdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fdcc) {
            ctx->pc = 0x35FDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fdb8;
        }
    }
    ctx->pc = 0x35FDD4u;
label_35fdd4:
    // 0x35fdd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fdd8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35fdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35fddc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x35fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35fde0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35fde0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35fde4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fde8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35fde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35fdec: 0x240402c0  addiu       $a0, $zero, 0x2C0
    ctx->pc = 0x35fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x35fdf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fdf4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35fdf4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x35fdf8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35fdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35fdfc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35fe00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x35fe00u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x35fe04: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x35fe04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x35fe08: 0xd1043  sra         $v0, $t5, 1
    ctx->pc = 0x35fe08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 13), 1));
    // 0x35fe0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fe10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35fe14: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35fe18: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35fe1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fe1cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35fe20: 0xf  sync
    ctx->pc = 0x35fe20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fe24: 0x40f  sync.p
    ctx->pc = 0x35fe24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fe28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fe2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fe30: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x35FE30u;
    {
        const bool branch_taken_0x35fe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE30u;
        // 0x35fe34: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe30) {
            ctx->pc = 0x35FE8Cu;
            goto label_35fe8c;
        }
    }
    ctx->pc = 0x35FE38u;
    // 0x35fe38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35fe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35fe3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35fe3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x35fe40: 0xf  sync
    ctx->pc = 0x35fe40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fe44: 0x40f  sync.p
    ctx->pc = 0x35fe44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fe48:
    // 0x35fe48: 0x0  nop
    ctx->pc = 0x35fe48u;
    // NOP
    // 0x35fe4c: 0x0  nop
    ctx->pc = 0x35fe4cu;
    // NOP
    // 0x35fe50: 0x0  nop
    ctx->pc = 0x35fe50u;
    // NOP
    // 0x35fe54: 0x0  nop
    ctx->pc = 0x35fe54u;
    // NOP
    // 0x35fe58: 0x0  nop
    ctx->pc = 0x35fe58u;
    // NOP
    // 0x35fe5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FE5Cu;
    {
        const bool branch_taken_0x35fe5c = (false);
        if (branch_taken_0x35fe5c) {
            ctx->pc = 0x35FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fe48;
        }
    }
    ctx->pc = 0x35FE64u;
    // 0x35fe64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fe68: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35fe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35fe6c: 0x0  nop
    ctx->pc = 0x35fe6cu;
    // NOP
label_35fe70:
    // 0x35fe70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35fe74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fe78: 0x0  nop
    ctx->pc = 0x35fe78u;
    // NOP
    // 0x35fe7c: 0x0  nop
    ctx->pc = 0x35fe7cu;
    // NOP
    // 0x35fe80: 0x0  nop
    ctx->pc = 0x35fe80u;
    // NOP
    // 0x35fe84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FE84u;
    {
        const bool branch_taken_0x35fe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fe84) {
            ctx->pc = 0x35FE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fe70;
        }
    }
    ctx->pc = 0x35FE8Cu;
label_35fe8c:
    // 0x35fe8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35fe90: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x35fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35fe94: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35fe98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35fe9c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35fe9cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35fea0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35fea4: 0x24040840  addiu       $a0, $zero, 0x840
    ctx->pc = 0x35fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x35fea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35feac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35feacu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x35feb0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35feb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35feb8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35feb8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x1000d410
    // 0x35febc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x35febcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x35fec0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35fec4: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x35fec4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 13)); // MMIO: 0x1000d420
    // 0x35fec8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x35fec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x35fecc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35fed0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fed0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35fed4: 0xf  sync
    ctx->pc = 0x35fed4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fed8: 0x40f  sync.p
    ctx->pc = 0x35fed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fedc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fee0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35fee4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35FEE4u;
    {
        const bool branch_taken_0x35fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FEE4u;
        // 0x35fee8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fee4) {
            ctx->pc = 0x35FF3Cu;
            goto label_35ff3c;
        }
    }
    ctx->pc = 0x35FEECu;
    // 0x35feec: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35fef0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35fef0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x35fef4: 0xf  sync
    ctx->pc = 0x35fef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35fef8: 0x40f  sync.p
    ctx->pc = 0x35fef8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35fefc:
    // 0x35fefc: 0x0  nop
    ctx->pc = 0x35fefcu;
    // NOP
    // 0x35ff00: 0x0  nop
    ctx->pc = 0x35ff00u;
    // NOP
    // 0x35ff04: 0x0  nop
    ctx->pc = 0x35ff04u;
    // NOP
    // 0x35ff08: 0x0  nop
    ctx->pc = 0x35ff08u;
    // NOP
    // 0x35ff0c: 0x0  nop
    ctx->pc = 0x35ff0cu;
    // NOP
    // 0x35ff10: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FF10u;
    {
        const bool branch_taken_0x35ff10 = (false);
        if (branch_taken_0x35ff10) {
            ctx->pc = 0x35FEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fefc;
        }
    }
    ctx->pc = 0x35FF18u;
    // 0x35ff18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ff1c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35ff1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35ff20:
    // 0x35ff20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35ff24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ff24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ff28: 0x0  nop
    ctx->pc = 0x35ff28u;
    // NOP
    // 0x35ff2c: 0x0  nop
    ctx->pc = 0x35ff2cu;
    // NOP
    // 0x35ff30: 0x0  nop
    ctx->pc = 0x35ff30u;
    // NOP
    // 0x35ff34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FF34u;
    {
        const bool branch_taken_0x35ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ff34) {
            ctx->pc = 0x35FF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ff20;
        }
    }
    ctx->pc = 0x35FF3Cu;
label_35ff3c:
    // 0x35ff3c: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35ff3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff40: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x35ff40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff44: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff48: 0x352902c0  ori         $t1, $t1, 0x2C0
    ctx->pc = 0x35ff48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)704);
    // 0x35ff4c: 0x35080840  ori         $t0, $t0, 0x840
    ctx->pc = 0x35ff4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2112);
    // 0x35ff50: 0x34c61340  ori         $a2, $a2, 0x1340
    ctx->pc = 0x35ff50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4928);
    // 0x35ff54: 0x19a00224  blez        $t5, . + 4 + (0x224 << 2)
    ctx->pc = 0x35FF54u;
    {
        const bool branch_taken_0x35ff54 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x35FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF54u;
        // 0x35ff58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff54) {
            ctx->pc = 0x3607E8u;
            goto label_3607e8;
        }
    }
    ctx->pc = 0x35FF5Cu;
    // 0x35ff5c: 0x3c0e0001  lui         $t6, 0x1
    ctx->pc = 0x35ff5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1 << 16));
    // 0x35ff60: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x35ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff64: 0x19a0005e  blez        $t5, . + 4 + (0x5E << 2)
    ctx->pc = 0x35FF64u;
    {
        const bool branch_taken_0x35ff64 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x35FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF64u;
        // 0x35ff68: 0x31a20007  andi        $v0, $t5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff64) {
            ctx->pc = 0x3600E0u;
            goto label_3600e0;
        }
    }
    ctx->pc = 0x35FF6Cu;
    // 0x35ff6c: 0x504000b9  beql        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x35FF6Cu;
    {
        const bool branch_taken_0x35ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ff6c) {
            ctx->pc = 0x35FF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FF6Cu;
            // 0x35ff70: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360254u;
            goto label_360254;
        }
    }
    ctx->pc = 0x35FF74u;
    // 0x35ff74: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x35FF74u;
    {
        const bool branch_taken_0x35ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF74u;
        // 0x35ff78: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff74) {
            ctx->pc = 0x3600E8u;
            goto label_3600e8;
        }
    }
    ctx->pc = 0x35FF7Cu;
    // 0x35ff7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff80: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x35ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x35ff84: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ff88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff8c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x35ff8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x35ff90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35ff94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35ff98: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x35ff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x35ff9c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ffa0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35ffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35ffa4: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x35ffa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_35ffa8:
    // 0x35ffa8: 0x42000039  di
    ctx->pc = 0x35ffa8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ffac: 0x40f  sync.p
    ctx->pc = 0x35ffacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ffb0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ffb4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x35ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x35ffb8: 0x0  nop
    ctx->pc = 0x35ffb8u;
    // NOP
    // 0x35ffbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35FFBCu;
    {
        const bool branch_taken_0x35ffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ffbc) {
            ctx->pc = 0x35FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ffa8;
        }
    }
    ctx->pc = 0x35FFC4u;
    // 0x35ffc4: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x35ffc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x35ffc8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x35ffc8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ffcc: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x35ffccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x35ffd0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x35ffd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ffd4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x35ffd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ffd8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x35ffd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35ffdc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x35ffdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35ffe0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x35ffe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ffe4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x35ffe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x35ffe8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x35ffe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35ffec: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x35ffecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fff0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x35fff0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35fff4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x35fff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35fff8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x35fff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x35fffc: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x35fffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360000: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360004: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360008: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36000c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x36000cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360010: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360014: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360018: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36001c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36001cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360020: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360024: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360028: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x360028u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36002c: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x36002cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x360030: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x360030u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x360034: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360038: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36003c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36003cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360040: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360044: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x360044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360048: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x360048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x36004c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x36004cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360050: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x360050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360054: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x360054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360058: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x360058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x36005c: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x36005cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360060: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x360060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360064: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360068: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36006c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x36006cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360070: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360074: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360078: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36007c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x36007cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360080: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360084: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x360084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360088: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x360088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36008c: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x36008cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x360090: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x360090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360094: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x360094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360098: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x360098u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36009c: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x36009cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3600a0: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x3600a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3600a4: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x3600a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3600a8: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x3600a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3600ac: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x3600acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3600b0: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x3600b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3600b4: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x3600b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3600b8: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x3600b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3600bc: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x3600bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3600c0: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x3600c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3600c4: 0x42000038  ei
    ctx->pc = 0x3600c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3600c8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3600c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x3600cc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3600ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3600d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3600d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3600d4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x3600d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3600d8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3600d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3600dc: 0x0  nop
    ctx->pc = 0x3600dcu;
    // NOP
label_3600e0:
    // 0x3600e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3600e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3600e4: 0x0  nop
    ctx->pc = 0x3600e4u;
    // NOP
label_3600e8:
    // 0x3600e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3600e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3600ec: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x3600ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x3600f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3600f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3600f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3600f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3600f8: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x3600f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x3600fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3600fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360104: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360108: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36010c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360110: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360114:
    // 0x360114: 0x42000039  di
    ctx->pc = 0x360114u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360118: 0x40f  sync.p
    ctx->pc = 0x360118u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36011c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360120: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x360120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x360124: 0x0  nop
    ctx->pc = 0x360124u;
    // NOP
    // 0x360128: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360128u;
    {
        const bool branch_taken_0x360128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360128) {
            ctx->pc = 0x360114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360114;
        }
    }
    ctx->pc = 0x360130u;
    // 0x360130: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360134: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360134u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360138: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36013c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36013cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360140: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360144: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360148: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36014c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36014cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360150: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360154: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360158: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360158u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36015c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36015cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360160: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360164: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360168: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36016c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x36016cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360170: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360174: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360178: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36017c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x36017cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360180: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360184: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360188: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36018c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x36018cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360190: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360194: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x360194u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360198: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x360198u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36019c: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x36019cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3601a0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3601a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3601a4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3601a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3601a8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3601a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3601ac: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3601acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3601b0: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x3601b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3601b4: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x3601b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3601b8: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3601b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3601bc: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x3601bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3601c0: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x3601c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3601c4: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x3601c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3601c8: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x3601c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3601cc: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x3601ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3601d0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3601d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3601d4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3601d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3601d8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3601d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3601dc: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3601dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3601e0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3601e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3601e4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3601e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3601e8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3601e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3601ec: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3601ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3601f0: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x3601f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3601f4: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x3601f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3601f8: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x3601f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3601fc: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x3601fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360200: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x360200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360204: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x360204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x360208: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x360208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36020c: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x36020cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360210: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x360210u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360214: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x360214u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360218: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x360218u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x36021c: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x36021cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360220: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x360220u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x360224: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x360224u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x360228: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x360228u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x36022c: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x36022cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x360230: 0x42000038  ei
    ctx->pc = 0x360230u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360234: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x360234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x360238: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x360238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x36023c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x360240: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x360240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x360244: 0x26d102a  slt         $v0, $s3, $t5
    ctx->pc = 0x360244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x360248: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x360248u;
    {
        const bool branch_taken_0x360248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360248u;
        // 0x36024c: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360248) {
            ctx->pc = 0x3607E8u;
            goto label_3607e8;
        }
    }
    ctx->pc = 0x360250u;
    // 0x360250: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x360250u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_360254:
    // 0x360254: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x360254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360258: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x360258u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36025c: 0x0  nop
    ctx->pc = 0x36025cu;
    // NOP
label_360260:
    // 0x360260: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x360260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360264: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360268: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x36026c: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x36026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360270: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360274: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360278: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x360278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36027c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360280: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360284: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x360284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360288: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36028c: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x36028cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360290:
    // 0x360290: 0x42000039  di
    ctx->pc = 0x360290u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360294: 0x40f  sync.p
    ctx->pc = 0x360294u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360298: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360298u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36029c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x36029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3602a0: 0x0  nop
    ctx->pc = 0x3602a0u;
    // NOP
    // 0x3602a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3602A4u;
    {
        const bool branch_taken_0x3602a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3602a4) {
            ctx->pc = 0x360290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360290;
        }
    }
    ctx->pc = 0x3602ACu;
    // 0x3602ac: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x3602acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3602b0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3602b0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3602b4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3602b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3602b8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3602b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3602bc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3602bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3602c0: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3602c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3602c4: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3602c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3602c8: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3602c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3602cc: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3602ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3602d0: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3602d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3602d4: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3602d4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3602d8: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3602d8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3602dc: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3602dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3602e0: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3602e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3602e4: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3602e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3602e8: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3602e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3602ec: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3602ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3602f0: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3602f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3602f4: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3602f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3602f8: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3602f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3602fc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3602fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360300: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360304: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360308: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36030c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36030cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360310: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x360310u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x360314: 0xd91b0010  lqc2        $vf27, 0x10($t0)
    ctx->pc = 0x360314u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x360318: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x360318u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36031c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36031cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360320: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360324: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360328: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x36032c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x36032cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360330: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x360330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360334: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x360334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360338: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x360338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36033c: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x36033cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360340: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x360340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360344: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x360344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360348: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x360348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36034c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x36034cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360350: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360354: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360358: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36035c: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x36035cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360360: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360360u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360364: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360368: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x36036c: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x36036cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360370: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x360370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x360374: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x360374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x360378: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x360378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36037c: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x36037cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360380: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x360380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x360384: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x360384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x360388: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x360388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36038c: 0xf8d50000  sqc2        $vf21, 0x0($a2)
    ctx->pc = 0x36038cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360390: 0xf8d60010  sqc2        $vf22, 0x10($a2)
    ctx->pc = 0x360390u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360394: 0xf8d70020  sqc2        $vf23, 0x20($a2)
    ctx->pc = 0x360394u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360398: 0xf8d80030  sqc2        $vf24, 0x30($a2)
    ctx->pc = 0x360398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x36039c: 0xf8dc0040  sqc2        $vf28, 0x40($a2)
    ctx->pc = 0x36039cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3603a0: 0xf8dd0050  sqc2        $vf29, 0x50($a2)
    ctx->pc = 0x3603a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3603a4: 0xf8de0060  sqc2        $vf30, 0x60($a2)
    ctx->pc = 0x3603a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3603a8: 0xf8df0070  sqc2        $vf31, 0x70($a2)
    ctx->pc = 0x3603a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3603ac: 0x42000038  ei
    ctx->pc = 0x3603acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3603b0: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x3603b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x3603b4: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x3603b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3603b8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x3603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3603bc: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3603bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3603c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3603c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3603c4: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x3603c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x3603c8: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x3603c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3603cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3603ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3603d0: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x3603d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x3603d4: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3603d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3603d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3603d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3603dc: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x3603dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x3603e0: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x3603e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3603e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3603e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3603e8: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x3603e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_3603ec:
    // 0x3603ec: 0x42000039  di
    ctx->pc = 0x3603ecu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3603f0: 0x40f  sync.p
    ctx->pc = 0x3603f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3603f4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3603f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3603f8: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x3603f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3603fc: 0x0  nop
    ctx->pc = 0x3603fcu;
    // NOP
    // 0x360400: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360400u;
    {
        const bool branch_taken_0x360400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360400) {
            ctx->pc = 0x3603ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3603ec;
        }
    }
    ctx->pc = 0x360408u;
    // 0x360408: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x36040c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36040cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360410: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360414: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360418: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36041c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36041cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360420: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360424: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360428: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36042c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36042cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360430: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360430u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360434: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360434u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360438: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36043c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x36043cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360440: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360444: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360448: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36044c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x36044cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360450: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360454: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360458: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36045c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x36045cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360460: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360464: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360468: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36046c: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x36046cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x360470: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x360470u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x360474: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x360474u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360478: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36047c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x36047cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360480: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360484: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360488: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x360488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36048c: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x36048cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360490: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x360490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360494: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x360494u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360498: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x360498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36049c: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x36049cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3604a0: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x3604a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3604a4: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x3604a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3604a8: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3604a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3604ac: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3604acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3604b0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3604b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3604b4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3604b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3604b8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3604b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3604bc: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3604bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3604c0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3604c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3604c4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3604c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3604c8: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x3604c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3604cc: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x3604ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3604d0: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x3604d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3604d4: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x3604d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3604d8: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x3604d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3604dc: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x3604dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3604e0: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x3604e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3604e4: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x3604e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3604e8: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x3604e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3604ec: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x3604ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3604f0: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x3604f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3604f4: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x3604f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3604f8: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x3604f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3604fc: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x3604fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x360500: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x360500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x360504: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x360504u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x360508: 0x42000038  ei
    ctx->pc = 0x360508u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36050c: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x36050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x360510: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x360510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x360514: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x360514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x360518: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x360518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36051c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360520: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360524: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x360524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360528: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36052c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x36052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360530: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x360530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360534: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360538: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x36053c: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x36053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360540: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360544: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360548:
    // 0x360548: 0x42000039  di
    ctx->pc = 0x360548u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36054c: 0x40f  sync.p
    ctx->pc = 0x36054cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360550: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360550u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360554: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x360554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x360558: 0x0  nop
    ctx->pc = 0x360558u;
    // NOP
    // 0x36055c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36055Cu;
    {
        const bool branch_taken_0x36055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36055c) {
            ctx->pc = 0x360548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360548;
        }
    }
    ctx->pc = 0x360564u;
    // 0x360564: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360568: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360568u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36056c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x36056cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360570: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360574: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360578: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36057c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x36057cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360580: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360584: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360588: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36058c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x36058cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360590: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360590u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360594: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360598: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36059c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x36059cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3605a0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3605a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3605a4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3605a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3605a8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3605a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3605ac: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3605acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605b0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3605b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3605b4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3605b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3605b8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3605b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605bc: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3605bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605c0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3605c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605c4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3605c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3605c8: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x3605c8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3605cc: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x3605ccu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3605d0: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x3605d0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3605d4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3605d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605d8: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3605d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3605dc: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3605dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605e0: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3605e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3605e4: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x3605e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605e8: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x3605e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3605ec: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3605ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3605f0: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x3605f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3605f4: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x3605f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3605f8: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x3605f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3605fc: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x3605fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360600: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x360600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360604: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360608: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36060c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x36060cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360610: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360614: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360618: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360618u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x36061c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x36061cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360620: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360624: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x360624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360628: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x360628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36062c: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x36062cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x360630: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x360630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360634: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x360634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360638: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x360638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36063c: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x36063cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x360640: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x360640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360644: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x360644u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360648: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x360648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x36064c: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x36064cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360650: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x360650u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360654: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x360654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x360658: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x360658u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x36065c: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x36065cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x360660: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x360660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x360664: 0x42000038  ei
    ctx->pc = 0x360664u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360668: 0x25050060  addiu       $a1, $t0, 0x60
    ctx->pc = 0x360668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x36066c: 0x25240030  addiu       $a0, $t1, 0x30
    ctx->pc = 0x36066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x360670: 0x24c30180  addiu       $v1, $a2, 0x180
    ctx->pc = 0x360670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x360674: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x360674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360678: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36067c: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x36067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360680: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x360680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360684: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360688: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x36068c: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x36068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360690: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360694: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360698: 0xc561001c  lwc1        $f1, 0x1C($t3)
    ctx->pc = 0x360698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36069c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3606a0: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x3606a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_3606a4:
    // 0x3606a4: 0x42000039  di
    ctx->pc = 0x3606a4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3606a8: 0x40f  sync.p
    ctx->pc = 0x3606a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3606ac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3606acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3606b0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x3606b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x3606b4: 0x0  nop
    ctx->pc = 0x3606b4u;
    // NOP
    // 0x3606b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3606B8u;
    {
        const bool branch_taken_0x3606b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3606b8) {
            ctx->pc = 0x3606A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3606a4;
        }
    }
    ctx->pc = 0x3606C0u;
    // 0x3606c0: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x3606c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3606c4: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3606c4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3606c8: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3606c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3606cc: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3606ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3606d0: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3606d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3606d4: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3606d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3606d8: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3606d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3606dc: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3606dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3606e0: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3606e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3606e4: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3606e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3606e8: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3606e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3606ec: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3606ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3606f0: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3606f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3606f4: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3606f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3606f8: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3606f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3606fc: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3606fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360700: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360704: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360708: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36070c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x36070cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360710: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360714: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360718: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36071c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x36071cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360720: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360724: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x360724u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x360728: 0xd8bb0010  lqc2        $vf27, 0x10($a1)
    ctx->pc = 0x360728u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36072c: 0xd88e0000  lqc2        $vf14, 0x0($a0)
    ctx->pc = 0x36072cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360730: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360734: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360738: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36073c: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x36073cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360740: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x360740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360744: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x360744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x360748: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x360748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36074c: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x36074cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360750: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x360750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360754: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x360754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360758: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x360758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x36075c: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x36075cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x360760: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360764: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360768: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36076c: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x36076cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360770: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360774: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360778: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x36077c: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x36077cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360780: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x360780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360784: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x360784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x360788: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x360788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36078c: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x36078cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x360790: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x360790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x360794: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x360794u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x360798: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x360798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x36079c: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x36079cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3607a0: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x3607a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3607a4: 0xf8760010  sqc2        $vf22, 0x10($v1)
    ctx->pc = 0x3607a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3607a8: 0xf8770020  sqc2        $vf23, 0x20($v1)
    ctx->pc = 0x3607a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3607ac: 0xf8780030  sqc2        $vf24, 0x30($v1)
    ctx->pc = 0x3607acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3607b0: 0xf87c0040  sqc2        $vf28, 0x40($v1)
    ctx->pc = 0x3607b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3607b4: 0xf87d0050  sqc2        $vf29, 0x50($v1)
    ctx->pc = 0x3607b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3607b8: 0xf87e0060  sqc2        $vf30, 0x60($v1)
    ctx->pc = 0x3607b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3607bc: 0xf87f0070  sqc2        $vf31, 0x70($v1)
    ctx->pc = 0x3607bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3607c0: 0x42000038  ei
    ctx->pc = 0x3607c0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3607c4: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x3607c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x3607c8: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x3607c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x3607cc: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x3607ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x3607d0: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x3607d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x3607d4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x3607d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x3607d8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3607d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3607dc: 0x26d102a  slt         $v0, $s3, $t5
    ctx->pc = 0x3607dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3607e0: 0x1440fe9f  bnez        $v0, . + 4 + (-0x161 << 2)
    ctx->pc = 0x3607E0u;
    {
        const bool branch_taken_0x3607e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3607E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607E0u;
        // 0x3607e4: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607e0) {
            ctx->pc = 0x360260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360260;
        }
    }
    ctx->pc = 0x3607E8u;
label_3607e8:
    // 0x3607e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3607e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3607ec: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3607ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3607f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3607f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3607f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3607f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3607f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3607F8u;
    {
        const bool branch_taken_0x3607f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3607FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607F8u;
        // 0x3607fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607f8) {
            ctx->pc = 0x360830u;
            goto label_360830;
        }
    }
    ctx->pc = 0x360800u;
    // 0x360800: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x360800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360804: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x360804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x360808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x360808u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36080c: 0xf  sync
    ctx->pc = 0x36080cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360810: 0x40f  sync.p
    ctx->pc = 0x360810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_360814:
    // 0x360814: 0x0  nop
    ctx->pc = 0x360814u;
    // NOP
    // 0x360818: 0x0  nop
    ctx->pc = 0x360818u;
    // NOP
    // 0x36081c: 0x0  nop
    ctx->pc = 0x36081cu;
    // NOP
    // 0x360820: 0x0  nop
    ctx->pc = 0x360820u;
    // NOP
    // 0x360824: 0x0  nop
    ctx->pc = 0x360824u;
    // NOP
    // 0x360828: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x360828u;
    {
        const bool branch_taken_0x360828 = (false);
        if (branch_taken_0x360828) {
            ctx->pc = 0x360814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360814;
        }
    }
    ctx->pc = 0x360830u;
label_360830:
    // 0x360830: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x360830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x360834: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x360834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x360838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360838u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x36083c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x36083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x360840: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x360840u;
    {
        const bool branch_taken_0x360840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x360844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360840u;
        // 0x360844: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360840) {
            ctx->pc = 0x36089Cu;
            goto label_36089c;
        }
    }
    ctx->pc = 0x360848u;
    // 0x360848: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x360848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36084c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x36084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x360850: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x360850u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x360854: 0xf  sync
    ctx->pc = 0x360854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360858: 0x40f  sync.p
    ctx->pc = 0x360858u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36085c:
    // 0x36085c: 0x0  nop
    ctx->pc = 0x36085cu;
    // NOP
    // 0x360860: 0x0  nop
    ctx->pc = 0x360860u;
    // NOP
    // 0x360864: 0x0  nop
    ctx->pc = 0x360864u;
    // NOP
    // 0x360868: 0x0  nop
    ctx->pc = 0x360868u;
    // NOP
    // 0x36086c: 0x0  nop
    ctx->pc = 0x36086cu;
    // NOP
    // 0x360870: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x360870u;
    {
        const bool branch_taken_0x360870 = (false);
        if (branch_taken_0x360870) {
            ctx->pc = 0x36085Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36085c;
        }
    }
    ctx->pc = 0x360878u;
    // 0x360878: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x360878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36087c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x36087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_360880:
    // 0x360880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x360880u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x360884: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x360884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x360888: 0x0  nop
    ctx->pc = 0x360888u;
    // NOP
    // 0x36088c: 0x0  nop
    ctx->pc = 0x36088cu;
    // NOP
    // 0x360890: 0x0  nop
    ctx->pc = 0x360890u;
    // NOP
    // 0x360894: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360894u;
    {
        const bool branch_taken_0x360894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360894) {
            ctx->pc = 0x360880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360880;
        }
    }
    ctx->pc = 0x36089Cu;
label_36089c:
    // 0x36089c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3608a0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3608a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3608a4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x3608a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x3608a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3608a8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x3608ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3608acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3608b0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x3608b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x3608b4: 0x24041340  addiu       $a0, $zero, 0x1340
    ctx->pc = 0x3608b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x3608b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3608b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3608bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3608bcu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x3608c0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x3608c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x3608c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3608c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3608c8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3608c8u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x1000d010
    // 0x3608cc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x3608ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x3608d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3608d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3608d4: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x3608d4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x3608d8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3608d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3608dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3608dcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x3608e0: 0xf  sync
    ctx->pc = 0x3608e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3608e4: 0x40f  sync.p
    ctx->pc = 0x3608e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3608e8: 0x2398821  addu        $s1, $s1, $t9
    ctx->pc = 0x3608e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x3608ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3608f0: 0xd18c0  sll         $v1, $t5, 3
    ctx->pc = 0x3608f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x3608f4: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x3608f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3608f8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3608f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3608fc: 0x1a2780b  movn        $t7, $t5, $v0
    ctx->pc = 0x3608fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x360900: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x360900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360904: 0xf1083  sra         $v0, $t7, 2
    ctx->pc = 0x360904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), 2));
    // 0x360908: 0x8fb60058  lw          $s6, 0x58($sp)
    ctx->pc = 0x360908u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36090c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36090cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360910: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x360910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x360914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x360914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360918: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x360918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x36091c: 0x0  nop
    ctx->pc = 0x36091cu;
    // NOP
label_360920:
    // 0x360920: 0x1ac0043f  blez        $s6, . + 4 + (0x43F << 2)
    ctx->pc = 0x360920u;
    {
        const bool branch_taken_0x360920 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x360924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360920u;
        // 0x360924: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360920) {
            ctx->pc = 0x361A20u;
            goto label_361a20;
        }
    }
    ctx->pc = 0x360928u;
    // 0x360928: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x360928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x36092c: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x36092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x360930: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x360930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x360934: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x360934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360938: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x360938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36093c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x36093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360940: 0x10a000db  beqz        $a1, . + 4 + (0xDB << 2)
    ctx->pc = 0x360940u;
    {
        const bool branch_taken_0x360940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x360944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360940u;
        // 0x360944: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360940) {
            ctx->pc = 0x360CB0u;
            goto label_360cb0;
        }
    }
    ctx->pc = 0x360948u;
    // 0x360948: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x360948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36094c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x36094Cu;
    {
        const bool branch_taken_0x36094c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36094Cu;
        // 0x360950: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36094c) {
            ctx->pc = 0x360B94u;
            goto label_360b94;
        }
    }
    ctx->pc = 0x360954u;
    // 0x360954: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x360954u;
    {
        const bool branch_taken_0x360954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360954u;
        // 0x360958: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360954) {
            ctx->pc = 0x360A80u;
            goto label_360a80;
        }
    }
    ctx->pc = 0x36095Cu;
    // 0x36095c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x36095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360960: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360964: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x360964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360968: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36096c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x36096cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360970: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x360970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360974: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x360974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36097c: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x36097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360980: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x360980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360984: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360988: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_36098c:
    // 0x36098c: 0x42000039  di
    ctx->pc = 0x36098cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360990: 0x40f  sync.p
    ctx->pc = 0x360990u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360994: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360994u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360998: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36099c: 0x0  nop
    ctx->pc = 0x36099cu;
    // NOP
    // 0x3609a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3609A0u;
    {
        const bool branch_taken_0x3609a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3609a0) {
            ctx->pc = 0x36098Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36098c;
        }
    }
    ctx->pc = 0x3609A8u;
    // 0x3609a8: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x3609a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3609ac: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x3609acu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3609b0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x3609b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3609b4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x3609b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3609b8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x3609b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3609bc: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x3609bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3609c0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x3609c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3609c4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x3609c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3609c8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x3609c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x3609cc: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x3609ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3609d0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x3609d0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3609d4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x3609d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3609d8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x3609d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3609dc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x3609dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3609e0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x3609e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3609e4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x3609e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3609e8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x3609e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3609ec: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x3609ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3609f0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x3609f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3609f4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x3609f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3609f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3609f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3609fc: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3609fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360a00: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360a04: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360a08: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360a0c: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360a0cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360a10: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360a14: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360a14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360a18: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360a1c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360a20: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360a24: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360a28: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360a28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360a2c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360a30: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360a34: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360a38: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360a38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360a3c: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360a40: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360a44: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360a48: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360a48u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360a4c: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360a50: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360a50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360a54: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360a54u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360a58: 0x42000038  ei
    ctx->pc = 0x360a58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360a5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x360a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360a60: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x360a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360a64: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360a68: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x360a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x360a6c: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x360a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x360a70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x360a70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a74: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x360a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a78: 0x26d3ffff  addiu       $s3, $s6, -0x1
    ctx->pc = 0x360a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x360a7c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360a80:
    // 0x360a80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360a84: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360a88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360a8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360a90: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360a94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360a98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360a9c: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360aa0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360aa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360aa8: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360aac:
    // 0x360aac: 0x42000039  di
    ctx->pc = 0x360aacu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360ab0: 0x40f  sync.p
    ctx->pc = 0x360ab0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360ab4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360ab8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360abc: 0x0  nop
    ctx->pc = 0x360abcu;
    // NOP
    // 0x360ac0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360AC0u;
    {
        const bool branch_taken_0x360ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360ac0) {
            ctx->pc = 0x360AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360aac;
        }
    }
    ctx->pc = 0x360AC8u;
    // 0x360ac8: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360acc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360accu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360ad0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360ad4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360ad8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360adc: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360ae0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360ae4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360ae8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360aec: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360af0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360af0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360af4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360af4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360af8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360afc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360b00: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360b04: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360b08: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360b08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360b0c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360b10: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b14: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360b18: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360b1c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360b1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b20: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360b20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b24: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b28: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360b2c: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360b2cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360b30: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b34: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360b38: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360b3c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360b40: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360b44: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360b48: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360b4c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360b50: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360b54: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360b58: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360b5c: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360b60: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360b64: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360b68: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360b68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360b6c: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360b70: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360b70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360b74: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360b74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360b78: 0x42000038  ei
    ctx->pc = 0x360b78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360b7c: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360b80: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x360b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x360b84: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x360b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360b88: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x360b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x360b8c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x360b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x360b90: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x360b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_360b94:
    // 0x360b94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360b98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360b9c: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360ba0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360ba4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360ba8: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360bac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360bb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360bb4: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360bb8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360bbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360bc0: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360bc4:
    // 0x360bc4: 0x42000039  di
    ctx->pc = 0x360bc4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360bc8: 0x40f  sync.p
    ctx->pc = 0x360bc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360bcc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360bd0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360bd4: 0x0  nop
    ctx->pc = 0x360bd4u;
    // NOP
    // 0x360bd8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360BD8u;
    {
        const bool branch_taken_0x360bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360bd8) {
            ctx->pc = 0x360BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360bc4;
        }
    }
    ctx->pc = 0x360BE0u;
    // 0x360be0: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360be4: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360be4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360be8: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360bec: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360bf0: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360bf4: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360bf8: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360bfc: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360c00: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360c04: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360c08: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360c08u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360c0c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360c0cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360c10: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360c14: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360c18: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360c1c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360c20: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360c24: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360c28: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360c28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c2c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360c30: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360c34: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360c34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c38: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c3c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360c3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c40: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360c40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360c44: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360c44u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360c48: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c4c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360c50: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360c54: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360c58: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360c5c: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360c60: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360c60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360c64: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360c68: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360c6c: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360c70: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360c70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360c74: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360c78: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360c7c: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360c80: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360c80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360c84: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360c84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360c88: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360c88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360c8c: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360c90: 0x42000038  ei
    ctx->pc = 0x360c90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360c94: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360c98: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x360c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x360c9c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x360c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360ca0: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x360ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x360ca4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x360ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x360ca8: 0x1260035d  beqz        $s3, . + 4 + (0x35D << 2)
    ctx->pc = 0x360CA8u;
    {
        const bool branch_taken_0x360ca8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x360CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360CA8u;
        // 0x360cac: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ca8) {
            ctx->pc = 0x361A20u;
            goto label_361a20;
        }
    }
    ctx->pc = 0x360CB0u;
label_360cb0:
    // 0x360cb0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360cb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360cb8: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360cbc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360cc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360cc4: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360cc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360ccc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360cd0: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360cd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360cd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360cdc: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360ce0:
    // 0x360ce0: 0x42000039  di
    ctx->pc = 0x360ce0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360ce4: 0x40f  sync.p
    ctx->pc = 0x360ce4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360ce8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360cec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360cf0: 0x0  nop
    ctx->pc = 0x360cf0u;
    // NOP
    // 0x360cf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360CF4u;
    {
        const bool branch_taken_0x360cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360cf4) {
            ctx->pc = 0x360CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360ce0;
        }
    }
    ctx->pc = 0x360CFCu;
    // 0x360cfc: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360d00: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360d00u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360d04: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d08: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360d08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360d0c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360d10: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360d14: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360d18: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360d1c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360d20: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360d24: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360d24u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360d28: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360d28u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360d2c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360d30: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360d34: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360d38: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360d3c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360d40: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360d44: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d48: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360d4c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360d50: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d54: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d58: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d5c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360d60: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360d60u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360d64: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d68: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360d68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360d6c: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360d70: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360d74: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360d78: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360d7c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360d7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360d80: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360d84: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360d88: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360d88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360d8c: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360d8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360d90: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360d90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360d94: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360d98: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360d9c: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360da0: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360da0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360da4: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360da4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360da8: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360da8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360dac: 0x42000038  ei
    ctx->pc = 0x360dacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360db0: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360db4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x360db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x360db8: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x360db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360dbc: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x360dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x360dc0: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x360dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x360dc4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360dc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360dcc: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360dd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360dd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360dd8: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360ddc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360de0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360de4: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360de8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360dec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360df0: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360df4:
    // 0x360df4: 0x42000039  di
    ctx->pc = 0x360df4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360df8: 0x40f  sync.p
    ctx->pc = 0x360df8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360dfc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360e00: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360e04: 0x0  nop
    ctx->pc = 0x360e04u;
    // NOP
    // 0x360e08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360E08u;
    {
        const bool branch_taken_0x360e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360e08) {
            ctx->pc = 0x360DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360df4;
        }
    }
    ctx->pc = 0x360E10u;
    // 0x360e10: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360e14: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360e14u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360e18: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e1c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360e1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360e20: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360e24: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360e28: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360e28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360e2c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360e30: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360e34: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360e38: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360e38u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360e3c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360e3cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360e40: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360e44: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360e48: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360e48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360e4c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360e50: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360e54: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360e58: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e5c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360e60: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360e64: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360e64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e68: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e6c: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e70: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360e74: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360e74u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360e78: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e7c: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360e7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360e80: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360e84: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360e88: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360e8c: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360e90: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360e90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360e94: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360e98: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360e9c: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360e9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360ea0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360ea0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360ea4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360ea8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360eac: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360eb0: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360eb4: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360eb8: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360ebc: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360ec0: 0x42000038  ei
    ctx->pc = 0x360ec0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360ec4: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360ec8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x360ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x360ecc: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x360eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360ed0: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x360ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x360ed4: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x360ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x360ed8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360edc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360ee0: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360ee4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360ee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360eec: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x360eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x360ef0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360ef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360ef8: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x360ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x360efc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360f00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360f04: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x360f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_360f08:
    // 0x360f08: 0x42000039  di
    ctx->pc = 0x360f08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x360f0c: 0x40f  sync.p
    ctx->pc = 0x360f0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x360f10: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x360f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x360f14: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360f18: 0x0  nop
    ctx->pc = 0x360f18u;
    // NOP
    // 0x360f1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360F1Cu;
    {
        const bool branch_taken_0x360f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360f1c) {
            ctx->pc = 0x360F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360f08;
        }
    }
    ctx->pc = 0x360F24u;
    // 0x360f24: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x360f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x360f28: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x360f28u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360f2c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x360f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f30: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x360f30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360f34: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x360f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360f38: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x360f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360f3c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x360f3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360f40: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x360f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x360f44: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x360f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x360f48: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x360f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360f4c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x360f4cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360f50: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x360f50u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360f54: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x360f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360f58: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x360f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360f5c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x360f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360f60: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x360f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x360f64: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x360f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x360f68: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x360f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x360f6c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x360f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f70: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x360f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x360f74: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x360f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360f78: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x360f78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f7c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x360f7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f80: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x360f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f84: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x360f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x360f88: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x360f88u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360f8c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x360f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f90: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x360f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360f94: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x360f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x360f98: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x360f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x360f9c: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x360f9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360fa0: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x360fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x360fa4: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x360fa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360fa8: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x360fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360fac: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x360facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360fb0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x360fb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360fb4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x360fb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x360fb8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x360fb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x360fbc: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x360fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x360fc0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x360fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x360fc4: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x360fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x360fc8: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x360fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x360fcc: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x360fccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x360fd0: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x360fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x360fd4: 0x42000038  ei
    ctx->pc = 0x360fd4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x360fd8: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x360fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x360fdc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x360fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x360fe0: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x360fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x360fe4: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x360fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x360fe8: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x360fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x360fec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x360fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360ff0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x360ff4: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x360ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x360ff8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x360ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360ffc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x360ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x361000: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x361000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x361004: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361008: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x361008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x36100c: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x36100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x361010: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361014: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x361014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x361018: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x361018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_36101c:
    // 0x36101c: 0x42000039  di
    ctx->pc = 0x36101cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361020: 0x40f  sync.p
    ctx->pc = 0x361020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361024: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361024u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361028: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x361028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36102c: 0x0  nop
    ctx->pc = 0x36102cu;
    // NOP
    // 0x361030: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361030u;
    {
        const bool branch_taken_0x361030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361030) {
            ctx->pc = 0x36101Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36101c;
        }
    }
    ctx->pc = 0x361038u;
    // 0x361038: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x361038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x36103c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36103cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361040: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361044: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361048: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36104c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36104cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361050: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361054: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361058: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36105c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36105cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361060: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361060u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361064: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361064u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361068: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36106c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x36106cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361070: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361074: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361078: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36107c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x36107cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361080: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361084: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361088: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x361088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36108c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x36108cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361090: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x361090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361094: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x361094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361098: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x361098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36109c: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x36109cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3610a0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3610a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3610a4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3610a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3610a8: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3610a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3610ac: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3610acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3610b0: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3610b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3610b4: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3610b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3610b8: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3610b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3610bc: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3610bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3610c0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3610c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3610c4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3610c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3610c8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3610c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3610cc: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3610ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3610d0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3610d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3610d4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3610d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3610d8: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3610d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3610dc: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3610dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3610e0: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3610e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3610e4: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3610e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3610e8: 0x42000038  ei
    ctx->pc = 0x3610e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3610ec: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3610ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x3610f0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3610f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3610f4: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x3610f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3610f8: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x3610f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x3610fc: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x3610fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x361100: 0x1660feeb  bnez        $s3, . + 4 + (-0x115 << 2)
    ctx->pc = 0x361100u;
    {
        const bool branch_taken_0x361100 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x361104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361100u;
        // 0x361104: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361100) {
            ctx->pc = 0x360CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360cb0;
        }
    }
    ctx->pc = 0x361108u;
    // 0x361108: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x361108u;
    {
        const bool branch_taken_0x361108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361108u;
        // 0x36110c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361108) {
            ctx->pc = 0x361A24u;
            goto label_361a24;
        }
    }
    ctx->pc = 0x361110u;
label_361110:
    // 0x361110: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x361110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361114: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x361114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361118: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x361118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36111c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x361120: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x361120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x361124: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x361124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x361128: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x361128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36112c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x36112cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x361130: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x361130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x361134: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x361134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x361138: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x361138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36113c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x36113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361140: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x361140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361144: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x361144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x361148: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x361148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36114c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x36114cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x361150: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x361150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x361154: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x361154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x361158: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x361158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36115c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36115cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x361160: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x361160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_361164:
    // 0x361164: 0x42000039  di
    ctx->pc = 0x361164u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361168: 0x40f  sync.p
    ctx->pc = 0x361168u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36116c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x361170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361174: 0x0  nop
    ctx->pc = 0x361174u;
    // NOP
    // 0x361178: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361178u;
    {
        const bool branch_taken_0x361178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361178) {
            ctx->pc = 0x361164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361164;
        }
    }
    ctx->pc = 0x361180u;
    // 0x361180: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x361180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x361184: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x361184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x361188: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x361188u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36118c: 0x4a0002ff  vnop
    ctx->pc = 0x36118cu;
    // NOP operation, no action needed for VU0
    // 0x361190: 0x4a0002ff  vnop
    ctx->pc = 0x361190u;
    // NOP operation, no action needed for VU0
    // 0x361194: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x361194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x361198: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x361198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x36119c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x36119cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x3611a0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3611a0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3611a4: 0x4a0002ff  vnop
    ctx->pc = 0x3611a4u;
    // NOP operation, no action needed for VU0
    // 0x3611a8: 0x4a0002ff  vnop
    ctx->pc = 0x3611a8u;
    // NOP operation, no action needed for VU0
    // 0x3611ac: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x3611acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3611b0: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x3611b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x3611b4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x3611b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x3611b8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3611b8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3611bc: 0x4a0002ff  vnop
    ctx->pc = 0x3611bcu;
    // NOP operation, no action needed for VU0
    // 0x3611c0: 0x4a0002ff  vnop
    ctx->pc = 0x3611c0u;
    // NOP operation, no action needed for VU0
    // 0x3611c4: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x3611c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3611c8: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x3611c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x3611cc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x3611ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x3611d0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3611d0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3611d4: 0x4a0002ff  vnop
    ctx->pc = 0x3611d4u;
    // NOP operation, no action needed for VU0
    // 0x3611d8: 0x4a0002ff  vnop
    ctx->pc = 0x3611d8u;
    // NOP operation, no action needed for VU0
    // 0x3611dc: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x3611dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3611e0: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x3611e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x3611e4: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x3611e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x3611e8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x3611e8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3611ec: 0x4a0002ff  vnop
    ctx->pc = 0x3611ecu;
    // NOP operation, no action needed for VU0
    // 0x3611f0: 0x4a0002ff  vnop
    ctx->pc = 0x3611f0u;
    // NOP operation, no action needed for VU0
    // 0x3611f4: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x3611f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3611f8: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x3611f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x3611fc: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x3611fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x361200: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x361200u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x361204: 0x4a0002ff  vnop
    ctx->pc = 0x361204u;
    // NOP operation, no action needed for VU0
    // 0x361208: 0x4a0002ff  vnop
    ctx->pc = 0x361208u;
    // NOP operation, no action needed for VU0
    // 0x36120c: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x36120cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x361210: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x361210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x361214: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x361214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x361218: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x361218u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36121c: 0x4a0002ff  vnop
    ctx->pc = 0x36121cu;
    // NOP operation, no action needed for VU0
    // 0x361220: 0x4a0002ff  vnop
    ctx->pc = 0x361220u;
    // NOP operation, no action needed for VU0
    // 0x361224: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x361224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x361228: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x361228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x36122c: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x36122cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x361230: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x361230u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x361234: 0x4a0002ff  vnop
    ctx->pc = 0x361234u;
    // NOP operation, no action needed for VU0
    // 0x361238: 0x4a0002ff  vnop
    ctx->pc = 0x361238u;
    // NOP operation, no action needed for VU0
    // 0x36123c: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x36123cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x361240: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x361240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x361244: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x361244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x361248: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x361248u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x36124c: 0x4a0002ff  vnop
    ctx->pc = 0x36124cu;
    // NOP operation, no action needed for VU0
    // 0x361250: 0x4a0002ff  vnop
    ctx->pc = 0x361250u;
    // NOP operation, no action needed for VU0
    // 0x361254: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x361254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x361258: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x361258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x36125c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x36125cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x361260: 0x4a0002ff  vnop
    ctx->pc = 0x361260u;
    // NOP operation, no action needed for VU0
    // 0x361264: 0x4a0002ff  vnop
    ctx->pc = 0x361264u;
    // NOP operation, no action needed for VU0
    // 0x361268: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x361268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36126c: 0x42000038  ei
    ctx->pc = 0x36126cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_361270:
    // 0x361270: 0x42000039  di
    ctx->pc = 0x361270u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361274: 0x40f  sync.p
    ctx->pc = 0x361274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361278: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361278u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36127c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361280: 0x0  nop
    ctx->pc = 0x361280u;
    // NOP
    // 0x361284: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361284u;
    {
        const bool branch_taken_0x361284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361284) {
            ctx->pc = 0x361270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361270;
        }
    }
    ctx->pc = 0x36128Cu;
    // 0x36128c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x36128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x361290: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x361290u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361294: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x361294u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361298: 0x42000038  ei
    ctx->pc = 0x361298u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36129c: 0x1ac001e0  blez        $s6, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x36129Cu;
    {
        const bool branch_taken_0x36129c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3612A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36129Cu;
        // 0x3612a0: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36129c) {
            ctx->pc = 0x361A20u;
            goto label_361a20;
        }
    }
    ctx->pc = 0x3612A4u;
    // 0x3612a4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3612a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3612a8: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3612a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3612ac: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3612b0: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x3612b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3612b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3612b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3612b8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3612b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3612bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3612c0: 0x10a000d1  beqz        $a1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3612C0u;
    {
        const bool branch_taken_0x3612c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3612C0u;
        // 0x3612c4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3612c0) {
            ctx->pc = 0x361608u;
            goto label_361608;
        }
    }
    ctx->pc = 0x3612C8u;
    // 0x3612c8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3612c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3612cc: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3612CCu;
    {
        const bool branch_taken_0x3612cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3612D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3612CCu;
        // 0x3612d0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3612cc) {
            ctx->pc = 0x3614F8u;
            goto label_3614f8;
        }
    }
    ctx->pc = 0x3612D4u;
    // 0x3612d4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3612D4u;
    {
        const bool branch_taken_0x3612d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3612D4u;
        // 0x3612d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3612d4) {
            ctx->pc = 0x3613F0u;
            goto label_3613f0;
        }
    }
    ctx->pc = 0x3612DCu;
    // 0x3612dc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3612dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3612e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3612e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3612e4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3612e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3612e8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3612e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3612ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3612ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3612f0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3612f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3612f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3612f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3612f8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3612f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3612fc:
    // 0x3612fc: 0x42000039  di
    ctx->pc = 0x3612fcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361300: 0x40f  sync.p
    ctx->pc = 0x361300u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361304: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361304u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361308: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x361308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x36130c: 0x0  nop
    ctx->pc = 0x36130cu;
    // NOP
    // 0x361310: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361310u;
    {
        const bool branch_taken_0x361310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361310) {
            ctx->pc = 0x3612FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3612fc;
        }
    }
    ctx->pc = 0x361318u;
    // 0x361318: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36131c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36131cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361320: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361324: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361328: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36132c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36132cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361330: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361334: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361338: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36133c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36133cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361340: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361340u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361344: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361344u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361348: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36134c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x36134cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361350: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361354: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361358: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36135c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x36135cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361360: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361364: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361368: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x361368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36136c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x36136cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361370: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x361370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361374: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x361374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361378: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x361378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36137c: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x36137cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361380: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x361380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361384: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x361384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x361388: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x361388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36138c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x36138cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361390: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x361390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x361394: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x361394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x361398: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x361398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x36139c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x36139cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3613a0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3613a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3613a4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3613a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3613a8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3613a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3613ac: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3613acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3613b0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3613b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3613b4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3613b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3613b8: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3613b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3613bc: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3613bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3613c0: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3613c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3613c4: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3613c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3613c8: 0x42000038  ei
    ctx->pc = 0x3613c8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3613cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3613d0: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x3613d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3613d4: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3613d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x3613d8: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x3613d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x3613dc: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x3613dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3613e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3613e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3613e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e8: 0x26d3ffff  addiu       $s3, $s6, -0x1
    ctx->pc = 0x3613e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3613ec: 0x0  nop
    ctx->pc = 0x3613ecu;
    // NOP
label_3613f0:
    // 0x3613f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3613f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3613f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3613f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3613f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3613f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3613fc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3613fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x361400: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361404: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x361404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x361408: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36140c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x36140cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_361410:
    // 0x361410: 0x42000039  di
    ctx->pc = 0x361410u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361414: 0x40f  sync.p
    ctx->pc = 0x361414u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361418: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361418u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36141c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x36141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x361420: 0x0  nop
    ctx->pc = 0x361420u;
    // NOP
    // 0x361424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361424u;
    {
        const bool branch_taken_0x361424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361424) {
            ctx->pc = 0x361410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361410;
        }
    }
    ctx->pc = 0x36142Cu;
    // 0x36142c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36142cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361430: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x361430u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361434: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361438: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36143c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x36143cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361440: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x361440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361444: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361448: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36144c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x36144cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361450: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x361450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361454: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361454u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361458: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361458u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36145c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x36145cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361460: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x361460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361464: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361468: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36146c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36146cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361470: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x361470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361474: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361478: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36147c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36147cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361480: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x361480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361484: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x361484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361488: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x361488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36148c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x36148cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361490: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x361490u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361494: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x361494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361498: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x361498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36149c: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x36149cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3614a0: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3614a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3614a4: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3614a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3614a8: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3614a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3614ac: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3614acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3614b0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3614b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3614b4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3614b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3614b8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3614b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3614bc: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3614bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3614c0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3614c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3614c4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3614c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3614c8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3614c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3614cc: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3614ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3614d0: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3614d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3614d4: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3614d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3614d8: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3614d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3614dc: 0x42000038  ei
    ctx->pc = 0x3614dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3614e0: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3614e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x3614e4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3614e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3614e8: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x3614e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3614ec: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x3614ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x3614f0: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x3614f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x3614f4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3614f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3614f8:
    // 0x3614f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3614f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3614fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3614fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x361500: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x361500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361504: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x361504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x361508: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36150c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x361510: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361514: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x361514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_361518:
    // 0x361518: 0x42000039  di
    ctx->pc = 0x361518u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36151c: 0x40f  sync.p
    ctx->pc = 0x36151cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361520: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361520u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361524: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x361524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x361528: 0x0  nop
    ctx->pc = 0x361528u;
    // NOP
    // 0x36152c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36152Cu;
    {
        const bool branch_taken_0x36152c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36152c) {
            ctx->pc = 0x361518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361518;
        }
    }
    ctx->pc = 0x361534u;
    // 0x361534: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361538: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x361538u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36153c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x36153cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361540: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361544: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361548: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x361548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36154c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x36154cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361550: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361554: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361558: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x361558u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36155c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x36155cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361560: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361560u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361564: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361568: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x361568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36156c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x36156cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361570: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361574: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361578: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x361578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36157c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x36157cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361580: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361584: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x361584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361588: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x361588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36158c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36158cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361590: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x361590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361594: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x361594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361598: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x361598u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36159c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36159cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3615a0: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3615a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3615a4: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3615a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3615a8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3615a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3615ac: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3615acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3615b0: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3615b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3615b4: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3615b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3615b8: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3615b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3615bc: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3615bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3615c0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3615c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3615c4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3615c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3615c8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3615c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3615cc: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3615ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3615d0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3615d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3615d4: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3615d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3615d8: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3615d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3615dc: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3615dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3615e0: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3615e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3615e4: 0x42000038  ei
    ctx->pc = 0x3615e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3615e8: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3615e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x3615ec: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3615ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3615f0: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x3615f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3615f4: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x3615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x3615f8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3615fc: 0x12600108  beqz        $s3, . + 4 + (0x108 << 2)
    ctx->pc = 0x3615FCu;
    {
        const bool branch_taken_0x3615fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x361600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615FCu;
        // 0x361600: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3615fc) {
            ctx->pc = 0x361A20u;
            goto label_361a20;
        }
    }
    ctx->pc = 0x361604u;
    // 0x361604: 0x0  nop
    ctx->pc = 0x361604u;
    // NOP
label_361608:
    // 0x361608: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36160c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x361610: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x361610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361614: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x361614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x361618: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36161c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36161cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x361620: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361624: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x361624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_361628:
    // 0x361628: 0x42000039  di
    ctx->pc = 0x361628u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36162c: 0x40f  sync.p
    ctx->pc = 0x36162cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361630: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361630u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361634: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x361634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x361638: 0x0  nop
    ctx->pc = 0x361638u;
    // NOP
    // 0x36163c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36163Cu;
    {
        const bool branch_taken_0x36163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36163c) {
            ctx->pc = 0x361628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361628;
        }
    }
    ctx->pc = 0x361644u;
    // 0x361644: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361648: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x361648u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36164c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x36164cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361650: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361654: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361658: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x361658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36165c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x36165cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361660: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361664: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361668: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x361668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36166c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x36166cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361670: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361670u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361674: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361678: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x361678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36167c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x36167cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361680: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361684: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361688: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x361688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36168c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x36168cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361690: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361694: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x361694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361698: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x361698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36169c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x36169cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3616a0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3616a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3616a4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3616a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3616a8: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x3616a8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3616ac: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3616acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3616b0: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3616b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3616b4: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3616b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3616b8: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3616b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3616bc: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3616bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3616c0: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3616c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3616c4: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3616c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3616c8: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3616c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3616cc: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3616ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3616d0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3616d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3616d4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3616d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3616d8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3616d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3616dc: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3616dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3616e0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3616e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3616e4: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3616e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3616e8: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3616e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3616ec: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3616ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3616f0: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3616f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3616f4: 0x42000038  ei
    ctx->pc = 0x3616f4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3616f8: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3616f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x3616fc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3616fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x361700: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x361700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x361704: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x361704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x361708: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x361708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36170c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x36170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361710: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x361710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x361714: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x361714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361718: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x361718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36171c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x36171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361720: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x361720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x361724: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361728: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x361728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_36172c:
    // 0x36172c: 0x42000039  di
    ctx->pc = 0x36172cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361730: 0x40f  sync.p
    ctx->pc = 0x361730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361734: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361734u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361738: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x361738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x36173c: 0x0  nop
    ctx->pc = 0x36173cu;
    // NOP
    // 0x361740: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361740u;
    {
        const bool branch_taken_0x361740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361740) {
            ctx->pc = 0x36172Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36172c;
        }
    }
    ctx->pc = 0x361748u;
    // 0x361748: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36174c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x36174cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361750: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361754: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361758: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36175c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x36175cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361760: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361764: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361768: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x36176c: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x36176cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361770: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361770u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361774: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361774u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361778: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36177c: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x36177cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361780: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361784: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361788: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x36178c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x36178cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361790: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361794: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361798: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x361798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36179c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x36179cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3617a0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3617a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3617a4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3617a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3617a8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3617a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3617ac: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x3617acu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3617b0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3617b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3617b4: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3617b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3617b8: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3617b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3617bc: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3617bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3617c0: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3617c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3617c4: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3617c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3617c8: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3617c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3617cc: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3617ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3617d0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3617d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3617d4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3617d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3617d8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3617d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3617dc: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3617dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3617e0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3617e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3617e4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3617e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3617e8: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3617e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3617ec: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3617ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3617f0: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3617f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3617f4: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3617f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3617f8: 0x42000038  ei
    ctx->pc = 0x3617f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3617fc: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x3617fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x361800: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x361800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x361804: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x361804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x361808: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x361808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x36180c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x361810: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361814: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x361814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x361818: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x361818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36181c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x36181cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x361820: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361824: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x361824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x361828: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x361828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36182c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x36182cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_361830:
    // 0x361830: 0x42000039  di
    ctx->pc = 0x361830u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361834: 0x40f  sync.p
    ctx->pc = 0x361834u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x361838: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x361838u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36183c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x36183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x361840: 0x0  nop
    ctx->pc = 0x361840u;
    // NOP
    // 0x361844: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361844u;
    {
        const bool branch_taken_0x361844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361844) {
            ctx->pc = 0x361830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361830;
        }
    }
    ctx->pc = 0x36184Cu;
    // 0x36184c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36184cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361850: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x361850u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361854: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361858: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x361858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36185c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x36185cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361860: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x361860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361864: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361868: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x361868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36186c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x36186cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361870: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x361870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361874: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361874u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361878: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x361878u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36187c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x36187cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361880: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x361880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361884: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x361888: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x361888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36188c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x36188cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361890: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x361890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361894: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x361898: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x361898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36189c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x36189cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3618a0: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3618a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3618a4: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3618a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3618a8: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3618a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3618ac: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3618acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3618b0: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x3618b0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3618b4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3618b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3618b8: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3618b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3618bc: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3618bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3618c0: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3618c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3618c4: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3618c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3618c8: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3618c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3618cc: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3618ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3618d0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3618d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3618d4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3618d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3618d8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3618d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3618dc: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3618dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3618e0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3618e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3618e4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3618e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3618e8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3618e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3618ec: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3618ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3618f0: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3618f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3618f4: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3618f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3618f8: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3618f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3618fc: 0x42000038  ei
    ctx->pc = 0x3618fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x361900: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x361904: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x361904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x361908: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x361908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x36190c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x36190cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x361910: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x361910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x361914: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361918: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x361918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36191c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x36191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361920: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x361920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x361924: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361928: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x361928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36192c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361930: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x361930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_361934:
    // 0x361934: 0x42000039  di
    ctx->pc = 0x361934u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x361938: 0x40f  sync.p
    ctx->pc = 0x361938u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36193c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x361940: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x361940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x361944: 0x0  nop
    ctx->pc = 0x361944u;
    // NOP
    // 0x361948: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361948u;
    {
        const bool branch_taken_0x361948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361948) {
            ctx->pc = 0x361934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361934;
        }
    }
    ctx->pc = 0x361950u;
    // 0x361950: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361954: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x361954u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361958: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x361958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36195c: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x36195cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361960: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x361960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361964: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x361964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361968: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x361968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36196c: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x36196cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x361970: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x361970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x361974: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x361974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361978: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x361978u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36197c: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x36197cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x361980: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x361980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361984: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x361984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361988: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x361988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36198c: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x36198cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x361990: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x361990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x361994: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x361994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x361998: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x361998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36199c: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x36199cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3619a0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3619a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3619a4: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x3619a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3619a8: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x3619a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3619ac: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x3619acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3619b0: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x3619b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3619b4: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x3619b4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3619b8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3619b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3619bc: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x3619bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3619c0: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x3619c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3619c4: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x3619c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3619c8: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x3619c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3619cc: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x3619ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3619d0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x3619d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3619d4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x3619d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3619d8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x3619d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3619dc: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x3619dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3619e0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x3619e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3619e4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x3619e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3619e8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x3619e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3619ec: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x3619ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x3619f0: 0xfa550000  sqc2        $vf21, 0x0($s2)
    ctx->pc = 0x3619f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3619f4: 0xfa560010  sqc2        $vf22, 0x10($s2)
    ctx->pc = 0x3619f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x3619f8: 0xfa570020  sqc2        $vf23, 0x20($s2)
    ctx->pc = 0x3619f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x3619fc: 0xfa580030  sqc2        $vf24, 0x30($s2)
    ctx->pc = 0x3619fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x361a00: 0x42000038  ei
    ctx->pc = 0x361a00u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x361a04: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x361a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x361a08: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x361a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x361a0c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x361a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x361a10: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x361a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x361a14: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x361a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x361a18: 0x1660fefb  bnez        $s3, . + 4 + (-0x105 << 2)
    ctx->pc = 0x361A18u;
    {
        const bool branch_taken_0x361a18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x361A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A18u;
        // 0x361a1c: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361a18) {
            ctx->pc = 0x361608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361608;
        }
    }
    ctx->pc = 0x361A20u;
label_361a20:
    // 0x361a20: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x361a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_361a24:
    // 0x361a24: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x361a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x361a28: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x361a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x361a2c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x361a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x361a30: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x361a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x361a34: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x361a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x361a38: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x361a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361a3c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x361a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361a40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x361a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361a44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x361a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361a48: 0x3e00008  jr          $ra
    ctx->pc = 0x361A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A48u;
        // 0x361a4c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A50u;
}
