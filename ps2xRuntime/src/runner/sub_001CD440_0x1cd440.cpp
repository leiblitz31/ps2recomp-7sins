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

// Function: sub_001CD440
// Address: 0x1cd440 - 0x1cd640
void sub_001CD440_0x1cd440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD440_0x1cd440");
#endif

    switch (ctx->pc) {
        case 0x1cd464u: goto label_1cd464;
        case 0x1cd474u: goto label_1cd474;
        case 0x1cd4fcu: goto label_1cd4fc;
        case 0x1cd550u: goto label_1cd550;
        case 0x1cd590u: goto label_1cd590;
        case 0x1cd5d0u: goto label_1cd5d0;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd630u: goto label_1cd630;
        default: break;
    }

    ctx->pc = 0x1cd440u;

    // 0x1cd440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cd448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd450: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1cd454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd458: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd45c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1CD45Cu;
    SET_GPR_U32(ctx, 31, 0x1CD464u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CD45Cu, 0x1CD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD464u;
label_1cd464:
    // 0x1cd464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cd464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd46c: 0xc096880  jal         func_25A200
    ctx->pc = 0x1CD46Cu;
    SET_GPR_U32(ctx, 31, 0x1CD474u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1CD46Cu, 0x1CD474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD474u;
label_1cd474:
    // 0x1cd474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd478: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD478u;
    {
        const bool branch_taken_0x1cd478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd478) {
            ctx->pc = 0x1CD490u;
            goto label_1cd490;
        }
    }
    ctx->pc = 0x1CD480u;
    // 0x1cd480: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1cd484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD488u;
    {
        const bool branch_taken_0x1cd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd488) {
            ctx->pc = 0x1CD494u;
            goto label_1cd494;
        }
    }
    ctx->pc = 0x1CD490u;
label_1cd490:
    // 0x1cd490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd494:
    // 0x1cd494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd4a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cd4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4ACu;
    // 0x1cd4ac: 0x0  nop
    ctx->pc = 0x1cd4acu;
    // NOP
    // 0x1cd4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd4bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd4c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd4c4: 0x904200d8  lbu         $v0, 0xD8($v0)
    ctx->pc = 0x1cd4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1cd4c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD4C8u;
    {
        const bool branch_taken_0x1cd4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4c8) {
            ctx->pc = 0x1CD4E0u;
            goto label_1cd4e0;
        }
    }
    ctx->pc = 0x1CD4D0u;
    // 0x1cd4d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd4d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1cd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1cd4d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD4D8u;
    {
        const bool branch_taken_0x1cd4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4d8) {
            ctx->pc = 0x1CD4ECu;
            goto label_1cd4ec;
        }
    }
    ctx->pc = 0x1CD4E0u;
label_1cd4e0:
    // 0x1cd4e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cd4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd4e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd4e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1cd4ec:
    // 0x1cd4ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd4f0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd4f4: 0xc064e74  jal         func_1939D0
    ctx->pc = 0x1CD4F4u;
    SET_GPR_U32(ctx, 31, 0x1CD4FCu);
    ctx->pc = 0x1939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939D0u, 0x1CD4F4u, 0x1CD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4FCu;
label_1cd4fc:
    // 0x1cd4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd500: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cd500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd504: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD50Cu;
    // 0x1cd50c: 0x0  nop
    ctx->pc = 0x1cd50cu;
    // NOP
    // 0x1cd510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd514: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cd514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd518: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD520u;
    // 0x1cd520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd52c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd530: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd530u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cd534: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd534u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cd538: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd53c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd540: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd544: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd548: 0xc064e90  jal         func_193A40
    ctx->pc = 0x1CD548u;
    SET_GPR_U32(ctx, 31, 0x1CD550u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1CD548u, 0x1CD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD550u;
label_1cd550:
    // 0x1cd550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd554: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd558: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD560u;
    // 0x1cd560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd56c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd570: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd570u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cd574: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd574u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cd578: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd57c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd580: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd584: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd588: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x1CD588u;
    SET_GPR_U32(ctx, 31, 0x1CD590u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1CD588u, 0x1CD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD590u;
label_1cd590:
    // 0x1cd590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd594: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cd594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd598: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD5A0u;
    // 0x1cd5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd5ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd5b0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd5b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cd5b4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd5b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cd5b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd5bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd5c0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1cd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5c4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1cd5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd5c8: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x1CD5C8u;
    SET_GPR_U32(ctx, 31, 0x1CD5D0u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1CD5C8u, 0x1CD5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5D0u;
label_1cd5d0:
    // 0x1cd5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd5d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cd5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD5E0u;
    // 0x1cd5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd5e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd5ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd5f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd5f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd5f8: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x1CD5F8u;
    SET_GPR_U32(ctx, 31, 0x1CD600u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1CD5F8u, 0x1CD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD600u;
label_1cd600:
    // 0x1cd600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd604: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd608: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD610u;
    // 0x1cd610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd61c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cd620: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd624: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd628: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x1CD628u;
    SET_GPR_U32(ctx, 31, 0x1CD630u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1CD628u, 0x1CD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD630u;
label_1cd630:
    // 0x1cd630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd634: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd638: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD640u;
}
