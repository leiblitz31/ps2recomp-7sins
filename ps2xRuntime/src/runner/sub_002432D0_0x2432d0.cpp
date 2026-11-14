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

// Function: sub_002432D0
// Address: 0x2432d0 - 0x243440
void sub_002432D0_0x2432d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002432D0_0x2432d0");
#endif

    switch (ctx->pc) {
        case 0x2432f4u: goto label_2432f4;
        case 0x243304u: goto label_243304;
        case 0x24332cu: goto label_24332c;
        case 0x243348u: goto label_243348;
        case 0x24335cu: goto label_24335c;
        case 0x243370u: goto label_243370;
        case 0x243380u: goto label_243380;
        case 0x2433acu: goto label_2433ac;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433e4u: goto label_2433e4;
        case 0x2433f8u: goto label_2433f8;
        case 0x243408u: goto label_243408;
        case 0x243418u: goto label_243418;
        default: break;
    }

    ctx->pc = 0x2432d0u;

label_2432d0:
    // 0x2432d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2432d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2432d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2432d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2432d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2432d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2432dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2432dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2432e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2432e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2432e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2432e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2432e8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2432e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2432ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2432ECu;
    {
        const bool branch_taken_0x2432ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432ec) {
            ctx->pc = 0x243408u;
            goto label_243408;
        }
    }
    ctx->pc = 0x2432F4u;
label_2432f4:
    // 0x2432f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2432f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2432f8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2432f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2432fc: 0xc090cac  jal         func_2432B0
    ctx->pc = 0x2432FCu;
    SET_GPR_U32(ctx, 31, 0x243304u);
    ctx->pc = 0x2432B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432B0u, 0x2432FCu, 0x243304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243304u;
label_243304:
    // 0x243304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x243304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243308: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x243308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24330c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x24330cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x243310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243318: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243318u;
    {
        const bool branch_taken_0x243318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243318) {
            ctx->pc = 0x243334u;
            goto label_243334;
        }
    }
    ctx->pc = 0x243320u;
    // 0x243320: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243324: 0xc090cb4  jal         func_2432D0
    ctx->pc = 0x243324u;
    SET_GPR_U32(ctx, 31, 0x24332Cu);
    ctx->pc = 0x2432D0u;
    goto label_2432d0;
    ctx->pc = 0x24332Cu;
label_24332c:
    // 0x24332c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x24332Cu;
    {
        const bool branch_taken_0x24332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24332c) {
            ctx->pc = 0x243408u;
            goto label_243408;
        }
    }
    ctx->pc = 0x243334u;
label_243334:
    // 0x243334: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243338: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24333c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x243340: 0xc085538  jal         func_2154E0
    ctx->pc = 0x243340u;
    SET_GPR_U32(ctx, 31, 0x243348u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x243340u, 0x243348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243348u;
label_243348:
    // 0x243348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x243348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24334c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x243350: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x243350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x243354: 0xc085538  jal         func_2154E0
    ctx->pc = 0x243354u;
    SET_GPR_U32(ctx, 31, 0x24335Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x243354u, 0x24335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24335Cu;
label_24335c:
    // 0x24335c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24335cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243368: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x243368u;
    SET_GPR_U32(ctx, 31, 0x243370u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x243368u, 0x243370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243370u;
label_243370:
    // 0x243370: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x243370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x243374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243378: 0xc090f80  jal         func_243E00
    ctx->pc = 0x243378u;
    SET_GPR_U32(ctx, 31, 0x243380u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x243378u, 0x243380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243380u;
label_243380:
    // 0x243380: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x243384: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x243384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x243388: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x243388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24338c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243390: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x243390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243394: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x243394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x243398: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x243398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24339c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2433a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2433a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433a4: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x2433A4u;
    SET_GPR_U32(ctx, 31, 0x2433ACu);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x2433A4u, 0x2433ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433ACu;
label_2433ac:
    // 0x2433ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2433acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2433b0: 0x0  nop
    ctx->pc = 0x2433b0u;
    // NOP
    // 0x2433b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2433b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2433b8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2433b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2433bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2433c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2433c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2433c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2433c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2433cc: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2433CCu;
    SET_GPR_U32(ctx, 31, 0x2433D4u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2433CCu, 0x2433D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433D4u;
label_2433d4:
    // 0x2433d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2433d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2433d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2433dc: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x2433DCu;
    SET_GPR_U32(ctx, 31, 0x2433E4u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x2433DCu, 0x2433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433E4u;
label_2433e4:
    // 0x2433e4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2433e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2433e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2433ec: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2433ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2433f0: 0xc090dcc  jal         func_243730
    ctx->pc = 0x2433F0u;
    SET_GPR_U32(ctx, 31, 0x2433F8u);
    ctx->pc = 0x243730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243730u, 0x2433F0u, 0x2433F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433F8u;
label_2433f8:
    // 0x2433f8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2433fc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x243400: 0xc090d10  jal         func_243440
    ctx->pc = 0x243400u;
    SET_GPR_U32(ctx, 31, 0x243408u);
    ctx->pc = 0x243440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243440u, 0x243400u, 0x243408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243408u;
label_243408:
    // 0x243408: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x243408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24340c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x24340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x243410: 0xc090c78  jal         func_2431E0
    ctx->pc = 0x243410u;
    SET_GPR_U32(ctx, 31, 0x243418u);
    ctx->pc = 0x2431E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431E0u, 0x243410u, 0x243418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243418u;
label_243418:
    // 0x243418: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x243418u;
    {
        const bool branch_taken_0x243418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243418) {
            ctx->pc = 0x2432F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2432f4;
        }
    }
    ctx->pc = 0x243420u;
    // 0x243420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x243420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24342c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24342cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243434: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x243434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x243438: 0x3e00008  jr          $ra
    ctx->pc = 0x243438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243440u;
}
