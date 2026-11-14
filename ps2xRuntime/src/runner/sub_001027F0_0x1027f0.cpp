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

// Function: sub_001027F0
// Address: 0x1027f0 - 0x102a40
void sub_001027F0_0x1027f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001027F0_0x1027f0");
#endif

    switch (ctx->pc) {
        case 0x10280cu: goto label_10280c;
        case 0x10287cu: goto label_10287c;
        case 0x10289cu: goto label_10289c;
        case 0x1028fcu: goto label_1028fc;
        case 0x102924u: goto label_102924;
        case 0x102930u: goto label_102930;
        case 0x102940u: goto label_102940;
        case 0x102950u: goto label_102950;
        case 0x102968u: goto label_102968;
        case 0x10297cu: goto label_10297c;
        case 0x1029a4u: goto label_1029a4;
        case 0x1029bcu: goto label_1029bc;
        case 0x1029d0u: goto label_1029d0;
        case 0x1029ecu: goto label_1029ec;
        case 0x102a00u: goto label_102a00;
        case 0x102a18u: goto label_102a18;
        default: break;
    }

    ctx->pc = 0x1027f0u;

    // 0x1027f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1027f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1027f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1027f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1027f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1027f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1027fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1027fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102800: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102804: 0xc0941a4  jal         func_250690
    ctx->pc = 0x102804u;
    SET_GPR_U32(ctx, 31, 0x10280Cu);
    ctx->pc = 0x250690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250690u, 0x102804u, 0x10280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10280Cu;
label_10280c:
    // 0x10280c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10280cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x102810: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x102810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
    // 0x102814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10281c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102824: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x102824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x102828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10282c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102830: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102834: 0x3e00008  jr          $ra
    ctx->pc = 0x102834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10283Cu;
    // 0x10283c: 0x0  nop
    ctx->pc = 0x10283cu;
    // NOP
    // 0x102840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10284c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10284cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x102850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102854: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102854u;
    {
        const bool branch_taken_0x102854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102854) {
            ctx->pc = 0x10289Cu;
            goto label_10289c;
        }
    }
    ctx->pc = 0x10285Cu;
    // 0x10285c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10285cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x102860: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x102860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
    // 0x102864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102868: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10286c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102874: 0xc0941b8  jal         func_2506E0
    ctx->pc = 0x102874u;
    SET_GPR_U32(ctx, 31, 0x10287Cu);
    ctx->pc = 0x2506E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2506E0u, 0x102874u, 0x10287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10287Cu;
label_10287c:
    // 0x10287c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10287cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102880: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102888: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102888u;
    {
        const bool branch_taken_0x102888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102888) {
            ctx->pc = 0x10289Cu;
            goto label_10289c;
        }
    }
    ctx->pc = 0x102890u;
    // 0x102890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102894: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x102894u;
    SET_GPR_U32(ctx, 31, 0x10289Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x102894u, 0x10289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10289Cu;
label_10289c:
    // 0x10289c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1028a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1028a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1028a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1028a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1028a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1028A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1028A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1028B0u;
    // 0x1028b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1028b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1028b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1028b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1028b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1028b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1028bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1028bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1028c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1028c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1028c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1028c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1028c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1028c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1028cc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1028ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1028d0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1028d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1028d4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1028d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1028d8: 0x1003004f  beq         $zero, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1028D8u;
    {
        const bool branch_taken_0x1028d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1028d8) {
            ctx->pc = 0x102A18u;
            goto label_102a18;
        }
    }
    ctx->pc = 0x1028E0u;
    // 0x1028e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1028e4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1028e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1028e8: 0x10020047  beq         $zero, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1028E8u;
    {
        const bool branch_taken_0x1028e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1028e8) {
            ctx->pc = 0x102A08u;
            goto label_102a08;
        }
    }
    ctx->pc = 0x1028F0u;
    // 0x1028f0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1028f4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x1028F4u;
    SET_GPR_U32(ctx, 31, 0x1028FCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x1028F4u, 0x1028FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028FCu;
label_1028fc:
    // 0x1028fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1028fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102900: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102900u;
    {
        const bool branch_taken_0x102900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x102900) {
            ctx->pc = 0x10291Cu;
            goto label_10291c;
        }
    }
    ctx->pc = 0x102908u;
    // 0x102908: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10290c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10290Cu;
    {
        const bool branch_taken_0x10290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10290c) {
            ctx->pc = 0x10291Cu;
            goto label_10291c;
        }
    }
    ctx->pc = 0x102914u;
    // 0x102914: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x102914u;
    {
        const bool branch_taken_0x102914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102914) {
            ctx->pc = 0x1029ECu;
            goto label_1029ec;
        }
    }
    ctx->pc = 0x10291Cu;
