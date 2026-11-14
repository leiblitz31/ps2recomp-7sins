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

// Function: sub_003143B0
// Address: 0x3143b0 - 0x314660
void sub_003143B0_0x3143b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003143B0_0x3143b0");
#endif

    switch (ctx->pc) {
        case 0x3143f0u: goto label_3143f0;
        case 0x314434u: goto label_314434;
        case 0x3144f0u: goto label_3144f0;
        case 0x314570u: goto label_314570;
        default: break;
    }

    ctx->pc = 0x3143b0u;

    // 0x3143b0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x3143b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x3143b4: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x3143b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x3143b8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x3143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3143bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3143bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143c0: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x3143c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x3143c4: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x3143c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x3143c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3143c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143cc: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x3143ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x3143d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3143d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143d4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3143d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3143d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143dc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x3143DCu;
    {
        const bool branch_taken_0x3143dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143DCu;
        // 0x3143e0: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143dc) {
            ctx->pc = 0x31441Cu;
            goto label_31441c;
        }
    }
    ctx->pc = 0x3143E4u;
    // 0x3143e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3143e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3143ec: 0x0  nop
    ctx->pc = 0x3143ecu;
    // NOP
label_3143f0:
    // 0x3143f0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3143F0u;
    {
        const bool branch_taken_0x3143f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3143f0) {
            ctx->pc = 0x3143F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3143F0u;
            // 0x3143f4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314408u;
            goto label_314408;
        }
    }
    ctx->pc = 0x3143F8u;
    // 0x3143f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3143f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3143fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x314400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314400u;
    {
        const bool branch_taken_0x314400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314400u;
        // 0x314404: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314400) {
            ctx->pc = 0x314414u;
            goto label_314414;
        }
    }
    ctx->pc = 0x314408u;
label_314408:
    // 0x314408: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x314408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31440c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31440cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x314410: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x314410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_314414:
    // 0x314414: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x314414u;
    {
        const bool branch_taken_0x314414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314414) {
            ctx->pc = 0x314418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314414u;
            // 0x314418: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3143F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3143f0;
        }
    }
    ctx->pc = 0x31441Cu;
label_31441c:
    // 0x31441c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x314420: 0x9604002c  lhu         $a0, 0x2C($s0)
    ctx->pc = 0x314420u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x314424: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x314424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x314428: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x314428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x31442c: 0xc0c4b04  jal         func_312C10
    ctx->pc = 0x31442Cu;
    SET_GPR_U32(ctx, 31, 0x314434u);
    ctx->pc = 0x314430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31442Cu;
    // 0x314430: 0x2e270001  sltiu       $a3, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C10u, 0x31442Cu, 0x314434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314434u;
label_314434:
    // 0x314434: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x314434u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314438: 0x11800082  beqz        $t4, . + 4 + (0x82 << 2)
    ctx->pc = 0x314438u;
    {
        const bool branch_taken_0x314438 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x31443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314438u;
        // 0x31443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314438) {
            ctx->pc = 0x314644u;
            goto label_314644;
        }
    }
    ctx->pc = 0x314440u;
    // 0x314440: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x314440u;
    {
        const bool branch_taken_0x314440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x314440) {
            ctx->pc = 0x314444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314440u;
            // 0x314444: 0x8d910024  lw          $s1, 0x24($t4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314448u;
            goto label_314448;
        }
    }
    ctx->pc = 0x314448u;
label_314448:
    // 0x314448: 0x8e0b002c  lw          $t3, 0x2C($s0)
    ctx->pc = 0x314448u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x31444c: 0x1160003d  beqz        $t3, . + 4 + (0x3D << 2)
    ctx->pc = 0x31444Cu;
    {
        const bool branch_taken_0x31444c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x314450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31444Cu;
        // 0x314450: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31444c) {
            ctx->pc = 0x314544u;
            goto label_314544;
        }
    }
    ctx->pc = 0x314454u;
    // 0x314454: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x314454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x314458: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x314458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31445c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x31445cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x314460: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x314460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314464: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x314464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314468: 0x19600016  blez        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x314468u;
    {
        const bool branch_taken_0x314468 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x31446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314468u;
        // 0x31446c: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314468) {
            ctx->pc = 0x3144C4u;
            goto label_3144c4;
        }
    }
    ctx->pc = 0x314470u;
    // 0x314470: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x314470u;
    {
        const bool branch_taken_0x314470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314470u;
        // 0x314474: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314470) {
            ctx->pc = 0x3144E8u;
            goto label_3144e8;
        }
    }
    ctx->pc = 0x314478u;
    // 0x314478: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x314478u;
    {
        const bool branch_taken_0x314478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314478) {
            ctx->pc = 0x31447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314478u;
            // 0x31447c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144C8u;
            goto label_3144c8;
        }
    }
    ctx->pc = 0x314480u;
    // 0x314480: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x314480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x314484: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x314484u;
    {
        const bool branch_taken_0x314484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314484) {
            ctx->pc = 0x314488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314484u;
            // 0x314488: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144ACu;
            goto label_3144ac;
        }
    }
    ctx->pc = 0x31448Cu;
    // 0x31448c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x31448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x314490: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x314490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x314494: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x314494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x314498: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x314498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31449c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x31449cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3144a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3144a4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3144a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3144a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3144ac:
    // 0x3144ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3144acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3144b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3144b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3144b4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3144b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3144b8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3144bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3144bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3144c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3144c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3144c4:
    // 0x3144c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3144c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3144c8:
    // 0x3144c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3144c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3144cc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3144d0: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3144d0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3144d4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3144d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3144d8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3144d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3144dc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3144dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3144e0: 0x11400018  beqz        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3144E0u;
    {
        const bool branch_taken_0x3144e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144E0u;
        // 0x3144e4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144e0) {
            ctx->pc = 0x314544u;
            goto label_314544;
        }
    }
    ctx->pc = 0x3144E8u;
