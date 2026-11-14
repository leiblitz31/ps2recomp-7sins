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

// Function: sub_00297820
// Address: 0x297820 - 0x297f40
void sub_00297820_0x297820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297820_0x297820");
#endif

    switch (ctx->pc) {
        case 0x29783cu: goto label_29783c;
        case 0x2978fcu: goto label_2978fc;
        case 0x29791cu: goto label_29791c;
        case 0x297950u: goto label_297950;
        case 0x297960u: goto label_297960;
        case 0x297970u: goto label_297970;
        case 0x297988u: goto label_297988;
        case 0x2979b8u: goto label_2979b8;
        case 0x297a00u: goto label_297a00;
        case 0x297a14u: goto label_297a14;
        case 0x297a2cu: goto label_297a2c;
        case 0x297a3cu: goto label_297a3c;
        case 0x297a4cu: goto label_297a4c;
        case 0x297a6cu: goto label_297a6c;
        case 0x297a7cu: goto label_297a7c;
        case 0x297ae4u: goto label_297ae4;
        case 0x297b28u: goto label_297b28;
        case 0x297b4cu: goto label_297b4c;
        case 0x297b70u: goto label_297b70;
        case 0x297b9cu: goto label_297b9c;
        case 0x297bacu: goto label_297bac;
        case 0x297bc8u: goto label_297bc8;
        case 0x297be8u: goto label_297be8;
        case 0x297c00u: goto label_297c00;
        case 0x297c18u: goto label_297c18;
        case 0x297c24u: goto label_297c24;
        case 0x297c38u: goto label_297c38;
        case 0x297c4cu: goto label_297c4c;
        case 0x297c60u: goto label_297c60;
        case 0x297c70u: goto label_297c70;
        case 0x297c80u: goto label_297c80;
        case 0x297c8cu: goto label_297c8c;
        case 0x297c9cu: goto label_297c9c;
        case 0x297cc8u: goto label_297cc8;
        case 0x297cecu: goto label_297cec;
        case 0x297d00u: goto label_297d00;
        case 0x297d24u: goto label_297d24;
        case 0x297d3cu: goto label_297d3c;
        case 0x297d54u: goto label_297d54;
        case 0x297d6cu: goto label_297d6c;
        case 0x297d80u: goto label_297d80;
        case 0x297d98u: goto label_297d98;
        case 0x297db8u: goto label_297db8;
        case 0x297dc4u: goto label_297dc4;
        case 0x297dd4u: goto label_297dd4;
        case 0x297de0u: goto label_297de0;
        case 0x297f04u: goto label_297f04;
        default: break;
    }

    ctx->pc = 0x297820u;

    // 0x297820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x297828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29782c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297830: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x297830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x297834: 0xc091174  jal         func_2445D0
    ctx->pc = 0x297834u;
    SET_GPR_U32(ctx, 31, 0x29783Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x297834u, 0x29783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29783Cu;
label_29783c:
    // 0x29783c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29783cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x297840: 0x246360b0  addiu       $v1, $v1, 0x60B0
    ctx->pc = 0x297840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x297844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29784c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297850: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x297850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x297854: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297858: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x297858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x29785c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297860: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x297860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x297864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297868: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x297868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x29786c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x29786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x297870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297874: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x297874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x297878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29787c: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x29787cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x297880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297884: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x297884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x297888: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29788c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x29788cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x297890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297894: 0xa04000b8  sb          $zero, 0xB8($v0)
    ctx->pc = 0x297894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x297898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x297898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29789c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978a0: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x2978a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2978a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2978a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978a8: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2978a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2978ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2978acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2978b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2978b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2978b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2978b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2978B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2978B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2978C0u;
    // 0x2978c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2978c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2978c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2978c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2978c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2978c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2978cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2978ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2978d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2978D4u;
    {
        const bool branch_taken_0x2978d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2978d4) {
            ctx->pc = 0x29791Cu;
            goto label_29791c;
        }
    }
    ctx->pc = 0x2978DCu;
    // 0x2978dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2978dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2978e0: 0x246360b0  addiu       $v1, $v1, 0x60B0
    ctx->pc = 0x2978e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x2978e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2978e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2978e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2978ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2978ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2978f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f4: 0xc091188  jal         func_244620
    ctx->pc = 0x2978F4u;
    SET_GPR_U32(ctx, 31, 0x2978FCu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2978F4u, 0x2978FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978FCu;
label_2978fc:
    // 0x2978fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297900: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x297900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x297904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x297904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x297908: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297908u;
    {
        const bool branch_taken_0x297908 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x297908) {
            ctx->pc = 0x29791Cu;
            goto label_29791c;
        }
    }
    ctx->pc = 0x297910u;
    // 0x297910: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x297910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297914: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x297914u;
    SET_GPR_U32(ctx, 31, 0x29791Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x297914u, 0x29791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29791Cu;
label_29791c:
    // 0x29791c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297924: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x297928: 0x3e00008  jr          $ra
    ctx->pc = 0x297928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297930u;
    // 0x297930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29793c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297940: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x297940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x297944: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x297944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297948: 0xc0911a4  jal         func_244690
    ctx->pc = 0x297948u;
    SET_GPR_U32(ctx, 31, 0x297950u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x297948u, 0x297950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297950u;
label_297950:
    // 0x297950: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x297950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297954: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x297954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x297958: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x297958u;
    SET_GPR_U32(ctx, 31, 0x297960u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x297958u, 0x297960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297960u;
label_297960:
    // 0x297960: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x297964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297968: 0xc0400e0  jal         func_100380
    ctx->pc = 0x297968u;
    SET_GPR_U32(ctx, 31, 0x297970u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x297968u, 0x297970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297970u;
label_297970:
    // 0x297970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297974: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297974u;
    {
        const bool branch_taken_0x297974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297974) {
            ctx->pc = 0x29798Cu;
            goto label_29798c;
        }
    }
    ctx->pc = 0x29797Cu;
    // 0x29797c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297980: 0xc1216ec  jal         func_485BB0
    ctx->pc = 0x297980u;
    SET_GPR_U32(ctx, 31, 0x297988u);
    ctx->pc = 0x485BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BB0u, 0x297980u, 0x297988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297988u;
label_297988:
    // 0x297988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29798c:
    // 0x29798c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297990: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x297990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    // 0x297994: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297998: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29799c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x29799cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x2979a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2979a4: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x2979a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2979a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2979a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2979b0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x2979B0u;
    SET_GPR_U32(ctx, 31, 0x2979B8u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x2979B0u, 0x2979B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979B8u;
label_2979b8:
    // 0x2979b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2979b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2979bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2979c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2979c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2979c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2979c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2979c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2979cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2979CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2979D4u;
    // 0x2979d4: 0x0  nop
    ctx->pc = 0x2979d4u;
    // NOP
    // 0x2979d8: 0x0  nop
    ctx->pc = 0x2979d8u;
    // NOP
    // 0x2979dc: 0x0  nop
    ctx->pc = 0x2979dcu;
    // NOP
    // 0x2979e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2979e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2979e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2979e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2979e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2979ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2979ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2979f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2979f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2979f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2979f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2979f8: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2979F8u;
    SET_GPR_U32(ctx, 31, 0x297A00u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2979F8u, 0x297A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A00u;
label_297a00:
    // 0x297a00: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x297a00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297a04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a08: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297a0c: 0xc121d18  jal         func_487460
    ctx->pc = 0x297A0Cu;
    SET_GPR_U32(ctx, 31, 0x297A14u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x297A0Cu, 0x297A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A14u;
label_297a14:
    // 0x297a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a18: 0x1010000c  beq         $zero, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x297A18u;
    {
        const bool branch_taken_0x297a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x297a18) {
            ctx->pc = 0x297A4Cu;
            goto label_297a4c;
        }
    }
    ctx->pc = 0x297A20u;
    // 0x297a20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297a24: 0xc1066de  jal         func_419B78
    ctx->pc = 0x297A24u;
    SET_GPR_U32(ctx, 31, 0x297A2Cu);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x297A24u, 0x297A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A2Cu;
label_297a2c:
    // 0x297a2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a30: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297a34: 0xc1217b4  jal         func_485ED0
    ctx->pc = 0x297A34u;
    SET_GPR_U32(ctx, 31, 0x297A3Cu);
    ctx->pc = 0x485ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485ED0u, 0x297A34u, 0x297A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A3Cu;
label_297a3c:
    // 0x297a3c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x297a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x297a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a44: 0xc08a614  jal         func_229850
    ctx->pc = 0x297A44u;
    SET_GPR_U32(ctx, 31, 0x297A4Cu);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x297A44u, 0x297A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A4Cu;
label_297a4c:
    // 0x297a4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a50: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x297a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x297A54u;
    {
        const bool branch_taken_0x297a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297a54) {
            ctx->pc = 0x297A84u;
            goto label_297a84;
        }
    }
    ctx->pc = 0x297A5Cu;
    // 0x297a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a60: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297a64: 0xc083b8c  jal         func_20EE30
    ctx->pc = 0x297A64u;
    SET_GPR_U32(ctx, 31, 0x297A6Cu);
    ctx->pc = 0x20EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE30u, 0x297A64u, 0x297A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A6Cu;
label_297a6c:
    // 0x297a6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a70: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297a74: 0xc119c5c  jal         func_467170
    ctx->pc = 0x297A74u;
    SET_GPR_U32(ctx, 31, 0x297A7Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x297A74u, 0x297A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A7Cu;
label_297a7c:
    // 0x297a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x297a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a80: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x297a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_297a84:
    // 0x297a84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x297a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297a94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x297a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x297a98: 0x3e00008  jr          $ra
    ctx->pc = 0x297A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297AA0u;
    // 0x297aa0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x297aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x297aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x297aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x297aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x297aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x297aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x297ab0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x297ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x297ab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x297ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x297ab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x297abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297acc: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x297accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x297ad0: 0xafa50200  sw          $a1, 0x200($sp)
    ctx->pc = 0x297ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 5));
    // 0x297ad4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x297ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297ad8: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x297ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x297adc: 0xc0911dc  jal         func_244770
    ctx->pc = 0x297ADCu;
    SET_GPR_U32(ctx, 31, 0x297AE4u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x297ADCu, 0x297AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AE4u;
label_297ae4:
    // 0x297ae4: 0xa3a201ef  sb          $v0, 0x1EF($sp)
    ctx->pc = 0x297ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 2));
    // 0x297ae8: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x297aec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x297aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x297af0: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297AF0u;
    {
        const bool branch_taken_0x297af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x297af0) {
            ctx->pc = 0x297B08u;
            goto label_297b08;
        }
    }
    ctx->pc = 0x297AF8u;
    // 0x297af8: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x297af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x297afc: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x297afcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x297b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297B00u;
    {
        const bool branch_taken_0x297b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b00) {
            ctx->pc = 0x297B10u;
            goto label_297b10;
        }
    }
    ctx->pc = 0x297B08u;
