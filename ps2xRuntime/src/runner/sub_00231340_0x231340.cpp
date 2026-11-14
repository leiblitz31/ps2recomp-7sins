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

// Function: sub_00231340
// Address: 0x231340 - 0x231440
void sub_00231340_0x231340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231340_0x231340");
#endif

    switch (ctx->pc) {
        case 0x231370u: goto label_231370;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313e0u: goto label_2313e0;
        case 0x231400u: goto label_231400;
        case 0x23141cu: goto label_23141c;
        default: break;
    }

    ctx->pc = 0x231340u;

    // 0x231340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x231344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23134c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23134cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231350: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x231350u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x231354: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x231354u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x231358: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x231358u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23135c: 0xe7af0060  swc1        $f15, 0x60($sp)
    ctx->pc = 0x23135cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x231360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231364: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231368: 0xc08c200  jal         func_230800
    ctx->pc = 0x231368u;
    SET_GPR_U32(ctx, 31, 0x231370u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231368u, 0x231370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231370u;
label_231370:
    // 0x231370: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231370u;
    {
        const bool branch_taken_0x231370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231370) {
            ctx->pc = 0x231384u;
            goto label_231384;
        }
    }
    ctx->pc = 0x231378u;
    // 0x231378: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23137c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23137Cu;
    {
        const bool branch_taken_0x23137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23137c) {
            ctx->pc = 0x231428u;
            goto label_231428;
        }
    }
    ctx->pc = 0x231384u;
label_231384:
    // 0x231384: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231388: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x23138c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x23138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231390: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x231390u;
    {
        const bool branch_taken_0x231390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231390) {
            ctx->pc = 0x2313E8u;
            goto label_2313e8;
        }
    }
    ctx->pc = 0x231398u;
    // 0x231398: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x23139c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23139Cu;
    {
        const bool branch_taken_0x23139c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23139c) {
            ctx->pc = 0x2313ACu;
            goto label_2313ac;
        }
    }
    ctx->pc = 0x2313A4u;
    // 0x2313a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x231424u;
            goto label_231424;
        }
    }
    ctx->pc = 0x2313ACu;
label_2313ac:
    // 0x2313ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2313acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2313b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2313b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2313b4: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2313b8: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2313b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2313bc: 0xc08c248  jal         func_230920
    ctx->pc = 0x2313BCu;
    SET_GPR_U32(ctx, 31, 0x2313C4u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2313BCu, 0x2313C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313C4u;
label_2313c4:
    // 0x2313c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2313c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2313c8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2313c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2313cc: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x2313ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2313d0: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x2313d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2313d4: 0xc7af0060  lwc1        $f15, 0x60($sp)
    ctx->pc = 0x2313d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2313d8: 0xc11cc74  jal         func_4731D0
    ctx->pc = 0x2313D8u;
    SET_GPR_U32(ctx, 31, 0x2313E0u);
    ctx->pc = 0x4731D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731D0u, 0x2313D8u, 0x2313E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313E0u;
label_2313e0:
    // 0x2313e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2313E0u;
    {
        const bool branch_taken_0x2313e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313e0) {
            ctx->pc = 0x231428u;
            goto label_231428;
        }
    }
    ctx->pc = 0x2313E8u;
label_2313e8:
    // 0x2313e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2313ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2313f0: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2313f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x2313f4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2313f8: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x2313F8u;
    SET_GPR_U32(ctx, 31, 0x231400u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2313F8u, 0x231400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231400u;
label_231400:
    // 0x231400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231404: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x231404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231408: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x231408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23140c: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x23140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x231410: 0xc7af0060  lwc1        $f15, 0x60($sp)
    ctx->pc = 0x231410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x231414: 0xc11cc74  jal         func_4731D0
    ctx->pc = 0x231414u;
    SET_GPR_U32(ctx, 31, 0x23141Cu);
    ctx->pc = 0x4731D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731D0u, 0x231414u, 0x23141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23141Cu;
    {
        const bool branch_taken_0x23141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23141c) {
            ctx->pc = 0x231428u;
            goto label_231428;
        }
    }
    ctx->pc = 0x231424u;
label_231424:
    // 0x231424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231428:
    // 0x231428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23142c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x231430: 0x3e00008  jr          $ra
    ctx->pc = 0x231430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231438u;
    // 0x231438: 0x0  nop
    ctx->pc = 0x231438u;
    // NOP
    // 0x23143c: 0x0  nop
    ctx->pc = 0x23143cu;
    // NOP
    ctx->pc = 0x231440u;
}
