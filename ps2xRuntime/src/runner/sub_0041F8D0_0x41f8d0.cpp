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

// Function: sub_0041F8D0
// Address: 0x41f8d0 - 0x41fe90
void sub_0041F8D0_0x41f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F8D0_0x41f8d0");
#endif

    switch (ctx->pc) {
        case 0x41f910u: goto label_41f910;
        case 0x41f920u: goto label_41f920;
        case 0x41f930u: goto label_41f930;
        case 0x41f950u: goto label_41f950;
        case 0x41f960u: goto label_41f960;
        case 0x41f970u: goto label_41f970;
        case 0x41f9a8u: goto label_41f9a8;
        case 0x41f9c0u: goto label_41f9c0;
        case 0x41f9d4u: goto label_41f9d4;
        case 0x41f9ecu: goto label_41f9ec;
        case 0x41f9f8u: goto label_41f9f8;
        case 0x41fa4cu: goto label_41fa4c;
        case 0x41fa64u: goto label_41fa64;
        case 0x41fa7cu: goto label_41fa7c;
        case 0x41fa88u: goto label_41fa88;
        case 0x41fa9cu: goto label_41fa9c;
        case 0x41fab0u: goto label_41fab0;
        case 0x41fac4u: goto label_41fac4;
        case 0x41fad8u: goto label_41fad8;
        case 0x41fb2cu: goto label_41fb2c;
        case 0x41fb4cu: goto label_41fb4c;
        case 0x41fb6cu: goto label_41fb6c;
        case 0x41fb8cu: goto label_41fb8c;
        case 0x41fba0u: goto label_41fba0;
        case 0x41fbdcu: goto label_41fbdc;
        case 0x41fbf0u: goto label_41fbf0;
        case 0x41fc00u: goto label_41fc00;
        case 0x41fc0cu: goto label_41fc0c;
        case 0x41fc14u: goto label_41fc14;
        case 0x41fc1cu: goto label_41fc1c;
        case 0x41fc24u: goto label_41fc24;
        case 0x41fc30u: goto label_41fc30;
        case 0x41fc78u: goto label_41fc78;
        case 0x41fc88u: goto label_41fc88;
        case 0x41fc90u: goto label_41fc90;
        case 0x41fca4u: goto label_41fca4;
        case 0x41fcbcu: goto label_41fcbc;
        case 0x41fcd0u: goto label_41fcd0;
        case 0x41fcd8u: goto label_41fcd8;
        case 0x41fcecu: goto label_41fcec;
        case 0x41fd00u: goto label_41fd00;
        case 0x41fd14u: goto label_41fd14;
        case 0x41fd1cu: goto label_41fd1c;
        case 0x41fd30u: goto label_41fd30;
        case 0x41fd40u: goto label_41fd40;
        case 0x41fd50u: goto label_41fd50;
        case 0x41fd64u: goto label_41fd64;
        case 0x41fd6cu: goto label_41fd6c;
        case 0x41fd80u: goto label_41fd80;
        case 0x41fd94u: goto label_41fd94;
        case 0x41fda8u: goto label_41fda8;
        case 0x41fdb0u: goto label_41fdb0;
        case 0x41fdc4u: goto label_41fdc4;
        case 0x41fdd8u: goto label_41fdd8;
        case 0x41fdecu: goto label_41fdec;
        case 0x41fdf4u: goto label_41fdf4;
        case 0x41fe08u: goto label_41fe08;
        case 0x41fe1cu: goto label_41fe1c;
        case 0x41fe30u: goto label_41fe30;
        case 0x41fe38u: goto label_41fe38;
        case 0x41fe4cu: goto label_41fe4c;
        default: break;
    }

    ctx->pc = 0x41f8d0u;

    // 0x41f8d0: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x41f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x41f8d4: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x41f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
    // 0x41f8d8: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x41f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
    // 0x41f8dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41f8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f8e0: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x41f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
    // 0x41f8e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41f8e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f8e8: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x41f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
    // 0x41f8ec: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x41f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
    // 0x41f8f0: 0x7fb50460  sq          $s5, 0x460($sp)
    ctx->pc = 0x41f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 21));
    // 0x41f8f4: 0x7fb60450  sq          $s6, 0x450($sp)
    ctx->pc = 0x41f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 22));
    // 0x41f8f8: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x41f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x41f8fc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x41f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x41f900: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x41F900u;
    {
        const bool branch_taken_0x41f900 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F900u;
        // 0x41f904: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f900) {
            ctx->pc = 0x41F938u;
            goto label_41f938;
        }
    }
    ctx->pc = 0x41F908u;
    // 0x41f908: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41F908u;
    SET_GPR_U32(ctx, 31, 0x41F910u);
    ctx->pc = 0x41F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F908u;
    // 0x41f90c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41F908u, 0x41F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F910u;
label_41f910:
    // 0x41f910: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x41F910u;
    {
        const bool branch_taken_0x41f910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F910u;
        // 0x41f914: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f910) {
            ctx->pc = 0x41F984u;
            goto label_41f984;
        }
    }
    ctx->pc = 0x41F918u;
    // 0x41f918: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41F918u;
    SET_GPR_U32(ctx, 31, 0x41F920u);
    ctx->pc = 0x41F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F918u;
    // 0x41f91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41F918u, 0x41F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F920u;
