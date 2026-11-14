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

// Function: sub_001B33B0
// Address: 0x1b33b0 - 0x1b3b30
void sub_001B33B0_0x1b33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B33B0_0x1b33b0");
#endif

    switch (ctx->pc) {
        case 0x1b33dcu: goto label_1b33dc;
        case 0x1b33e8u: goto label_1b33e8;
        case 0x1b33f4u: goto label_1b33f4;
        case 0x1b3404u: goto label_1b3404;
        case 0x1b341cu: goto label_1b341c;
        case 0x1b3444u: goto label_1b3444;
        case 0x1b3458u: goto label_1b3458;
        case 0x1b3474u: goto label_1b3474;
        case 0x1b3490u: goto label_1b3490;
        case 0x1b34a8u: goto label_1b34a8;
        case 0x1b34c4u: goto label_1b34c4;
        case 0x1b34dcu: goto label_1b34dc;
        case 0x1b34f8u: goto label_1b34f8;
        case 0x1b3510u: goto label_1b3510;
        case 0x1b352cu: goto label_1b352c;
        case 0x1b3544u: goto label_1b3544;
        case 0x1b3568u: goto label_1b3568;
        case 0x1b358cu: goto label_1b358c;
        case 0x1b35b0u: goto label_1b35b0;
        case 0x1b35d4u: goto label_1b35d4;
        case 0x1b35f8u: goto label_1b35f8;
        case 0x1b361cu: goto label_1b361c;
        case 0x1b3640u: goto label_1b3640;
        case 0x1b3664u: goto label_1b3664;
        case 0x1b3678u: goto label_1b3678;
        case 0x1b3684u: goto label_1b3684;
        case 0x1b369cu: goto label_1b369c;
        case 0x1b36b4u: goto label_1b36b4;
        case 0x1b36ccu: goto label_1b36cc;
        case 0x1b36ecu: goto label_1b36ec;
        case 0x1b3714u: goto label_1b3714;
        case 0x1b3740u: goto label_1b3740;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b3820u: goto label_1b3820;
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b3900u: goto label_1b3900;
        case 0x1b3928u: goto label_1b3928;
        case 0x1b3944u: goto label_1b3944;
        case 0x1b396cu: goto label_1b396c;
        case 0x1b3988u: goto label_1b3988;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39ccu: goto label_1b39cc;
        case 0x1b39f4u: goto label_1b39f4;
        case 0x1b3a10u: goto label_1b3a10;
        case 0x1b3a38u: goto label_1b3a38;
        case 0x1b3a54u: goto label_1b3a54;
        case 0x1b3a7cu: goto label_1b3a7c;
        case 0x1b3a98u: goto label_1b3a98;
        case 0x1b3ac0u: goto label_1b3ac0;
        case 0x1b3adcu: goto label_1b3adc;
        case 0x1b3b08u: goto label_1b3b08;
        default: break;
    }

    ctx->pc = 0x1b33b0u;

    // 0x1b33b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b33b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b33b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b33bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b33c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b33c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b33c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b33c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b33cc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b33d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b33d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b33d4: 0xc06cecc  jal         func_1B3B30
    ctx->pc = 0x1B33D4u;
    SET_GPR_U32(ctx, 31, 0x1B33DCu);
    ctx->pc = 0x1B3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3B30u, 0x1B33D4u, 0x1B33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33DCu;
label_1b33dc:
    // 0x1b33dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b33dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B33E0u;
    {
        const bool branch_taken_0x1b33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33e0) {
            ctx->pc = 0x1B3424u;
            goto label_1b3424;
        }
    }
    ctx->pc = 0x1B33E8u;
