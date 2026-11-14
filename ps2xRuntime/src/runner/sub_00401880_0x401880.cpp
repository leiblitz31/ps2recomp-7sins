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

// Function: sub_00401880
// Address: 0x401880 - 0x4021d0
void sub_00401880_0x401880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401880_0x401880");
#endif

    switch (ctx->pc) {
        case 0x4018dcu: goto label_4018dc;
        case 0x4018f4u: goto label_4018f4;
        case 0x401908u: goto label_401908;
        case 0x401918u: goto label_401918;
        case 0x40192cu: goto label_40192c;
        case 0x40193cu: goto label_40193c;
        case 0x401954u: goto label_401954;
        case 0x401974u: goto label_401974;
        case 0x401980u: goto label_401980;
        case 0x401988u: goto label_401988;
        case 0x4019dcu: goto label_4019dc;
        case 0x4019e8u: goto label_4019e8;
        case 0x4019f0u: goto label_4019f0;
        case 0x401a44u: goto label_401a44;
        case 0x401a54u: goto label_401a54;
        case 0x401a68u: goto label_401a68;
        case 0x401a78u: goto label_401a78;
        case 0x401a8cu: goto label_401a8c;
        case 0x401a9cu: goto label_401a9c;
        case 0x401ab4u: goto label_401ab4;
        case 0x401ac4u: goto label_401ac4;
        case 0x401ad0u: goto label_401ad0;
        case 0x401ad8u: goto label_401ad8;
        case 0x401b2cu: goto label_401b2c;
        case 0x401b38u: goto label_401b38;
        case 0x401b40u: goto label_401b40;
        case 0x401b94u: goto label_401b94;
        case 0x401ba4u: goto label_401ba4;
        case 0x401bb8u: goto label_401bb8;
        case 0x401bc8u: goto label_401bc8;
        case 0x401bdcu: goto label_401bdc;
        case 0x401becu: goto label_401bec;
        case 0x401c04u: goto label_401c04;
        case 0x401c14u: goto label_401c14;
        case 0x401c20u: goto label_401c20;
        case 0x401c28u: goto label_401c28;
        case 0x401c7cu: goto label_401c7c;
        case 0x401c88u: goto label_401c88;
        case 0x401c90u: goto label_401c90;
        case 0x401ce4u: goto label_401ce4;
        case 0x401cf4u: goto label_401cf4;
        case 0x401d08u: goto label_401d08;
        case 0x401d18u: goto label_401d18;
        case 0x401d2cu: goto label_401d2c;
        case 0x401d3cu: goto label_401d3c;
        case 0x401d54u: goto label_401d54;
        case 0x401d64u: goto label_401d64;
        case 0x401d70u: goto label_401d70;
        case 0x401d78u: goto label_401d78;
        case 0x401dccu: goto label_401dcc;
        case 0x401dd8u: goto label_401dd8;
        case 0x401de0u: goto label_401de0;
        case 0x401e38u: goto label_401e38;
        case 0x401e48u: goto label_401e48;
        case 0x401e50u: goto label_401e50;
        case 0x401f00u: goto label_401f00;
        case 0x401fb0u: goto label_401fb0;
        case 0x402060u: goto label_402060;
        case 0x402110u: goto label_402110;
        case 0x40219cu: goto label_40219c;
        case 0x4021acu: goto label_4021ac;
        case 0x4021b4u: goto label_4021b4;
        default: break;
    }

    ctx->pc = 0x401880u;

    // 0x401880: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x401880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x401884: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x401884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x401888: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x401888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x40188c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40188cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401890: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x401890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x401894: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x401894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401898: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x401898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x40189c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x40189cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018a0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4018a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4018a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4018a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018a8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4018a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4018ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4018acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018b0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4018b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x4018b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4018b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018b8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4018b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4018bc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x4018bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4018c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4018c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4018c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4018c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4018cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4018ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018d0: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x4018d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x4018d4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x4018D4u;
    SET_GPR_U32(ctx, 31, 0x4018DCu);
    ctx->pc = 0x4018D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4018D4u;
    // 0x4018d8: 0xffab0028  sd          $t3, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x4018D4u, 0x4018DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4018DCu;
label_4018dc:
    // 0x4018dc: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4018DCu;
    {
        const bool branch_taken_0x4018dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018DCu;
        // 0x4018e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018dc) {
            ctx->pc = 0x401944u;
            goto label_401944;
        }
    }
    ctx->pc = 0x4018E4u;
    // 0x4018e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x4018e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x4018e8: 0xdc350190  ld          $s5, 0x190($at)
    ctx->pc = 0x4018e8u;
    SET_GPR_U64(ctx, 21, FAST_READ64(0x600190u));
    // 0x4018ec: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x4018ECu;
    SET_GPR_U32(ctx, 31, 0x4018F4u);
    ctx->pc = 0x4018F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4018ECu;
    // 0x4018f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x4018ECu, 0x4018F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4018F4u;
label_4018f4:
    // 0x4018f4: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4018F4u;
    {
        const bool branch_taken_0x4018f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4018F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4018F4u;
        // 0x4018f8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018f4) {
            ctx->pc = 0x401948u;
            goto label_401948;
        }
    }
    ctx->pc = 0x4018FCu;
    // 0x4018fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4018fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401900: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401900u;
    SET_GPR_U32(ctx, 31, 0x401908u);
    ctx->pc = 0x401904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401900u;
    // 0x401904: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401900u, 0x401908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401908u;
label_401908:
    // 0x401908: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x401908u;
    {
        const bool branch_taken_0x401908 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x40190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401908u;
        // 0x40190c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401908) {
            ctx->pc = 0x401944u;
            goto label_401944;
        }
    }
    ctx->pc = 0x401910u;
    // 0x401910: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401910u;
    SET_GPR_U32(ctx, 31, 0x401918u);
    ctx->pc = 0x401914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401910u;
    // 0x401914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401910u, 0x401918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401918u;
