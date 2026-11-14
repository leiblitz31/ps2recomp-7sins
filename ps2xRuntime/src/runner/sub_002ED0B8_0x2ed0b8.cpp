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

// Function: sub_002ED0B8
// Address: 0x2ed0b8 - 0x2ed210
void sub_002ED0B8_0x2ed0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED0B8_0x2ed0b8");
#endif

    switch (ctx->pc) {
        case 0x2ed110u: goto label_2ed110;
        case 0x2ed180u: goto label_2ed180;
        case 0x2ed1e0u: goto label_2ed1e0;
        default: break;
    }

    ctx->pc = 0x2ed0b8u;

    // 0x2ed0b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ed0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ed0bc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2ed0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2ed0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0c4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2ed0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2ed0c8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2ed0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2ed0cc: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2ed0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2ed0d0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ed0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed0d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ed0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ed0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED0D8u;
    {
        const bool branch_taken_0x2ed0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0D8u;
        // 0x2ed0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0d8) {
            ctx->pc = 0x2ED0F8u;
            goto label_2ed0f8;
        }
    }
    ctx->pc = 0x2ED0E0u;
    // 0x2ed0e0: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x2ed0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x2ed0e4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ed0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ed0e8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ed0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2ed0ec: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2ED0ECu;
    {
        const bool branch_taken_0x2ed0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0ECu;
        // 0x2ed0f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0ec) {
            ctx->pc = 0x2ED1F4u;
            goto label_2ed1f4;
        }
    }
    ctx->pc = 0x2ED0F4u;
    // 0x2ed0f4: 0x0  nop
    ctx->pc = 0x2ed0f4u;
    // NOP
label_2ed0f8:
    // 0x2ed0f8: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2ed0fc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED0FCu;
    {
        const bool branch_taken_0x2ed0fc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2ED100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0FCu;
        // 0x2ed100: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0fc) {
            ctx->pc = 0x2ED120u;
            goto label_2ed120;
        }
    }
    ctx->pc = 0x2ED104u;
    // 0x2ed104: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ed104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ed108: 0xc0bb2a6  jal         func_2ECA98
    ctx->pc = 0x2ED108u;
    SET_GPR_U32(ctx, 31, 0x2ED110u);
    ctx->pc = 0x2ED10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED108u;
    // 0x2ed10c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECA98u, 0x2ED108u, 0x2ED110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED110u;
label_2ed110:
    // 0x2ed110: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED110u;
    {
        const bool branch_taken_0x2ed110 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2ED114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED110u;
        // 0x2ed114: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed110) {
            ctx->pc = 0x2ED130u;
            goto label_2ed130;
        }
    }
    ctx->pc = 0x2ED118u;
    // 0x2ed118: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ed118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed11c: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x2ed11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_2ed120:
    // 0x2ed120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ed120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed124: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ed124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ed128: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED128u;
    {
        const bool branch_taken_0x2ed128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED128u;
        // 0x2ed12c: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed128) {
            ctx->pc = 0x2ED174u;
            goto label_2ed174;
        }
    }
    ctx->pc = 0x2ED130u;
label_2ed130:
    // 0x2ed130: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2ed130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ed134: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x2ed134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ed138: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x2ed138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x2ed13c: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x2ed13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x2ed140: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED140u;
    {
        const bool branch_taken_0x2ed140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED140u;
        // 0x2ed144: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed140) {
            ctx->pc = 0x2ED168u;
            goto label_2ed168;
        }
    }
    ctx->pc = 0x2ED148u;
    // 0x2ed148: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ed14c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ed14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ed150: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x2ed150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x2ed154: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED154u;
    {
        const bool branch_taken_0x2ed154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED154u;
        // 0x2ed158: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed154) {
            ctx->pc = 0x2ED16Cu;
            goto label_2ed16c;
        }
    }
    ctx->pc = 0x2ED15Cu;
    // 0x2ed15c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x2ed15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x2ed160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED160u;
    {
        const bool branch_taken_0x2ed160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED160u;
        // 0x2ed164: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed160) {
            ctx->pc = 0x2ED170u;
            goto label_2ed170;
        }
    }
    ctx->pc = 0x2ED168u;
label_2ed168:
    // 0x2ed168: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ed168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ed16c:
    // 0x2ed16c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2ed16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2ed170:
    // 0x2ed170: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ed170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ed174:
    // 0x2ed174: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ed174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ed178: 0xc0bb542  jal         func_2ED508
    ctx->pc = 0x2ED178u;
    SET_GPR_U32(ctx, 31, 0x2ED180u);
    ctx->pc = 0x2ED17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED178u;
    // 0x2ed17c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED508u, 0x2ED178u, 0x2ED180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED180u;
label_2ed180:
    // 0x2ed180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed184: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED184u;
    {
        const bool branch_taken_0x2ed184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED184u;
        // 0x2ed188: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed184) {
            ctx->pc = 0x2ED1B0u;
            goto label_2ed1b0;
        }
    }
    ctx->pc = 0x2ED18Cu;
    // 0x2ed18c: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x2ed190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed194: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2ed194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2ed198: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ed198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ed19c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2ed19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2ed1a0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ed1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ed1a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED1A4u;
    {
        const bool branch_taken_0x2ed1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1A4u;
        // 0x2ed1a8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1a4) {
            ctx->pc = 0x2ED1F4u;
            goto label_2ed1f4;
        }
    }
    ctx->pc = 0x2ED1ACu;
    // 0x2ed1ac: 0x0  nop
    ctx->pc = 0x2ed1acu;
    // NOP
label_2ed1b0:
    // 0x2ed1b0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ed1b4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ed1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ed1b8: 0x2463bd78  addiu       $v1, $v1, -0x4288
    ctx->pc = 0x2ed1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950264));
    // 0x2ed1bc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2ed1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2ed1c0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2ed1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2ed1c4: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2ed1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2ed1c8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ed1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ed1cc: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2ed1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x2ed1d0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED1D0u;
    {
        const bool branch_taken_0x2ed1d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D0u;
        // 0x2ed1d4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1d0) {
            ctx->pc = 0x2ED1F4u;
            goto label_2ed1f4;
        }
    }
    ctx->pc = 0x2ED1D8u;
    // 0x2ed1d8: 0xc0bf8c4  jal         func_2FE310
    ctx->pc = 0x2ED1D8u;
    SET_GPR_U32(ctx, 31, 0x2ED1E0u);
    ctx->pc = 0x2ED1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED1D8u;
    // 0x2ed1dc: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE310u, 0x2ED1D8u, 0x2ED1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1E0u;
label_2ed1e0:
    // 0x2ed1e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED1E0u;
    {
        const bool branch_taken_0x2ed1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1e0) {
            ctx->pc = 0x2ED1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED1E0u;
            // 0x2ed1e4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED1F8u;
            goto label_2ed1f8;
        }
    }
    ctx->pc = 0x2ED1E8u;
    // 0x2ed1e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ed1e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed1ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ed1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ed1f0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ed1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ed1f4:
    // 0x2ed1f4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2ed1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ed1f8:
    // 0x2ed1f8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2ed1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ed1fc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2ed1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed200: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2ed200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ed204: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED204u;
        // 0x2ed208: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED20Cu;
    // 0x2ed20c: 0x0  nop
    ctx->pc = 0x2ed20cu;
    // NOP
    ctx->pc = 0x2ed210u;
}
