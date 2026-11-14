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

// Function: sub_003F62B0
// Address: 0x3f62b0 - 0x3f6650
void sub_003F62B0_0x3f62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F62B0_0x3f62b0");
#endif

    switch (ctx->pc) {
        case 0x3f62f0u: goto label_3f62f0;
        case 0x3f6318u: goto label_3f6318;
        case 0x3f6330u: goto label_3f6330;
        case 0x3f6348u: goto label_3f6348;
        case 0x3f6358u: goto label_3f6358;
        case 0x3f6364u: goto label_3f6364;
        case 0x3f637cu: goto label_3f637c;
        case 0x3f638cu: goto label_3f638c;
        case 0x3f6394u: goto label_3f6394;
        case 0x3f63ecu: goto label_3f63ec;
        case 0x3f6400u: goto label_3f6400;
        case 0x3f6418u: goto label_3f6418;
        case 0x3f6428u: goto label_3f6428;
        case 0x3f645cu: goto label_3f645c;
        case 0x3f6470u: goto label_3f6470;
        case 0x3f6488u: goto label_3f6488;
        case 0x3f6498u: goto label_3f6498;
        case 0x3f64bcu: goto label_3f64bc;
        case 0x3f64ccu: goto label_3f64cc;
        case 0x3f64d4u: goto label_3f64d4;
        case 0x3f651cu: goto label_3f651c;
        case 0x3f6530u: goto label_3f6530;
        case 0x3f6548u: goto label_3f6548;
        case 0x3f6558u: goto label_3f6558;
        case 0x3f6560u: goto label_3f6560;
        case 0x3f65acu: goto label_3f65ac;
        case 0x3f65c0u: goto label_3f65c0;
        case 0x3f662cu: goto label_3f662c;
        default: break;
    }

    ctx->pc = 0x3f62b0u;

    // 0x3f62b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f62b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f62b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f62bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f62bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f62c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f62c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f62c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f62c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f62c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f62c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f62cc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f62d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f62d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f62d4: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f62d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f62d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f62dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F62DCu;
    {
        const bool branch_taken_0x3f62dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62DCu;
        // 0x3f62e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62dc) {
            ctx->pc = 0x3F62F8u;
            goto label_3f62f8;
        }
    }
    ctx->pc = 0x3F62E4u;
    // 0x3f62e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f62e8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F62E8u;
    SET_GPR_U32(ctx, 31, 0x3F62F0u);
    ctx->pc = 0x3F62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F62E8u;
    // 0x3f62ec: 0x24a5f370  addiu       $a1, $a1, -0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F62E8u, 0x3F62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F62F0u;
label_3f62f0:
    // 0x3f62f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3F62F0u;
    {
        const bool branch_taken_0x3f62f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62F0u;
        // 0x3f62f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62f0) {
            ctx->pc = 0x3F6440u;
            goto label_3f6440;
        }
    }
    ctx->pc = 0x3F62F8u;
label_3f62f8:
    // 0x3f62f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f62f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f62fc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F62FCu;
    {
        const bool branch_taken_0x3f62fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62FCu;
        // 0x3f6300: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62fc) {
            ctx->pc = 0x3F63C0u;
            goto label_3f63c0;
        }
    }
    ctx->pc = 0x3F6304u;
    // 0x3f6304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6308: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f6308u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f630c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f630cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f6310: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6310u;
    SET_GPR_U32(ctx, 31, 0x3F6318u);
    ctx->pc = 0x3F6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6310u;
    // 0x3f6314: 0x24a5f390  addiu       $a1, $a1, -0xC70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6310u, 0x3F6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6318u;
label_3f6318:
    // 0x3f6318: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f6318u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f631c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f631cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6320: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6320u;
    {
        const bool branch_taken_0x3f6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6320) {
            ctx->pc = 0x3F6364u;
            goto label_3f6364;
        }
    }
    ctx->pc = 0x3F6328u;
    // 0x3f6328: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f6328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f632c: 0x0  nop
    ctx->pc = 0x3f632cu;
    // NOP
label_3f6330:
    // 0x3f6330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6334: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6338: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6338u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f633c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6340: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6340u;
    SET_GPR_U32(ctx, 31, 0x3F6348u);
    ctx->pc = 0x3F6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6340u;
    // 0x3f6344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6340u, 0x3F6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6348u;