label_401918:
    // 0x401918: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x401918u;
    {
        const bool branch_taken_0x401918 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x40191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401918u;
        // 0x40191c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401918) {
            ctx->pc = 0x401948u;
            goto label_401948;
        }
    }
    ctx->pc = 0x401920u;
    // 0x401920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401924: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401924u;
    SET_GPR_U32(ctx, 31, 0x40192Cu);
    ctx->pc = 0x401928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401924u;
    // 0x401928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401924u, 0x40192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40192Cu;
label_40192c:
    // 0x40192c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x40192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x401930: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x401930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x401934: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401934u;
    SET_GPR_U32(ctx, 31, 0x40193Cu);
    ctx->pc = 0x401938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401934u;
    // 0x401938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401934u, 0x40193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40193Cu;
label_40193c:
    // 0x40193c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40193Cu;
    {
        const bool branch_taken_0x40193c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x401940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40193Cu;
        // 0x401940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40193c) {
            ctx->pc = 0x40195Cu;
            goto label_40195c;
        }
    }
    ctx->pc = 0x401944u;
label_401944:
    // 0x401944: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401948:
    // 0x401948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40194c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x40194Cu;
    SET_GPR_U32(ctx, 31, 0x401954u);
    ctx->pc = 0x401950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40194Cu;
    // 0x401950: 0x24a500f0  addiu       $a1, $a1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x40194Cu, 0x401954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401954u;
label_401954:
    // 0x401954: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x401954u;
    {
        const bool branch_taken_0x401954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401954u;
        // 0x401958: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401954) {
            ctx->pc = 0x401E54u;
            goto label_401e54;
        }
    }
    ctx->pc = 0x40195Cu;
label_40195c:
    // 0x40195c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x40195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x401960: 0xdc360198  ld          $s6, 0x198($at)
    ctx->pc = 0x401960u;
    SET_GPR_U64(ctx, 22, FAST_READ64(0x600198u));
    // 0x401964: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x401964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x401968: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x401968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x40196c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x40196Cu;
    SET_GPR_U32(ctx, 31, 0x401974u);
    ctx->pc = 0x401970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40196Cu;
    // 0x401970: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x40196Cu, 0x401974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401974u;
label_401974:
    // 0x401974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401978: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401978u;
    SET_GPR_U32(ctx, 31, 0x401980u);
    ctx->pc = 0x40197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401978u;
    // 0x40197c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401978u, 0x401980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401980u;
label_401980:
    // 0x401980: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401980u;
    SET_GPR_U32(ctx, 31, 0x401988u);
    ctx->pc = 0x401984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401980u;
    // 0x401984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401980u, 0x401988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401988u;
label_401988:
    // 0x401988: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x40198c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x40198cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x401990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401994: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x401994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401998: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40199c: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x40199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x4019a0: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x4019a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x4019a4: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x4019a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x4019a8: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x4019a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4019ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4019acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4019b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4019b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4019b4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4019b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4019b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4019b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4019bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4019bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4019c0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4019c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4019c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4019c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4019c8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x4019c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4019cc: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x4019ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x4019d0: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x4019d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x4019d4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x4019D4u;
    SET_GPR_U32(ctx, 31, 0x4019DCu);
    ctx->pc = 0x4019D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019D4u;
    // 0x4019d8: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x4019D4u, 0x4019DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019DCu;
label_4019dc:
    // 0x4019dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4019dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4019e0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x4019E0u;
    SET_GPR_U32(ctx, 31, 0x4019E8u);
    ctx->pc = 0x4019E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019E0u;
    // 0x4019e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x4019E0u, 0x4019E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019E8u;
label_4019e8:
    // 0x4019e8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x4019E8u;
    SET_GPR_U32(ctx, 31, 0x4019F0u);
    ctx->pc = 0x4019ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4019E8u;
    // 0x4019ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x4019E8u, 0x4019F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4019F0u;
label_4019f0:
    // 0x4019f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4019f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4019f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4019f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4019f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4019f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4019fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4019fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a00: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a04: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401a08: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401a0c: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401a10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401a14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401a18: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401a1c: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401a20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401a24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401a28: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401a2c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401a2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401a30: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x401a30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x401a34: 0xa3a30005  sb          $v1, 0x5($sp)
    ctx->pc = 0x401a34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x401a38: 0xa3a60006  sb          $a2, 0x6($sp)
    ctx->pc = 0x401a38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x401a3c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401A3Cu;
    SET_GPR_U32(ctx, 31, 0x401A44u);
    ctx->pc = 0x401A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A3Cu;
    // 0x401a40: 0xa3a70007  sb          $a3, 0x7($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401A3Cu, 0x401A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A44u;
label_401a44:
    // 0x401a44: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x401A44u;
    {
        const bool branch_taken_0x401a44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A44u;
        // 0x401a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a44) {
            ctx->pc = 0x401AA4u;
            goto label_401aa4;
        }
    }
    ctx->pc = 0x401A4Cu;
    // 0x401a4c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401A4Cu;
    SET_GPR_U32(ctx, 31, 0x401A54u);
    ctx->pc = 0x401A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A4Cu;
    // 0x401a50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401A4Cu, 0x401A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A54u;
label_401a54:
    // 0x401a54: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x401A54u;
    {
        const bool branch_taken_0x401a54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A54u;
        // 0x401a58: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a54) {
            ctx->pc = 0x401AA8u;
            goto label_401aa8;
        }
    }
    ctx->pc = 0x401A5Cu;
    // 0x401a5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a60: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401A60u;
    SET_GPR_U32(ctx, 31, 0x401A68u);
    ctx->pc = 0x401A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A60u;
    // 0x401a64: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401A60u, 0x401A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A68u;
label_401a68:
    // 0x401a68: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x401A68u;
    {
        const bool branch_taken_0x401a68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A68u;
        // 0x401a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a68) {
            ctx->pc = 0x401AA4u;
            goto label_401aa4;
        }
    }
    ctx->pc = 0x401A70u;
    // 0x401a70: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401A70u;
    SET_GPR_U32(ctx, 31, 0x401A78u);
    ctx->pc = 0x401A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A70u;
    // 0x401a74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401A70u, 0x401A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A78u;