label_297b08:
    // 0x297b08: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x297b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x297b0c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x297b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297b10:
    // 0x297b10: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x297b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b14: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297b18: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x297b1c: 0x2785a2fc  addiu       $a1, $gp, -0x5D04
    ctx->pc = 0x297b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943484));
    // 0x297b20: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x297B20u;
    SET_GPR_U32(ctx, 31, 0x297B28u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x297B20u, 0x297B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B28u;
label_297b28:
    // 0x297b28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297b2c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297b30: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x297b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x297b34: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297b38: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x297b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x297b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b40: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x297b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x297b44: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x297B44u;
    SET_GPR_U32(ctx, 31, 0x297B4Cu);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x297B44u, 0x297B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B4Cu;
label_297b4c:
    // 0x297b4c: 0x10120087  beq         $zero, $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x297B4Cu;
    {
        const bool branch_taken_0x297b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x297b4c) {
            ctx->pc = 0x297D6Cu;
            goto label_297d6c;
        }
    }
    ctx->pc = 0x297B54u;
    // 0x297b54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x297b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b5c: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x297b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x297b60: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x297b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x297b64: 0x24c6d5f8  addiu       $a2, $a2, -0x2A08
    ctx->pc = 0x297b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956536));
    // 0x297b68: 0xc041a50  jal         func_106940
    ctx->pc = 0x297B68u;
    SET_GPR_U32(ctx, 31, 0x297B70u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x297B68u, 0x297B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B70u;
label_297b70:
    // 0x297b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b74: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x297b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297b78: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x297b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x297b7c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x297b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x297b80: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x297B80u;
    {
        const bool branch_taken_0x297b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b80) {
            ctx->pc = 0x297D0Cu;
            goto label_297d0c;
        }
    }
    ctx->pc = 0x297B88u;
    // 0x297b88: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297b8c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x297b90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x297b94: 0xc085538  jal         func_2154E0
    ctx->pc = 0x297B94u;
    SET_GPR_U32(ctx, 31, 0x297B9Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x297B94u, 0x297B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B9Cu;
label_297b9c:
    // 0x297b9c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x297b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x297ba0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x297ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x297ba4: 0xc091018  jal         func_244060
    ctx->pc = 0x297BA4u;
    SET_GPR_U32(ctx, 31, 0x297BACu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x297BA4u, 0x297BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BACu;
label_297bac:
    // 0x297bac: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x297bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x297bb0: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x297bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bb8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297bbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297bc0: 0xc08a320  jal         func_228C80
    ctx->pc = 0x297BC0u;
    SET_GPR_U32(ctx, 31, 0x297BC8u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x297BC0u, 0x297BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BC8u;
label_297bc8:
    // 0x297bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bcc: 0x10110015  beq         $zero, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x297BCCu;
    {
        const bool branch_taken_0x297bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x297bcc) {
            ctx->pc = 0x297C24u;
            goto label_297c24;
        }
    }
    ctx->pc = 0x297BD4u;
    // 0x297bd4: 0x8e3e0004  lw          $fp, 0x4($s1)
    ctx->pc = 0x297bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x297bd8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x297bdc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x297bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297be0: 0xc10671c  jal         func_419C70
    ctx->pc = 0x297BE0u;
    SET_GPR_U32(ctx, 31, 0x297BE8u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x297BE0u, 0x297BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BE8u;
label_297be8:
    // 0x297be8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297bec: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x297bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bf8: 0xc12174c  jal         func_485D30
    ctx->pc = 0x297BF8u;
    SET_GPR_U32(ctx, 31, 0x297C00u);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x297BF8u, 0x297C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C00u;
label_297c00:
    // 0x297c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c04: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x297c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x297c08: 0x24a576b0  addiu       $a1, $a1, 0x76B0
    ctx->pc = 0x297c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30384));
    // 0x297c0c: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x297c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297c10: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x297C10u;
    SET_GPR_U32(ctx, 31, 0x297C18u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x297C10u, 0x297C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C18u;
label_297c18:
    // 0x297c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c1c: 0xc0a6fdc  jal         func_29BF70
    ctx->pc = 0x297C1Cu;
    SET_GPR_U32(ctx, 31, 0x297C24u);
    ctx->pc = 0x29BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BF70u, 0x297C1Cu, 0x297C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C24u;
label_297c24:
    // 0x297c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c28: 0x24050460  addiu       $a1, $zero, 0x460
    ctx->pc = 0x297c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
    // 0x297c2c: 0x2786a2fc  addiu       $a2, $gp, -0x5D04
    ctx->pc = 0x297c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943484));
    // 0x297c30: 0xc041a50  jal         func_106940
    ctx->pc = 0x297C30u;
    SET_GPR_U32(ctx, 31, 0x297C38u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x297C30u, 0x297C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C38u;
label_297c38:
    // 0x297c38: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x297c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297c3c: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x297c40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c44: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x297C44u;
    SET_GPR_U32(ctx, 31, 0x297C4Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x297C44u, 0x297C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C4Cu;
label_297c4c:
    // 0x297c4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x297c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297c50: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x297c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x297c54: 0x24a5d610  addiu       $a1, $a1, -0x29F0
    ctx->pc = 0x297c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956560));
    // 0x297c58: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x297C58u;
    SET_GPR_U32(ctx, 31, 0x297C60u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x297C58u, 0x297C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C60u;
label_297c60:
    // 0x297c60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x297c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c68: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x297C68u;
    SET_GPR_U32(ctx, 31, 0x297C70u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x297C68u, 0x297C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C70u;
label_297c70:
    // 0x297c70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297c74: 0x2785a300  addiu       $a1, $gp, -0x5D00
    ctx->pc = 0x297c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943488));
    // 0x297c78: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x297C78u;
    SET_GPR_U32(ctx, 31, 0x297C80u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x297C78u, 0x297C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C80u;
label_297c80:
    // 0x297c80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x297c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297c84: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x297C84u;
    SET_GPR_U32(ctx, 31, 0x297C8Cu);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x297C84u, 0x297C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C8Cu;
label_297c8c:
    // 0x297c8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x297C8Cu;
    {
        const bool branch_taken_0x297c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c8c) {
            ctx->pc = 0x297D0Cu;
            goto label_297d0c;
        }
    }
    ctx->pc = 0x297C94u;
    // 0x297c94: 0xc122430  jal         func_4890C0
    ctx->pc = 0x297C94u;
    SET_GPR_U32(ctx, 31, 0x297C9Cu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x297C94u, 0x297C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C9Cu;
label_297c9c:
    // 0x297c9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297c9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x297ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x297cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x297cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297cb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x297cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x297cbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cc0: 0xc120c08  jal         func_483020
    ctx->pc = 0x297CC0u;
    SET_GPR_U32(ctx, 31, 0x297CC8u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x297CC0u, 0x297CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CC8u;
label_297cc8:
    // 0x297cc8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x297CC8u;
    {
        const bool branch_taken_0x297cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297cc8) {
            ctx->pc = 0x297D0Cu;
            goto label_297d0c;
        }
    }
    ctx->pc = 0x297CD0u;
    // 0x297cd0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297cd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x297cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297cd8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ce4: 0xc1217cc  jal         func_485F30
    ctx->pc = 0x297CE4u;
    SET_GPR_U32(ctx, 31, 0x297CECu);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x297CE4u, 0x297CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CECu;
label_297cec:
    // 0x297cec: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297cf0: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x297cf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297cf8: 0xc121904  jal         func_486410
    ctx->pc = 0x297CF8u;
    SET_GPR_U32(ctx, 31, 0x297D00u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x297CF8u, 0x297D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D00u;
label_297d00:
    // 0x297d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297d04: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297d08: 0xa04300b8  sb          $v1, 0xB8($v0)
    ctx->pc = 0x297d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 3));
