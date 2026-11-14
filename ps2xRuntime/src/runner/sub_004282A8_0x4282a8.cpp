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

// Function: sub_004282A8
// Address: 0x4282a8 - 0x4285f0
void sub_004282A8_0x4282a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004282A8_0x4282a8");
#endif

    switch (ctx->pc) {
        case 0x4282d8u: goto label_4282d8;
        case 0x42830cu: goto label_42830c;
        case 0x4283d8u: goto label_4283d8;
        case 0x428450u: goto label_428450;
        case 0x428484u: goto label_428484;
        case 0x428584u: goto label_428584;
        case 0x428594u: goto label_428594;
        default: break;
    }

    ctx->pc = 0x4282a8u;

    // 0x4282a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4282a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4282ac: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x4282acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4282b0: 0x8f83be24  lw          $v1, -0x41DC($gp)
    ctx->pc = 0x4282b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x4282b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4282b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4282b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4282b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4282bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4282bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4282c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4282c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4282c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4282c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4282C8u;
    {
        const bool branch_taken_0x4282c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4282CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282C8u;
        // 0x4282cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282c8) {
            ctx->pc = 0x4282D8u;
            goto label_4282d8;
        }
    }
    ctx->pc = 0x4282D0u;
    // 0x4282d0: 0xc109f06  jal         func_427C18
    ctx->pc = 0x4282D0u;
    SET_GPR_U32(ctx, 31, 0x4282D8u);
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x4282D0u, 0x4282D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4282D8u;
label_4282d8:
    // 0x4282d8: 0x8f82be4c  lw          $v0, -0x41B4($gp)
    ctx->pc = 0x4282d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x4282dc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4282DCu;
    {
        const bool branch_taken_0x4282dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4282E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282DCu;
        // 0x4282e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282dc) {
            ctx->pc = 0x42837Cu;
            goto label_42837c;
        }
    }
    ctx->pc = 0x4282E4u;
    // 0x4282e4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4282e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4282e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4282e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x4282ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4282ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4282f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4282F0u;
    {
        const bool branch_taken_0x4282f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4282F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282F0u;
        // 0x4282f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282f0) {
            ctx->pc = 0x428328u;
            goto label_428328;
        }
    }
    ctx->pc = 0x4282F8u;
    // 0x4282f8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4282f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4282fc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4282fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428300u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x428304: 0xf  sync
    ctx->pc = 0x428304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428308: 0x40f  sync.p
    ctx->pc = 0x428308u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_42830c:
    // 0x42830c: 0x0  nop
    ctx->pc = 0x42830cu;
    // NOP
    // 0x428310: 0x0  nop
    ctx->pc = 0x428310u;
    // NOP
    // 0x428314: 0x0  nop
    ctx->pc = 0x428314u;
    // NOP
    // 0x428318: 0x0  nop
    ctx->pc = 0x428318u;
    // NOP
    // 0x42831c: 0x0  nop
    ctx->pc = 0x42831cu;
    // NOP
    // 0x428320: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x428320u;
    {
        const bool branch_taken_0x428320 = (false);
        if (branch_taken_0x428320) {
            ctx->pc = 0x42830Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42830c;
        }
    }
    ctx->pc = 0x428328u;
label_428328:
    // 0x428328: 0x8f87be48  lw          $a3, -0x41B8($gp)
    ctx->pc = 0x428328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950472)));
    // 0x42832c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x42832Cu;
    {
        const bool branch_taken_0x42832c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x428330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42832Cu;
        // 0x428330: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42832c) {
            ctx->pc = 0x42835Cu;
            goto label_42835c;
        }
    }
    ctx->pc = 0x428334u;
    // 0x428334: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x428334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x428338: 0x8f85be44  lw          $a1, -0x41BC($gp)
    ctx->pc = 0x428338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x42833c: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x42833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x428340: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x428340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x428344: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x428344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x428348: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x428348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x42834c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x42834cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x428350: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x428350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x428354: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x428354u;
    {
        const bool branch_taken_0x428354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428354u;
        // 0x428358: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428354) {
            ctx->pc = 0x42836Cu;
            goto label_42836c;
        }
    }
    ctx->pc = 0x42835Cu;