label_401a78:
    // 0x401a78: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x401A78u;
    {
        const bool branch_taken_0x401a78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A78u;
        // 0x401a7c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a78) {
            ctx->pc = 0x401AA8u;
            goto label_401aa8;
        }
    }
    ctx->pc = 0x401A80u;
    // 0x401a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x401a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401a84: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401A84u;
    SET_GPR_U32(ctx, 31, 0x401A8Cu);
    ctx->pc = 0x401A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A84u;
    // 0x401a88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401A84u, 0x401A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A8Cu;
label_401a8c:
    // 0x401a8c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x401a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x401a90: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x401a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x401a94: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401A94u;
    SET_GPR_U32(ctx, 31, 0x401A9Cu);
    ctx->pc = 0x401A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401A94u;
    // 0x401a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401A94u, 0x401A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401A9Cu;
label_401a9c:
    // 0x401a9c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401A9Cu;
    {
        const bool branch_taken_0x401a9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x401AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401A9Cu;
        // 0x401aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401a9c) {
            ctx->pc = 0x401ABCu;
            goto label_401abc;
        }
    }
    ctx->pc = 0x401AA4u;
label_401aa4:
    // 0x401aa4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401aa8:
    // 0x401aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401aac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401AACu;
    SET_GPR_U32(ctx, 31, 0x401AB4u);
    ctx->pc = 0x401AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AACu;
    // 0x401ab0: 0x24a50118  addiu       $a1, $a1, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401AACu, 0x401AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AB4u;
label_401ab4:
    // 0x401ab4: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x401AB4u;
    {
        const bool branch_taken_0x401ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401AB4u;
        // 0x401ab8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ab4) {
            ctx->pc = 0x401E54u;
            goto label_401e54;
        }
    }
    ctx->pc = 0x401ABCu;
label_401abc:
    // 0x401abc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401ABCu;
    SET_GPR_U32(ctx, 31, 0x401AC4u);
    ctx->pc = 0x401AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401ABCu;
    // 0x401ac0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401ABCu, 0x401AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AC4u;
label_401ac4:
    // 0x401ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ac8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401AC8u;
    SET_GPR_U32(ctx, 31, 0x401AD0u);
    ctx->pc = 0x401ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AC8u;
    // 0x401acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401AC8u, 0x401AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AD0u;
label_401ad0:
    // 0x401ad0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401AD0u;
    SET_GPR_U32(ctx, 31, 0x401AD8u);
    ctx->pc = 0x401AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401AD0u;
    // 0x401ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401AD0u, 0x401AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401AD8u;
label_401ad8:
    // 0x401ad8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401adc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x401ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ae4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x401ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ae8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401aec: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401af0: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401af4: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401af8: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401b00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401b04: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401b08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401b0c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401b10: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401b18: 0xa3a30009  sb          $v1, 0x9($sp)
    ctx->pc = 0x401b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x401b1c: 0xa3a6000a  sb          $a2, 0xA($sp)
    ctx->pc = 0x401b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x401b20: 0xa3a7000b  sb          $a3, 0xB($sp)
    ctx->pc = 0x401b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 7));
    // 0x401b24: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401B24u;
    SET_GPR_U32(ctx, 31, 0x401B2Cu);
    ctx->pc = 0x401B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B24u;
    // 0x401b28: 0xa3a20008  sb          $v0, 0x8($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401B24u, 0x401B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B2Cu;
label_401b2c:
    // 0x401b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401b30: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401B30u;
    SET_GPR_U32(ctx, 31, 0x401B38u);
    ctx->pc = 0x401B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B30u;
    // 0x401b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401B30u, 0x401B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B38u;
label_401b38:
    // 0x401b38: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401B38u;
    SET_GPR_U32(ctx, 31, 0x401B40u);
    ctx->pc = 0x401B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B38u;
    // 0x401b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401B38u, 0x401B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B40u;
label_401b40:
    // 0x401b40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401b44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401b48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x401b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401b4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x401b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401b50: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401b54: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401b58: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401b5c: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401b60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401b64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401b68: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401b6c: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401b70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401b74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401b78: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401b7c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401b80: 0xa3a2000c  sb          $v0, 0xC($sp)
    ctx->pc = 0x401b80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x401b84: 0xa3a3000d  sb          $v1, 0xD($sp)
    ctx->pc = 0x401b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x401b88: 0xa3a6000e  sb          $a2, 0xE($sp)
    ctx->pc = 0x401b88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x401b8c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401B8Cu;
    SET_GPR_U32(ctx, 31, 0x401B94u);
    ctx->pc = 0x401B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B8Cu;
    // 0x401b90: 0xa3a7000f  sb          $a3, 0xF($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401B8Cu, 0x401B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401B94u;
label_401b94:
    // 0x401b94: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x401B94u;
    {
        const bool branch_taken_0x401b94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401B94u;
        // 0x401b98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401b94) {
            ctx->pc = 0x401BF4u;
            goto label_401bf4;
        }
    }
    ctx->pc = 0x401B9Cu;
    // 0x401b9c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401B9Cu;
    SET_GPR_U32(ctx, 31, 0x401BA4u);
    ctx->pc = 0x401BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401B9Cu;
    // 0x401ba0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401B9Cu, 0x401BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BA4u;
label_401ba4:
    // 0x401ba4: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x401BA4u;
    {
        const bool branch_taken_0x401ba4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BA4u;
        // 0x401ba8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ba4) {
            ctx->pc = 0x401BF8u;
            goto label_401bf8;
        }
    }
    ctx->pc = 0x401BACu;
    // 0x401bac: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x401bacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401bb0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401BB0u;
    SET_GPR_U32(ctx, 31, 0x401BB8u);
    ctx->pc = 0x401BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BB0u;
    // 0x401bb4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401BB0u, 0x401BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BB8u;
