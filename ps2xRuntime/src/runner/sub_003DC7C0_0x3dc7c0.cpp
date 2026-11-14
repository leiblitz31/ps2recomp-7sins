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

// Function: sub_003DC7C0
// Address: 0x3dc7c0 - 0x3dce28
void sub_003DC7C0_0x3dc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC7C0_0x3dc7c0");
#endif

    switch (ctx->pc) {
        case 0x3dc808u: goto label_3dc808;
        case 0x3dcac8u: goto label_3dcac8;
        case 0x3dcb10u: goto label_3dcb10;
        case 0x3dcd48u: goto label_3dcd48;
        case 0x3dcdf4u: goto label_3dcdf4;
        default: break;
    }

    ctx->pc = 0x3dc7c0u;

    // 0x3dc7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dc7c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3dc7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3dc7c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3dc7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3dc7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc7d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dc7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dc7d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dc7d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc7d8: 0x12000133  beqz        $s0, . + 4 + (0x133 << 2)
    ctx->pc = 0x3DC7D8u;
    {
        const bool branch_taken_0x3dc7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7D8u;
        // 0x3dc7dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7d8) {
            ctx->pc = 0x3DCCA8u;
            goto label_3dcca8;
        }
    }
    ctx->pc = 0x3DC7E0u;
    // 0x3dc7e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc7e4: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x3DC7E4u;
    {
        const bool branch_taken_0x3dc7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7E4u;
        // 0x3dc7e8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7e4) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DC7ECu;
    // 0x3dc7ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3dc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dc7f0: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x3DC7F0u;
    {
        const bool branch_taken_0x3dc7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7F0u;
        // 0x3dc7f4: 0x3a430004  xori        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7f0) {
            ctx->pc = 0x3DCCA8u;
            goto label_3dcca8;
        }
    }
    ctx->pc = 0x3DC7F8u;
    // 0x3dc7f8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3dc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3dc7fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dc7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc800: 0x2411fffb  addiu       $s1, $zero, -0x5
    ctx->pc = 0x3dc800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3dc804: 0x3900b  movn        $s2, $zero, $v1
    ctx->pc = 0x3dc804u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_3dc808:
    // 0x3dc808: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc80c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3dc80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc810: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dc814: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x3dc814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3dc818: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x3DC818u;
    {
        const bool branch_taken_0x3dc818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC818u;
        // 0x3dc81c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc818) {
            ctx->pc = 0x3DCCA8u;
            goto label_3dcca8;
        }
    }
    ctx->pc = 0x3DC820u;
    // 0x3dc820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dc820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dc824: 0x2442d3a0  addiu       $v0, $v0, -0x2C60
    ctx->pc = 0x3dc824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955936));
    // 0x3dc828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc82c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3dc82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dc830: 0x800008  jr          $a0
    ctx->pc = 0x3DC830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DC838u: goto label_3dc838;
            case 0x3DC8D4u: goto label_3dc8d4;
            case 0x3DC958u: goto label_3dc958;
            case 0x3DC9A0u: goto label_3dc9a0;
            case 0x3DC9F0u: goto label_3dc9f0;
            case 0x3DCA40u: goto label_3dca40;
            case 0x3DCA98u: goto label_3dca98;
            case 0x3DCAB8u: goto label_3dcab8;
            case 0x3DCB30u: goto label_3dcb30;
            case 0x3DCB78u: goto label_3dcb78;
            case 0x3DCBC8u: goto label_3dcbc8;
            case 0x3DCC18u: goto label_3dcc18;
            case 0x3DCC98u: goto label_3dcc98;
            case 0x3DCCA0u: goto label_3dcca0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DC838u;
label_3dc838:
    // 0x3dc838: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dc83c: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3DC83Cu;
    {
        const bool branch_taken_0x3dc83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC83Cu;
        // 0x3dc840: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc83c) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DC844u;
    // 0x3dc844: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dc844u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc848: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dc848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dc84c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dc84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc850: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dc850u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dc854: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dc854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dc858: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dc858u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dc85c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3dc85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dc860: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc864: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dc864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc868: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc86c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dc86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dc870: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3dc870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3dc874: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DC874u;
    {
        const bool branch_taken_0x3dc874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3DC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC874u;
        // 0x3dc878: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc874) {
            ctx->pc = 0x3DC8A0u;
            goto label_3dc8a0;
        }
    }
    ctx->pc = 0x3DC87Cu;
    // 0x3dc87c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3dc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3dc880: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3dc880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc884: 0x2463d320  addiu       $v1, $v1, -0x2CE0
    ctx->pc = 0x3dc884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955808));
    // 0x3dc888: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3dc888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dc88c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3dc88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3dc890: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3dc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3dc894: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dc894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dc898: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x3DC898u;
    {
        const bool branch_taken_0x3dc898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC898u;
        // 0x3dc89c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc898) {
            ctx->pc = 0x3DC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc808;
        }
    }
    ctx->pc = 0x3DC8A0u;