label_42835c:
    // 0x42835c: 0x8f83be4c  lw          $v1, -0x41B4($gp)
    ctx->pc = 0x42835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x428360: 0x8f84be44  lw          $a0, -0x41BC($gp)
    ctx->pc = 0x428360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x428364: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x428368: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x428368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_42836c:
    // 0x42836c: 0xaf80be44  sw          $zero, -0x41BC($gp)
    ctx->pc = 0x42836cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 0));
    // 0x428370: 0xaf80be48  sw          $zero, -0x41B8($gp)
    ctx->pc = 0x428370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 0));
    // 0x428374: 0xaf80be4c  sw          $zero, -0x41B4($gp)
    ctx->pc = 0x428374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 0));
    // 0x428378: 0xaf80be50  sw          $zero, -0x41B0($gp)
    ctx->pc = 0x428378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 0));
label_42837c:
    // 0x42837c: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x42837cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x428380: 0x8f82be78  lw          $v0, -0x4188($gp)
    ctx->pc = 0x428380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950520)));
    // 0x428384: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x428384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x428388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x428388u;
    {
        const bool branch_taken_0x428388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428388u;
        // 0x42838c: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428388) {
            ctx->pc = 0x4283A0u;
            goto label_4283a0;
        }
    }
    ctx->pc = 0x428390u;
    // 0x428390: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x428390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x428394: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x428394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x428398: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x428398u;
    {
        const bool branch_taken_0x428398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428398u;
        // 0x42839c: 0xaf82be7c  sw          $v0, -0x4184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428398) {
            ctx->pc = 0x428408u;
            goto label_428408;
        }
    }
    ctx->pc = 0x4283A0u;
label_4283a0:
    // 0x4283a0: 0x8f82be74  lw          $v0, -0x418C($gp)
    ctx->pc = 0x4283a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x4283a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4283a8: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4283a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4283ac: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x4283acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x4283b0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4283b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4283b4: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x4283b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4283b8: 0x24c70080  addiu       $a3, $a2, 0x80
    ctx->pc = 0x4283b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x4283bc: 0x87202b  sltu        $a0, $a0, $a3
    ctx->pc = 0x4283bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4283c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4283C0u;
    {
        const bool branch_taken_0x4283c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4283C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4283C0u;
        // 0x4283c4: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4283c0) {
            ctx->pc = 0x4283E0u;
            goto label_4283e0;
        }
    }
    ctx->pc = 0x4283C8u;
    // 0x4283c8: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x4283c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x4283cc: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x4283ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x4283d0: 0xc10a024  jal         func_428090
    ctx->pc = 0x4283D0u;
    SET_GPR_U32(ctx, 31, 0x4283D8u);
    ctx->pc = 0x4283D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4283D0u;
    // 0x4283d4: 0xaf82be7c  sw          $v0, -0x4184($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x4283D0u, 0x4283D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4283D8u;
label_4283d8:
    // 0x4283d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4283D8u;
    {
        const bool branch_taken_0x4283d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4283D8u;
        // 0x4283dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4283d8) {
            ctx->pc = 0x42840Cu;
            goto label_42840c;
        }
    }
    ctx->pc = 0x4283E0u;
label_4283e0:
    // 0x4283e0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x4283e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4283e4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x4283e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x4283e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4283e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4283ec: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x4283ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4283f0: 0x24c20078  addiu       $v0, $a2, 0x78
    ctx->pc = 0x4283f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
    // 0x4283f4: 0xaf87be74  sw          $a3, -0x418C($gp)
    ctx->pc = 0x4283f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 7));
    // 0x4283f8: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x4283f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
    // 0x4283fc: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x4283fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x428400: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x428400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x428404: 0xaf83be7c  sw          $v1, -0x4184($gp)
    ctx->pc = 0x428404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 3));
