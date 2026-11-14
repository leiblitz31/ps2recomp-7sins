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

// Function: sub_00149230
// Address: 0x149230 - 0x149430
void sub_00149230_0x149230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149230_0x149230");
#endif

    switch (ctx->pc) {
        case 0x149248u: goto label_149248;
        case 0x149268u: goto label_149268;
        case 0x1492ccu: goto label_1492cc;
        case 0x1492ecu: goto label_1492ec;
        case 0x149320u: goto label_149320;
        case 0x149330u: goto label_149330;
        case 0x149340u: goto label_149340;
        case 0x149358u: goto label_149358;
        case 0x14939cu: goto label_14939c;
        case 0x1493c0u: goto label_1493c0;
        case 0x1493ccu: goto label_1493cc;
        case 0x1493e0u: goto label_1493e0;
        case 0x149400u: goto label_149400;
        case 0x149410u: goto label_149410;
        default: break;
    }

    ctx->pc = 0x149230u;

    // 0x149230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14923c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149240: 0xc084f04  jal         func_213C10
    ctx->pc = 0x149240u;
    SET_GPR_U32(ctx, 31, 0x149248u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x149240u, 0x149248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149248u;
label_149248:
    // 0x149248: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14924c: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x149250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149254: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14925c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x149260: 0xc091910  jal         func_246440
    ctx->pc = 0x149260u;
    SET_GPR_U32(ctx, 31, 0x149268u);
    ctx->pc = 0x246440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246440u, 0x149260u, 0x149268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149268u;
label_149268:
    // 0x149268: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14926c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x14926cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x149270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149274: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x149274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x149278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14927c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149280: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149284: 0x3e00008  jr          $ra
    ctx->pc = 0x149284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14928Cu;
    // 0x14928c: 0x0  nop
    ctx->pc = 0x14928cu;
    // NOP
    // 0x149290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14929c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14929cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1492a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1492A4u;
    {
        const bool branch_taken_0x1492a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492a4) {
            ctx->pc = 0x1492ECu;
            goto label_1492ec;
        }
    }
    ctx->pc = 0x1492ACu;
    // 0x1492ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1492b0: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x1492b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1492b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1492bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1492c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492c4: 0xc084ffc  jal         func_213FF0
    ctx->pc = 0x1492C4u;
    SET_GPR_U32(ctx, 31, 0x1492CCu);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x1492C4u, 0x1492CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492CCu;
label_1492cc:
    // 0x1492cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1492ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1492d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1492d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1492d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1492d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1492d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1492D8u;
    {
        const bool branch_taken_0x1492d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1492d8) {
            ctx->pc = 0x1492ECu;
            goto label_1492ec;
        }
    }
    ctx->pc = 0x1492E0u;
    // 0x1492e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1492e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1492E4u;
    SET_GPR_U32(ctx, 31, 0x1492ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1492E4u, 0x1492ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492ECu;
label_1492ec:
    // 0x1492ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1492f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1492f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1492f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1492f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1492F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149300u;
    // 0x149300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14930c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149310: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x149310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x149314: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149318: 0xc085020  jal         func_214080
    ctx->pc = 0x149318u;
    SET_GPR_U32(ctx, 31, 0x149320u);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x149318u, 0x149320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149320u;
label_149320:
    // 0x149320: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x149320u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149324: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x149324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x149328: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x149328u;
    SET_GPR_U32(ctx, 31, 0x149330u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x149328u, 0x149330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149330u;
label_149330:
    // 0x149330: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x149330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x149334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149338: 0xc0400e0  jal         func_100380
    ctx->pc = 0x149338u;
    SET_GPR_U32(ctx, 31, 0x149340u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x149338u, 0x149340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149340u;
label_149340:
    // 0x149340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149344: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149344u;
    {
        const bool branch_taken_0x149344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149344) {
            ctx->pc = 0x14935Cu;
            goto label_14935c;
        }
    }
    ctx->pc = 0x14934Cu;
    // 0x14934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149350: 0xc0526dc  jal         func_149B70
    ctx->pc = 0x149350u;
    SET_GPR_U32(ctx, 31, 0x149358u);
    ctx->pc = 0x149B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B70u, 0x149350u, 0x149358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149358u;
label_149358:
    // 0x149358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14935c:
    // 0x14935c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149360: 0xac500048  sw          $s0, 0x48($v0)
    ctx->pc = 0x149360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 16));
    // 0x149364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x149364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14936c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14936cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149374: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149378: 0x3e00008  jr          $ra
    ctx->pc = 0x149378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149380u;
    // 0x149380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14938c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149390: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149394: 0xc085204  jal         func_214810
    ctx->pc = 0x149394u;
    SET_GPR_U32(ctx, 31, 0x14939Cu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x149394u, 0x14939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14939Cu;
label_14939c:
    // 0x14939c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14939cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1493a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493a4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1493a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1493a8: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1493A8u;
    {
        const bool branch_taken_0x1493a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1493a8) {
            ctx->pc = 0x1493E0u;
            goto label_1493e0;
        }
    }
    ctx->pc = 0x1493B0u;
    // 0x1493b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493b4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1493b8: 0xc0412dc  jal         func_104B70
    ctx->pc = 0x1493B8u;
    SET_GPR_U32(ctx, 31, 0x1493C0u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x1493B8u, 0x1493C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493C0u;
label_1493c0:
    // 0x1493c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1493c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493c4: 0xc090590  jal         func_241640
    ctx->pc = 0x1493C4u;
    SET_GPR_U32(ctx, 31, 0x1493CCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1493C4u, 0x1493CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493CCu;
label_1493cc:
    // 0x1493cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1493ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1493d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493d4: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1493d8: 0xc0917d4  jal         func_245F50
    ctx->pc = 0x1493D8u;
    SET_GPR_U32(ctx, 31, 0x1493E0u);
    ctx->pc = 0x245F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F50u, 0x1493D8u, 0x1493E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493E0u;
label_1493e0:
    // 0x1493e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493e4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1493e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1493E8u;
    {
        const bool branch_taken_0x1493e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493e8) {
            ctx->pc = 0x149418u;
            goto label_149418;
        }
    }
    ctx->pc = 0x1493F0u;
    // 0x1493f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493f4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1493f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1493f8: 0xc05250c  jal         func_149430
    ctx->pc = 0x1493F8u;
    SET_GPR_U32(ctx, 31, 0x149400u);
    ctx->pc = 0x149430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149430u, 0x1493F8u, 0x149400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149400u;
label_149400:
    // 0x149400: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149404: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x149404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x149408: 0xc119c5c  jal         func_467170
    ctx->pc = 0x149408u;
    SET_GPR_U32(ctx, 31, 0x149410u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x149408u, 0x149410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149410u;
label_149410:
    // 0x149410: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149414: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x149414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_149418:
    // 0x149418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14941c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149424: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149428: 0x3e00008  jr          $ra
    ctx->pc = 0x149428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149430u;
}