label_3dc8a0:
    // 0x3dc8a0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dc8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc8a4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dc8a8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3dc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3dc8ac: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3dc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3dc8b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3dc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3dc8b4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3dc8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dc8b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC8B8u;
    {
        const bool branch_taken_0x3dc8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC8B8u;
        // 0x3dc8bc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc8b8) {
            ctx->pc = 0x3DC8CCu;
            goto label_3dc8cc;
        }
    }
    ctx->pc = 0x3DC8C0u;
    // 0x3dc8c0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3dc8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dc8c4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x3DC8C4u;
    {
        const bool branch_taken_0x3dc8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC8C4u;
        // 0x3dc8c8: 0x2442d340  addiu       $v0, $v0, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc8c4) {
            ctx->pc = 0x3DCC7Cu;
            goto label_3dcc7c;
        }
    }
    ctx->pc = 0x3DC8CCu;
label_3dc8cc:
    // 0x3dc8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc8d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3dc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3dc8d4:
    // 0x3dc8d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dc8d8: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3DC8D8u;
    {
        const bool branch_taken_0x3dc8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC8D8u;
        // 0x3dc8dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc8d8) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DC8E0u;
    // 0x3dc8e0: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dc8e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc8e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dc8e8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x3dc8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3dc8ec: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dc8ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dc8f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3dc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dc8f4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dc8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dc8f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dc8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc8fc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dc8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc900: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3dc900u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dc904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dc908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dc90c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3DC90Cu;
    {
        const bool branch_taken_0x3dc90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc90c) {
            ctx->pc = 0x3DC910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC90Cu;
            // 0x3dc910: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC914u;
            goto label_3dc914;
        }
    }
    ctx->pc = 0x3DC914u;
label_3dc914:
    // 0x3dc914: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dc918: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3dc91c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3dc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3dc920: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3dc920u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3dc924: 0x1810  mfhi        $v1
    ctx->pc = 0x3dc924u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3dc928: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC928u;
    {
        const bool branch_taken_0x3dc928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC928u;
        // 0x3dc92c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc928) {
            ctx->pc = 0x3DC93Cu;
            goto label_3dc93c;
        }
    }
    ctx->pc = 0x3DC930u;
    // 0x3dc930: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3dc930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dc934: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x3DC934u;
    {
        const bool branch_taken_0x3dc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC934u;
        // 0x3dc938: 0x2442d358  addiu       $v0, $v0, -0x2CA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc934) {
            ctx->pc = 0x3DCC7Cu;
            goto label_3dcc7c;
        }
    }
    ctx->pc = 0x3DC93Cu;
label_3dc93c:
    // 0x3dc93c: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x3dc93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x3dc940: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC940u;
    {
        const bool branch_taken_0x3dc940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC940u;
        // 0x3dc944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc940) {
            ctx->pc = 0x3DC954u;
            goto label_3dc954;
        }
    }
    ctx->pc = 0x3DC948u;
    // 0x3dc948: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3dc94c: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x3DC94Cu;
    {
        const bool branch_taken_0x3dc94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC94Cu;
        // 0x3dc950: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc94c) {
            ctx->pc = 0x3DC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc808;
        }
    }
    ctx->pc = 0x3DC954u;
