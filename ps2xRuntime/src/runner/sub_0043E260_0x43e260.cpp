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

// Function: sub_0043E260
// Address: 0x43e260 - 0x43e550
void sub_0043E260_0x43e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E260_0x43e260");
#endif

    switch (ctx->pc) {
        case 0x43e2bcu: goto label_43e2bc;
        case 0x43e4e8u: goto label_43e4e8;
        default: break;
    }

    ctx->pc = 0x43e260u;

    // 0x43e260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x43e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x43e264: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x43e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x43e268: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x43e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x43e26c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x43e26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x43e270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43e274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43e274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e278: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x43e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x43e27c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x43e27cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e280: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x43e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x43e284: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x43e284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e288: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x43e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x43e28c: 0x241503f0  addiu       $s5, $zero, 0x3F0
    ctx->pc = 0x43e28cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x43e290: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E290u;
    {
        const bool branch_taken_0x43e290 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E290u;
        // 0x43e294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e290) {
            ctx->pc = 0x43E2A0u;
            goto label_43e2a0;
        }
    }
    ctx->pc = 0x43E298u;
    // 0x43e298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43e298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e29c: 0x241503f6  addiu       $s5, $zero, 0x3F6
    ctx->pc = 0x43e29cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
label_43e2a0:
    // 0x43e2a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x43e2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x43e2a4: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x43e2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x43e2a8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x43e2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x43e2ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43e2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e2b0: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x43e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x43e2b4: 0xc10a322  jal         func_428C88
    ctx->pc = 0x43E2B4u;
    SET_GPR_U32(ctx, 31, 0x43E2BCu);
    ctx->pc = 0x43E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E2B4u;
    // 0x43e2b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x43E2B4u, 0x43E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E2BCu;
label_43e2bc:
    // 0x43e2bc: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x43e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43e2c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x43e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x43e2c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e2c8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x43e2c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x43e2cc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x43e2ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43e2d0: 0x10283e  dsrl32      $a1, $s0, 0
    ctx->pc = 0x43e2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x43e2d4: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x43e2d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x43e2d8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e2dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e2e0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e2e4: 0x2463d700  addiu       $v1, $v1, -0x2900
    ctx->pc = 0x43e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956800));
    // 0x43e2e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e2e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD700u));
    // 0x43e2ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e2f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e2f4: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x43e2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x43e2f8: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x43e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x43e2fc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x43e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x43e300: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x43e300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x43e304: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x43e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x43e308: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x43e308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x43e30c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x43e30cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x43e310: 0x2238025  or          $s0, $s1, $v1
    ctx->pc = 0x43e310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x43e314: 0x72042b89  pcpyld      $a1, $s0, $a0
    ctx->pc = 0x43e314u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x43e318: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e318u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e31c: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x43E31Cu;
    {
        const bool branch_taken_0x43e31c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E31Cu;
        // 0x43e320: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e31c) {
            ctx->pc = 0x43E3E8u;
            goto label_43e3e8;
        }
    }
    ctx->pc = 0x43E324u;
    // 0x43e324: 0x9e440008  lwu         $a0, 0x8($s2)
    ctx->pc = 0x43e324u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43e328: 0x9e420004  lwu         $v0, 0x4($s2)
    ctx->pc = 0x43e328u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x43e32c: 0x9e450000  lwu         $a1, 0x0($s2)
    ctx->pc = 0x43e32cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x43e330: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43e330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43e334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e338: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x43e338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43e33c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43e33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e340: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x43e340u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x43e344: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e344u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e348: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e34c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x43e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x43e350: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43e350u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43e354: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43e354u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43e358: 0x9e450010  lwu         $a1, 0x10($s2)
    ctx->pc = 0x43e358u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43e35c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43e360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e364: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x43e364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43e368: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43e368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e36c: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x43e36cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x43e370: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e370u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e374: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e378: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x43e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x43e37c: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43e37cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43e380: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43e380u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43e384: 0x9e450020  lwu         $a1, 0x20($s2)
    ctx->pc = 0x43e384u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x43e388: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43e388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43e38c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e390: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x43e390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43e394: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43e394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e398: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x43e398u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x43e39c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e3a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e3a4: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x43e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x43e3a8: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43e3a8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43e3ac: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43e3acu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43e3b0: 0x9e450030  lwu         $a1, 0x30($s2)
    ctx->pc = 0x43e3b0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x43e3b4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43e3b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e3bc: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x43e3bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43e3c0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43e3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e3c4: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x43e3c4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x43e3c8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x43e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x43e3cc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e3d0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x43e3d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x43e3d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e3d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e3dc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e3e0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e3e4: 0x0  nop
    ctx->pc = 0x43e3e4u;
    // NOP