label_428408:
    // 0x428408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x428408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42840c:
    // 0x42840c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x428410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428414: 0x3e00008  jr          $ra
    ctx->pc = 0x428414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428414u;
        // 0x428418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42841Cu;
    // 0x42841c: 0x0  nop
    ctx->pc = 0x42841cu;
    // NOP
    // 0x428420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x428420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x428424: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x428424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x428428: 0x8f83be24  lw          $v1, -0x41DC($gp)
    ctx->pc = 0x428428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x42842c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x428430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x428430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x428434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x428434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x428438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42843c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x428440u;
    {
        const bool branch_taken_0x428440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428440u;
        // 0x428444: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428440) {
            ctx->pc = 0x428450u;
            goto label_428450;
        }
    }
    ctx->pc = 0x428448u;
    // 0x428448: 0xc109f06  jal         func_427C18
    ctx->pc = 0x428448u;
    SET_GPR_U32(ctx, 31, 0x428450u);
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x428448u, 0x428450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428450u;
label_428450:
    // 0x428450: 0x8f82be4c  lw          $v0, -0x41B4($gp)
    ctx->pc = 0x428450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x428454: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x428454u;
    {
        const bool branch_taken_0x428454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428454u;
        // 0x428458: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428454) {
            ctx->pc = 0x4284FCu;
            goto label_4284fc;
        }
    }
    ctx->pc = 0x42845Cu;
    // 0x42845c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x42845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x428460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428460u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x428464: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x428464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x428468: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x428468u;
    {
        const bool branch_taken_0x428468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428468u;
        // 0x42846c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428468) {
            ctx->pc = 0x4284A8u;
            goto label_4284a8;
        }
    }
    ctx->pc = 0x428470u;
    // 0x428470: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x428470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x428474: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x428474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x428478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x428478u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x42847c: 0xf  sync
    ctx->pc = 0x42847cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428480: 0x40f  sync.p
    ctx->pc = 0x428480u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428484:
    // 0x428484: 0x0  nop
    ctx->pc = 0x428484u;
    // NOP
    // 0x428488: 0x0  nop
    ctx->pc = 0x428488u;
    // NOP
    // 0x42848c: 0x0  nop
    ctx->pc = 0x42848cu;
    // NOP
    // 0x428490: 0x0  nop
    ctx->pc = 0x428490u;
    // NOP
    // 0x428494: 0x0  nop
    ctx->pc = 0x428494u;
    // NOP
    // 0x428498: 0x0  nop
    ctx->pc = 0x428498u;
    // NOP
    // 0x42849c: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x42849Cu;
    {
        const bool branch_taken_0x42849c = (false);
        if (branch_taken_0x42849c) {
            ctx->pc = 0x428484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428484;
        }
    }
    ctx->pc = 0x4284A4u;
    // 0x4284a4: 0x0  nop
    ctx->pc = 0x4284a4u;
    // NOP
label_4284a8:
    // 0x4284a8: 0x8f87be48  lw          $a3, -0x41B8($gp)
    ctx->pc = 0x4284a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950472)));
    // 0x4284ac: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x4284ACu;
    {
        const bool branch_taken_0x4284ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4284B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4284ACu;
        // 0x4284b0: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4284ac) {
            ctx->pc = 0x4284DCu;
            goto label_4284dc;
        }
    }
    ctx->pc = 0x4284B4u;
    // 0x4284b4: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x4284b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x4284b8: 0x8f85be44  lw          $a1, -0x41BC($gp)
    ctx->pc = 0x4284b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x4284bc: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x4284bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x4284c0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4284c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4284c4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4284c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x4284c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x4284cc: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x4284ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x4284d0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4284d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4284d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4284D4u;
    {
        const bool branch_taken_0x4284d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4284D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4284D4u;
        // 0x4284d8: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4284d4) {
            ctx->pc = 0x4284ECu;
            goto label_4284ec;
        }
    }
    ctx->pc = 0x4284DCu;
label_4284dc:
    // 0x4284dc: 0x8f83be4c  lw          $v1, -0x41B4($gp)
    ctx->pc = 0x4284dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x4284e0: 0x8f84be44  lw          $a0, -0x41BC($gp)
    ctx->pc = 0x4284e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x4284e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4284e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4284e8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4284e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4284ec:
    // 0x4284ec: 0xaf80be44  sw          $zero, -0x41BC($gp)
    ctx->pc = 0x4284ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 0));
    // 0x4284f0: 0xaf80be48  sw          $zero, -0x41B8($gp)
    ctx->pc = 0x4284f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 0));
    // 0x4284f4: 0xaf80be4c  sw          $zero, -0x41B4($gp)
    ctx->pc = 0x4284f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 0));
    // 0x4284f8: 0xaf80be50  sw          $zero, -0x41B0($gp)
    ctx->pc = 0x4284f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 0));