label_3dc954:
    // 0x3dc954: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3dc954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3dc958:
    // 0x3dc958: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dc95c: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x3DC95Cu;
    {
        const bool branch_taken_0x3dc95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC95Cu;
        // 0x3dc960: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc95c) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DC964u;
    // 0x3dc964: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dc964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc968: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dc968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dc96c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3dc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dc970: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dc970u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dc974: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dc974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dc978: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dc978u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dc97c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dc97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc980: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc984: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dc984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc988: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc98c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3dc98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3dc990: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x3dc990u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x3dc994: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dc994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dc998: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc99c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3dc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3dc9a0:
    // 0x3dc9a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dc9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dc9a4: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x3DC9A4u;
    {
        const bool branch_taken_0x3dc9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9A4u;
        // 0x3dc9a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9a4) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DC9ACu;
    // 0x3dc9ac: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dc9acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc9b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dc9b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3dc9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dc9b8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dc9b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dc9bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dc9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dc9c0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dc9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dc9c4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dc9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc9c8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dc9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc9cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dc9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc9d0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3dc9d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dc9d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc9d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3dc9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3dc9dc: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dc9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dc9e0: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3dc9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3dc9e4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dc9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dc9e8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dc9ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3dc9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_3dc9f0:
    // 0x3dc9f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dc9f4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x3DC9F4u;
    {
        const bool branch_taken_0x3dc9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9F4u;
        // 0x3dc9f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9f4) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DC9FCu;
    // 0x3dc9fc: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dc9fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dca00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dca04: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3dca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3dca08: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dca08u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dca0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dca10: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dca10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dca14: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dca14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca18: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dca1c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dca1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dca20: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3dca20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dca24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dca28: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3dca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3dca2c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dca2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dca30: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3dca30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3dca34: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dca34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dca38: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dca3c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3dca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_3dca40:
    // 0x3dca40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dca44: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3DCA44u;
    {
        const bool branch_taken_0x3dca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA44u;
        // 0x3dca48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dca44) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DCA4Cu;
    // 0x3dca4c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dca4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dca50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dca54: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3dca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3dca58: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dca58u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dca5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dca60: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dca60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dca64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dca68: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3dca68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dca6c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x3dca6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dca70: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3dca70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3dca74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dca78: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3dca78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3dca7c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3dca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3dca80: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dca84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dca88: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x3dca88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3dca8c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3dca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x3dca90: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x3DCA90u;
    {
        const bool branch_taken_0x3dca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA90u;
        // 0x3dca94: 0xfe040038  sd          $a0, 0x38($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dca90) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCA98u;
label_3dca98:
    // 0x3dca98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3dca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3dca9c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3dca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dcaa0: 0x2442d370  addiu       $v0, $v0, -0x2C90
    ctx->pc = 0x3dcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x3dcaa4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3dcaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3dcaa8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3dcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3dcaac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3dcab0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x3DCAB0u;
    {
        const bool branch_taken_0x3dcab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAB0u;
        // 0x3dcab4: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcab0) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCAB8u;
label_3dcab8:
    // 0x3dcab8: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3dcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3dcabc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dcabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcac0: 0xc0f744e  jal         func_3DD138
    ctx->pc = 0x3DCAC0u;
    SET_GPR_U32(ctx, 31, 0x3DCAC8u);
    ctx->pc = 0x3DCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCAC0u;
    // 0x3dcac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD138u, 0x3DCAC0u, 0x3DCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCAC8u;
label_3dcac8:
    // 0x3dcac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dcac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcacc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3dcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3dcad0: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DCAD0u;
    {
        const bool branch_taken_0x3dcad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dcad0) {
            ctx->pc = 0x3DCAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCAD0u;
            // 0x3dcad4: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
            if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCAECu;
            goto label_3dcaec;
        }
    }
    ctx->pc = 0x3DCAD8u;
    // 0x3dcad8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcadc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3dcadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dcae0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3dcae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3dcae4: 0x1000ff48  b           . + 4 + (-0xB8 << 2)
    ctx->pc = 0x3DCAE4u;
    {
        const bool branch_taken_0x3dcae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAE4u;
        // 0x3dcae8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcae4) {
            ctx->pc = 0x3DC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc808;
        }
    }
    ctx->pc = 0x3DCAECu;
label_3dcaec:
    // 0x3dcaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dcaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dcaf0: 0x1622006e  bne         $s1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3DCAF0u;
    {
        const bool branch_taken_0x3dcaf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAF0u;
        // 0x3dcaf4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcaf0) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCAF8u;
    // 0x3dcaf8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3dcaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcb00: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dcb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcb04: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x3dcb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3dcb08: 0xc0f791a  jal         func_3DE468
    ctx->pc = 0x3DCB08u;
    SET_GPR_U32(ctx, 31, 0x3DCB10u);
    ctx->pc = 0x3DCB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCB08u;
    // 0x3dcb0c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE468u, 0x3DCB08u, 0x3DCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCB10u;
label_3dcb10:
    // 0x3dcb10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcb14: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3dcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3dcb18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCB18u;
    {
        const bool branch_taken_0x3dcb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB18u;
        // 0x3dcb1c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb18) {
            ctx->pc = 0x3DCB28u;
            goto label_3dcb28;
        }
    }
    ctx->pc = 0x3DCB20u;
    // 0x3dcb20: 0x1000ff39  b           . + 4 + (-0xC7 << 2)
    ctx->pc = 0x3DCB20u;
    {
        const bool branch_taken_0x3dcb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB20u;
        // 0x3dcb24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb20) {
            ctx->pc = 0x3DC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc808;
        }
    }
    ctx->pc = 0x3DCB28u;
label_3dcb28:
    // 0x3dcb28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3dcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dcb2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3dcb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3dcb30:
    // 0x3dcb30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcb34: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3DCB34u;
    {
        const bool branch_taken_0x3dcb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB34u;
        // 0x3dcb38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb34) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DCB3Cu;
    // 0x3dcb3c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dcb3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dcb40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dcb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcb44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3dcb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3dcb48: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dcb48u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dcb4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dcb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dcb50: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dcb50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dcb54: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dcb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcb58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dcb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcb5c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dcb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dcb60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dcb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dcb64: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3dcb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3dcb68: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x3dcb68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x3dcb6c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dcb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dcb70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcb74: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3dcb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3dcb78:
    // 0x3dcb78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dcb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcb7c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3DCB7Cu;
    {
        const bool branch_taken_0x3dcb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB7Cu;
        // 0x3dcb80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb7c) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DCB84u;
    // 0x3dcb84: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dcb84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dcb88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcb8c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3dcb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3dcb90: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dcb90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dcb94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dcb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dcb98: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dcb98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dcb9c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dcb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcba0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dcba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcba4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dcba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dcba8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3dcba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dcbac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dcbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dcbb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3dcbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3dcbb4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dcbb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dcbb8: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3dcbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3dcbbc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dcbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dcbc0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcbc4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3dcbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_3dcbc8:
    // 0x3dcbc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcbcc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DCBCCu;
    {
        const bool branch_taken_0x3dcbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBCCu;
        // 0x3dcbd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcbcc) {
            ctx->pc = 0x3DCC24u;
            goto label_3dcc24;
        }
    }
    ctx->pc = 0x3DCBD4u;
    // 0x3dcbd4: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3dcbd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dcbd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dcbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcbdc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3dcbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3dcbe0: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dcbe0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dcbe4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dcbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dcbe8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dcbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dcbec: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3dcbecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbf0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dcbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcbf4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dcbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dcbf8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3dcbf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dcbfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dcbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dcc00: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3dcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3dcc04: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dcc04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dcc08: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3dcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3dcc0c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dcc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dcc10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcc14: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3dcc14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_3dcc18:
    // 0x3dcc18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcc1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCC1Cu;
    {
        const bool branch_taken_0x3dcc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dcc1c) {
            ctx->pc = 0x3DCC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCC1Cu;
            // 0x3dcc20: 0xde030008  ld          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCC2Cu;
            goto label_3dcc2c;
        }
    }
    ctx->pc = 0x3DCC24u;
label_3dcc24:
    // 0x3dcc24: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3DCC24u;
    {
        const bool branch_taken_0x3dcc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC24u;
        // 0x3dcc28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc24) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCC2Cu;
label_3dcc2c:
    // 0x3dcc2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dcc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dcc30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dcc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dcc34: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3dcc34u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3dcc38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3dcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcc3c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3dcc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3dcc40: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dcc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcc44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3dcc44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dcc48: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3dcc48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dcc4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dcc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dcc50: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3dcc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3dcc54: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3dcc54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x3dcc58: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3dcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3dcc5c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3dcc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcc60: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x3dcc60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dcc64: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3dcc64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dcc68: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DCC68u;
    {
        const bool branch_taken_0x3dcc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC68u;
        // 0x3dcc6c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc68) {
            ctx->pc = 0x3DCC90u;
            goto label_3dcc90;
        }
    }
    ctx->pc = 0x3DCC70u;
    // 0x3dcc70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3dcc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3dcc74: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3dcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dcc78: 0x2442d380  addiu       $v0, $v0, -0x2C80
    ctx->pc = 0x3dcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955904));
label_3dcc7c:
    // 0x3dcc7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3dcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3dcc80: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3dcc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3dcc84: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3dcc84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3dcc88: 0x1000fedf  b           . + 4 + (-0x121 << 2)
    ctx->pc = 0x3DCC88u;
    {
        const bool branch_taken_0x3dcc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC88u;
        // 0x3dcc8c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc88) {
            ctx->pc = 0x3DC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc808;
        }
    }
    ctx->pc = 0x3DCC90u;