label_3144e8:
    // 0x3144e8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3144e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3144ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3144f0:
    // 0x3144f0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3144f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3144f4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3144f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3144f8: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3144f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3144fc: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x3144fcu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x314500: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x314500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x314504: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x314504u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x314508: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x31450c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x31450cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x314510: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x314510u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x314514: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x314514u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x314518: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x314518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31451c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x31451cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x314520: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x314520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x314524: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x314524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x314528: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x314528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x31452c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x31452cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x314530: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x314530u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x314534: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x314534u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x314538: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x314538u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x31453c: 0x1540ffec  bnez        $t2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31453Cu;
    {
        const bool branch_taken_0x31453c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x314540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31453Cu;
        // 0x314540: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31453c) {
            ctx->pc = 0x3144F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3144f0;
        }
    }
    ctx->pc = 0x314544u;
label_314544:
    // 0x314544: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314548: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x314548u;
    {
        const bool branch_taken_0x314548 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314548u;
        // 0x31454c: 0x27a201a0  addiu       $v0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314548) {
            ctx->pc = 0x314640u;
            goto label_314640;
        }
    }
    ctx->pc = 0x314550u;
    // 0x314550: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x314550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x314554: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x314554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x314558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x314558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31455c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31455cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314560: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x314560u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314564: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x314564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314568: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x314568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x31456c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x31456cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_314570:
    // 0x314570: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x314570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x314574: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x314578: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x314578u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x31457c: 0x8d830020  lw          $v1, 0x20($t4)
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x314580: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x314580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x314584: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x314584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x314588: 0xa0a40008  sb          $a0, 0x8($a1)
    ctx->pc = 0x314588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x31458c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x31458cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x314590: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x314590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x314594: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x314594u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x314598: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x314598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31459c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x31459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3145a0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3145a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3145a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3145a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3145a8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3145a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3145ac: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3145ACu;
    {
        const bool branch_taken_0x3145ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3145B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145ACu;
        // 0x3145b0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145ac) {
            ctx->pc = 0x3145C8u;
            goto label_3145c8;
        }
    }
    ctx->pc = 0x3145B4u;
    // 0x3145b4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x3145b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3145b8: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x3145b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3145bc: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x3145bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3145c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3145C0u;
    {
        const bool branch_taken_0x3145c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145C0u;
        // 0x3145c4: 0xa4a3000a  sh          $v1, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145c0) {
            ctx->pc = 0x3145E8u;
            goto label_3145e8;
        }
    }
    ctx->pc = 0x3145C8u;
label_3145c8:
    // 0x3145c8: 0xa0ad0009  sb          $t5, 0x9($a1)
    ctx->pc = 0x3145c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 13));
    // 0x3145cc: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x3145ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x3145d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3145d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3145d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3145d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3145d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3145dc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3145e0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3145e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3145e4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3145e8:
    // 0x3145e8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3145ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3145ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3145f0: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3145F0u;
    {
        const bool branch_taken_0x3145f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3145f0) {
            ctx->pc = 0x3145F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145F0u;
            // 0x3145f4: 0xa0ad0001  sb          $t5, 0x1($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31460Cu;
            goto label_31460c;
        }
    }
    ctx->pc = 0x3145F8u;
    // 0x3145f8: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x3145f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3145fc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3145fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x314600: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x314600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x314604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x314604u;
    {
        const bool branch_taken_0x314604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314604u;
        // 0x314608: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314604) {
            ctx->pc = 0x314628u;
            goto label_314628;
        }
    }
    ctx->pc = 0x31460Cu;
label_31460c:
    // 0x31460c: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x31460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x314610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x314610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x314614: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x314614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x314618: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x314618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31461c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x314620: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x314620u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x314624: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_314628:
    // 0x314628: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x314628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31462c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31462cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x314630: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x314630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x314634: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x314634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x314638: 0x521ffcd  bgez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x314638u;
    {
        const bool branch_taken_0x314638 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x31463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314638u;
        // 0x31463c: 0x2508fff8  addiu       $t0, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314638) {
            ctx->pc = 0x314570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314570;
        }
    }
    ctx->pc = 0x314640u;
label_314640:
    // 0x314640: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x314640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_314644:
    // 0x314644: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x314644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x314648: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x314648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x31464c: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x31464cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x314650: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x314650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x314654: 0x3e00008  jr          $ra
    ctx->pc = 0x314654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314654u;
        // 0x314658: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31465Cu;
    // 0x31465c: 0x0  nop
    ctx->pc = 0x31465cu;
    // NOP
    ctx->pc = 0x314660u;
}