label_401bb8:
    // 0x401bb8: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x401BB8u;
    {
        const bool branch_taken_0x401bb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BB8u;
        // 0x401bbc: 0xdfa40020  ld          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401bb8) {
            ctx->pc = 0x401BF4u;
            goto label_401bf4;
        }
    }
    ctx->pc = 0x401BC0u;
    // 0x401bc0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401BC0u;
    SET_GPR_U32(ctx, 31, 0x401BC8u);
    ctx->pc = 0x401BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BC0u;
    // 0x401bc4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401BC0u, 0x401BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BC8u;
label_401bc8:
    // 0x401bc8: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x401BC8u;
    {
        const bool branch_taken_0x401bc8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BC8u;
        // 0x401bcc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401bc8) {
            ctx->pc = 0x401BF8u;
            goto label_401bf8;
        }
    }
    ctx->pc = 0x401BD0u;
    // 0x401bd0: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x401bd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401bd4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401BD4u;
    SET_GPR_U32(ctx, 31, 0x401BDCu);
    ctx->pc = 0x401BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BD4u;
    // 0x401bd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401BD4u, 0x401BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BDCu;
label_401bdc:
    // 0x401bdc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x401bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x401be0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x401be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x401be4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401BE4u;
    SET_GPR_U32(ctx, 31, 0x401BECu);
    ctx->pc = 0x401BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BE4u;
    // 0x401be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401BE4u, 0x401BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401BECu;
label_401bec:
    // 0x401bec: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401BECu;
    {
        const bool branch_taken_0x401bec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x401BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401BECu;
        // 0x401bf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401bec) {
            ctx->pc = 0x401C0Cu;
            goto label_401c0c;
        }
    }
    ctx->pc = 0x401BF4u;
label_401bf4:
    // 0x401bf4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401bf8:
    // 0x401bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401bfc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401BFCu;
    SET_GPR_U32(ctx, 31, 0x401C04u);
    ctx->pc = 0x401C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401BFCu;
    // 0x401c00: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401BFCu, 0x401C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C04u;
label_401c04:
    // 0x401c04: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x401C04u;
    {
        const bool branch_taken_0x401c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401C04u;
        // 0x401c08: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401c04) {
            ctx->pc = 0x401E54u;
            goto label_401e54;
        }
    }
    ctx->pc = 0x401C0Cu;
label_401c0c:
    // 0x401c0c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401C0Cu;
    SET_GPR_U32(ctx, 31, 0x401C14u);
    ctx->pc = 0x401C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C0Cu;
    // 0x401c10: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401C0Cu, 0x401C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C14u;
label_401c14:
    // 0x401c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c18: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401C18u;
    SET_GPR_U32(ctx, 31, 0x401C20u);
    ctx->pc = 0x401C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C18u;
    // 0x401c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401C18u, 0x401C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C20u;
label_401c20:
    // 0x401c20: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401C20u;
    SET_GPR_U32(ctx, 31, 0x401C28u);
    ctx->pc = 0x401C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C20u;
    // 0x401c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401C20u, 0x401C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C28u;
label_401c28:
    // 0x401c28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401c2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401c30: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x401c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401c34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x401c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c38: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c3c: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401c40: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401c44: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401c48: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401c4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401c50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401c54: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401c58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401c5c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401c60: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401c68: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x401c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x401c6c: 0xa3a60012  sb          $a2, 0x12($sp)
    ctx->pc = 0x401c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x401c70: 0xa3a70013  sb          $a3, 0x13($sp)
    ctx->pc = 0x401c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 7));
    // 0x401c74: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401C74u;
    SET_GPR_U32(ctx, 31, 0x401C7Cu);
    ctx->pc = 0x401C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C74u;
    // 0x401c78: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401C74u, 0x401C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C7Cu;
label_401c7c:
    // 0x401c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401c80: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401C80u;
    SET_GPR_U32(ctx, 31, 0x401C88u);
    ctx->pc = 0x401C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C80u;
    // 0x401c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401C80u, 0x401C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C88u;
label_401c88:
    // 0x401c88: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401C88u;
    SET_GPR_U32(ctx, 31, 0x401C90u);
    ctx->pc = 0x401C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401C88u;
    // 0x401c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401C88u, 0x401C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401C90u;
label_401c90:
    // 0x401c90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401c94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401c98: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x401c98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x401c9c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x401c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ca0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ca4: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401ca8: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401cac: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401cb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401cb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401cb8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401cbc: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401cc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401cc8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401ccc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401cd0: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x401cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x401cd4: 0xa3a30015  sb          $v1, 0x15($sp)
    ctx->pc = 0x401cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x401cd8: 0xa3a60016  sb          $a2, 0x16($sp)
    ctx->pc = 0x401cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x401cdc: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401CDCu;
    SET_GPR_U32(ctx, 31, 0x401CE4u);
    ctx->pc = 0x401CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401CDCu;
    // 0x401ce0: 0xa3a70017  sb          $a3, 0x17($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401CDCu, 0x401CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401CE4u;
label_401ce4:
    // 0x401ce4: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x401CE4u;
    {
        const bool branch_taken_0x401ce4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401CE4u;
        // 0x401ce8: 0xdfa40028  ld          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ce4) {
            ctx->pc = 0x401D44u;
            goto label_401d44;
        }
    }
    ctx->pc = 0x401CECu;
    // 0x401cec: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401CECu;
    SET_GPR_U32(ctx, 31, 0x401CF4u);
    ctx->pc = 0x401CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401CECu;
    // 0x401cf0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401CECu, 0x401CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401CF4u;
label_401cf4:
    // 0x401cf4: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x401CF4u;
    {
        const bool branch_taken_0x401cf4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401CF4u;
        // 0x401cf8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401cf4) {
            ctx->pc = 0x401D48u;
            goto label_401d48;
        }
    }
    ctx->pc = 0x401CFCu;
    // 0x401cfc: 0xdfa400d0  ld          $a0, 0xD0($sp)
    ctx->pc = 0x401cfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x401d00: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401D00u;
    SET_GPR_U32(ctx, 31, 0x401D08u);
    ctx->pc = 0x401D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D00u;
    // 0x401d04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401D00u, 0x401D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D08u;
