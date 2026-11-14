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

// Function: sub_002B15B0
// Address: 0x2b15b0 - 0x2b18d0
void sub_002B15B0_0x2b15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B15B0_0x2b15b0");
#endif

    switch (ctx->pc) {
        case 0x2b15ccu: goto label_2b15cc;
        case 0x2b167cu: goto label_2b167c;
        case 0x2b169cu: goto label_2b169c;
        case 0x2b16ccu: goto label_2b16cc;
        case 0x2b170cu: goto label_2b170c;
        case 0x2b1760u: goto label_2b1760;
        case 0x2b17acu: goto label_2b17ac;
        case 0x2b17e4u: goto label_2b17e4;
        case 0x2b17f8u: goto label_2b17f8;
        case 0x2b1818u: goto label_2b1818;
        case 0x2b1834u: goto label_2b1834;
        case 0x2b1854u: goto label_2b1854;
        case 0x2b1870u: goto label_2b1870;
        case 0x2b188cu: goto label_2b188c;
        case 0x2b18acu: goto label_2b18ac;
        default: break;
    }

    ctx->pc = 0x2b15b0u;

    // 0x2b15b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b15b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b15b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b15b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b15bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b15c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b15c4: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2B15C4u;
    SET_GPR_U32(ctx, 31, 0x2B15CCu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2B15C4u, 0x2B15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15CCu;
label_2b15cc:
    // 0x2b15cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b15d0: 0x24636560  addiu       $v1, $v1, 0x6560
    ctx->pc = 0x2b15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25952));
    // 0x2b15d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b15d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b15dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b15e0: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x2b15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b15e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b15e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b15ec: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b15ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b15f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b15f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b15f8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2b15f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2b15fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b15fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1604: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b1604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b1608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b160c: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x2b160cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b1610: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1618: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x2b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x2b161c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1620: 0xa0400068  sb          $zero, 0x68($v0)
    ctx->pc = 0x2b1620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b1624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1628: 0xa040004c  sb          $zero, 0x4C($v0)
    ctx->pc = 0x2b1628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b162c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1634: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1638: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1640u;
    // 0x2b1640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b1644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b164c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b164cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1654: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B1654u;
    {
        const bool branch_taken_0x2b1654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1654) {
            ctx->pc = 0x2B169Cu;
            goto label_2b169c;
        }
    }
    ctx->pc = 0x2B165Cu;
    // 0x2b165c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b165cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b1660: 0x24636560  addiu       $v1, $v1, 0x6560
    ctx->pc = 0x2b1660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25952));
    // 0x2b1664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b1668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b166c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1674: 0xc091188  jal         func_244620
    ctx->pc = 0x2B1674u;
    SET_GPR_U32(ctx, 31, 0x2B167Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2B1674u, 0x2B167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B167Cu;
label_2b167c:
    // 0x2b167c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b167cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1680: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b1684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b1684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b1688: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1688u;
    {
        const bool branch_taken_0x2b1688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b1688) {
            ctx->pc = 0x2B169Cu;
            goto label_2b169c;
        }
    }
    ctx->pc = 0x2B1690u;
    // 0x2b1690: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1694: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B1694u;
    SET_GPR_U32(ctx, 31, 0x2B169Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B1694u, 0x2B169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B169Cu;
label_2b169c:
    // 0x2b169c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b16a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b16a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b16a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b16a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b16a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B16A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B16A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B16B0u;
    // 0x2b16b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b16b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b16b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b16bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b16c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b16c4: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2B16C4u;
    SET_GPR_U32(ctx, 31, 0x2B16CCu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2B16C4u, 0x2B16CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16CCu;
label_2b16cc:
    // 0x2b16cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b16ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b16d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b16d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b16d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b16d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b16d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b16dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b16dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b16e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B16E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B16E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B16E8u;
    // 0x2b16e8: 0x0  nop
    ctx->pc = 0x2b16e8u;
    // NOP
    // 0x2b16ec: 0x0  nop
    ctx->pc = 0x2b16ecu;
    // NOP
    // 0x2b16f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b16f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b16f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b16f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b16fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b1700: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1704: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2B1704u;
    SET_GPR_U32(ctx, 31, 0x2B170Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2B1704u, 0x2B170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B170Cu;
label_2b170c:
    // 0x2b170c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b170cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b171c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b171cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b1720: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1728u;
    // 0x2b1728: 0x0  nop
    ctx->pc = 0x2b1728u;
    // NOP
    // 0x2b172c: 0x0  nop
    ctx->pc = 0x2b172cu;
    // NOP
    // 0x2b1730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b1734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b1738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b1738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b173c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b173cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b1740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b1740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b1744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b1748: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b174c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b174cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2b1750: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b1750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1754: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b1754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1758: 0xc0911dc  jal         func_244770
    ctx->pc = 0x2B1758u;
    SET_GPR_U32(ctx, 31, 0x2B1760u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x2B1758u, 0x2B1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1760u;
label_2b1760:
    // 0x2b1760: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2b1760u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1764: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1768: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b176c: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B176Cu;
    {
        const bool branch_taken_0x2b176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b176c) {
            ctx->pc = 0x2B1784u;
            goto label_2b1784;
        }
    }
    ctx->pc = 0x2B1774u;
    // 0x2b1774: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b1774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1778: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x2b1778u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b177c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B177Cu;
    {
        const bool branch_taken_0x2b177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b177c) {
            ctx->pc = 0x2B178Cu;
            goto label_2b178c;
        }
    }
    ctx->pc = 0x2B1784u;
label_2b1784:
    // 0x2b1784: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1788: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b1788u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b178c:
    // 0x2b178c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2b178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1790: 0x10100046  beq         $zero, $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2B1790u;
    {
        const bool branch_taken_0x2b1790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b1790) {
            ctx->pc = 0x2B18ACu;
            goto label_2b18ac;
        }
    }
    ctx->pc = 0x2B1798u;
    // 0x2b1798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b179c: 0x24050455  addiu       $a1, $zero, 0x455
    ctx->pc = 0x2b179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1109));
    // 0x2b17a0: 0x2786a48c  addiu       $a2, $gp, -0x5B74
    ctx->pc = 0x2b17a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943884));
    // 0x2b17a4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2B17A4u;
    SET_GPR_U32(ctx, 31, 0x2B17ACu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2B17A4u, 0x2B17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17ACu;
label_2b17ac:
    // 0x2b17ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b17acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2b17b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b17b4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2b17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b17b8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2b17b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2b17bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B17BCu;
    {
        const bool branch_taken_0x2b17bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b17bc) {
            ctx->pc = 0x2B17D0u;
            goto label_2b17d0;
        }
    }
    ctx->pc = 0x2B17C4u;
    // 0x2b17c4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b17c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17c8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2B17C8u;
    {
        const bool branch_taken_0x2b17c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b17c8) {
            ctx->pc = 0x2B18B0u;
            goto label_2b18b0;
        }
    }
    ctx->pc = 0x2B17D0u;