label_1b33e8:
    // 0x1b33e8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b33ec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1B33ECu;
    SET_GPR_U32(ctx, 31, 0x1B33F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1B33ECu, 0x1B33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33F4u;
label_1b33f4:
    // 0x1b33f4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b33f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b33f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b33f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1B33FCu;
    SET_GPR_U32(ctx, 31, 0x1B3404u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1B33FCu, 0x1B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3404u;
label_1b3404:
    // 0x1b3404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3408: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b340c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3414: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3414u;
    SET_GPR_U32(ctx, 31, 0x1B341Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3414u, 0x1B341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B341Cu;
label_1b341c:
    // 0x1b341c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b341cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b3420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b3420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b3424:
    // 0x1b3424: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1b3424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b3428: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B3428u;
    {
        const bool branch_taken_0x1b3428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3428) {
            ctx->pc = 0x1B33E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b33e8;
        }
    }
    ctx->pc = 0x1B3430u;
    // 0x1b3430: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3434: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b343c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B343Cu;
    SET_GPR_U32(ctx, 31, 0x1B3444u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B343Cu, 0x1B3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3444u;
label_1b3444:
    // 0x1b3444: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b3444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b344c: 0x246501cc  addiu       $a1, $v1, 0x1CC
    ctx->pc = 0x1b344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 460));
    // 0x1b3450: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B3450u;
    SET_GPR_U32(ctx, 31, 0x1B3458u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B3450u, 0x1B3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3458u;
label_1b3458:
    // 0x1b3458: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b345c: 0xc4540158  lwc1        $f20, 0x158($v0)
    ctx->pc = 0x1b345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3460: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3464: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b346c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B346Cu;
    SET_GPR_U32(ctx, 31, 0x1B3474u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B346Cu, 0x1B3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3474u;
label_1b3474:
    // 0x1b3474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3478: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x1b3478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b347c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3480: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3484: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3488: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3488u;
    SET_GPR_U32(ctx, 31, 0x1B3490u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3488u, 0x1B3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3490u;
label_1b3490:
    // 0x1b3490: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3494: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3498: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b349c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b349cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a0: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B34A0u;
    SET_GPR_U32(ctx, 31, 0x1B34A8u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B34A0u, 0x1B34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34A8u;
label_1b34a8:
    // 0x1b34a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b34ac: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1b34acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x1b34b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b34b4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b34b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b34b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b34bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B34BCu;
    SET_GPR_U32(ctx, 31, 0x1B34C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B34BCu, 0x1B34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34C4u;
label_1b34c4:
    // 0x1b34c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b34c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b34c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b34cc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b34d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b34d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b34d4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B34D4u;
    SET_GPR_U32(ctx, 31, 0x1B34DCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B34D4u, 0x1B34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34DCu;
label_1b34dc:
    // 0x1b34dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b34e0: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1b34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x1b34e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b34e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b34ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b34f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B34F0u;
    SET_GPR_U32(ctx, 31, 0x1B34F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B34F0u, 0x1B34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34F8u;
label_1b34f8:
    // 0x1b34f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b34f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b34fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3500: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3504: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3508: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3508u;
    SET_GPR_U32(ctx, 31, 0x1B3510u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3508u, 0x1B3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3510u;
label_1b3510:
    // 0x1b3510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3514: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1b3514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x1b3518: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b351c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3520: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b3520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b3524: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3524u;
    SET_GPR_U32(ctx, 31, 0x1B352Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3524u, 0x1B352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B352Cu;
label_1b352c:
    // 0x1b352c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b352cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3530: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3534: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3538: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b353c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B353Cu;
    SET_GPR_U32(ctx, 31, 0x1B3544u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B353Cu, 0x1B3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3544u;
label_1b3544:
    // 0x1b3544: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3548: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1b3548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x1b354c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3550: 0xc4546e10  lwc1        $f20, 0x6E10($v0)
    ctx->pc = 0x1b3550u;
    { uint32_t bits = FAST_READ32(0x4E6E10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3554: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3558: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b355c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3560: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3560u;
    SET_GPR_U32(ctx, 31, 0x1B3568u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3560u, 0x1B3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3568u;
label_1b3568:
    // 0x1b3568: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b356c: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1b356cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b3570: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3574: 0xc4546e20  lwc1        $f20, 0x6E20($v0)
    ctx->pc = 0x1b3574u;
    { uint32_t bits = FAST_READ32(0x4E6E20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3578: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b357c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3584: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3584u;
    SET_GPR_U32(ctx, 31, 0x1B358Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3584u, 0x1B358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B358Cu;
label_1b358c:
    // 0x1b358c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3590: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1b3590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1b3594: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3598: 0xc4546e14  lwc1        $f20, 0x6E14($v0)
    ctx->pc = 0x1b3598u;
    { uint32_t bits = FAST_READ32(0x4E6E14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b359c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b35a0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b35a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b35a8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B35A8u;
    SET_GPR_U32(ctx, 31, 0x1B35B0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B35A8u, 0x1B35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35B0u;
label_1b35b0:
    // 0x1b35b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b35b4: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1b35b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b35b8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b35bc: 0xc4546e24  lwc1        $f20, 0x6E24($v0)
    ctx->pc = 0x1b35bcu;
    { uint32_t bits = FAST_READ32(0x4E6E24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b35c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b35c4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b35c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b35cc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B35CCu;
    SET_GPR_U32(ctx, 31, 0x1B35D4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B35CCu, 0x1B35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35D4u;
label_1b35d4:
    // 0x1b35d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b35d8: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1b35d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1b35dc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b35e0: 0xc4546e18  lwc1        $f20, 0x6E18($v0)
    ctx->pc = 0x1b35e0u;
    { uint32_t bits = FAST_READ32(0x4E6E18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b35e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b35e8: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b35ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b35f0: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B35F0u;
    SET_GPR_U32(ctx, 31, 0x1B35F8u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B35F0u, 0x1B35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35F8u;
label_1b35f8:
    // 0x1b35f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b35fc: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1b35fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b3600: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3604: 0xc4546e28  lwc1        $f20, 0x6E28($v0)
    ctx->pc = 0x1b3604u;
    { uint32_t bits = FAST_READ32(0x4E6E28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3608: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b360c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3610: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3614: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3614u;
    SET_GPR_U32(ctx, 31, 0x1B361Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3614u, 0x1B361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B361Cu;
label_1b361c:
    // 0x1b361c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3620: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1b3620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1b3624: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3628: 0xc4546e1c  lwc1        $f20, 0x6E1C($v0)
    ctx->pc = 0x1b3628u;
    { uint32_t bits = FAST_READ32(0x4E6E1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b362c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3630: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3634: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3638: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3638u;
    SET_GPR_U32(ctx, 31, 0x1B3640u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3638u, 0x1B3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3640u;
label_1b3640:
    // 0x1b3640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3644: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1b3644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b3648: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b364c: 0xc4546e2c  lwc1        $f20, 0x6E2C($v0)
    ctx->pc = 0x1b364cu;
    { uint32_t bits = FAST_READ32(0x4E6E2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3650: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3654: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3658: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b365c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B365Cu;
    SET_GPR_U32(ctx, 31, 0x1B3664u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B365Cu, 0x1B3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3664u;
label_1b3664:
    // 0x1b3664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3668: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1b3668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1b366c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b366cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3670: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1B3670u;
    {
        const bool branch_taken_0x1b3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3670) {
            ctx->pc = 0x1B3720u;
            goto label_1b3720;
        }
    }
    ctx->pc = 0x1B3678u;
label_1b3678:
    // 0x1b3678: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b367c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B367Cu;
    SET_GPR_U32(ctx, 31, 0x1B3684u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B367Cu, 0x1B3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3684u;
label_1b3684:
    // 0x1b3684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3688: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b368c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3694: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3694u;
    SET_GPR_U32(ctx, 31, 0x1B369Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3694u, 0x1B369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B369Cu;
label_1b369c:
    // 0x1b369c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b36a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b36a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36a4: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b36a8: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b36ac: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B36ACu;
    SET_GPR_U32(ctx, 31, 0x1B36B4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B36ACu, 0x1B36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36B4u;
label_1b36b4:
    // 0x1b36b4: 0xc7b4004c  lwc1        $f20, 0x4C($sp)
    ctx->pc = 0x1b36b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b36b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b36bc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b36c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b36c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B36C4u;
    SET_GPR_U32(ctx, 31, 0x1B36CCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B36C4u, 0x1B36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36CCu;
label_1b36cc:
    // 0x1b36cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b36d0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b36d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b36d4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x1b36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b36d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b36dc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b36e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b36e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36e4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B36E4u;
    SET_GPR_U32(ctx, 31, 0x1B36ECu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B36E4u, 0x1B36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36ECu;
label_1b36ec:
    // 0x1b36ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b36f0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1b36f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b36f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B36F4u;
    {
        const bool branch_taken_0x1b36f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36f4) {
            ctx->pc = 0x1B371Cu;
            goto label_1b371c;
        }
    }
    ctx->pc = 0x1B36FCu;
    // 0x1b36fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b36fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b3700: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3704: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b370c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B370Cu;
    SET_GPR_U32(ctx, 31, 0x1B3714u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B370Cu, 0x1B3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3714u;
label_1b3714:
    // 0x1b3714: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3718: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x1b3718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b371c:
    // 0x1b371c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b371cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b3720:
    // 0x1b3720: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1b3720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b3724: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B3724u;
    {
        const bool branch_taken_0x1b3724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3724) {
            ctx->pc = 0x1B3678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3678;
        }
    }
    ctx->pc = 0x1B372Cu;
    // 0x1b372c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3730: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3734: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3738: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3738u;
    SET_GPR_U32(ctx, 31, 0x1B3740u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3738u, 0x1B3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3740u;
label_1b3740:
    // 0x1b3740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3744: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b3748: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b374c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B374Cu;
    {
        const bool branch_taken_0x1b374c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b374c) {
            ctx->pc = 0x1B3768u;
            goto label_1b3768;
        }
    }
    ctx->pc = 0x1B3754u;
    // 0x1b3754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3758: 0x0  nop
    ctx->pc = 0x1b3758u;
    // NOP
    // 0x1b375c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b375cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3760u;
    {
        const bool branch_taken_0x1b3760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3760) {
            ctx->pc = 0x1B3784u;
            goto label_1b3784;
        }
    }
    ctx->pc = 0x1B3768u;
label_1b3768:
    // 0x1b3768: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b376c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b3770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b3770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3778: 0x0  nop
    ctx->pc = 0x1b3778u;
    // NOP
    // 0x1b377c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b377cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3780: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b3780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b3784:
    // 0x1b3784: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b3784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b3788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b378c: 0x0  nop
    ctx->pc = 0x1b378cu;
    // NOP
    // 0x1b3790: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1b3790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3794: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b3798: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b3798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b379c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B379Cu;
    {
        const bool branch_taken_0x1b379c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b379c) {
            ctx->pc = 0x1B37B8u;
            goto label_1b37b8;
        }
    }
    ctx->pc = 0x1B37A4u;
    // 0x1b37a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b37a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b37a8: 0x0  nop
    ctx->pc = 0x1b37a8u;
    // NOP
    // 0x1b37ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b37acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b37b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B37B0u;
    {
        const bool branch_taken_0x1b37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37b0) {
            ctx->pc = 0x1B37D4u;
            goto label_1b37d4;
        }
    }
    ctx->pc = 0x1B37B8u;
label_1b37b8:
    // 0x1b37b8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b37bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b37bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b37c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b37c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b37c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b37c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b37c8: 0x0  nop
    ctx->pc = 0x1b37c8u;
    // NOP
    // 0x1b37cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b37ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b37d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b37d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b37d4:
    // 0x1b37d4: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1b37d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b37d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b37dc: 0x0  nop
    ctx->pc = 0x1b37dcu;
    // NOP
    // 0x1b37e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b37e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b37e4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1b37e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b37e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b37ec: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b37ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b37f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b37f4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b37f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b37f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b37fc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B37FCu;
    SET_GPR_U32(ctx, 31, 0x1B3804u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B37FCu, 0x1B3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3804u;
label_1b3804:
    // 0x1b3804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3808: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b3808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b380c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3810: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3814: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3818: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3818u;
    SET_GPR_U32(ctx, 31, 0x1B3820u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3818u, 0x1B3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3820u;
label_1b3820:
    // 0x1b3820: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3824: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b3828: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b382c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B382Cu;
    {
        const bool branch_taken_0x1b382c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b382c) {
            ctx->pc = 0x1B3848u;
            goto label_1b3848;
        }
    }
    ctx->pc = 0x1B3834u;
    // 0x1b3834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3838: 0x0  nop
    ctx->pc = 0x1b3838u;
    // NOP
    // 0x1b383c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b383cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3840: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3840u;
    {
        const bool branch_taken_0x1b3840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3840) {
            ctx->pc = 0x1B3864u;
            goto label_1b3864;
        }
    }
    ctx->pc = 0x1B3848u;
label_1b3848:
    // 0x1b3848: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b3848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b384c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b3850: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3858: 0x0  nop
    ctx->pc = 0x1b3858u;
    // NOP
    // 0x1b385c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b385cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3860: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b3860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b3864:
    // 0x1b3864: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b3868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b386c: 0x0  nop
    ctx->pc = 0x1b386cu;
    // NOP
    // 0x1b3870: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1b3870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3874: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b3874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b3878: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b387c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B387Cu;
    {
        const bool branch_taken_0x1b387c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b387c) {
            ctx->pc = 0x1B3898u;
            goto label_1b3898;
        }
    }
    ctx->pc = 0x1B3884u;
    // 0x1b3884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3888: 0x0  nop
    ctx->pc = 0x1b3888u;
    // NOP
    // 0x1b388c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b388cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3890u;
    {
        const bool branch_taken_0x1b3890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3890) {
            ctx->pc = 0x1B38B4u;
            goto label_1b38b4;
        }
    }
    ctx->pc = 0x1B3898u;
label_1b3898:
    // 0x1b3898: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b389c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b38a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b38a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b38a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b38a8: 0x0  nop
    ctx->pc = 0x1b38a8u;
    // NOP
    // 0x1b38ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b38acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b38b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b38b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b38b4:
    // 0x1b38b4: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1b38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1b38b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b38b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b38bc: 0x0  nop
    ctx->pc = 0x1b38bcu;
    // NOP
    // 0x1b38c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b38c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b38c4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1b38c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b38c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b38c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b38cc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b38ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b38d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b38d4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b38d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b38d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b38dc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B38DCu;
    SET_GPR_U32(ctx, 31, 0x1B38E4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B38DCu, 0x1B38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38E4u;
label_1b38e4:
    // 0x1b38e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b38e8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b38e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b38ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b38f0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b38f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b38f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38f8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B38F8u;
    SET_GPR_U32(ctx, 31, 0x1B3900u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B38F8u, 0x1B3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3900u;
label_1b3900:
    // 0x1b3900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3904: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3908: 0xc4416e30  lwc1        $f1, 0x6E30($v0)
    ctx->pc = 0x1b3908u;
    { uint32_t bits = FAST_READ32(0x4E6E30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b390c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3910: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3910u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3914: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3918: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b391c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3920: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3920u;
    SET_GPR_U32(ctx, 31, 0x1B3928u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3920u, 0x1B3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3928u;
label_1b3928:
    // 0x1b3928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b392c: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1b392cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b3930: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3934: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b393c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B393Cu;
    SET_GPR_U32(ctx, 31, 0x1B3944u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B393Cu, 0x1B3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3944u;
label_1b3944:
    // 0x1b3944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3948: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b394c: 0xc4416e40  lwc1        $f1, 0x6E40($v0)
    ctx->pc = 0x1b394cu;
    { uint32_t bits = FAST_READ32(0x4E6E40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3950: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3954: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3954u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3958: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b395c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3964: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3964u;
    SET_GPR_U32(ctx, 31, 0x1B396Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3964u, 0x1B396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B396Cu;
label_1b396c:
    // 0x1b396c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3970: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x1b3970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b3974: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3978: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b397c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3980: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3980u;
    SET_GPR_U32(ctx, 31, 0x1B3988u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3980u, 0x1B3988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3988u;
label_1b3988:
    // 0x1b3988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b398c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3990: 0xc4416e34  lwc1        $f1, 0x6E34($v0)
    ctx->pc = 0x1b3990u;
    { uint32_t bits = FAST_READ32(0x4E6E34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3994: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3998: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3998u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b399c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b39a0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b39a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b39a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b39a8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B39A8u;
    SET_GPR_U32(ctx, 31, 0x1B39B0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B39A8u, 0x1B39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39B0u;
label_1b39b0:
    // 0x1b39b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39b4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1b39b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b39b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b39bc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b39c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b39c4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B39C4u;
    SET_GPR_U32(ctx, 31, 0x1B39CCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B39C4u, 0x1B39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39CCu;
label_1b39cc:
    // 0x1b39cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39d0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b39d4: 0xc4416e44  lwc1        $f1, 0x6E44($v0)
    ctx->pc = 0x1b39d4u;
    { uint32_t bits = FAST_READ32(0x4E6E44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b39d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b39dc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b39dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b39e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b39e4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b39e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b39ec: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B39ECu;
    SET_GPR_U32(ctx, 31, 0x1B39F4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B39ECu, 0x1B39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39F4u;
label_1b39f4:
    // 0x1b39f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39f8: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x1b39f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b39fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a00: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3a04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3a08: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3A08u;
    SET_GPR_U32(ctx, 31, 0x1B3A10u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3A08u, 0x1B3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A10u;
label_1b3a10:
    // 0x1b3a10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3a14: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3a18: 0xc4416e38  lwc1        $f1, 0x6E38($v0)
    ctx->pc = 0x1b3a18u;
    { uint32_t bits = FAST_READ32(0x4E6E38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3a1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3a20: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3a20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3a24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a28: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3a30: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3A30u;
    SET_GPR_U32(ctx, 31, 0x1B3A38u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3A30u, 0x1B3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A38u;
label_1b3a38:
    // 0x1b3a38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3a3c: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1b3a3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b3a40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a44: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3a4c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A54u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3A4Cu, 0x1B3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A54u;
label_1b3a54:
    // 0x1b3a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3a58: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3a5c: 0xc4416e48  lwc1        $f1, 0x6E48($v0)
    ctx->pc = 0x1b3a5cu;
    { uint32_t bits = FAST_READ32(0x4E6E48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3a60: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3a64: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3a64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3a68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a6c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3a70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3a74: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3A74u;
    SET_GPR_U32(ctx, 31, 0x1B3A7Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3A74u, 0x1B3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A7Cu;
label_1b3a7c:
    // 0x1b3a7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3a80: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x1b3a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b3a84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a88: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3a8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3a90: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3A90u;
    SET_GPR_U32(ctx, 31, 0x1B3A98u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3A90u, 0x1B3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A98u;
label_1b3a98:
    // 0x1b3a98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3a9c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3aa0: 0xc4416e3c  lwc1        $f1, 0x6E3C($v0)
    ctx->pc = 0x1b3aa0u;
    { uint32_t bits = FAST_READ32(0x4E6E3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3aa4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3aa8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3aa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3aac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3ab0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3ab4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3ab8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3AB8u;
    SET_GPR_U32(ctx, 31, 0x1B3AC0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3AB8u, 0x1B3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AC0u;
label_1b3ac0:
    // 0x1b3ac0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ac4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1b3ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b3ac8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3acc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3ad0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3ad4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3AD4u;
    SET_GPR_U32(ctx, 31, 0x1B3ADCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3AD4u, 0x1B3ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ADCu;
label_1b3adc:
    // 0x1b3adc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ae0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b3ae4: 0xc4416e4c  lwc1        $f1, 0x6E4C($v0)
    ctx->pc = 0x1b3ae4u;
    { uint32_t bits = FAST_READ32(0x4E6E4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ae8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1b3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3aec: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b3aecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3af0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3af4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b3af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b3af8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1b3af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b00: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B3B00u;
    SET_GPR_U32(ctx, 31, 0x1B3B08u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B3B00u, 0x1B3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B08u;
label_1b3b08:
    // 0x1b3b08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b0c: 0xe4940014  swc1        $f20, 0x14($a0)
    ctx->pc = 0x1b3b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1b3b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b3b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3b14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b3b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3b18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3b1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b3b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3b20: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B2Cu;
    // 0x1b3b2c: 0x0  nop
    ctx->pc = 0x1b3b2cu;
    // NOP
    ctx->pc = 0x1b3b30u;
}