label_401d08:
    // 0x401d08: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x401D08u;
    {
        const bool branch_taken_0x401d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x401D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D08u;
        // 0x401d0c: 0xdfa400d0  ld          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d08) {
            ctx->pc = 0x401D44u;
            goto label_401d44;
        }
    }
    ctx->pc = 0x401D10u;
    // 0x401d10: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401D10u;
    SET_GPR_U32(ctx, 31, 0x401D18u);
    ctx->pc = 0x401D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D10u;
    // 0x401d14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401D10u, 0x401D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D18u;
label_401d18:
    // 0x401d18: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x401D18u;
    {
        const bool branch_taken_0x401d18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x401D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D18u;
        // 0x401d1c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d18) {
            ctx->pc = 0x401D48u;
            goto label_401d48;
        }
    }
    ctx->pc = 0x401D20u;
    // 0x401d20: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x401d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x401d24: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401D24u;
    SET_GPR_U32(ctx, 31, 0x401D2Cu);
    ctx->pc = 0x401D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D24u;
    // 0x401d28: 0xdfa500d0  ld          $a1, 0xD0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401D24u, 0x401D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D2Cu;
label_401d2c:
    // 0x401d2c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x401d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x401d30: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x401d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x401d34: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x401D34u;
    SET_GPR_U32(ctx, 31, 0x401D3Cu);
    ctx->pc = 0x401D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D34u;
    // 0x401d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x401D34u, 0x401D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D3Cu;
label_401d3c:
    // 0x401d3c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401D3Cu;
    {
        const bool branch_taken_0x401d3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x401D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D3Cu;
        // 0x401d40: 0xdfa40028  ld          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d3c) {
            ctx->pc = 0x401D5Cu;
            goto label_401d5c;
        }
    }
    ctx->pc = 0x401D44u;
label_401d44:
    // 0x401d44: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401d48:
    // 0x401d48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401d4c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401D4Cu;
    SET_GPR_U32(ctx, 31, 0x401D54u);
    ctx->pc = 0x401D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D4Cu;
    // 0x401d50: 0x24a50168  addiu       $a1, $a1, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401D4Cu, 0x401D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D54u;
label_401d54:
    // 0x401d54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x401D54u;
    {
        const bool branch_taken_0x401d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401D54u;
        // 0x401d58: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401d54) {
            ctx->pc = 0x401E54u;
            goto label_401e54;
        }
    }
    ctx->pc = 0x401D5Cu;
label_401d5c:
    // 0x401d5c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401D5Cu;
    SET_GPR_U32(ctx, 31, 0x401D64u);
    ctx->pc = 0x401D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D5Cu;
    // 0x401d60: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401D5Cu, 0x401D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D64u;
label_401d64:
    // 0x401d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401d68: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401D68u;
    SET_GPR_U32(ctx, 31, 0x401D70u);
    ctx->pc = 0x401D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D68u;
    // 0x401d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401D68u, 0x401D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D70u;
label_401d70:
    // 0x401d70: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401D70u;
    SET_GPR_U32(ctx, 31, 0x401D78u);
    ctx->pc = 0x401D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401D70u;
    // 0x401d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401D70u, 0x401D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401D78u;
label_401d78:
    // 0x401d78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401d78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401d7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401d80: 0xdfa400d0  ld          $a0, 0xD0($sp)
    ctx->pc = 0x401d80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x401d84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x401d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401d88: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401d8c: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401d90: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401d94: 0x8323a  dsrl        $a2, $t0, 8
    ctx->pc = 0x401d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 8);
    // 0x401d98: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x401d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401da0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401da4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401da8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401dac: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401db0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401db4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401db8: 0xa3a30019  sb          $v1, 0x19($sp)
    ctx->pc = 0x401db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x401dbc: 0xa3a6001a  sb          $a2, 0x1A($sp)
    ctx->pc = 0x401dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x401dc0: 0xa3a7001b  sb          $a3, 0x1B($sp)
    ctx->pc = 0x401dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 7));
    // 0x401dc4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x401DC4u;
    SET_GPR_U32(ctx, 31, 0x401DCCu);
    ctx->pc = 0x401DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401DC4u;
    // 0x401dc8: 0xa3a20018  sb          $v0, 0x18($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x401DC4u, 0x401DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401DCCu;
label_401dcc:
    // 0x401dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401dd0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x401DD0u;
    SET_GPR_U32(ctx, 31, 0x401DD8u);
    ctx->pc = 0x401DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401DD0u;
    // 0x401dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x401DD0u, 0x401DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401DD8u;
label_401dd8:
    // 0x401dd8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x401DD8u;
    SET_GPR_U32(ctx, 31, 0x401DE0u);
    ctx->pc = 0x401DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401DD8u;
    // 0x401ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x401DD8u, 0x401DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401DE0u;
label_401de0:
    // 0x401de0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x401de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x401de4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x401de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x401de8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401dec: 0x2785ac60  addiu       $a1, $gp, -0x53A0
    ctx->pc = 0x401decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945888));
    // 0x401df0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x401df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x401df4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x401df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401df8: 0x8163a  dsrl        $v0, $t0, 24
    ctx->pc = 0x401df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 24);
    // 0x401dfc: 0x81c3a  dsrl        $v1, $t0, 16
    ctx->pc = 0x401dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 16);
    // 0x401e00: 0x83a3a  dsrl        $a3, $t0, 8
    ctx->pc = 0x401e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) >> 8);
    // 0x401e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401e08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401e0c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401e10: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401e14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401e18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401e1c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401e20: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401e20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401e24: 0xa3a2001c  sb          $v0, 0x1C($sp)
    ctx->pc = 0x401e24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x401e28: 0xa3a3001d  sb          $v1, 0x1D($sp)
    ctx->pc = 0x401e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x401e2c: 0xa3a7001e  sb          $a3, 0x1E($sp)
    ctx->pc = 0x401e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 7));
    // 0x401e30: 0xc101b98  jal         func_406E60
    ctx->pc = 0x401E30u;
    SET_GPR_U32(ctx, 31, 0x401E38u);
    ctx->pc = 0x401E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E30u;
    // 0x401e34: 0xa3a8001f  sb          $t0, 0x1F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x401E30u, 0x401E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E38u;