label_2b17d0:
    // 0x2b17d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b17d4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2b17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2b17d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17dc: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2B17DCu;
    SET_GPR_U32(ctx, 31, 0x2B17E4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2B17DCu, 0x2B17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17E4u;
label_2b17e4:
    // 0x2b17e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17e8: 0x24050456  addiu       $a1, $zero, 0x456
    ctx->pc = 0x2b17e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1110));
    // 0x2b17ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b17ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17f0: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B17F0u;
    SET_GPR_U32(ctx, 31, 0x2B17F8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B17F0u, 0x2B17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17F8u;
label_2b17f8:
    // 0x2b17f8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b17fc: 0xa0620034  sb          $v0, 0x34($v1)
    ctx->pc = 0x2b17fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b1800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b1804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b180c: 0x24050457  addiu       $a1, $zero, 0x457
    ctx->pc = 0x2b180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1111));
    // 0x2b1810: 0xc042090  jal         func_108240
    ctx->pc = 0x2B1810u;
    SET_GPR_U32(ctx, 31, 0x2B1818u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B1810u, 0x2B1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1818u;
label_2b1818:
    // 0x2b1818: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b181c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b1820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b1820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1828: 0x24050458  addiu       $a1, $zero, 0x458
    ctx->pc = 0x2b1828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1112));
    // 0x2b182c: 0xc042090  jal         func_108240
    ctx->pc = 0x2B182Cu;
    SET_GPR_U32(ctx, 31, 0x2B1834u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B182Cu, 0x2B1834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1834u;
label_2b1834:
    // 0x2b1834: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b1834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1838: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2b1838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2b183c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b1840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b1840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1848: 0x24050459  addiu       $a1, $zero, 0x459
    ctx->pc = 0x2b1848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1113));
    // 0x2b184c: 0xc042090  jal         func_108240
    ctx->pc = 0x2B184Cu;
    SET_GPR_U32(ctx, 31, 0x2B1854u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B184Cu, 0x2B1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1854u;
label_2b1854:
    // 0x2b1854: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1858: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b1858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b185c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1860: 0x2405045a  addiu       $a1, $zero, 0x45A
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1114));
    // 0x2b1864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1868: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B1868u;
    SET_GPR_U32(ctx, 31, 0x2B1870u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B1868u, 0x2B1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1870u;
label_2b1870:
    // 0x2b1870: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1874: 0xa0620044  sb          $v0, 0x44($v1)
    ctx->pc = 0x2b1874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b1878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b187c: 0x2405045b  addiu       $a1, $zero, 0x45B
    ctx->pc = 0x2b187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1115));
    // 0x2b1880: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b1880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1884: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2B1884u;
    SET_GPR_U32(ctx, 31, 0x2B188Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B1884u, 0x2B188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B188Cu;
label_2b188c:
    // 0x2b188c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1890: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2b1890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b1894: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b1894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1898: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b189c: 0x2464005c  addiu       $a0, $v1, 0x5C
    ctx->pc = 0x2b189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x2b18a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b18a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b18a4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B18A4u;
    SET_GPR_U32(ctx, 31, 0x2B18ACu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B18A4u, 0x2B18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18ACu;
label_2b18ac:
    // 0x2b18ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b18acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b18b0:
    // 0x2b18b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b18b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b18b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b18b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b18b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b18b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b18bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b18bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b18c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b18c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b18c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b18c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B18C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B18D0u;
}