label_41f920:
    // 0x41f920: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x41F920u;
    {
        const bool branch_taken_0x41f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F920u;
        // 0x41f924: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f920) {
            ctx->pc = 0x41F984u;
            goto label_41f984;
        }
    }
    ctx->pc = 0x41F928u;
    // 0x41f928: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x41F928u;
    SET_GPR_U32(ctx, 31, 0x41F930u);
    ctx->pc = 0x41F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F928u;
    // 0x41f92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x41F928u, 0x41F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F930u;
label_41f930:
    // 0x41f930: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x41F930u;
    {
        const bool branch_taken_0x41f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F930u;
        // 0x41f934: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f930) {
            ctx->pc = 0x41F97Cu;
            goto label_41f97c;
        }
    }
    ctx->pc = 0x41F938u;
label_41f938:
    // 0x41f938: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x41f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x41f93c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x41f940: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x41F940u;
    {
        const bool branch_taken_0x41f940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x41f940) {
            ctx->pc = 0x41F944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F940u;
            // 0x41f944: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F978u;
            goto label_41f978;
        }
    }
    ctx->pc = 0x41F948u;
    // 0x41f948: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41F948u;
    SET_GPR_U32(ctx, 31, 0x41F950u);
    ctx->pc = 0x41F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F948u;
    // 0x41f94c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41F948u, 0x41F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F950u;
label_41f950:
    // 0x41f950: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41F950u;
    {
        const bool branch_taken_0x41f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F950u;
        // 0x41f954: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f950) {
            ctx->pc = 0x41F984u;
            goto label_41f984;
        }
    }
    ctx->pc = 0x41F958u;
    // 0x41f958: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41F958u;
    SET_GPR_U32(ctx, 31, 0x41F960u);
    ctx->pc = 0x41F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F958u;
    // 0x41f95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41F958u, 0x41F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F960u;
label_41f960:
    // 0x41f960: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41F960u;
    {
        const bool branch_taken_0x41f960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F960u;
        // 0x41f964: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f960) {
            ctx->pc = 0x41F984u;
            goto label_41f984;
        }
    }
    ctx->pc = 0x41F968u;
    // 0x41f968: 0xc1070d0  jal         func_41C340
    ctx->pc = 0x41F968u;
    SET_GPR_U32(ctx, 31, 0x41F970u);
    ctx->pc = 0x41F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F968u;
    // 0x41f96c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C340u, 0x41F968u, 0x41F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F970u;
label_41f970:
    // 0x41f970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41F970u;
    {
        const bool branch_taken_0x41f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F970u;
        // 0x41f974: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f970) {
            ctx->pc = 0x41F97Cu;
            goto label_41f97c;
        }
    }
    ctx->pc = 0x41F978u;
label_41f978:
    // 0x41f978: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x41f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41f97c:
    // 0x41f97c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F97Cu;
    {
        const bool branch_taken_0x41f97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f97c) {
            ctx->pc = 0x41F980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F97Cu;
            // 0x41f980: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F98Cu;
            goto label_41f98c;
        }
    }
    ctx->pc = 0x41F984u;
label_41f984:
    // 0x41f984: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x41F984u;
    {
        const bool branch_taken_0x41f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F984u;
        // 0x41f988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f984) {
            ctx->pc = 0x41FE68u;
            goto label_41fe68;
        }
    }
    ctx->pc = 0x41F98Cu;
label_41f98c:
    // 0x41f98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f990: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x41f990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f994: 0x30560010  andi        $s6, $v0, 0x10
    ctx->pc = 0x41f994u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x41f998: 0x161827  nor         $v1, $zero, $s6
    ctx->pc = 0x41f998u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x41f99c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x41f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x41f9a0: 0xc1074ce  jal         func_41D338
    ctx->pc = 0x41F9A0u;
    SET_GPR_U32(ctx, 31, 0x41F9A8u);
    ctx->pc = 0x41F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9A0u;
    // 0x41f9a4: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x41F9A0u, 0x41F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9A8u;
label_41f9a8:
    // 0x41f9a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x41f9a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9ac: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x41f9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x41f9b0: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x41F9B0u;
    {
        const bool branch_taken_0x41f9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f9b0) {
            ctx->pc = 0x41F9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F9B0u;
            // 0x41f9b4: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FB00u;
            goto label_41fb00;
        }
    }
    ctx->pc = 0x41F9B8u;
    // 0x41f9b8: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x41f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x41f9bc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x41f9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41f9c0:
    // 0x41f9c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x41f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x41f9c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9c8: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x41f9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x41f9cc: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41F9CCu;
    SET_GPR_U32(ctx, 31, 0x41F9D4u);
    ctx->pc = 0x41F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9CCu;
    // 0x41f9d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41F9CCu, 0x41F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9D4u;
label_41f9d4:
    // 0x41f9d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41F9D4u;
    {
        const bool branch_taken_0x41f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f9d4) {
            ctx->pc = 0x41F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F9D4u;
            // 0x41f9d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F9FCu;
            goto label_41f9fc;
        }
    }
    ctx->pc = 0x41F9DCu;
    // 0x41f9dc: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x41f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x41f9e0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x41f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x41f9e4: 0xc10786a  jal         func_41E1A8
    ctx->pc = 0x41F9E4u;
    SET_GPR_U32(ctx, 31, 0x41F9ECu);
    ctx->pc = 0x41F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9E4u;
    // 0x41f9e8: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x41F9E4u, 0x41F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9ECu;