label_43e3e8:
    // 0x43e3e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e3ec: 0x2463d6b0  addiu       $v1, $v1, -0x2950
    ctx->pc = 0x43e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956720));
    // 0x43e3f0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e3f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6B0u));
    // 0x43e3f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e3f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e3fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e400: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x43e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x43e404: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e404u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6C0u));
    // 0x43e408: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e408u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e40c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e410: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e414: 0x2463d6d0  addiu       $v1, $v1, -0x2930
    ctx->pc = 0x43e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956752));
    // 0x43e418: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e418u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6D0u));
    // 0x43e41c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e420: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e424: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e428: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x43e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
    // 0x43e42c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e42cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6E0u));
    // 0x43e430: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e430u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e434: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e438: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e43c: 0x2463d6f0  addiu       $v1, $v1, -0x2910
    ctx->pc = 0x43e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956784));
    // 0x43e440: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e440u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6F0u));
    // 0x43e444: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43e444u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x43e448: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x43e448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x43e44c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43e450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43e450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43e454: 0x12620032  beq         $s3, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x43E454u;
    {
        const bool branch_taken_0x43e454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x43E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E454u;
        // 0x43e458: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e454) {
            ctx->pc = 0x43E520u;
            goto label_43e520;
        }
    }
    ctx->pc = 0x43E45Cu;
    // 0x43e45c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x43e45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x43e460: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x43e460u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x43e464: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x43e464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x43e468: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x43e468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x43e46c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x43e46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e470: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x43E470u;
    {
        const bool branch_taken_0x43e470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E470u;
        // 0x43e474: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e470) {
            ctx->pc = 0x43E4E0u;
            goto label_43e4e0;
        }
    }
    ctx->pc = 0x43E478u;
    // 0x43e478: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x43e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x43e47c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x43E47Cu;
    {
        const bool branch_taken_0x43e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E47Cu;
        // 0x43e480: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e47c) {
            ctx->pc = 0x43E4C0u;
            goto label_43e4c0;
        }
    }
    ctx->pc = 0x43E484u;
    // 0x43e484: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43E484u;
    {
        const bool branch_taken_0x43e484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E484u;
        // 0x43e488: 0x24c20010  addiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e484) {
            ctx->pc = 0x43E4A8u;
            goto label_43e4a8;
        }
    }
    ctx->pc = 0x43E48Cu;
    // 0x43e48c: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x43e48cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x43e490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e494: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x43e494u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x43e498: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43e498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e49c: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x43e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x43e4a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x43e4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x43e4a4: 0x0  nop
    ctx->pc = 0x43e4a4u;
    // NOP
label_43e4a8:
    // 0x43e4a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43e4ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e4b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e4b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e4b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43e4bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x43e4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_43e4c0:
    // 0x43e4c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43e4c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43e4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e4c8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e4cc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e4d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x43e4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x43e4d4: 0x12670012  beq         $s3, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x43E4D4u;
    {
        const bool branch_taken_0x43e4d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        ctx->pc = 0x43E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E4D4u;
        // 0x43e4d8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e4d4) {
            ctx->pc = 0x43E520u;
            goto label_43e520;
        }
    }
    ctx->pc = 0x43E4DCu;
    // 0x43e4dc: 0x0  nop
    ctx->pc = 0x43e4dcu;
    // NOP
label_43e4e0:
    // 0x43e4e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x43e4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e4e4: 0x0  nop
    ctx->pc = 0x43e4e4u;
    // NOP
label_43e4e8:
    // 0x43e4e8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43e4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43e4ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e4f0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x43e4f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x43e4f4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x43e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x43e4f8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43e4f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x43e4fc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x43e500: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x43e500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x43e504: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x43e504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x43e508: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x43e508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x43e50c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x43e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x43e510: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x43e510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x43e514: 0x1667fff4  bne         $s3, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x43E514u;
    {
        const bool branch_taken_0x43e514 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        ctx->pc = 0x43E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E514u;
        // 0x43e518: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e514) {
            ctx->pc = 0x43E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e4e8;
        }
    }
    ctx->pc = 0x43E51Cu;
    // 0x43e51c: 0x0  nop
    ctx->pc = 0x43e51cu;
    // NOP
label_43e520:
    // 0x43e520: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x43e520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x43e524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43e528: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x43e528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43e52c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x43e52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43e530: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x43e530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43e534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43e534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e538: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x43e538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e53c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x43e53cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e544: 0x3e00008  jr          $ra
    ctx->pc = 0x43E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E544u;
        // 0x43e548: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E54Cu;
    // 0x43e54c: 0x0  nop
    ctx->pc = 0x43e54cu;
    // NOP
    ctx->pc = 0x43e550u;
}