label_401e38:
    // 0x401e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x401e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401e3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401e40: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x401E40u;
    SET_GPR_U32(ctx, 31, 0x401E48u);
    ctx->pc = 0x401E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E40u;
    // 0x401e44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x401E40u, 0x401E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E48u;
label_401e48:
    // 0x401e48: 0xc101bda  jal         func_406F68
    ctx->pc = 0x401E48u;
    SET_GPR_U32(ctx, 31, 0x401E50u);
    ctx->pc = 0x401E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401E48u;
    // 0x401e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x401E48u, 0x401E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401E50u;
label_401e50:
    // 0x401e50: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x401e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_401e54:
    // 0x401e54: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x401e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x401e58: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x401e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x401e5c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x401e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x401e60: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x401e60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x401e64: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x401e64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x401e68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x401e68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x401e6c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x401e6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x401e70: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x401e70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401e74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x401e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x401e78: 0x3e00008  jr          $ra
    ctx->pc = 0x401E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401E78u;
        // 0x401e7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x401E80u;
    // 0x401e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x401e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x401e84: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x401e84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401e88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x401e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x401e8c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x401e8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401e90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x401e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x401e94: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x401e94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x401e98: 0x36313880  ori         $s1, $s1, 0x3880
    ctx->pc = 0x401e98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)14464);
    // 0x401e9c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x401e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x401ea0: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x401ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ea4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x401ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x401ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x401ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401eac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x401eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x401eb0: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x401eb0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401eb4: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x401eb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401eb8: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x401eb8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ebc: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x401ebcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ec0: 0x22c102a  slt         $v0, $s1, $t4
    ctx->pc = 0x401ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x401ec4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x401EC4u;
    {
        const bool branch_taken_0x401ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x401EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EC4u;
        // 0x401ec8: 0xdfab0070  ld          $t3, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ec4) {
            ctx->pc = 0x401EF0u;
            goto label_401ef0;
        }
    }
    ctx->pc = 0x401ECCu;
    // 0x401ecc: 0x22d102a  slt         $v0, $s1, $t5
    ctx->pc = 0x401eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x401ed0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x401ED0u;
    {
        const bool branch_taken_0x401ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x401ed0) {
            ctx->pc = 0x401ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401ED0u;
            // 0x401ed4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401EF4u;
            goto label_401ef4;
        }
    }
    ctx->pc = 0x401ED8u;
    // 0x401ed8: 0x18d102d  daddu       $v0, $t4, $t5
    ctx->pc = 0x401ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 13));
    // 0x401edc: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x401edcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x401ee0: 0x367386a0  ori         $s3, $s3, 0x86A0
    ctx->pc = 0x401ee0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)34464);
    // 0x401ee4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x401ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x401ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401EE8u;
    {
        const bool branch_taken_0x401ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401EE8u;
        // 0x401eec: 0xc163a  dsrl        $v0, $t4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ee8) {
            ctx->pc = 0x401F08u;
            goto label_401f08;
        }
    }
    ctx->pc = 0x401EF0u;
label_401ef0:
    // 0x401ef0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401ef4:
    // 0x401ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401ef8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401EF8u;
    SET_GPR_U32(ctx, 31, 0x401F00u);
    ctx->pc = 0x401EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401EF8u;
    // 0x401efc: 0x24a501a0  addiu       $a1, $a1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401EF8u, 0x401F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401F00u;
label_401f00:
    // 0x401f00: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x401F00u;
    {
        const bool branch_taken_0x401f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F00u;
        // 0x401f04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401f00) {
            ctx->pc = 0x4021B8u;
            goto label_4021b8;
        }
    }
    ctx->pc = 0x401F08u;
label_401f08:
    // 0x401f08: 0xc1c3a  dsrl        $v1, $t4, 16
    ctx->pc = 0x401f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> 16);
    // 0x401f0c: 0xc223a  dsrl        $a0, $t4, 8
    ctx->pc = 0x401f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) >> 8);
    // 0x401f10: 0xd2e3a  dsrl        $a1, $t5, 24
    ctx->pc = 0x401f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) >> 24);
    // 0x401f14: 0xd343a  dsrl        $a2, $t5, 16
    ctx->pc = 0x401f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) >> 16);
    // 0x401f18: 0xd3a3a  dsrl        $a3, $t5, 8
    ctx->pc = 0x401f18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) >> 8);
    // 0x401f1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401f20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401f24: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x401f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x401f28: 0x318800ff  andi        $t0, $t4, 0xFF
    ctx->pc = 0x401f28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x401f2c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x401f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x401f30: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401f34: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401f38: 0x31a900ff  andi        $t1, $t5, 0xFF
    ctx->pc = 0x401f38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x401f3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401f40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401f44: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x401f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x401f48: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401f4c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x401f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x401f50: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401f54: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401f58: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x401f58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x401f5c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x401f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x401f60: 0x22e502a  slt         $t2, $s1, $t6
    ctx->pc = 0x401f60u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x401f64: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x401f64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x401f68: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x401f68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x401f6c: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x401f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x401f70: 0xa3a50004  sb          $a1, 0x4($sp)
    ctx->pc = 0x401f70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x401f74: 0xa3a60005  sb          $a2, 0x5($sp)
    ctx->pc = 0x401f74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x401f78: 0xa3a70006  sb          $a3, 0x6($sp)
    ctx->pc = 0x401f78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x401f7c: 0x15400008  bnez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x401F7Cu;
    {
        const bool branch_taken_0x401f7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x401F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F7Cu;
        // 0x401f80: 0xa3a90007  sb          $t1, 0x7($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401f7c) {
            ctx->pc = 0x401FA0u;
            goto label_401fa0;
        }
    }
    ctx->pc = 0x401F84u;
    // 0x401f84: 0x22f102a  slt         $v0, $s1, $t7
    ctx->pc = 0x401f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x401f88: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x401F88u;
    {
        const bool branch_taken_0x401f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x401f88) {
            ctx->pc = 0x401F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401F88u;
            // 0x401f8c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401FA4u;
            goto label_401fa4;
        }
    }
    ctx->pc = 0x401F90u;
    // 0x401f90: 0x1cf102d  daddu       $v0, $t6, $t7
    ctx->pc = 0x401f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 15));
    // 0x401f94: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x401f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x401f98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401F98u;
    {
        const bool branch_taken_0x401f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401F98u;
        // 0x401f9c: 0xe163a  dsrl        $v0, $t6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x401f98) {
            ctx->pc = 0x401FB8u;
            goto label_401fb8;
        }
    }
    ctx->pc = 0x401FA0u;