label_41f9ec:
    // 0x41f9ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41f9f0: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41F9F0u;
    SET_GPR_U32(ctx, 31, 0x41F9F8u);
    ctx->pc = 0x41F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9F0u;
    // 0x41f9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41F9F0u, 0x41F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9F8u;
label_41f9f8:
    // 0x41f9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41f9fc:
    // 0x41f9fc: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x41F9FCu;
    {
        const bool branch_taken_0x41f9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f9fc) {
            ctx->pc = 0x41FA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F9FCu;
            // 0x41fa00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FAECu;
            goto label_41faec;
        }
    }
    ctx->pc = 0x41FA04u;
    // 0x41fa04: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41fa04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x41fa08: 0x6600035  bltz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x41FA08u;
    {
        const bool branch_taken_0x41fa08 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x41FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA08u;
        // 0x41fa0c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa08) {
            ctx->pc = 0x41FAE0u;
            goto label_41fae0;
        }
    }
    ctx->pc = 0x41FA10u;
    // 0x41fa10: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x41fa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x41fa14: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x41fa14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x41fa18: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41fa1c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x41FA1Cu;
    {
        const bool branch_taken_0x41fa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA1Cu;
        // 0x41fa20: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa1c) {
            ctx->pc = 0x41FA88u;
            goto label_41fa88;
        }
    }
    ctx->pc = 0x41FA24u;
    // 0x41fa24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41fa24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41fa28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x41FA28u;
    {
        const bool branch_taken_0x41fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA28u;
        // 0x41fa2c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa28) {
            ctx->pc = 0x41FA68u;
            goto label_41fa68;
        }
    }
    ctx->pc = 0x41FA30u;
    // 0x41fa30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x41FA30u;
    {
        const bool branch_taken_0x41fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fa30) {
            ctx->pc = 0x41FA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FA30u;
            // 0x41fa34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FA54u;
            goto label_41fa54;
        }
    }
    ctx->pc = 0x41FA38u;
    // 0x41fa38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x41fa3c: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FA3Cu;
    {
        const bool branch_taken_0x41fa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA3Cu;
        // 0x41fa40: 0x2630fffc  addiu       $s0, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa3c) {
            ctx->pc = 0x41FA4Cu;
            goto label_41fa4c;
        }
    }
    ctx->pc = 0x41FA44u;
    // 0x41fa44: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FA44u;
    SET_GPR_U32(ctx, 31, 0x41FA4Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FA44u, 0x41FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA4Cu;
label_41fa4c:
    // 0x41fa4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41fa4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x41fa50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41fa54:
    // 0x41fa54: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FA54u;
    {
        const bool branch_taken_0x41fa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA54u;
        // 0x41fa58: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa54) {
            ctx->pc = 0x41FA64u;
            goto label_41fa64;
        }
    }
    ctx->pc = 0x41FA5Cu;
    // 0x41fa5c: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FA5Cu;
    SET_GPR_U32(ctx, 31, 0x41FA64u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FA5Cu, 0x41FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA64u;
label_41fa64:
    // 0x41fa64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41fa64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41fa68:
    // 0x41fa68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fa6c: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FA6Cu;
    {
        const bool branch_taken_0x41fa6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA6Cu;
        // 0x41fa70: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa6c) {
            ctx->pc = 0x41FA7Cu;
            goto label_41fa7c;
        }
    }
    ctx->pc = 0x41FA74u;
    // 0x41fa74: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FA74u;
    SET_GPR_U32(ctx, 31, 0x41FA7Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FA74u, 0x41FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA7Cu;
label_41fa7c:
    // 0x41fa7c: 0x6600018  bltz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x41FA7Cu;
    {
        const bool branch_taken_0x41fa7c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x41FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA7Cu;
        // 0x41fa80: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa7c) {
            ctx->pc = 0x41FAE0u;
            goto label_41fae0;
        }
    }
    ctx->pc = 0x41FA84u;
    // 0x41fa84: 0x0  nop
    ctx->pc = 0x41fa84u;
    // NOP