label_3f6348:
    // 0x3f6348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f634c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f634cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6350: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6350u;
    SET_GPR_U32(ctx, 31, 0x3F6358u);
    ctx->pc = 0x3F6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6350u;
    // 0x3f6354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6350u, 0x3F6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6358u;
label_3f6358:
    // 0x3f6358: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f635c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F635Cu;
    {
        const bool branch_taken_0x3f635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f635c) {
            ctx->pc = 0x3F6360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F635Cu;
            // 0x3f6360: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6330;
        }
    }
    ctx->pc = 0x3F6364u;
label_3f6364:
    // 0x3f6364: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6364u;
    {
        const bool branch_taken_0x3f6364 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6364u;
        // 0x3f6368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6364) {
            ctx->pc = 0x3F638Cu;
            goto label_3f638c;
        }
    }
    ctx->pc = 0x3F636Cu;
    // 0x3f636c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f636cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f6370: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6374: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6374u;
    SET_GPR_U32(ctx, 31, 0x3F637Cu);
    ctx->pc = 0x3F6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6374u;
    // 0x3f6378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6374u, 0x3F637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F637Cu;
label_3f637c:
    // 0x3f637c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6380: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f6380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6384: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6384u;
    SET_GPR_U32(ctx, 31, 0x3F638Cu);
    ctx->pc = 0x3F6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6384u;
    // 0x3f6388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6384u, 0x3F638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F638Cu;
label_3f638c:
    // 0x3f638c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F638Cu;
    SET_GPR_U32(ctx, 31, 0x3F6394u);
    ctx->pc = 0x3F6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F638Cu;
    // 0x3f6390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F638Cu, 0x3F6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6394u;
label_3f6394:
    // 0x3f6394: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3F6394u;
    {
        const bool branch_taken_0x3f6394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6394u;
        // 0x3f6398: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6394) {
            ctx->pc = 0x3F6630u;
            goto label_3f6630;
        }
    }
    ctx->pc = 0x3F639Cu;
    // 0x3f639c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f639cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f63a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f63a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f63a4: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3F63A4u;
    {
        const bool branch_taken_0x3f63a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63A4u;
        // 0x3f63a8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63a4) {
            ctx->pc = 0x3F64ECu;
            goto label_3f64ec;
        }
    }
    ctx->pc = 0x3F63ACu;
    // 0x3f63ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f63acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f63b0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3F63B0u;
    {
        const bool branch_taken_0x3f63b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63B0u;
        // 0x3f63b4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63b0) {
            ctx->pc = 0x3F6510u;
            goto label_3f6510;
        }
    }
    ctx->pc = 0x3F63B8u;
    // 0x3f63b8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F63B8u;
    {
        const bool branch_taken_0x3f63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63B8u;
        // 0x3f63bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63b8) {
            ctx->pc = 0x3F6528u;
            goto label_3f6528;
        }
    }
    ctx->pc = 0x3F63C0u;
label_3f63c0:
    // 0x3f63c0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F63C0u;
    {
        const bool branch_taken_0x3f63c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63C0u;
        // 0x3f63c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63c0) {
            ctx->pc = 0x3F6440u;
            goto label_3f6440;
        }
    }
    ctx->pc = 0x3F63C8u;
    // 0x3f63c8: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3f63c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f63cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3f63ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3f63d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F63D0u;
    {
        const bool branch_taken_0x3f63d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63D0u;
        // 0x3f63d4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63d0) {
            ctx->pc = 0x3F643Cu;
            goto label_3f643c;
        }
    }
    ctx->pc = 0x3F63D8u;
    // 0x3f63d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f63d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f63dc: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f63dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f63e0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f63e0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f63e4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F63E4u;
    SET_GPR_U32(ctx, 31, 0x3F63ECu);
    ctx->pc = 0x3F63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F63E4u;
    // 0x3f63e8: 0x24a5f3a8  addiu       $a1, $a1, -0xC58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F63E4u, 0x3F63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63ECu;