label_3dcc90:
    // 0x3dcc90: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3dcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3dcc94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3dcc94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3dcc98:
    // 0x3dcc98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCC98u;
    {
        const bool branch_taken_0x3dcc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC98u;
        // 0x3dcc9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc98) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCCA0u;
label_3dcca0:
    // 0x3dcca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DCCA0u;
    {
        const bool branch_taken_0x3dcca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCA0u;
        // 0x3dcca4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcca0) {
            ctx->pc = 0x3DCCACu;
            goto label_3dccac;
        }
    }
    ctx->pc = 0x3DCCA8u;
label_3dcca8:
    // 0x3dcca8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3dcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3dccac:
    // 0x3dccac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3dccacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dccb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dccb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dccb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3dccb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dccb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dccbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCBCu;
        // 0x3dccc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCC4u;
    // 0x3dccc4: 0x0  nop
    ctx->pc = 0x3dccc4u;
    // NOP
    // 0x3dccc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dcccc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3dccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3dccd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dccd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dccd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3dccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3dccdc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCCDCu;
    {
        const bool branch_taken_0x3dccdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCDCu;
        // 0x3dcce0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dccdc) {
            ctx->pc = 0x3DCCF0u;
            goto label_3dccf0;
        }
    }
    ctx->pc = 0x3DCCE4u;
    // 0x3dcce4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3dcce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcce8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCCE8u;
    {
        const bool branch_taken_0x3dcce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dcce8) {
            ctx->pc = 0x3DCCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCCE8u;
            // 0x3dccec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCCF8u;
            goto label_3dccf8;
        }
    }
    ctx->pc = 0x3DCCF0u;
