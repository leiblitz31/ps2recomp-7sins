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

// Function: sub_00402880
// Address: 0x402880 - 0x402a58
void sub_00402880_0x402880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402880_0x402880");
#endif

    switch (ctx->pc) {
        case 0x4028b0u: goto label_4028b0;
        case 0x4028ccu: goto label_4028cc;
        case 0x4028f0u: goto label_4028f0;
        case 0x40295cu: goto label_40295c;
        case 0x40296cu: goto label_40296c;
        case 0x402974u: goto label_402974;
        case 0x402984u: goto label_402984;
        case 0x4029a4u: goto label_4029a4;
        case 0x4029b4u: goto label_4029b4;
        case 0x4029d0u: goto label_4029d0;
        case 0x4029e0u: goto label_4029e0;
        case 0x402a2cu: goto label_402a2c;
        case 0x402a38u: goto label_402a38;
        default: break;
    }

    ctx->pc = 0x402880u;

    // 0x402880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x402880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x402884: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x402884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x402888: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x402888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x40288c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40288cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402890: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x402890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x402894: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x402894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402898: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x402898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x40289c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4028a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4028A0u;
    {
        const bool branch_taken_0x4028a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4028A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028A0u;
        // 0x4028a4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4028a0) {
            ctx->pc = 0x4028BCu;
            goto label_4028bc;
        }
    }
    ctx->pc = 0x4028A8u;
    // 0x4028a8: 0xc100970  jal         func_4025C0
    ctx->pc = 0x4028A8u;
    SET_GPR_U32(ctx, 31, 0x4028B0u);
    ctx->pc = 0x4028ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028A8u;
    // 0x4028ac: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4025C0u, 0x4028A8u, 0x4028B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028B0u;
label_4028b0:
    // 0x4028b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4028b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4028b4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4028B4u;
    {
        const bool branch_taken_0x4028b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4028b4) {
            ctx->pc = 0x4028D4u;
            goto label_4028d4;
        }
    }
    ctx->pc = 0x4028BCu;
label_4028bc:
    // 0x4028bc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4028bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4028c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4028c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4028c4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4028C4u;
    SET_GPR_U32(ctx, 31, 0x4028CCu);
    ctx->pc = 0x4028C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028C4u;
    // 0x4028c8: 0x24a50400  addiu       $a1, $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4028C4u, 0x4028CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028CCu;
label_4028cc:
    // 0x4028cc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x4028CCu;
    {
        const bool branch_taken_0x4028cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4028D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028CCu;
        // 0x4028d0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4028cc) {
            ctx->pc = 0x402A3Cu;
            goto label_402a3c;
        }
    }
    ctx->pc = 0x4028D4u;
label_4028d4:
    // 0x4028d4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4028D4u;
    {
        const bool branch_taken_0x4028d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028D4u;
        // 0x4028d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4028d4) {
            ctx->pc = 0x4028F4u;
            goto label_4028f4;
        }
    }
    ctx->pc = 0x4028DCu;
    // 0x4028dc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x4028dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4028e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4028E0u;
    {
        const bool branch_taken_0x4028e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4028E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028E0u;
        // 0x4028e4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4028e0) {
            ctx->pc = 0x4028F8u;
            goto label_4028f8;
        }
    }
    ctx->pc = 0x4028E8u;
    // 0x4028e8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x4028E8u;
    SET_GPR_U32(ctx, 31, 0x4028F0u);
    ctx->pc = 0x4028ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028E8u;
    // 0x4028ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4028E8u, 0x4028F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028F0u;
label_4028f0:
    // 0x4028f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4028f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4028f4:
    // 0x4028f4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x4028f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_4028f8:
    // 0x4028f8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x4028f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4028fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4028fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402900: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x402900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x402904: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x402904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x402908: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40290c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x40290cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x402910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402914: 0x3343a  dsrl        $a2, $v1, 16
    ctx->pc = 0x402914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> 16);
    // 0x402918: 0x3163a  dsrl        $v0, $v1, 24
    ctx->pc = 0x402918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 24);
    // 0x40291c: 0x33a3a  dsrl        $a3, $v1, 8
    ctx->pc = 0x40291cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 8);
    // 0x402920: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402924: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40292c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40292cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402930: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402938: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40293c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40293cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402940: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x402940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x402944: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x402944u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x402948: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40294c: 0xa3a70002  sb          $a3, 0x2($sp)
    ctx->pc = 0x40294cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x402950: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x402950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x402954: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402954u;
    SET_GPR_U32(ctx, 31, 0x40295Cu);
    ctx->pc = 0x402958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402954u;
    // 0x402958: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402954u, 0x40295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40295Cu;