label_3f63ec:
    // 0x3f63ec: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f63ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f63f0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f63f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f63f4: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3F63F4u;
    {
        const bool branch_taken_0x3f63f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f63f4) {
            ctx->pc = 0x3F6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6364;
        }
    }
    ctx->pc = 0x3F63FCu;
    // 0x3f63fc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f63fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f6400:
    // 0x3f6400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6404: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6408: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6408u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f640c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6410: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6410u;
    SET_GPR_U32(ctx, 31, 0x3F6418u);
    ctx->pc = 0x3F6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6410u;
    // 0x3f6414: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6410u, 0x3F6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6418u;
label_3f6418:
    // 0x3f6418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f641c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f641cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6420: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6420u;
    SET_GPR_U32(ctx, 31, 0x3F6428u);
    ctx->pc = 0x3F6424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6420u;
    // 0x3f6424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6420u, 0x3F6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6428u;
label_3f6428:
    // 0x3f6428: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f642c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F642Cu;
    {
        const bool branch_taken_0x3f642c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f642c) {
            ctx->pc = 0x3F6430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F642Cu;
            // 0x3f6430: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6400;
        }
    }
    ctx->pc = 0x3F6434u;
    // 0x3f6434: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F6434u;
    {
        const bool branch_taken_0x3f6434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6434) {
            ctx->pc = 0x3F6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6364;
        }
    }
    ctx->pc = 0x3F643Cu;
label_3f643c:
    // 0x3f643c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3f643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3f6440:
    // 0x3f6440: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F6440u;
    {
        const bool branch_taken_0x3f6440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6440u;
        // 0x3f6444: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6440) {
            ctx->pc = 0x3F6538u;
            goto label_3f6538;
        }
    }
    ctx->pc = 0x3F6448u;
    // 0x3f6448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f644c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f644cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6450: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f6450u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f6454: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6454u;
    SET_GPR_U32(ctx, 31, 0x3F645Cu);
    ctx->pc = 0x3F6458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6454u;
    // 0x3f6458: 0x24a5f3c0  addiu       $a1, $a1, -0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6454u, 0x3F645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F645Cu;
label_3f645c:
    // 0x3f645c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f645cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6460: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f6464: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F6464u;
    {
        const bool branch_taken_0x3f6464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6464) {
            ctx->pc = 0x3F64A4u;
            goto label_3f64a4;
        }
    }
    ctx->pc = 0x3F646Cu;
    // 0x3f646c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f646cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f6470:
    // 0x3f6470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6474: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f6474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f6478: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f6478u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f647c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6480: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6480u;
    SET_GPR_U32(ctx, 31, 0x3F6488u);
    ctx->pc = 0x3F6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6480u;
    // 0x3f6484: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6480u, 0x3F6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6488u;
label_3f6488:
    // 0x3f6488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f648c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f648cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6490: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6490u;
    SET_GPR_U32(ctx, 31, 0x3F6498u);
    ctx->pc = 0x3F6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6490u;
    // 0x3f6494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6490u, 0x3F6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6498u;
label_3f6498:
    // 0x3f6498: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f6498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f649c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F649Cu;
    {
        const bool branch_taken_0x3f649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f649c) {
            ctx->pc = 0x3F64A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F649Cu;
            // 0x3f64a0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6470;
        }
    }
    ctx->pc = 0x3F64A4u;
label_3f64a4:
    // 0x3f64a4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F64A4u;
    {
        const bool branch_taken_0x3f64a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64A4u;
        // 0x3f64a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64a4) {
            ctx->pc = 0x3F64CCu;
            goto label_3f64cc;
        }
    }
    ctx->pc = 0x3F64ACu;
    // 0x3f64ac: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f64acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f64b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f64b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f64b4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F64B4u;
    SET_GPR_U32(ctx, 31, 0x3F64BCu);
    ctx->pc = 0x3F64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F64B4u;
    // 0x3f64b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F64B4u, 0x3F64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F64BCu;
label_3f64bc:
    // 0x3f64bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f64bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f64c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f64c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f64c4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F64C4u;
    SET_GPR_U32(ctx, 31, 0x3F64CCu);
    ctx->pc = 0x3F64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F64C4u;
    // 0x3f64c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F64C4u, 0x3F64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F64CCu;
label_3f64cc:
    // 0x3f64cc: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F64CCu;
    SET_GPR_U32(ctx, 31, 0x3F64D4u);
    ctx->pc = 0x3F64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F64CCu;
    // 0x3f64d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F64CCu, 0x3F64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F64D4u;