label_3dccf0:
    // 0x3dccf0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3DCCF0u;
    {
        const bool branch_taken_0x3dccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCF0u;
        // 0x3dccf4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dccf0) {
            ctx->pc = 0x3DCE0Cu;
            goto label_3dce0c;
        }
    }
    ctx->pc = 0x3DCCF8u;
label_3dccf8:
    // 0x3dccf8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3dccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dccfc: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCCFCu;
    {
        const bool branch_taken_0x3dccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3dccfc) {
            ctx->pc = 0x3DCD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCCFCu;
            // 0x3dcd00: 0x8e080004  lw          $t0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCD10u;
            goto label_3dcd10;
        }
    }
    ctx->pc = 0x3DCD04u;
    // 0x3dcd04: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3dcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3dcd08: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3dcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3dcd0c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x3dcd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3dcd10:
    // 0x3dcd10: 0x1100003e  beqz        $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3DCD10u;
    {
        const bool branch_taken_0x3dcd10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD10u;
        // 0x3dcd14: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd10) {
            ctx->pc = 0x3DCE0Cu;
            goto label_3dce0c;
        }
    }
    ctx->pc = 0x3DCD18u;
    // 0x3dcd18: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3dcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcd1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3dcd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcd20: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3dcd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3dcd24: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3dcd24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcd28: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x3dcd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3dcd2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DCD2Cu;
    {
        const bool branch_taken_0x3dcd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD2Cu;
        // 0x3dcd30: 0xde0b0008  ld          $t3, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd2c) {
            ctx->pc = 0x3DCD88u;
            goto label_3dcd88;
        }
    }
    ctx->pc = 0x3DCD34u;
    // 0x3dcd34: 0x278cac20  addiu       $t4, $gp, -0x53E0
    ctx->pc = 0x3dcd34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945824));
    // 0x3dcd38: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x3dcd38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dcd3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3dcd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcd40: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x3dcd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3dcd44: 0x0  nop
    ctx->pc = 0x3dcd44u;
    // NOP
label_3dcd48:
    // 0x3dcd48: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3dcd48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3dcd4c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3dcd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dcd50: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCD50u;
    {
        const bool branch_taken_0x3dcd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dcd50) {
            ctx->pc = 0x3DCD60u;
            goto label_3dcd60;
        }
    }
    ctx->pc = 0x3DCD58u;
    // 0x3dcd58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCD58u;
    {
        const bool branch_taken_0x3dcd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD58u;
        // 0x3dcd5c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd58) {
            ctx->pc = 0x3DCD6Cu;
            goto label_3dcd6c;
        }
    }
    ctx->pc = 0x3DCD60u;