label_41fa88:
    // 0x41fa88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fa8c: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FA8Cu;
    {
        const bool branch_taken_0x41fa8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x41fa8c) {
            ctx->pc = 0x41FA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FA8Cu;
            // 0x41fa90: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FAA0u;
            goto label_41faa0;
        }
    }
    ctx->pc = 0x41FA94u;
    // 0x41fa94: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FA94u;
    SET_GPR_U32(ctx, 31, 0x41FA9Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FA94u, 0x41FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA9Cu;
label_41fa9c:
    // 0x41fa9c: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x41fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_41faa0:
    // 0x41faa0: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FAA0u;
    {
        const bool branch_taken_0x41faa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x41faa0) {
            ctx->pc = 0x41FAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FAA0u;
            // 0x41faa4: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FAB4u;
            goto label_41fab4;
        }
    }
    ctx->pc = 0x41FAA8u;
    // 0x41faa8: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FAA8u;
    SET_GPR_U32(ctx, 31, 0x41FAB0u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FAA8u, 0x41FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FAB0u;
label_41fab0:
    // 0x41fab0: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x41fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_41fab4:
    // 0x41fab4: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FAB4u;
    {
        const bool branch_taken_0x41fab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x41fab4) {
            ctx->pc = 0x41FAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FAB4u;
            // 0x41fab8: 0x8e04fff4  lw          $a0, -0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FAC8u;
            goto label_41fac8;
        }
    }
    ctx->pc = 0x41FABCu;
    // 0x41fabc: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FABCu;
    SET_GPR_U32(ctx, 31, 0x41FAC4u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FABCu, 0x41FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FAC4u;
label_41fac4:
    // 0x41fac4: 0x8e04fff4  lw          $a0, -0xC($s0)
    ctx->pc = 0x41fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
label_41fac8:
    // 0x41fac8: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FAC8u;
    {
        const bool branch_taken_0x41fac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAC8u;
        // 0x41facc: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fac8) {
            ctx->pc = 0x41FAD8u;
            goto label_41fad8;
        }
    }
    ctx->pc = 0x41FAD0u;
    // 0x41fad0: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FAD0u;
    SET_GPR_U32(ctx, 31, 0x41FAD8u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FAD0u, 0x41FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FAD8u;
label_41fad8:
    // 0x41fad8: 0x661ffeb  bgez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x41FAD8u;
    {
        const bool branch_taken_0x41fad8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x41FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAD8u;
        // 0x41fadc: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fad8) {
            ctx->pc = 0x41FA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41fa88;
        }
    }
    ctx->pc = 0x41FAE0u;
label_41fae0:
    // 0x41fae0: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x41fae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x41fae4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x41FAE4u;
    {
        const bool branch_taken_0x41fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAE4u;
        // 0x41fae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fae4) {
            ctx->pc = 0x41FE60u;
            goto label_41fe60;
        }
    }
    ctx->pc = 0x41FAECu;
label_41faec:
    // 0x41faec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x41faecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41faf0: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x41faf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x41faf4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x41FAF4u;
    {
        const bool branch_taken_0x41faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAF4u;
        // 0x41faf8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41faf4) {
            ctx->pc = 0x41F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f9c0;
        }
    }
    ctx->pc = 0x41FAFCu;
    // 0x41fafc: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x41fafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_41fb00:
    // 0x41fb00: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x41fb04: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x41fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x41fb08: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x41FB08u;
    {
        const bool branch_taken_0x41fb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB08u;
        // 0x41fb0c: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb08) {
            ctx->pc = 0x41FBA8u;
            goto label_41fba8;
        }
    }
    ctx->pc = 0x41FB10u;
    // 0x41fb10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x41FB10u;
    {
        const bool branch_taken_0x41fb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB10u;
        // 0x41fb14: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb10) {
            ctx->pc = 0x41FB58u;
            goto label_41fb58;
        }
    }
    ctx->pc = 0x41FB18u;
    // 0x41fb18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41fb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41fb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb20: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x41fb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb24: 0xc1079ea  jal         func_41E7A8
    ctx->pc = 0x41FB24u;
    SET_GPR_U32(ctx, 31, 0x41FB2Cu);
    ctx->pc = 0x41FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FB24u;
    // 0x41fb28: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41FB24u, 0x41FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FB2Cu;
label_41fb2c:
    // 0x41fb2c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x41FB2Cu;
    {
        const bool branch_taken_0x41fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fb2c) {
            ctx->pc = 0x41FB98u;
            goto label_41fb98;
        }
    }
    ctx->pc = 0x41FB34u;
    // 0x41fb34: 0x1aa00018  blez        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x41FB34u;
    {
        const bool branch_taken_0x41fb34 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB34u;
        // 0x41fb38: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb34) {
            ctx->pc = 0x41FB98u;
            goto label_41fb98;
        }
    }
    ctx->pc = 0x41FB3Cu;
    // 0x41fb3c: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FB3Cu;
    {
        const bool branch_taken_0x41fb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x41fb3c) {
            ctx->pc = 0x41FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FB3Cu;
            // 0x41fb40: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FB50u;
            goto label_41fb50;
        }
    }
    ctx->pc = 0x41FB44u;
    // 0x41fb44: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FB44u;
    SET_GPR_U32(ctx, 31, 0x41FB4Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FB44u, 0x41FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FB4Cu;
label_41fb4c:
    // 0x41fb4c: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x41fb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_41fb50:
    // 0x41fb50: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x41FB50u;
    {
        const bool branch_taken_0x41fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB50u;
        // 0x41fb54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb50) {
            ctx->pc = 0x41FE60u;
            goto label_41fe60;
        }
    }
    ctx->pc = 0x41FB58u;
label_41fb58:
    // 0x41fb58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41fb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb60: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x41fb60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fb64: 0xc1079ea  jal         func_41E7A8
    ctx->pc = 0x41FB64u;
    SET_GPR_U32(ctx, 31, 0x41FB6Cu);
    ctx->pc = 0x41FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FB64u;
    // 0x41fb68: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41FB64u, 0x41FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FB6Cu;