label_297d0c:
    // 0x297d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d10: 0x24050574  addiu       $a1, $zero, 0x574
    ctx->pc = 0x297d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    // 0x297d14: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x297d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x297d18: 0x24c6d628  addiu       $a2, $a2, -0x29D8
    ctx->pc = 0x297d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956584));
    // 0x297d1c: 0xc041a50  jal         func_106940
    ctx->pc = 0x297D1Cu;
    SET_GPR_U32(ctx, 31, 0x297D24u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x297D1Cu, 0x297D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D24u;
label_297d24:
    // 0x297d24: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x297d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297d28: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x297d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x297d2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d30: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x297d34: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x297D34u;
    SET_GPR_U32(ctx, 31, 0x297D3Cu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x297D34u, 0x297D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D3Cu;
label_297d3c:
    // 0x297d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d40: 0x24050575  addiu       $a1, $zero, 0x575
    ctx->pc = 0x297d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1397));
    // 0x297d44: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x297d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x297d48: 0x24c6d638  addiu       $a2, $a2, -0x29C8
    ctx->pc = 0x297d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956600));
    // 0x297d4c: 0xc041a50  jal         func_106940
    ctx->pc = 0x297D4Cu;
    SET_GPR_U32(ctx, 31, 0x297D54u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x297D4Cu, 0x297D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D54u;
label_297d54:
    // 0x297d54: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x297d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297d58: 0x24640098  addiu       $a0, $v1, 0x98
    ctx->pc = 0x297d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x297d5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d60: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x297d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x297d64: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x297D64u;
    SET_GPR_U32(ctx, 31, 0x297D6Cu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x297D64u, 0x297D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D6Cu;
label_297d6c:
    // 0x297d6c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297d70: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x297d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297d78: 0xc085538  jal         func_2154E0
    ctx->pc = 0x297D78u;
    SET_GPR_U32(ctx, 31, 0x297D80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x297D78u, 0x297D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D80u;
label_297d80:
    // 0x297d80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x297d80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d84: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x297d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x297d88: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x297d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x297d8c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x297d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x297d90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x297D90u;
    SET_GPR_U32(ctx, 31, 0x297D98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x297D90u, 0x297D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D98u;
label_297d98:
    // 0x297d98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x297d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d9c: 0x10160059  beq         $zero, $s6, . + 4 + (0x59 << 2)
    ctx->pc = 0x297D9Cu;
    {
        const bool branch_taken_0x297d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x297d9c) {
            ctx->pc = 0x297F04u;
            goto label_297f04;
        }
    }
    ctx->pc = 0x297DA4u;
    // 0x297da4: 0x10130057  beq         $zero, $s3, . + 4 + (0x57 << 2)
    ctx->pc = 0x297DA4u;
    {
        const bool branch_taken_0x297da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x297da4) {
            ctx->pc = 0x297F04u;
            goto label_297f04;
        }
    }
    ctx->pc = 0x297DACu;
    // 0x297dac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297db0: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x297DB0u;
    SET_GPR_U32(ctx, 31, 0x297DB8u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x297DB0u, 0x297DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DB8u;
label_297db8:
    // 0x297db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dbc: 0xc042214  jal         func_108850
    ctx->pc = 0x297DBCu;
    SET_GPR_U32(ctx, 31, 0x297DC4u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x297DBCu, 0x297DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DC4u;
label_297dc4:
    // 0x297dc4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x297dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x297dc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dcc: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x297DCCu;
    SET_GPR_U32(ctx, 31, 0x297DD4u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x297DCCu, 0x297DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DD4u;
label_297dd4:
    // 0x297dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dd8: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x297DD8u;
    SET_GPR_U32(ctx, 31, 0x297DE0u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x297DD8u, 0x297DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DE0u;
label_297de0:
    // 0x297de0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x297de0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297de4: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x297de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297de8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x297de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x297dec: 0x2484d5d8  addiu       $a0, $a0, -0x2A28
    ctx->pc = 0x297decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956504));
    // 0x297df0: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x297df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x297df4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x297df4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED5D8u));
    // 0x297df8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x297df8u;
    { uint32_t bits = FAST_READ32(0x4ED5E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297dfc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x297dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x297e00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x297e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x297e04: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x297E04u;
    {
        const bool branch_taken_0x297e04 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x297e04) {
            ctx->pc = 0x297E20u;
            goto label_297e20;
        }
    }
    ctx->pc = 0x297E0Cu;
    // 0x297e0c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x297e0cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e10: 0x0  nop
    ctx->pc = 0x297e10u;
    // NOP
    // 0x297e14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297E18u;
    {
        const bool branch_taken_0x297e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e18) {
            ctx->pc = 0x297E3Cu;
            goto label_297e3c;
        }
    }
    ctx->pc = 0x297E20u;
label_297e20:
    // 0x297e20: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x297e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x297e24: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x297e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x297e28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e30: 0x0  nop
    ctx->pc = 0x297e30u;
    // NOP
    // 0x297e34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297e38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x297e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_297e3c:
    // 0x297e3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x297e3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x297e40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x297e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x297e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e48: 0x0  nop
    ctx->pc = 0x297e48u;
    // NOP
    // 0x297e4c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x297e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297e50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x297e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e58: 0x0  nop
    ctx->pc = 0x297e58u;
    // NOP
    // 0x297e5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x297e5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x297e60: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x297e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x297e64: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x297e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x297e68: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x297e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x297e6c: 0x2484d5e8  addiu       $a0, $a0, -0x2A18
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956520));
    // 0x297e70: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x297e74: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x297e74u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED5E8u));
    // 0x297e78: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x297e78u;
    { uint32_t bits = FAST_READ32(0x4ED5F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e7c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x297e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x297e80: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x297e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x297e84: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x297e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297e8c: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x297E8Cu;
    {
        const bool branch_taken_0x297e8c = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x297e8c) {
            ctx->pc = 0x297EA8u;
            goto label_297ea8;
        }
    }
    ctx->pc = 0x297E94u;
    // 0x297e94: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x297e94u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e98: 0x0  nop
    ctx->pc = 0x297e98u;
    // NOP
    // 0x297e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297ea0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297EA0u;
    {
        const bool branch_taken_0x297ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297ea0) {
            ctx->pc = 0x297EC4u;
            goto label_297ec4;
        }
    }
    ctx->pc = 0x297EA8u;
label_297ea8:
    // 0x297ea8: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x297eac: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x297eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x297eb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297eb8: 0x0  nop
    ctx->pc = 0x297eb8u;
    // NOP
    // 0x297ebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297ec0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x297ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_297ec4:
    // 0x297ec4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x297ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297ec8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x297ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297ed0: 0x0  nop
    ctx->pc = 0x297ed0u;
    // NOP
    // 0x297ed4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x297ed4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x297ed8: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x297ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x297edc: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x297edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x297ee0: 0x27a201e4  addiu       $v0, $sp, 0x1E4
    ctx->pc = 0x297ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x297ee4: 0xc780a2f8  lwc1        $f0, -0x5D08($gp)
    ctx->pc = 0x297ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ee8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297eec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x297eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ef0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x297ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x297ef4: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x297ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x297ef8: 0x27a701e4  addiu       $a3, $sp, 0x1E4
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x297efc: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x297EFCu;
    SET_GPR_U32(ctx, 31, 0x297F04u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x297EFCu, 0x297F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F04u;
label_297f04:
    // 0x297f04: 0x93a201ef  lbu         $v0, 0x1EF($sp)
    ctx->pc = 0x297f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 495)));
    // 0x297f08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297f0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x297f0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297f10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x297f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297f14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x297f14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297f18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x297f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297f1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x297f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x297f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297f24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297f30: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x297f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x297f34: 0x3e00008  jr          $ra
    ctx->pc = 0x297F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F3Cu;
    // 0x297f3c: 0x0  nop
    ctx->pc = 0x297f3cu;
    // NOP
    ctx->pc = 0x297f40u;
}