label_3dcd60:
    // 0x3dcd60: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DCD60u;
    {
        const bool branch_taken_0x3dcd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD60u;
        // 0x3dcd64: 0x1252823  subu        $a1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd60) {
            ctx->pc = 0x3DCD6Cu;
            goto label_3dcd6c;
        }
    }
    ctx->pc = 0x3DCD68u;
    // 0x3dcd68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dcd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd6c:
    // 0x3dcd6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3dcd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3dcd70: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3dcd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3dcd74: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCD74u;
    {
        const bool branch_taken_0x3dcd74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD74u;
        // 0x3dcd78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd74) {
            ctx->pc = 0x3DCD88u;
            goto label_3dcd88;
        }
    }
    ctx->pc = 0x3DCD7Cu;
    // 0x3dcd7c: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x3dcd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3dcd80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3DCD80u;
    {
        const bool branch_taken_0x3dcd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD80u;
        // 0x3dcd84: 0xac1821  addu        $v1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd80) {
            ctx->pc = 0x3DCD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcd48;
        }
    }
    ctx->pc = 0x3DCD88u;
label_3dcd88:
    // 0x3dcd88: 0xca1023  subu        $v0, $a2, $t2
    ctx->pc = 0x3dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3dcd8c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3dcd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcd90: 0x162102d  daddu       $v0, $t3, $v0
    ctx->pc = 0x3dcd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dcd94: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3dcd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x3dcd98: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3dcd98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3dcd9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dcda0: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x3dcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x3dcda4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCDA4u;
    {
        const bool branch_taken_0x3dcda4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDA4u;
        // 0x3dcda8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcda4) {
            ctx->pc = 0x3DCDB4u;
            goto label_3dcdb4;
        }
    }
    ctx->pc = 0x3DCDACu;
    // 0x3dcdac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3DCDACu;
    {
        const bool branch_taken_0x3dcdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDACu;
        // 0x3dcdb0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcdac) {
            ctx->pc = 0x3DCE0Cu;
            goto label_3dce0c;
        }
    }
    ctx->pc = 0x3DCDB4u;
label_3dcdb4:
    // 0x3dcdb4: 0xde110008  ld          $s1, 0x8($s0)
    ctx->pc = 0x3dcdb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dcdb8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DCDB8u;
    {
        const bool branch_taken_0x3dcdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDB8u;
        // 0x3dcdbc: 0xde120018  ld          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcdb8) {
            ctx->pc = 0x3DCDF4u;
            goto label_3dcdf4;
        }
    }
    ctx->pc = 0x3DCDC0u;
    // 0x3dcdc0: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3dcdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcdc4: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3DCDC4u;
    {
        const bool branch_taken_0x3dcdc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDC4u;
        // 0x3dcdc8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcdc4) {
            ctx->pc = 0x3DCDF4u;
            goto label_3dcdf4;
        }
    }
    ctx->pc = 0x3DCDCCu;
    // 0x3dcdcc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3dcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3dcdd0: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x3dcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3dcdd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcdd8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3dcdd8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3dcddc: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x3dcddcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
    // 0x3dcde0: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x3dcde0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x3dcde4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dcde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcde8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3dcde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3dcdec: 0xc0f791a  jal         func_3DE468
    ctx->pc = 0x3DCDECu;
    SET_GPR_U32(ctx, 31, 0x3DCDF4u);
    ctx->pc = 0x3DCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDECu;
    // 0x3dcdf0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE468u, 0x3DCDECu, 0x3DCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDF4u;
label_3dcdf4:
    // 0x3dcdf4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3dcdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3dcdf8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3dcdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3dcdfc: 0xfe110008  sd          $s1, 0x8($s0)
    ctx->pc = 0x3dcdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 17));
    // 0x3dce00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dce00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dce04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3dce04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3dce08: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x3dce08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_3dce0c:
    // 0x3dce0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3dce0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dce10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dce10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dce14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3dce14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dce18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dce18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dce1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE1Cu;
        // 0x3dce20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCE24u;
    // 0x3dce24: 0x0  nop
    ctx->pc = 0x3dce24u;
    // NOP
    ctx->pc = 0x3dce28u;
}