label_41fb6c:
    // 0x41fb6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41FB6Cu;
    {
        const bool branch_taken_0x41fb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fb6c) {
            ctx->pc = 0x41FB98u;
            goto label_41fb98;
        }
    }
    ctx->pc = 0x41FB74u;
    // 0x41fb74: 0x1aa00008  blez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x41FB74u;
    {
        const bool branch_taken_0x41fb74 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB74u;
        // 0x41fb78: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb74) {
            ctx->pc = 0x41FB98u;
            goto label_41fb98;
        }
    }
    ctx->pc = 0x41FB7Cu;
    // 0x41fb7c: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FB7Cu;
    {
        const bool branch_taken_0x41fb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x41fb7c) {
            ctx->pc = 0x41FB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FB7Cu;
            // 0x41fb80: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FB90u;
            goto label_41fb90;
        }
    }
    ctx->pc = 0x41FB84u;
    // 0x41fb84: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FB84u;
    SET_GPR_U32(ctx, 31, 0x41FB8Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FB84u, 0x41FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FB8Cu;
label_41fb8c:
    // 0x41fb8c: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x41fb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_41fb90:
    // 0x41fb90: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x41FB90u;
    {
        const bool branch_taken_0x41fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FB90u;
        // 0x41fb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fb90) {
            ctx->pc = 0x41FE60u;
            goto label_41fe60;
        }
    }
    ctx->pc = 0x41FB98u;
label_41fb98:
    // 0x41fb98: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FB98u;
    SET_GPR_U32(ctx, 31, 0x41FBA0u);
    ctx->pc = 0x41FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FB98u;
    // 0x41fb9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FB98u, 0x41FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FBA0u;
label_41fba0:
    // 0x41fba0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x41FBA0u;
    {
        const bool branch_taken_0x41fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBA0u;
        // 0x41fba4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fba0) {
            ctx->pc = 0x41FC3Cu;
            goto label_41fc3c;
        }
    }
    ctx->pc = 0x41FBA8u;
label_41fba8:
    // 0x41fba8: 0x1aa00023  blez        $s5, . + 4 + (0x23 << 2)
    ctx->pc = 0x41FBA8u;
    {
        const bool branch_taken_0x41fba8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBA8u;
        // 0x41fbac: 0x151023  negu        $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fba8) {
            ctx->pc = 0x41FC38u;
            goto label_41fc38;
        }
    }
    ctx->pc = 0x41FBB0u;
    // 0x41fbb0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x41fbb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fbb4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41fbb8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x41FBB8u;
    {
        const bool branch_taken_0x41fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBB8u;
        // 0x41fbbc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fbb8) {
            ctx->pc = 0x41FC08u;
            goto label_41fc08;
        }
    }
    ctx->pc = 0x41FBC0u;
    // 0x41fbc0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41fbc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41fbc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41FBC4u;
    {
        const bool branch_taken_0x41fbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBC4u;
        // 0x41fbc8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fbc4) {
            ctx->pc = 0x41FBF0u;
            goto label_41fbf0;
        }
    }
    ctx->pc = 0x41FBCCu;
    // 0x41fbcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FBCCu;
    {
        const bool branch_taken_0x41fbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBCCu;
        // 0x41fbd0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fbcc) {
            ctx->pc = 0x41FBE0u;
            goto label_41fbe0;
        }
    }
    ctx->pc = 0x41FBD4u;
    // 0x41fbd4: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FBD4u;
    SET_GPR_U32(ctx, 31, 0x41FBDCu);
    ctx->pc = 0x41FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FBD4u;
    // 0x41fbd8: 0x26b3ffff  addiu       $s3, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FBD4u, 0x41FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FBDCu;
label_41fbdc:
    // 0x41fbdc: 0x37b00004  ori         $s0, $sp, 0x4
    ctx->pc = 0x41fbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_41fbe0:
    // 0x41fbe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fbe4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41fbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x41fbe8: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FBE8u;
    SET_GPR_U32(ctx, 31, 0x41FBF0u);
    ctx->pc = 0x41FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FBE8u;
    // 0x41fbec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FBE8u, 0x41FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FBF0u;
label_41fbf0:
    // 0x41fbf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fbf4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41fbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x41fbf8: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FBF8u;
    SET_GPR_U32(ctx, 31, 0x41FC00u);
    ctx->pc = 0x41FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FBF8u;
    // 0x41fbfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FBF8u, 0x41FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC00u;
label_41fc00:
    // 0x41fc00: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x41FC00u;
    {
        const bool branch_taken_0x41fc00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fc00) {
            ctx->pc = 0x41FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FC00u;
            // 0x41fc04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FC3Cu;
            goto label_41fc3c;
        }
    }
    ctx->pc = 0x41FC08u;
label_41fc08:
    // 0x41fc08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41fc0c:
    // 0x41fc0c: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FC0Cu;
    SET_GPR_U32(ctx, 31, 0x41FC14u);
    ctx->pc = 0x41FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC0Cu;
    // 0x41fc10: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FC0Cu, 0x41FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC14u;
label_41fc14:
    // 0x41fc14: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FC14u;
    SET_GPR_U32(ctx, 31, 0x41FC1Cu);
    ctx->pc = 0x41FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC14u;
    // 0x41fc18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FC14u, 0x41FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC1Cu;
label_41fc1c:
    // 0x41fc1c: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FC1Cu;
    SET_GPR_U32(ctx, 31, 0x41FC24u);
    ctx->pc = 0x41FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC1Cu;
    // 0x41fc20: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FC1Cu, 0x41FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC24u;
