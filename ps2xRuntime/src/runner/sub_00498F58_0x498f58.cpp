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

// Function: sub_00498F58
// Address: 0x498f58 - 0x499190
void sub_00498F58_0x498f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498F58_0x498f58");
#endif

    switch (ctx->pc) {
        case 0x498f58u: goto label_498f58;
        case 0x498f5cu: goto label_498f5c;
        case 0x498f60u: goto label_498f60;
        case 0x498f64u: goto label_498f64;
        case 0x498f68u: goto label_498f68;
        case 0x498f6cu: goto label_498f6c;
        case 0x498f70u: goto label_498f70;
        case 0x498f74u: goto label_498f74;
        case 0x498f78u: goto label_498f78;
        case 0x498f7cu: goto label_498f7c;
        case 0x498f80u: goto label_498f80;
        case 0x498f84u: goto label_498f84;
        case 0x498f88u: goto label_498f88;
        case 0x498f8cu: goto label_498f8c;
        case 0x498f90u: goto label_498f90;
        case 0x498f94u: goto label_498f94;
        case 0x498f98u: goto label_498f98;
        case 0x498f9cu: goto label_498f9c;
        case 0x498fa0u: goto label_498fa0;
        case 0x498fa4u: goto label_498fa4;
        case 0x498fa8u: goto label_498fa8;
        case 0x498facu: goto label_498fac;
        case 0x498fb0u: goto label_498fb0;
        case 0x498fb4u: goto label_498fb4;
        case 0x498fb8u: goto label_498fb8;
        case 0x498fbcu: goto label_498fbc;
        case 0x498fc0u: goto label_498fc0;
        case 0x498fc4u: goto label_498fc4;
        case 0x498fc8u: goto label_498fc8;
        case 0x498fccu: goto label_498fcc;
        case 0x498fd0u: goto label_498fd0;
        case 0x498fd4u: goto label_498fd4;
        case 0x498fd8u: goto label_498fd8;
        case 0x498fdcu: goto label_498fdc;
        case 0x498fe0u: goto label_498fe0;
        case 0x498fe4u: goto label_498fe4;
        case 0x498fe8u: goto label_498fe8;
        case 0x498fecu: goto label_498fec;
        case 0x498ff0u: goto label_498ff0;
        case 0x498ff4u: goto label_498ff4;
        case 0x498ff8u: goto label_498ff8;
        case 0x498ffcu: goto label_498ffc;
        case 0x499000u: goto label_499000;
        case 0x499004u: goto label_499004;
        case 0x499008u: goto label_499008;
        case 0x49900cu: goto label_49900c;
        case 0x499010u: goto label_499010;
        case 0x499014u: goto label_499014;
        case 0x499018u: goto label_499018;
        case 0x49901cu: goto label_49901c;
        case 0x499020u: goto label_499020;
        case 0x499024u: goto label_499024;
        case 0x499028u: goto label_499028;
        case 0x49902cu: goto label_49902c;
        case 0x499030u: goto label_499030;
        case 0x499034u: goto label_499034;
        case 0x499038u: goto label_499038;
        case 0x49903cu: goto label_49903c;
        case 0x499040u: goto label_499040;
        case 0x499044u: goto label_499044;
        case 0x499048u: goto label_499048;
        case 0x49904cu: goto label_49904c;
        case 0x499050u: goto label_499050;
        case 0x499054u: goto label_499054;
        case 0x499058u: goto label_499058;
        case 0x49905cu: goto label_49905c;
        case 0x499060u: goto label_499060;
        case 0x499064u: goto label_499064;
        case 0x499068u: goto label_499068;
        case 0x49906cu: goto label_49906c;
        case 0x499070u: goto label_499070;
        case 0x499074u: goto label_499074;
        case 0x499078u: goto label_499078;
        case 0x49907cu: goto label_49907c;
        case 0x499080u: goto label_499080;
        case 0x499084u: goto label_499084;
        case 0x499088u: goto label_499088;
        case 0x49908cu: goto label_49908c;
        case 0x499090u: goto label_499090;
        case 0x499094u: goto label_499094;
        case 0x499098u: goto label_499098;
        case 0x49909cu: goto label_49909c;
        case 0x4990a0u: goto label_4990a0;
        case 0x4990a4u: goto label_4990a4;
        case 0x4990a8u: goto label_4990a8;
        case 0x4990acu: goto label_4990ac;
        case 0x4990b0u: goto label_4990b0;
        case 0x4990b4u: goto label_4990b4;
        case 0x4990b8u: goto label_4990b8;
        case 0x4990bcu: goto label_4990bc;
        case 0x4990c0u: goto label_4990c0;
        case 0x4990c4u: goto label_4990c4;
        case 0x4990c8u: goto label_4990c8;
        case 0x4990ccu: goto label_4990cc;
        case 0x4990d0u: goto label_4990d0;
        case 0x4990d4u: goto label_4990d4;
        case 0x4990d8u: goto label_4990d8;
        case 0x4990dcu: goto label_4990dc;
        case 0x4990e0u: goto label_4990e0;
        case 0x4990e4u: goto label_4990e4;
        case 0x4990e8u: goto label_4990e8;
        case 0x4990ecu: goto label_4990ec;
        case 0x4990f0u: goto label_4990f0;
        case 0x4990f4u: goto label_4990f4;
        case 0x4990f8u: goto label_4990f8;
        case 0x4990fcu: goto label_4990fc;
        case 0x499100u: goto label_499100;
        case 0x499104u: goto label_499104;
        case 0x499108u: goto label_499108;
        case 0x49910cu: goto label_49910c;
        case 0x499110u: goto label_499110;
        case 0x499114u: goto label_499114;
        case 0x499118u: goto label_499118;
        case 0x49911cu: goto label_49911c;
        case 0x499120u: goto label_499120;
        case 0x499124u: goto label_499124;
        case 0x499128u: goto label_499128;
        case 0x49912cu: goto label_49912c;
        case 0x499130u: goto label_499130;
        case 0x499134u: goto label_499134;
        case 0x499138u: goto label_499138;
        case 0x49913cu: goto label_49913c;
        case 0x499140u: goto label_499140;
        case 0x499144u: goto label_499144;
        case 0x499148u: goto label_499148;
        case 0x49914cu: goto label_49914c;
        case 0x499150u: goto label_499150;
        case 0x499154u: goto label_499154;
        case 0x499158u: goto label_499158;
        case 0x49915cu: goto label_49915c;
        case 0x499160u: goto label_499160;
        case 0x499164u: goto label_499164;
        case 0x499168u: goto label_499168;
        case 0x49916cu: goto label_49916c;
        case 0x499170u: goto label_499170;
        case 0x499174u: goto label_499174;
        case 0x499178u: goto label_499178;
        case 0x49917cu: goto label_49917c;
        case 0x499180u: goto label_499180;
        case 0x499184u: goto label_499184;
        case 0x499188u: goto label_499188;
        case 0x49918cu: goto label_49918c;
        default: break;
    }

    ctx->pc = 0x498f58u;