label_4284fc:
    // 0x4284fc: 0x8f88be78  lw          $t0, -0x4188($gp)
    ctx->pc = 0x4284fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950520)));
    // 0x428500: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x428500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x428504: 0x2502fff8  addiu       $v0, $t0, -0x8
    ctx->pc = 0x428504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x428508: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x428508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42850c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42850Cu;
    {
        const bool branch_taken_0x42850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42850Cu;
        // 0x428510: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42850c) {
            ctx->pc = 0x428534u;
            goto label_428534;
        }
    }
    ctx->pc = 0x428514u;
    // 0x428514: 0x24031121  addiu       $v1, $zero, 0x1121
    ctx->pc = 0x428514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x428518: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x428518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x42851c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x42851cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x428520: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x428520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x428524: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x428524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x428528: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x428528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x42852c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x42852Cu;
    {
        const bool branch_taken_0x42852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42852Cu;
        // 0x428530: 0xaf82be7c  sw          $v0, -0x4184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42852c) {
            ctx->pc = 0x4285DCu;
            goto label_4285dc;
        }
    }
    ctx->pc = 0x428534u;
label_428534:
    // 0x428534: 0x8f82be74  lw          $v0, -0x418C($gp)
    ctx->pc = 0x428534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x428538: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x428538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x42853c: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x42853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x428540: 0x8f84be70  lw          $a0, -0x4190($gp)
    ctx->pc = 0x428540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x428544: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x428544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x428548: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x428548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42854c: 0x24c70080  addiu       $a3, $a2, 0x80
    ctx->pc = 0x42854cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x428550: 0x87202b  sltu        $a0, $a0, $a3
    ctx->pc = 0x428550u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x428554: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x428554u;
    {
        const bool branch_taken_0x428554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x428558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428554u;
        // 0x428558: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x428554) {
            ctx->pc = 0x42859Cu;
            goto label_42859c;
        }
    }
    ctx->pc = 0x42855Cu;
    // 0x42855c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42855Cu;
    {
        const bool branch_taken_0x42855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42855Cu;
        // 0x428560: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42855c) {
            ctx->pc = 0x42858Cu;
            goto label_42858c;
        }
    }
    ctx->pc = 0x428564u;
    // 0x428564: 0x24031121  addiu       $v1, $zero, 0x1121
    ctx->pc = 0x428564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x428568: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x428568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x42856c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x42856cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x428570: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x428570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x428574: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x428574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x428578: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x428578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x42857c: 0xc10a024  jal         func_428090
    ctx->pc = 0x42857Cu;
    SET_GPR_U32(ctx, 31, 0x428584u);
    ctx->pc = 0x428580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42857Cu;
    // 0x428580: 0xaf82be7c  sw          $v0, -0x4184($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x42857Cu, 0x428584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428584u;
label_428584:
    // 0x428584: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x428584u;
    {
        const bool branch_taken_0x428584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428584u;
        // 0x428588: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428584) {
            ctx->pc = 0x4285E0u;
            goto label_4285e0;
        }
    }
    ctx->pc = 0x42858Cu;
label_42858c:
    // 0x42858c: 0xc10a024  jal         func_428090
    ctx->pc = 0x42858Cu;
    SET_GPR_U32(ctx, 31, 0x428594u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x42858Cu, 0x428594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428594u;
label_428594:
    // 0x428594: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x428594u;
    {
        const bool branch_taken_0x428594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428594u;
        // 0x428598: 0x8f82be7c  lw          $v0, -0x4184($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428594) {
            ctx->pc = 0x4285BCu;
            goto label_4285bc;
        }
    }
    ctx->pc = 0x42859Cu;
label_42859c:
    // 0x42859c: 0x24c20078  addiu       $v0, $a2, 0x78
    ctx->pc = 0x42859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
    // 0x4285a0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x4285a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4285a4: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x4285a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
    // 0x4285a8: 0xaf87be74  sw          $a3, -0x418C($gp)
    ctx->pc = 0x4285a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 7));
    // 0x4285ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4285acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4285b0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x4285b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x4285b4: 0xaf86be7c  sw          $a2, -0x4184($gp)
    ctx->pc = 0x4285b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 6));
    // 0x4285b8: 0x8f82be7c  lw          $v0, -0x4184($gp)
    ctx->pc = 0x4285b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
label_4285bc:
    // 0x4285bc: 0x24031121  addiu       $v1, $zero, 0x1121
    ctx->pc = 0x4285bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x4285c0: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x4285c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x4285c4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4285c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4285c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4285c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4285cc: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4285ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x4285d0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x4285d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x4285d4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x4285d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x4285d8: 0xaf85be7c  sw          $a1, -0x4184($gp)
    ctx->pc = 0x4285d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 5));
label_4285dc:
    // 0x4285dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4285dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4285e0:
    // 0x4285e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4285e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4285e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4285e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4285e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4285E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4285ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4285E8u;
        // 0x4285ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4285E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4285F0u;
}