label_41fc24:
    // 0x41fc24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x41fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41fc28: 0xc106faa  jal         func_41BEA8
    ctx->pc = 0x41FC28u;
    SET_GPR_U32(ctx, 31, 0x41FC30u);
    ctx->pc = 0x41FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC28u;
    // 0x41fc2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41FC28u, 0x41FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC30u;
label_41fc30:
    // 0x41fc30: 0x5660fff6  bnel        $s3, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x41FC30u;
    {
        const bool branch_taken_0x41fc30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fc30) {
            ctx->pc = 0x41FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FC30u;
            // 0x41fc34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41fc0c;
        }
    }
    ctx->pc = 0x41FC38u;
label_41fc38:
    // 0x41fc38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41fc38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fc3c:
    // 0x41fc3c: 0x1aa00086  blez        $s5, . + 4 + (0x86 << 2)
    ctx->pc = 0x41FC3Cu;
    {
        const bool branch_taken_0x41fc3c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC3Cu;
        // 0x41fc40: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc3c) {
            ctx->pc = 0x41FE58u;
            goto label_41fe58;
        }
    }
    ctx->pc = 0x41FC44u;
    // 0x41fc44: 0x1aa0002a  blez        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x41FC44u;
    {
        const bool branch_taken_0x41fc44 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC44u;
        // 0x41fc48: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc44) {
            ctx->pc = 0x41FCF0u;
            goto label_41fcf0;
        }
    }
    ctx->pc = 0x41FC4Cu;
    // 0x41fc4c: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x41FC4Cu;
    {
        const bool branch_taken_0x41fc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC4Cu;
        // 0x41fc50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc4c) {
            ctx->pc = 0x41FD44u;
            goto label_41fd44;
        }
    }
    ctx->pc = 0x41FC54u;
    // 0x41fc54: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x41fc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x41fc58: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x41FC58u;
    {
        const bool branch_taken_0x41fc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC58u;
        // 0x41fc5c: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc58) {
            ctx->pc = 0x41FCF8u;
            goto label_41fcf8;
        }
    }
    ctx->pc = 0x41FC60u;
    // 0x41fc60: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41fc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41fc64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x41FC64u;
    {
        const bool branch_taken_0x41fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fc64) {
            ctx->pc = 0x41FCB4u;
            goto label_41fcb4;
        }
    }
    ctx->pc = 0x41FC6Cu;
    // 0x41fc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fc70: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FC70u;
    SET_GPR_U32(ctx, 31, 0x41FC78u);
    ctx->pc = 0x41FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC70u;
    // 0x41fc74: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FC70u, 0x41FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC78u;
label_41fc78:
    // 0x41fc78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41FC78u;
    {
        const bool branch_taken_0x41fc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC78u;
        // 0x41fc7c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc78) {
            ctx->pc = 0x41FC90u;
            goto label_41fc90;
        }
    }
    ctx->pc = 0x41FC80u;
    // 0x41fc80: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FC80u;
    SET_GPR_U32(ctx, 31, 0x41FC88u);
    ctx->pc = 0x41FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC80u;
    // 0x41fc84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FC80u, 0x41FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC88u;
label_41fc88:
    // 0x41fc88: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FC88u;
    SET_GPR_U32(ctx, 31, 0x41FC90u);
    ctx->pc = 0x41FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC88u;
    // 0x41fc8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FC88u, 0x41FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC90u;
label_41fc90:
    // 0x41fc90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x41fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fc94: 0x10940004  beq         $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FC94u;
    {
        const bool branch_taken_0x41fc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC94u;
        // 0x41fc98: 0x37b00004  ori         $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc94) {
            ctx->pc = 0x41FCA8u;
            goto label_41fca8;
        }
    }
    ctx->pc = 0x41FC9Cu;
    // 0x41fc9c: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FC9Cu;
    SET_GPR_U32(ctx, 31, 0x41FCA4u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FC9Cu, 0x41FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FCA4u;
label_41fca4:
    // 0x41fca4: 0x37b00004  ori         $s0, $sp, 0x4
    ctx->pc = 0x41fca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_41fca8:
    // 0x41fca8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x41fca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41fcac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fcb0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x41fcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_41fcb4:
    // 0x41fcb4: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FCB4u;
    SET_GPR_U32(ctx, 31, 0x41FCBCu);
    ctx->pc = 0x41FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FCB4u;
    // 0x41fcb8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FCB4u, 0x41FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FCBCu;
label_41fcbc:
    // 0x41fcbc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FCBCu;
    {
        const bool branch_taken_0x41fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fcbc) {
            ctx->pc = 0x41FCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FCBCu;
            // 0x41fcc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FCDCu;
            goto label_41fcdc;
        }
    }
    ctx->pc = 0x41FCC4u;
    // 0x41fcc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fcc8: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FCC8u;
    SET_GPR_U32(ctx, 31, 0x41FCD0u);
    ctx->pc = 0x41FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FCC8u;
    // 0x41fccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FCC8u, 0x41FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FCD0u;
label_41fcd0:
    // 0x41fcd0: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FCD0u;
    SET_GPR_U32(ctx, 31, 0x41FCD8u);
    ctx->pc = 0x41FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FCD0u;
    // 0x41fcd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FCD0u, 0x41FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FCD8u;