label_498f58:
    // 0x498f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498f5c:
    // 0x498f5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498f60:
    // 0x498f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498f64:
    // 0x498f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498f68:
    // 0x498f68: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x498f68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_498f6c:
    // 0x498f6c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498f70:
    if (ctx->pc == 0x498F70u) {
        ctx->pc = 0x498F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F6Cu;
        // 0x498f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F74u;
        goto label_498f74;
    }
    ctx->pc = 0x498F6Cu;
    {
        const bool branch_taken_0x498f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F6Cu;
        // 0x498f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f6c) {
            ctx->pc = 0x498FA0u;
            goto label_498fa0;
        }
    }
    ctx->pc = 0x498F74u;
label_498f74:
    // 0x498f74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498f78:
    // 0x498f78: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498f78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498f7c:
    // 0x498f7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498f80:
    // 0x498f80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498f84:
    // 0x498f84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498f88:
    // 0x498f88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498f8c:
    // 0x498f8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498f90:
    // 0x498f90: 0x40f809  jalr        $v0
label_498f94:
    if (ctx->pc == 0x498F94u) {
        ctx->pc = 0x498F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F90u;
        // 0x498f94: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498F98u;
        goto label_498f98;
    }
    ctx->pc = 0x498F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498F98u);
        ctx->pc = 0x498F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F90u;
        // 0x498f94: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498F90u, 0x498F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498F98u;
label_498f98:
    // 0x498f98: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498f98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498f9c:
    // 0x498f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498fa0:
    // 0x498fa0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498fa4:
    // 0x498fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498fa8:
    // 0x498fa8: 0x3e00008  jr          $ra