label_40295c:
    // 0x40295c: 0x2785acc0  addiu       $a1, $gp, -0x5340
    ctx->pc = 0x40295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945984));
    // 0x402960: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402964: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402964u;
    SET_GPR_U32(ctx, 31, 0x40296Cu);
    ctx->pc = 0x402968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402964u;
    // 0x402968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402964u, 0x40296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40296Cu;
label_40296c:
    // 0x40296c: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x40296Cu;
    SET_GPR_U32(ctx, 31, 0x402974u);
    ctx->pc = 0x402970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40296Cu;
    // 0x402970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x40296Cu, 0x402974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402974u;
label_402974:
    // 0x402974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402978: 0x2785acc0  addiu       $a1, $gp, -0x5340
    ctx->pc = 0x402978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945984));
    // 0x40297c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x40297Cu;
    SET_GPR_U32(ctx, 31, 0x402984u);
    ctx->pc = 0x402980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40297Cu;
    // 0x402980: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x40297Cu, 0x402984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402984u;
label_402984:
    // 0x402984: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x402984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402988: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x402988u;
    {
        const bool branch_taken_0x402988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x402988) {
            ctx->pc = 0x4029B4u;
            goto label_4029b4;
        }
    }
    ctx->pc = 0x402990u;
    // 0x402990: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x402990u;
    {
        const bool branch_taken_0x402990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x402994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402990u;
        // 0x402994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402990) {
            ctx->pc = 0x4029B4u;
            goto label_4029b4;
        }
    }
    ctx->pc = 0x402998u;
    // 0x402998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40299c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x40299Cu;
    SET_GPR_U32(ctx, 31, 0x4029A4u);
    ctx->pc = 0x4029A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40299Cu;
    // 0x4029a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x40299Cu, 0x4029A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4029A4u;
label_4029a4:
    // 0x4029a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4029a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4029a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029ac: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4029ACu;
    SET_GPR_U32(ctx, 31, 0x4029B4u);
    ctx->pc = 0x4029B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4029ACu;
    // 0x4029b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4029ACu, 0x4029B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4029B4u;
label_4029b4:
    // 0x4029b4: 0x5280000b  beql        $s4, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4029B4u;
    {
        const bool branch_taken_0x4029b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4029b4) {
            ctx->pc = 0x4029B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4029B4u;
            // 0x4029b8: 0xde2201f0  ld          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4029E4u;
            goto label_4029e4;
        }
    }
    ctx->pc = 0x4029BCu;
    // 0x4029bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4029BCu;
    {
        const bool branch_taken_0x4029bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4029C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4029BCu;
        // 0x4029c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4029bc) {
            ctx->pc = 0x4029E0u;
            goto label_4029e0;
        }
    }
    ctx->pc = 0x4029C4u;
    // 0x4029c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4029c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029c8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4029C8u;
    SET_GPR_U32(ctx, 31, 0x4029D0u);
    ctx->pc = 0x4029CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4029C8u;
    // 0x4029cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4029C8u, 0x4029D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4029D0u;
label_4029d0:
    // 0x4029d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4029d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4029d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029d8: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4029D8u;
    SET_GPR_U32(ctx, 31, 0x4029E0u);
    ctx->pc = 0x4029DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4029D8u;
    // 0x4029dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4029D8u, 0x4029E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4029E0u;
label_4029e0:
    // 0x4029e0: 0xde2201f0  ld          $v0, 0x1F0($s1)
    ctx->pc = 0x4029e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 496)));
label_4029e4:
    // 0x4029e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4029e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4029e8: 0x922601f3  lbu         $a2, 0x1F3($s1)
    ctx->pc = 0x4029e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 499)));
    // 0x4029ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4029ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4029f0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x4029f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x4029f4: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x4029f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x4029f8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4029f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4029fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4029fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402a00: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402a08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402a0c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402a10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402a14: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x402a14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x402a18: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x402a18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x402a1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402a20: 0xa3a70012  sb          $a3, 0x12($sp)
    ctx->pc = 0x402a20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 7));
    // 0x402a24: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402A24u;
    SET_GPR_U32(ctx, 31, 0x402A2Cu);
    ctx->pc = 0x402A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A24u;
    // 0x402a28: 0xa3a20013  sb          $v0, 0x13($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402A24u, 0x402A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A2Cu;
label_402a2c:
    // 0x402a2c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x402a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402a30: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x402A30u;
    SET_GPR_U32(ctx, 31, 0x402A38u);
    ctx->pc = 0x402A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A30u;
    // 0x402a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x402A30u, 0x402A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A38u;
label_402a38:
    // 0x402a38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x402a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_402a3c:
    // 0x402a3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x402a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x402a40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x402a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x402a44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x402a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x402a48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x402a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402a4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x402a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x402a50: 0x3e00008  jr          $ra
    ctx->pc = 0x402A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402A50u;
        // 0x402a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402A58u;
}