label_10291c:
    // 0x10291c: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x10291Cu;
    SET_GPR_U32(ctx, 31, 0x102924u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x10291Cu, 0x102924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102924u;
label_102924:
    // 0x102924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102928: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x102928u;
    SET_GPR_U32(ctx, 31, 0x102930u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x102928u, 0x102930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102930u;
label_102930:
    // 0x102930: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x102930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102934: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x102934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102938: 0xc09138c  jal         func_244E30
    ctx->pc = 0x102938u;
    SET_GPR_U32(ctx, 31, 0x102940u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x102938u, 0x102940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102940u;
label_102940:
    // 0x102940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x102940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102948: 0xc044da4  jal         func_113690
    ctx->pc = 0x102948u;
    SET_GPR_U32(ctx, 31, 0x102950u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x102948u, 0x102950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102950u;
label_102950:
    // 0x102950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102954: 0x10110025  beq         $zero, $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x102954u;
    {
        const bool branch_taken_0x102954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x102954) {
            ctx->pc = 0x1029ECu;
            goto label_1029ec;
        }
    }
    ctx->pc = 0x10295Cu;
    // 0x10295c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102960: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x102960u;
    SET_GPR_U32(ctx, 31, 0x102968u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x102960u, 0x102968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102968u;
label_102968:
    // 0x102968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10296c: 0x2405045f  addiu       $a1, $zero, 0x45F
    ctx->pc = 0x10296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1119));
    // 0x102970: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x102970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102974: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x102974u;
    SET_GPR_U32(ctx, 31, 0x10297Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x102974u, 0x10297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10297Cu;
label_10297c:
    // 0x10297c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10297cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102980: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x102984: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x102984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102988: 0x10020018  beq         $zero, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x102988u;
    {
        const bool branch_taken_0x102988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x102988) {
            ctx->pc = 0x1029ECu;
            goto label_1029ec;
        }
    }
    ctx->pc = 0x102990u;
    // 0x102990: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x102994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102998: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x102998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x10299c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x10299Cu;
    SET_GPR_U32(ctx, 31, 0x1029A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x10299Cu, 0x1029A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029A4u;
label_1029a4:
    // 0x1029a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1029a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029a8: 0x10100010  beq         $zero, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1029A8u;
    {
        const bool branch_taken_0x1029a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1029a8) {
            ctx->pc = 0x1029ECu;
            goto label_1029ec;
        }
    }
    ctx->pc = 0x1029B0u;
    // 0x1029b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1029b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029b4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1029B4u;
    SET_GPR_U32(ctx, 31, 0x1029BCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1029B4u, 0x1029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1029bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1029c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1029c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1029c8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1029C8u;
    SET_GPR_U32(ctx, 31, 0x1029D0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1029C8u, 0x1029D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029D0u;
label_1029d0:
    // 0x1029d0: 0x131843  sra         $v1, $s3, 1
    ctx->pc = 0x1029d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x1029d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1029d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1029d8: 0x0  nop
    ctx->pc = 0x1029d8u;
    // NOP
    // 0x1029dc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1029dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1029e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1029e4: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x1029E4u;
    SET_GPR_U32(ctx, 31, 0x1029ECu);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x1029E4u, 0x1029ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029ECu;
label_1029ec:
    // 0x1029ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1029f0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1029f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1029f4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1029f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1029f8: 0xc041018  jal         func_104060
    ctx->pc = 0x1029F8u;
    SET_GPR_U32(ctx, 31, 0x102A00u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x1029F8u, 0x102A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A00u;
label_102a00:
    // 0x102a00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x102A00u;
    {
        const bool branch_taken_0x102a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102a00) {
            ctx->pc = 0x102A18u;
            goto label_102a18;
        }
    }
    ctx->pc = 0x102A08u;
label_102a08:
    // 0x102a08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x102a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102a0c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x102a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102a10: 0xc0941e8  jal         func_2507A0
    ctx->pc = 0x102A10u;
    SET_GPR_U32(ctx, 31, 0x102A18u);
    ctx->pc = 0x2507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2507A0u, 0x102A10u, 0x102A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A18u;
label_102a18:
    // 0x102a18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x102a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x102a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102a30: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x102a34: 0x3e00008  jr          $ra
    ctx->pc = 0x102A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A3Cu;
    // 0x102a3c: 0x0  nop
    ctx->pc = 0x102a3cu;
    // NOP
    ctx->pc = 0x102a40u;
}