label_498fac:
    if (ctx->pc == 0x498FACu) {
        ctx->pc = 0x498FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FA8u;
        // 0x498fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498FB0u;
        goto label_498fb0;
    }
    ctx->pc = 0x498FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FA8u;
        // 0x498fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498FB0u;
label_498fb0:
    // 0x498fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x498fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_498fb4:
    // 0x498fb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x498fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_498fb8:
    // 0x498fb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x498fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_498fbc:
    // 0x498fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498fc0:
    // 0x498fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498fc4:
    // 0x498fc4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x498fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_498fc8:
    // 0x498fc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498fcc:
    // 0x498fcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x498fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_498fd0:
    // 0x498fd0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498fd4:
    // 0x498fd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498fd8:
    // 0x498fd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498fdc:
    // 0x498fdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498fe0:
    // 0x498fe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498fe4:
    // 0x498fe4: 0x40f809  jalr        $v0
label_498fe8:
    if (ctx->pc == 0x498FE8u) {
        ctx->pc = 0x498FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FE4u;
        // 0x498fe8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498FECu;
        goto label_498fec;
    }
    ctx->pc = 0x498FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498FECu);
        ctx->pc = 0x498FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FE4u;
        // 0x498fe8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498FE4u, 0x498FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498FECu;
label_498fec:
    // 0x498fec: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498fecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498ff0:
    // 0x498ff0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_498ff4:
    if (ctx->pc == 0x498FF4u) {
        ctx->pc = 0x498FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FF0u;
        // 0x498ff4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498FF8u;
        goto label_498ff8;
    }
    ctx->pc = 0x498FF0u;
    {
        const bool branch_taken_0x498ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x498FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FF0u;
        // 0x498ff4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ff0) {
            ctx->pc = 0x49900Cu;
            goto label_49900c;
        }
    }
    ctx->pc = 0x498FF8u;
label_498ff8:
    // 0x498ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_498ffc:
    if (ctx->pc == 0x498FFCu) {
        ctx->pc = 0x498FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FF8u;
        // 0x498ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499000u;
        goto label_499000;
    }
    ctx->pc = 0x498FF8u;
    {
        const bool branch_taken_0x498ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FF8u;
        // 0x498ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ff8) {
            ctx->pc = 0x499008u;
            goto label_499008;
        }
    }
    ctx->pc = 0x499000u;
label_499000:
    // 0x499000: 0x10000002  b           . + 4 + (0x2 << 2)
label_499004:
    if (ctx->pc == 0x499004u) {
        ctx->pc = 0x499004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499000u;
        // 0x499004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499008u;
        goto label_499008;
    }
    ctx->pc = 0x499000u;
    {
        const bool branch_taken_0x499000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499000u;
        // 0x499004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499000) {
            ctx->pc = 0x49900Cu;
            goto label_49900c;
        }
    }
    ctx->pc = 0x499008u;
label_499008:
    // 0x499008: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_49900c:
    // 0x49900c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x49900cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_499010:
    // 0x499010: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_499014:
    // 0x499014: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x499014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499018:
    // 0x499018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49901c:
    // 0x49901c: 0x3e00008  jr          $ra
label_499020:
    if (ctx->pc == 0x499020u) {
        ctx->pc = 0x499020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49901Cu;
        // 0x499020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499024u;
        goto label_499024;
    }
    ctx->pc = 0x49901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49901Cu;
        // 0x499020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499024u;
label_499024:
    // 0x499024: 0x0  nop
    ctx->pc = 0x499024u;
    // NOP
label_499028:
    // 0x499028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49902c:
    // 0x49902c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499030:
    // 0x499030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_499034:
    // 0x499034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499038:
    // 0x499038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49903c:
    // 0x49903c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49903cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499040:
    // 0x499040: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_499044:
    // 0x499044: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x499044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499048:
    // 0x499048: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49904c:
    // 0x49904c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499050:
    // 0x499050: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_499054:
    // 0x499054: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x499054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_499058:
    // 0x499058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49905c:
    // 0x49905c: 0x40f809  jalr        $v0
label_499060:
    if (ctx->pc == 0x499060u) {
        ctx->pc = 0x499060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49905Cu;
        // 0x499060: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499064u;
        goto label_499064;
    }
    ctx->pc = 0x49905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499064u);
        ctx->pc = 0x499060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49905Cu;
        // 0x499060: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49905Cu, 0x499064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499064u;