label_41fcd8:
    // 0x41fcd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41fcdc:
    // 0x41fcdc: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FCDCu;
    {
        const bool branch_taken_0x41fcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FCDCu;
        // 0x41fce0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fcdc) {
            ctx->pc = 0x41FCECu;
            goto label_41fcec;
        }
    }
    ctx->pc = 0x41FCE4u;
    // 0x41fce4: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FCE4u;
    SET_GPR_U32(ctx, 31, 0x41FCECu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FCE4u, 0x41FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FCECu;
label_41fcec:
    // 0x41fcec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41fcecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41fcf0:
    // 0x41fcf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fcf4: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x41fcf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_41fcf8:
    // 0x41fcf8: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FCF8u;
    SET_GPR_U32(ctx, 31, 0x41FD00u);
    ctx->pc = 0x41FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FCF8u;
    // 0x41fcfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FCF8u, 0x41FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD00u;
label_41fd00:
    // 0x41fd00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FD00u;
    {
        const bool branch_taken_0x41fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fd00) {
            ctx->pc = 0x41FD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FD00u;
            // 0x41fd04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FD20u;
            goto label_41fd20;
        }
    }
    ctx->pc = 0x41FD08u;
    // 0x41fd08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fd0c: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FD0Cu;
    SET_GPR_U32(ctx, 31, 0x41FD14u);
    ctx->pc = 0x41FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD0Cu;
    // 0x41fd10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FD0Cu, 0x41FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD14u;
label_41fd14:
    // 0x41fd14: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FD14u;
    SET_GPR_U32(ctx, 31, 0x41FD1Cu);
    ctx->pc = 0x41FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD14u;
    // 0x41fd18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FD14u, 0x41FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD1Cu;
label_41fd1c:
    // 0x41fd1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41fd20:
    // 0x41fd20: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FD20u;
    {
        const bool branch_taken_0x41fd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FD20u;
        // 0x41fd24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd20) {
            ctx->pc = 0x41FD30u;
            goto label_41fd30;
        }
    }
    ctx->pc = 0x41FD28u;
    // 0x41fd28: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FD28u;
    SET_GPR_U32(ctx, 31, 0x41FD30u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FD28u, 0x41FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD30u;
label_41fd30:
    // 0x41fd30: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x41fd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x41fd34: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x41FD34u;
    {
        const bool branch_taken_0x41fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FD34u;
        // 0x41fd38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd34) {
            ctx->pc = 0x41FE58u;
            goto label_41fe58;
        }
    }
    ctx->pc = 0x41FD3Cu;
    // 0x41fd3c: 0x0  nop
    ctx->pc = 0x41fd3cu;
    // NOP
label_41fd40:
    // 0x41fd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41fd44:
    // 0x41fd44: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x41fd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x41fd48: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FD48u;
    SET_GPR_U32(ctx, 31, 0x41FD50u);
    ctx->pc = 0x41FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD48u;
    // 0x41fd4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FD48u, 0x41FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD50u;
label_41fd50:
    // 0x41fd50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FD50u;
    {
        const bool branch_taken_0x41fd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fd50) {
            ctx->pc = 0x41FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FD50u;
            // 0x41fd54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FD70u;
            goto label_41fd70;
        }
    }
    ctx->pc = 0x41FD58u;
    // 0x41fd58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41fd5c: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FD5Cu;
    SET_GPR_U32(ctx, 31, 0x41FD64u);
    ctx->pc = 0x41FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD5Cu;
    // 0x41fd60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FD5Cu, 0x41FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD64u;
label_41fd64:
    // 0x41fd64: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FD64u;
    SET_GPR_U32(ctx, 31, 0x41FD6Cu);
    ctx->pc = 0x41FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD64u;
    // 0x41fd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FD64u, 0x41FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD6Cu;
label_41fd6c:
    // 0x41fd6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41fd70:
    // 0x41fd70: 0x10940004  beq         $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FD70u;
    {
        const bool branch_taken_0x41fd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FD70u;
        // 0x41fd74: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd70) {
            ctx->pc = 0x41FD84u;
            goto label_41fd84;
        }
    }
    ctx->pc = 0x41FD78u;
    // 0x41fd78: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FD78u;
    SET_GPR_U32(ctx, 31, 0x41FD80u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FD78u, 0x41FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD80u;
label_41fd80:
    // 0x41fd80: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x41fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41fd84:
    // 0x41fd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fd88: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x41fd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x41fd8c: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FD8Cu;
    SET_GPR_U32(ctx, 31, 0x41FD94u);
    ctx->pc = 0x41FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD8Cu;
    // 0x41fd90: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FD8Cu, 0x41FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD94u;
label_41fd94:
    // 0x41fd94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FD94u;
    {
        const bool branch_taken_0x41fd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fd94) {
            ctx->pc = 0x41FD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FD94u;
            // 0x41fd98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FDB4u;
            goto label_41fdb4;
        }
    }
    ctx->pc = 0x41FD9Cu;
    // 0x41fd9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x41fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41fda0: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FDA0u;
    SET_GPR_U32(ctx, 31, 0x41FDA8u);
    ctx->pc = 0x41FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDA0u;
    // 0x41fda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FDA0u, 0x41FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDA8u;
label_41fda8:
    // 0x41fda8: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FDA8u;
    SET_GPR_U32(ctx, 31, 0x41FDB0u);
    ctx->pc = 0x41FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDA8u;
    // 0x41fdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FDA8u, 0x41FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDB0u;