label_401fa0:
    // 0x401fa0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x401fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401fa4:
    // 0x401fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401fa8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401FA8u;
    SET_GPR_U32(ctx, 31, 0x401FB0u);
    ctx->pc = 0x401FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401FA8u;
    // 0x401fac: 0x24a501d0  addiu       $a1, $a1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401FA8u, 0x401FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401FB0u;
label_401fb0:
    // 0x401fb0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x401FB0u;
    {
        const bool branch_taken_0x401fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401FB0u;
        // 0x401fb4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401fb0) {
            ctx->pc = 0x4021B8u;
            goto label_4021b8;
        }
    }
    ctx->pc = 0x401FB8u;
label_401fb8:
    // 0x401fb8: 0xe1c3a  dsrl        $v1, $t6, 16
    ctx->pc = 0x401fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) >> 16);
    // 0x401fbc: 0xe223a  dsrl        $a0, $t6, 8
    ctx->pc = 0x401fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) >> 8);
    // 0x401fc0: 0xf2e3a  dsrl        $a1, $t7, 24
    ctx->pc = 0x401fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) >> 24);
    // 0x401fc4: 0xf343a  dsrl        $a2, $t7, 16
    ctx->pc = 0x401fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) >> 16);
    // 0x401fc8: 0xf3a3a  dsrl        $a3, $t7, 8
    ctx->pc = 0x401fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) >> 8);
    // 0x401fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401fd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401fd4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x401fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x401fd8: 0x31c800ff  andi        $t0, $t6, 0xFF
    ctx->pc = 0x401fd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x401fdc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x401fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x401fe0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x401fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x401fe4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401fe8: 0x31e900ff  andi        $t1, $t7, 0xFF
    ctx->pc = 0x401fe8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x401fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401ff0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401ff4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x401ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x401ff8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401ff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401ffc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x401ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x402000: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402004: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402008: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x402008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x40200c: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x40200cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x402010: 0x238502a  slt         $t2, $s1, $t8
    ctx->pc = 0x402010u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x402014: 0xa3a30009  sb          $v1, 0x9($sp)
    ctx->pc = 0x402014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x402018: 0xa3a4000a  sb          $a0, 0xA($sp)
    ctx->pc = 0x402018u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x40201c: 0xa3a8000b  sb          $t0, 0xB($sp)
    ctx->pc = 0x40201cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x402020: 0xa3a5000c  sb          $a1, 0xC($sp)
    ctx->pc = 0x402020u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x402024: 0xa3a6000d  sb          $a2, 0xD($sp)
    ctx->pc = 0x402024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x402028: 0xa3a7000e  sb          $a3, 0xE($sp)
    ctx->pc = 0x402028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 7));
    // 0x40202c: 0x15400008  bnez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x40202Cu;
    {
        const bool branch_taken_0x40202c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x402030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40202Cu;
        // 0x402030: 0xa3a9000f  sb          $t1, 0xF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40202c) {
            ctx->pc = 0x402050u;
            goto label_402050;
        }
    }
    ctx->pc = 0x402034u;
    // 0x402034: 0x239102a  slt         $v0, $s1, $t9
    ctx->pc = 0x402034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x402038: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x402038u;
    {
        const bool branch_taken_0x402038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x402038) {
            ctx->pc = 0x40203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402038u;
            // 0x40203c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402054u;
            goto label_402054;
        }
    }
    ctx->pc = 0x402040u;
    // 0x402040: 0x319102d  daddu       $v0, $t8, $t9
    ctx->pc = 0x402040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 25));
    // 0x402044: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x402044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x402048: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x402048u;
    {
        const bool branch_taken_0x402048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402048u;
        // 0x40204c: 0x18163a  dsrl        $v0, $t8, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x402048) {
            ctx->pc = 0x402068u;
            goto label_402068;
        }
    }
    ctx->pc = 0x402050u;
label_402050:
    // 0x402050: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_402054:
    // 0x402054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402058: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402058u;
    SET_GPR_U32(ctx, 31, 0x402060u);
    ctx->pc = 0x40205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402058u;
    // 0x40205c: 0x24a501f8  addiu       $a1, $a1, 0x1F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402058u, 0x402060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402060u;
label_402060:
    // 0x402060: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x402060u;
    {
        const bool branch_taken_0x402060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402060u;
        // 0x402064: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402060) {
            ctx->pc = 0x4021B8u;
            goto label_4021b8;
        }
    }
    ctx->pc = 0x402068u;