label_499064:
    // 0x499064: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x499064u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_499068:
    // 0x499068: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49906c:
    if (ctx->pc == 0x49906Cu) {
        ctx->pc = 0x49906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499068u;
        // 0x49906c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499070u;
        goto label_499070;
    }
    ctx->pc = 0x499068u;
    {
        const bool branch_taken_0x499068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499068u;
        // 0x49906c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499068) {
            ctx->pc = 0x499084u;
            goto label_499084;
        }
    }
    ctx->pc = 0x499070u;
label_499070:
    // 0x499070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_499074:
    if (ctx->pc == 0x499074u) {
        ctx->pc = 0x499074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499070u;
        // 0x499074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499078u;
        goto label_499078;
    }
    ctx->pc = 0x499070u;
    {
        const bool branch_taken_0x499070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499070u;
        // 0x499074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499070) {
            ctx->pc = 0x499080u;
            goto label_499080;
        }
    }
    ctx->pc = 0x499078u;
label_499078:
    // 0x499078: 0x10000002  b           . + 4 + (0x2 << 2)
label_49907c:
    if (ctx->pc == 0x49907Cu) {
        ctx->pc = 0x49907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499078u;
        // 0x49907c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499080u;
        goto label_499080;
    }
    ctx->pc = 0x499078u;
    {
        const bool branch_taken_0x499078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499078u;
        // 0x49907c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499078) {
            ctx->pc = 0x499084u;
            goto label_499084;
        }
    }
    ctx->pc = 0x499080u;
label_499080:
    // 0x499080: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_499084:
    // 0x499084: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x499084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_499088:
    // 0x499088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49908c:
    // 0x49908c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49908cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499090:
    // 0x499090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_499094:
    // 0x499094: 0x3e00008  jr          $ra
label_499098:
    if (ctx->pc == 0x499098u) {
        ctx->pc = 0x499098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499094u;
        // 0x499098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49909Cu;
        goto label_49909c;
    }
    ctx->pc = 0x499094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499094u;
        // 0x499098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49909Cu;
label_49909c:
    // 0x49909c: 0x0  nop
    ctx->pc = 0x49909cu;
    // NOP
label_4990a0:
    // 0x4990a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4990a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4990a4:
    // 0x4990a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4990a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4990a8:
    // 0x4990a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4990a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4990ac:
    // 0x4990ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4990acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4990b0:
    // 0x4990b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4990b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4990b4:
    // 0x4990b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4990b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4990b8:
    // 0x4990b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4990b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4990bc:
    // 0x4990bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4990bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4990c0:
    // 0x4990c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4990c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4990c4:
    // 0x4990c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4990c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4990c8:
    // 0x4990c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4990c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4990cc:
    // 0x4990cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4990ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4990d0:
    // 0x4990d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4990d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4990d4:
    // 0x4990d4: 0x40f809  jalr        $v0
label_4990d8:
    if (ctx->pc == 0x4990D8u) {
        ctx->pc = 0x4990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990D4u;
        // 0x4990d8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4990DCu;
        goto label_4990dc;
    }
    ctx->pc = 0x4990D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4990DCu);
        ctx->pc = 0x4990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990D4u;
        // 0x4990d8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4990D4u, 0x4990DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4990DCu;
label_4990dc:
    // 0x4990dc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4990dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4990e0:
    // 0x4990e0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4990e4:
    if (ctx->pc == 0x4990E4u) {
        ctx->pc = 0x4990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990E0u;
        // 0x4990e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4990E8u;
        goto label_4990e8;
    }
    ctx->pc = 0x4990E0u;
    {
        const bool branch_taken_0x4990e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990E0u;
        // 0x4990e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990e0) {
            ctx->pc = 0x4990FCu;
            goto label_4990fc;
        }
    }
    ctx->pc = 0x4990E8u;
label_4990e8:
    // 0x4990e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4990ec:
    if (ctx->pc == 0x4990ECu) {
        ctx->pc = 0x4990ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990E8u;
        // 0x4990ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4990F0u;
        goto label_4990f0;
    }
    ctx->pc = 0x4990E8u;
    {
        const bool branch_taken_0x4990e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4990ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990E8u;
        // 0x4990ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990e8) {
            ctx->pc = 0x4990F8u;
            goto label_4990f8;
        }
    }
    ctx->pc = 0x4990F0u;