label_3f64d4:
    // 0x3f64d4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3F64D4u;
    {
        const bool branch_taken_0x3f64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64D4u;
        // 0x3f64d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64d4) {
            ctx->pc = 0x3F6630u;
            goto label_3f6630;
        }
    }
    ctx->pc = 0x3F64DCu;
    // 0x3f64dc: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f64dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f64e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f64e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f64e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F64E4u;
    {
        const bool branch_taken_0x3f64e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64E4u;
        // 0x3f64e8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64e4) {
            ctx->pc = 0x3F6500u;
            goto label_3f6500;
        }
    }
    ctx->pc = 0x3F64ECu;
label_3f64ec:
    // 0x3f64ec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f64ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f64f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F64F0u;
    {
        const bool branch_taken_0x3f64f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64F0u;
        // 0x3f64f4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64f0) {
            ctx->pc = 0x3F650Cu;
            goto label_3f650c;
        }
    }
    ctx->pc = 0x3F64F8u;
    // 0x3f64f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F64F8u;
    {
        const bool branch_taken_0x3f64f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64F8u;
        // 0x3f64fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64f8) {
            ctx->pc = 0x3F6528u;
            goto label_3f6528;
        }
    }
    ctx->pc = 0x3F6500u;
label_3f6500:
    // 0x3f6500: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6504: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6504u;
    {
        const bool branch_taken_0x3f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6504u;
        // 0x3f6508: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6504) {
            ctx->pc = 0x3F6524u;
            goto label_3f6524;
        }
    }
    ctx->pc = 0x3F650Cu;
label_3f650c:
    // 0x3f650c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f650cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f6510:
    // 0x3f6510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6514: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6514u;
    SET_GPR_U32(ctx, 31, 0x3F651Cu);
    ctx->pc = 0x3F6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6514u;
    // 0x3f6518: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6514u, 0x3F651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F651Cu;
label_3f651c:
    // 0x3f651c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3F651Cu;
    {
        const bool branch_taken_0x3f651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F651Cu;
        // 0x3f6520: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f651c) {
            ctx->pc = 0x3F6630u;
            goto label_3f6630;
        }
    }
    ctx->pc = 0x3F6524u;
label_3f6524:
    // 0x3f6524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6528:
    // 0x3f6528: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6528u;
    SET_GPR_U32(ctx, 31, 0x3F6530u);
    ctx->pc = 0x3F652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6528u;
    // 0x3f652c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6528u, 0x3F6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6530u;
label_3f6530:
    // 0x3f6530: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3F6530u;
    {
        const bool branch_taken_0x3f6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6530u;
        // 0x3f6534: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6530) {
            ctx->pc = 0x3F6630u;
            goto label_3f6630;
        }
    }
    ctx->pc = 0x3F6538u;
label_3f6538:
    // 0x3f6538: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f6538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f653c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6540: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6540u;
    SET_GPR_U32(ctx, 31, 0x3F6548u);
    ctx->pc = 0x3F6544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6540u;
    // 0x3f6544: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6540u, 0x3F6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6548u;
label_3f6548:
    // 0x3f6548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f654c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f654cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6550: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6550u;
    SET_GPR_U32(ctx, 31, 0x3F6558u);
    ctx->pc = 0x3F6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6550u;
    // 0x3f6554: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6550u, 0x3F6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6558u;
label_3f6558:
    // 0x3f6558: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F6558u;
    SET_GPR_U32(ctx, 31, 0x3F6560u);
    ctx->pc = 0x3F655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6558u;
    // 0x3f655c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F6558u, 0x3F6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6560u;
label_3f6560:
    // 0x3f6560: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F6560u;
    {
        const bool branch_taken_0x3f6560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6560u;
        // 0x3f6564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6560) {
            ctx->pc = 0x3F65C4u;
            goto label_3f65c4;
        }
    }
    ctx->pc = 0x3F6568u;
    // 0x3f6568: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f6568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f656c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6570u;
    {
        const bool branch_taken_0x3f6570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6570u;
        // 0x3f6574: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6570) {
            ctx->pc = 0x3F6590u;
            goto label_3f6590;
        }
    }
    ctx->pc = 0x3F6578u;
    // 0x3f6578: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f6578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f657c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F657Cu;
    {
        const bool branch_taken_0x3f657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F657Cu;
        // 0x3f6580: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f657c) {
            ctx->pc = 0x3F659Cu;
            goto label_3f659c;
        }
    }
    ctx->pc = 0x3F6584u;
    // 0x3f6584: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F6584u;
    {
        const bool branch_taken_0x3f6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6584u;
        // 0x3f6588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6584) {
            ctx->pc = 0x3F65B8u;
            goto label_3f65b8;
        }
    }
    ctx->pc = 0x3F658Cu;
    // 0x3f658c: 0x0  nop
    ctx->pc = 0x3f658cu;
    // NOP