label_402068:
    // 0x402068: 0x181c3a  dsrl        $v1, $t8, 16
    ctx->pc = 0x402068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> 16);
    // 0x40206c: 0x18223a  dsrl        $a0, $t8, 8
    ctx->pc = 0x40206cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) >> 8);
    // 0x402070: 0x192e3a  dsrl        $a1, $t9, 24
    ctx->pc = 0x402070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) >> 24);
    // 0x402074: 0x19343a  dsrl        $a2, $t9, 16
    ctx->pc = 0x402074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 25) >> 16);
    // 0x402078: 0x193a3a  dsrl        $a3, $t9, 8
    ctx->pc = 0x402078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) >> 8);
    // 0x40207c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402080: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402084: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x402084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x402088: 0x330800ff  andi        $t0, $t8, 0xFF
    ctx->pc = 0x402088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x40208c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x40208cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x402090: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402094: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402098: 0x332900ff  andi        $t1, $t9, 0xFF
    ctx->pc = 0x402098u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)255);
    // 0x40209c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4020a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4020a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4020a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4020a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4020a8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4020a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4020ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4020acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4020b0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4020b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4020b4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4020b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4020b8: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x4020b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x4020bc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x4020bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x4020c0: 0x232502a  slt         $t2, $s1, $s2
    ctx->pc = 0x4020c0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4020c4: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x4020c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x4020c8: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x4020c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x4020cc: 0xa3a80013  sb          $t0, 0x13($sp)
    ctx->pc = 0x4020ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 8));
    // 0x4020d0: 0xa3a50014  sb          $a1, 0x14($sp)
    ctx->pc = 0x4020d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x4020d4: 0xa3a60015  sb          $a2, 0x15($sp)
    ctx->pc = 0x4020d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 6));
    // 0x4020d8: 0xa3a70016  sb          $a3, 0x16($sp)
    ctx->pc = 0x4020d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 7));
    // 0x4020dc: 0x15400008  bnez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4020DCu;
    {
        const bool branch_taken_0x4020dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4020E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4020DCu;
        // 0x4020e0: 0xa3a90017  sb          $t1, 0x17($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4020dc) {
            ctx->pc = 0x402100u;
            goto label_402100;
        }
    }
    ctx->pc = 0x4020E4u;
    // 0x4020e4: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x4020e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4020e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4020E8u;
    {
        const bool branch_taken_0x4020e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4020e8) {
            ctx->pc = 0x4020ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4020E8u;
            // 0x4020ec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402104u;
            goto label_402104;
        }
    }
    ctx->pc = 0x4020F0u;
    // 0x4020f0: 0x24b102d  daddu       $v0, $s2, $t3
    ctx->pc = 0x4020f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 11));
    // 0x4020f4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4020f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4020f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4020F8u;
    {
        const bool branch_taken_0x4020f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4020F8u;
        // 0x4020fc: 0x12323a  dsrl        $a2, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4020f8) {
            ctx->pc = 0x402118u;
            goto label_402118;
        }
    }
    ctx->pc = 0x402100u;
label_402100:
    // 0x402100: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_402104:
    // 0x402104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402108: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402108u;
    SET_GPR_U32(ctx, 31, 0x402110u);
    ctx->pc = 0x40210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402108u;
    // 0x40210c: 0x24a50228  addiu       $a1, $a1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402108u, 0x402110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402110u;
label_402110:
    // 0x402110: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x402110u;
    {
        const bool branch_taken_0x402110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402110u;
        // 0x402114: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402110) {
            ctx->pc = 0x4021B8u;
            goto label_4021b8;
        }
    }
    ctx->pc = 0x402118u;
label_402118:
    // 0x402118: 0xb463a  dsrl        $t0, $t3, 24
    ctx->pc = 0x402118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) >> 24);
    // 0x40211c: 0xb4c3a  dsrl        $t1, $t3, 16
    ctx->pc = 0x40211cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) >> 16);
    // 0x402120: 0xb523a  dsrl        $t2, $t3, 8
    ctx->pc = 0x402120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) >> 8);
    // 0x402124: 0x12163a  dsrl        $v0, $s2, 24
    ctx->pc = 0x402124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 24);
    // 0x402128: 0x121c3a  dsrl        $v1, $s2, 16
    ctx->pc = 0x402128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 16);
    // 0x40212c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x40212cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402130: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x402130u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x402134: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40213c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402140: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x402140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x402144: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x402144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x402148: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x402148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x40214c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x40214cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x402150: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402158: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40215c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x40215cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x402160: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x402160u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x402164: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x402164u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x402168: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x402168u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x40216c: 0xa3a6001a  sb          $a2, 0x1A($sp)
    ctx->pc = 0x40216cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x402170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402174: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x402174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x402178: 0x2785ac60  addiu       $a1, $gp, -0x53A0
    ctx->pc = 0x402178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945888));
    // 0x40217c: 0xa3a30019  sb          $v1, 0x19($sp)
    ctx->pc = 0x40217cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x402180: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x402180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x402184: 0xa3a7001b  sb          $a3, 0x1B($sp)
    ctx->pc = 0x402184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 7));
    // 0x402188: 0xa3a8001c  sb          $t0, 0x1C($sp)
    ctx->pc = 0x402188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 8));
    // 0x40218c: 0xa3a9001d  sb          $t1, 0x1D($sp)
    ctx->pc = 0x40218cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 9));
    // 0x402190: 0xa3aa001e  sb          $t2, 0x1E($sp)
    ctx->pc = 0x402190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 10));
    // 0x402194: 0xc101b98  jal         func_406E60
    ctx->pc = 0x402194u;
    SET_GPR_U32(ctx, 31, 0x40219Cu);
    ctx->pc = 0x402198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402194u;
    // 0x402198: 0xa3ab001f  sb          $t3, 0x1F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x402194u, 0x40219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40219Cu;
label_40219c:
    // 0x40219c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4021a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021a4: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x4021A4u;
    SET_GPR_U32(ctx, 31, 0x4021ACu);
    ctx->pc = 0x4021A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4021A4u;
    // 0x4021a8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x4021A4u, 0x4021ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4021ACu;
label_4021ac:
    // 0x4021ac: 0xc101bda  jal         func_406F68
    ctx->pc = 0x4021ACu;
    SET_GPR_U32(ctx, 31, 0x4021B4u);
    ctx->pc = 0x4021B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4021ACu;
    // 0x4021b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x4021ACu, 0x4021B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4021B4u;
label_4021b4:
    // 0x4021b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4021b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4021b8:
    // 0x4021b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4021b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4021bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4021bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4021c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4021c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4021c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4021c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4021c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4021C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4021CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4021C8u;
        // 0x4021cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4021C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4021D0u;
}