label_4990f0:
    // 0x4990f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4990f4:
    if (ctx->pc == 0x4990F4u) {
        ctx->pc = 0x4990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990F0u;
        // 0x4990f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4990F8u;
        goto label_4990f8;
    }
    ctx->pc = 0x4990F0u;
    {
        const bool branch_taken_0x4990f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4990F0u;
        // 0x4990f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4990f0) {
            ctx->pc = 0x4990FCu;
            goto label_4990fc;
        }
    }
    ctx->pc = 0x4990F8u;
label_4990f8:
    // 0x4990f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4990f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4990fc:
    // 0x4990fc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4990fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_499100:
    // 0x499100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_499104:
    // 0x499104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x499104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499108:
    // 0x499108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49910c:
    // 0x49910c: 0x3e00008  jr          $ra
label_499110:
    if (ctx->pc == 0x499110u) {
        ctx->pc = 0x499110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49910Cu;
        // 0x499110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499114u;
        goto label_499114;
    }
    ctx->pc = 0x49910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49910Cu;
        // 0x499110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499114u;
label_499114:
    // 0x499114: 0x0  nop
    ctx->pc = 0x499114u;
    // NOP
label_499118:
    // 0x499118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49911c:
    // 0x49911c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499120:
    // 0x499120: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_499124:
    // 0x499124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499128:
    // 0x499128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49912c:
    // 0x49912c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49912cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499130:
    // 0x499130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_499134:
    // 0x499134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x499134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499138:
    // 0x499138: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49913c:
    // 0x49913c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499140:
    // 0x499140: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_499144:
    // 0x499144: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x499144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_499148:
    // 0x499148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49914c:
    // 0x49914c: 0x40f809  jalr        $v0
label_499150:
    if (ctx->pc == 0x499150u) {
        ctx->pc = 0x499150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49914Cu;
        // 0x499150: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499154u;
        goto label_499154;
    }
    ctx->pc = 0x49914Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499154u);
        ctx->pc = 0x499150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49914Cu;
        // 0x499150: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49914Cu, 0x499154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499154u;
label_499154:
    // 0x499154: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x499154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_499158:
    // 0x499158: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49915c:
    if (ctx->pc == 0x49915Cu) {
        ctx->pc = 0x49915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499158u;
        // 0x49915c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499160u;
        goto label_499160;
    }
    ctx->pc = 0x499158u;
    {
        const bool branch_taken_0x499158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499158u;
        // 0x49915c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499158) {
            ctx->pc = 0x499174u;
            goto label_499174;
        }
    }
    ctx->pc = 0x499160u;
label_499160:
    // 0x499160: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_499164:
    if (ctx->pc == 0x499164u) {
        ctx->pc = 0x499164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499160u;
        // 0x499164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499168u;
        goto label_499168;
    }
    ctx->pc = 0x499160u;
    {
        const bool branch_taken_0x499160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499160u;
        // 0x499164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499160) {
            ctx->pc = 0x499170u;
            goto label_499170;
        }
    }
    ctx->pc = 0x499168u;
label_499168:
    // 0x499168: 0x10000002  b           . + 4 + (0x2 << 2)
label_49916c:
    if (ctx->pc == 0x49916Cu) {
        ctx->pc = 0x49916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499168u;
        // 0x49916c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499170u;
        goto label_499170;
    }
    ctx->pc = 0x499168u;
    {
        const bool branch_taken_0x499168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499168u;
        // 0x49916c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499168) {
            ctx->pc = 0x499174u;
            goto label_499174;
        }
    }
    ctx->pc = 0x499170u;
label_499170:
    // 0x499170: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_499174:
    // 0x499174: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x499174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_499178:
    // 0x499178: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49917c:
    // 0x49917c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49917cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499180:
    // 0x499180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_499184:
    // 0x499184: 0x3e00008  jr          $ra
label_499188:
    if (ctx->pc == 0x499188u) {
        ctx->pc = 0x499188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499184u;
        // 0x499188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49918Cu;
        goto label_49918c;
    }
    ctx->pc = 0x499184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499184u;
        // 0x499188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49918Cu;
label_49918c:
    // 0x49918c: 0x0  nop
    ctx->pc = 0x49918cu;
    // NOP
    ctx->pc = 0x499190u;
}