label_3f6590:
    // 0x3f6590: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6594u;
    {
        const bool branch_taken_0x3f6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6594u;
        // 0x3f6598: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6594) {
            ctx->pc = 0x3F65B4u;
            goto label_3f65b4;
        }
    }
    ctx->pc = 0x3F659Cu;
label_3f659c:
    // 0x3f659c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f659cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f65a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f65a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f65a4: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F65A4u;
    SET_GPR_U32(ctx, 31, 0x3F65ACu);
    ctx->pc = 0x3F65A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F65A4u;
    // 0x3f65a8: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F65A4u, 0x3F65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65ACu;
label_3f65ac:
    // 0x3f65ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F65ACu;
    {
        const bool branch_taken_0x3f65ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F65ACu;
        // 0x3f65b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f65ac) {
            ctx->pc = 0x3F65C4u;
            goto label_3f65c4;
        }
    }
    ctx->pc = 0x3F65B4u;
label_3f65b4:
    // 0x3f65b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f65b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f65b8:
    // 0x3f65b8: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F65B8u;
    SET_GPR_U32(ctx, 31, 0x3F65C0u);
    ctx->pc = 0x3F65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F65B8u;
    // 0x3f65bc: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F65B8u, 0x3F65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65C0u;
label_3f65c0:
    // 0x3f65c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f65c4:
    // 0x3f65c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F65C4u;
    {
        const bool branch_taken_0x3f65c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F65C4u;
        // 0x3f65c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f65c4) {
            ctx->pc = 0x3F6630u;
            goto label_3f6630;
        }
    }
    ctx->pc = 0x3F65CCu;
    // 0x3f65cc: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x3f65ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f65d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f65d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f65d4: 0x93a90001  lbu         $t1, 0x1($sp)
    ctx->pc = 0x3f65d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f65d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f65d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f65dc: 0x93a70004  lbu         $a3, 0x4($sp)
    ctx->pc = 0x3f65dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f65e0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x3f65e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x3f65e4: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x3f65e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3f65e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3f65e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3f65ec: 0x93a80006  lbu         $t0, 0x6($sp)
    ctx->pc = 0x3f65ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3f65f0: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x3f65f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x3f65f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3f65f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3f65f8: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x3f65f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f65fc: 0xc9302d  daddu       $a2, $a2, $t1
    ctx->pc = 0x3f65fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 9));
    // 0x3f6600: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x3f6600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f6604: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x3f6604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x3f6608: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x3f6608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x3f660c: 0xe8382d  daddu       $a3, $a3, $t0
    ctx->pc = 0x3f660cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 8));
    // 0x3f6610: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x3f6610u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f6614: 0x93a20007  lbu         $v0, 0x7($sp)
    ctx->pc = 0x3f6614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x3f6618: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x3f6618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f661c: 0x93a80008  lbu         $t0, 0x8($sp)
    ctx->pc = 0x3f661cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3f6620: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x3f6620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x3f6624: 0xc0fecb2  jal         func_3FB2C8
    ctx->pc = 0x3F6624u;
    SET_GPR_U32(ctx, 31, 0x3F662Cu);
    ctx->pc = 0x3F6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6624u;
    // 0x3f6628: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB2C8u, 0x3F6624u, 0x3F662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F662Cu;
label_3f662c:
    // 0x3f662c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f662cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f6630:
    // 0x3f6630: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f6630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f6634: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f6634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f6638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f663c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f663cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6644: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6644u;
        // 0x3f6648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F664Cu;
    // 0x3f664c: 0x0  nop
    ctx->pc = 0x3f664cu;
    // NOP
    ctx->pc = 0x3f6650u;
}