label_41fdb0:
    // 0x41fdb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x41fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41fdb4:
    // 0x41fdb4: 0x10940004  beq         $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FDB4u;
    {
        const bool branch_taken_0x41fdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FDB4u;
        // 0x41fdb8: 0x26650002  addiu       $a1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fdb4) {
            ctx->pc = 0x41FDC8u;
            goto label_41fdc8;
        }
    }
    ctx->pc = 0x41FDBCu;
    // 0x41fdbc: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FDBCu;
    SET_GPR_U32(ctx, 31, 0x41FDC4u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FDBCu, 0x41FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDC4u;
label_41fdc4:
    // 0x41fdc4: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x41fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_41fdc8:
    // 0x41fdc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fdcc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x41fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x41fdd0: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FDD0u;
    SET_GPR_U32(ctx, 31, 0x41FDD8u);
    ctx->pc = 0x41FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDD0u;
    // 0x41fdd4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FDD0u, 0x41FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDD8u;
label_41fdd8:
    // 0x41fdd8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FDD8u;
    {
        const bool branch_taken_0x41fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fdd8) {
            ctx->pc = 0x41FDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FDD8u;
            // 0x41fddc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FDF8u;
            goto label_41fdf8;
        }
    }
    ctx->pc = 0x41FDE0u;
    // 0x41fde0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x41fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41fde4: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FDE4u;
    SET_GPR_U32(ctx, 31, 0x41FDECu);
    ctx->pc = 0x41FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDE4u;
    // 0x41fde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FDE4u, 0x41FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDECu;
label_41fdec:
    // 0x41fdec: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FDECu;
    SET_GPR_U32(ctx, 31, 0x41FDF4u);
    ctx->pc = 0x41FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDECu;
    // 0x41fdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FDECu, 0x41FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDF4u;
label_41fdf4:
    // 0x41fdf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x41fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41fdf8:
    // 0x41fdf8: 0x10940004  beq         $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FDF8u;
    {
        const bool branch_taken_0x41fdf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FDF8u;
        // 0x41fdfc: 0x26650003  addiu       $a1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fdf8) {
            ctx->pc = 0x41FE0Cu;
            goto label_41fe0c;
        }
    }
    ctx->pc = 0x41FE00u;
    // 0x41fe00: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FE00u;
    SET_GPR_U32(ctx, 31, 0x41FE08u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FE00u, 0x41FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE08u;
label_41fe08:
    // 0x41fe08: 0x26650003  addiu       $a1, $s3, 0x3
    ctx->pc = 0x41fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_41fe0c:
    // 0x41fe0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fe10: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x41fe10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x41fe14: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x41FE14u;
    SET_GPR_U32(ctx, 31, 0x41FE1Cu);
    ctx->pc = 0x41FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE14u;
    // 0x41fe18: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x41FE14u, 0x41FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE1Cu;
label_41fe1c:
    // 0x41fe1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FE1Cu;
    {
        const bool branch_taken_0x41fe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fe1c) {
            ctx->pc = 0x41FE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FE1Cu;
            // 0x41fe20: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FE3Cu;
            goto label_41fe3c;
        }
    }
    ctx->pc = 0x41FE24u;
    // 0x41fe24: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x41fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41fe28: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x41FE28u;
    SET_GPR_U32(ctx, 31, 0x41FE30u);
    ctx->pc = 0x41FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE28u;
    // 0x41fe2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41FE28u, 0x41FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE30u;
label_41fe30:
    // 0x41fe30: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x41FE30u;
    SET_GPR_U32(ctx, 31, 0x41FE38u);
    ctx->pc = 0x41FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FE30u;
    // 0x41fe34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x41FE30u, 0x41FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE38u;
label_41fe38:
    // 0x41fe38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x41fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41fe3c:
    // 0x41fe3c: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FE3Cu;
    {
        const bool branch_taken_0x41fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x41FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE3Cu;
        // 0x41fe40: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe3c) {
            ctx->pc = 0x41FE4Cu;
            goto label_41fe4c;
        }
    }
    ctx->pc = 0x41FE44u;
    // 0x41fe44: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41FE44u;
    SET_GPR_U32(ctx, 31, 0x41FE4Cu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41FE44u, 0x41FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FE4Cu;
label_41fe4c:
    // 0x41fe4c: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x41fe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x41fe50: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x41FE50u;
    {
        const bool branch_taken_0x41fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE50u;
        // 0x41fe54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe50) {
            ctx->pc = 0x41FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41fd40;
        }
    }
    ctx->pc = 0x41FE58u;
label_41fe58:
    // 0x41fe58: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x41fe58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x41fe5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41fe5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41fe60:
    // 0x41fe60: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x41fe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x41fe64: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x41fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
label_41fe68:
    // 0x41fe68: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x41fe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x41fe6c: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x41fe6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x41fe70: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x41fe70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x41fe74: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x41fe74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x41fe78: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x41fe78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x41fe7c: 0x7bb50460  lq          $s5, 0x460($sp)
    ctx->pc = 0x41fe7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x41fe80: 0x7bb60450  lq          $s6, 0x450($sp)
    ctx->pc = 0x41fe80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x41fe84: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x41fe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x41fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x41FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE88u;
        // 0x41fe8c: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FE90u;
}
